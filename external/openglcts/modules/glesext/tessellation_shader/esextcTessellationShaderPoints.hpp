#ifndef _ESEXTCTESSELLATIONSHADERPOINTS_HPP
#define _ESEXTCTESSELLATIONSHADERPOINTS_HPP
/*-------------------------------------------------------------------------
 * OpenGL Conformance Test Suite
 * -----------------------------
 *
 * Copyright (c) 2014-2016 The Khronos Group Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *
 *//*!
 * \file
 * \brief
 *//*--------------------------------------------------------------------*/

#include "../esextcTestCaseBase.hpp"
#include "esextcTessellationShaderUtils.hpp"
#include "gluShaderUtil.hpp"
#include "tcuDefs.hpp"

namespace glcts
{

/** A DEQP CTS test group that collects all tests that verify triangle
 *  tessellation.
 */
class TessellationShaderPointsTests : public glcts::TestCaseGroupBase
{
public:
	/* Public methods */
	TessellationShaderPointsTests(glcts::Context& context, const ExtParameters& extParams);
	virtual ~TessellationShaderPointsTests(void)
	{
	}

	virtual void init(void);

private:
	/* Private methods */
	TessellationShaderPointsTests(const TessellationShaderPointsTests& other);
	TessellationShaderPointsTests& operator=(const TessellationShaderPointsTests& other);
};

/** Implementation of Test Case 39
 *
 *  Assuming the implementation reports maximum point size to be at least 2,
 *  make sure that points are rendered with size as defined by:
 *
 *  * geometry shader (if present); (*)
 *  * tessellation evaluation shader (if GL_EXT_tessellation_shader and
 *    GL_EXT_tessellation_shader_point_size extensions are supported and no
 *    geometry shader is active); (**)
 *
 *  Technical details.
 *
 *  0. The test should draw points in a few pre-defined locations (screen corners,
 *     center of the draw buffer).
 *  1a. For case (*), vertex shader should set point size to 0.01, TE should
 *      set point size to 0.1 and GE should set point size to 2 for each
 *      vertex processed.
 *  1b. For case (**), TE should set the point size to 2 and VE should set it
 *      to 0.1.
 *  2.  The test passes if centers of the rendered points have correct values.
 *
 **/
class TessellationShaderPointsgl_PointSize : public TestCaseBase
{
public:
	/* Public methods */
	TessellationShaderPointsgl_PointSize(Context& context, const ExtParameters& extParams);

	virtual ~TessellationShaderPointsgl_PointSize(void)
	{
	}

	virtual void		  deinit();
	void				  initTest(void);
	virtual IterateResult iterate(void);

private:
	/* Private type definitions */
	typedef struct _test_descriptor
	{
		const char* fs_body;
		const char* gs_body;
		const char* tes_body;
		const char* tcs_body;
		const char* vs_body;

		glw::GLint fs_id;
		glw::GLint gs_id;
		glw::GLint tes_id;
		glw::GLint tcs_id;
		glw::GLint vs_id;

		glw::GLint draw_call_count;
		glw::GLint po_id;

		_test_descriptor()
		{
			fs_body  = NULL;
			gs_body  = NULL;
			tes_body = NULL;
			tcs_body = NULL;
			vs_body  = NULL;

			fs_id  = 0;
			gs_id  = 0;
			tes_id = 0;
			tcs_id = 0;
			vs_id  = 0;

			draw_call_count = 0;
			po_id			= 0;
		}
	} _test_descriptor;

	typedef std::vector<_test_descriptor> _tests;
	typedef _tests::iterator			  _tests_iterator;

	/* Private methods */

	/* Private variables */
	_tests m_tests;

	glw::GLuint m_fbo_id;
	glw::GLuint m_to_id;
	glw::GLuint m_vao_id;

	static const unsigned int m_rt_height;
	static const unsigned int m_rt_width;
};

/** Implementation of Test Case 27
 *
 *  Make sure that point mode enabled in a tessellation evaluation shader
 *  affects geometry generated by tessellation primitive generator. Iterate
 *  over all vertex spacing modes.
 *  Cover all three tessellation primitive generator modes (triangles, quads,
 *  isolines).
 *
 *  Technical details:
 *
 *  0. Consider the following set: {-1 (where valid), 1, MAX_TESS_GEN_LEVEL_EXT / 2,
 *     MAX_TESS_GEN_LEVEL_EXT}. All combinations of values from this set
 *     in regard to relevant inner/outer tessellation levels for all
 *     primitive generator modes should be checked by this test.
 *
 *  1. TE should capture output points. Captured vertices should not
 *     duplicate and their amount should be exactly as defined in the spec
 *     for the (inner tessellation level, outer tessellation level, output
 *     geometry) combination considered.
 *
 *  This test implementation skips configurations meeting all of the following
 *  properties:
 *
 *  - primitive mode:      QUADS or TRIANGLES
 *  - vertex spacing mode: FRACTIONAL ODD
 *  - inner tess level[0]: <= 1
 *  - inner tess level[1]: <= 1
 *
 *  These configurations are affected by a nuance described in greater
 *  detail in Khronos Bugzilla#11979, which this test cannot handle.
 *
 **/
class TessellationShaderPointsVerification : public TestCaseBase
{
public:
	/* Public methods */
	TessellationShaderPointsVerification(Context& context, const ExtParameters& extParams);

	virtual ~TessellationShaderPointsVerification(void)
	{
	}

	virtual void		  deinit(void);
	void				  initTest(void);
	virtual IterateResult iterate(void);

private:
	/* Private declarations */
	typedef struct _run
	{
		float								inner[2];
		float								outer[4];
		_tessellation_primitive_mode		primitive_mode;
		_tessellation_shader_vertex_spacing vertex_spacing;

		_run()
		{
			memset(inner, 0, sizeof(inner));
			memset(outer, 0, sizeof(outer));

			primitive_mode = TESSELLATION_SHADER_PRIMITIVE_MODE_UNKNOWN;
			vertex_spacing = TESSELLATION_SHADER_VERTEX_SPACING_UNKNOWN;
		}
	} _run;

	/* Private methods */
	void verifyCorrectAmountOfDuplicateVertices(const _run& run, const void* run_data, unsigned int run_n_vertices);

	void verifyCorrectAmountOfVertices(const _run& run, const void* run_data, unsigned int run_n_vertices);

	/* Private variables */
	std::vector<_run>		 m_runs;
	TessellationShaderUtils* m_utils;
	glw::GLuint				 m_vao_id;
};

} // namespace glcts

#endif // _ESEXTCTESSELLATIONSHADERPOINTS_HPP
