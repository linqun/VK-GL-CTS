#ifndef _ESEXTCTEXTURECUBEMAPARRAYSAMPLINGRESOURCES_HPP
#define _ESEXTCTEXTURECUBEMAPARRAYSAMPLINGRESOURCES_HPP
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

#include "glwDefs.hpp"

struct compressedImage
{
	unsigned int			  width;
	unsigned int			  height;
	unsigned int			  length;
	unsigned int			  level;
	unsigned int			  image_size;
	const glw::GLubyte* const image_data;
};

// Image 8x8x2
// Level 0
static const unsigned char compressed_image_data_8x8x2l0[] = {
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68,
	0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00,
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00,
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00,
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
	0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02,
	0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x09,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00,
	0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88,
	0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82,
	0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff,
	0xff, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00
}; // Level 0
// Level 1
static const unsigned char compressed_image_data_8x8x2l1[] = {
	0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x26, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0xff, 0xff, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x05, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10,
	0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x27,
	0xff, 0xff, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x94, 0x06, 0x8b, 0x14, 0x28,
	0xa2, 0x85, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x26, 0x00, 0x00, 0x00, 0x00,
	0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0xff, 0xff, 0x00, 0x00, 0x17, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0xff, 0xff
}; // Level 1
// Level 2
static const unsigned char compressed_image_data_8x8x2l2[] = {
	0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x27, 0x00, 0x00, 0xff, 0xff, 0x1a, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x8e, 0x9c, 0x07, 0x8f, 0x1c, 0x38, 0xe3, 0x87, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x26, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x58,
	0x58, 0x93, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x02,
	0xff, 0xff, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0x00, 0x00,
	0xff, 0xff, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, 0x00,
	0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00
}; // Level 2
// Level 3
static const unsigned char compressed_image_data_8x8x2l3[] = {
	0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0x04, 0x91, 0x12, 0xff, 0xff, 0x00, 0x00, 0x26, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x26, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x02, 0xff, 0xff, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x94, 0xa8, 0x0d, 0x16, 0x28, 0x51, 0x45, 0x0a, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0x20, 0x20, 0x02, 0x00, 0x00, 0xff, 0xff, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x6f, 0x00, 0x00, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0xac, 0x0d, 0x97, 0x2c, 0x59,
	0x65, 0x8b, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x15, 0x99, 0x92, 0x00, 0x00, 0xff, 0xff,
	0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x26, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x02, 0xff, 0xff, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x98, 0xb0, 0x0e, 0x1a, 0x30, 0x61, 0x86, 0x0c
}; // Level 3
// Image 8x8x2
// Image 13x13x2
// Level 0
static const unsigned char compressed_image_data_13x13x2l0[] = {
	0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68,
	0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb,
	0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff,
	0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68,
	0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff,
	0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x68, 0x68, 0x68, 0xdb, 0xff, 0xff, 0xff, 0xff, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
	0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x00, 0x03,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04,
	0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00,
	0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00,
	0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80,
	0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a,
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00,
	0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x80, 0x04, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04,
	0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08,
	0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84,
	0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04,
	0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81,
	0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82,
	0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83,
	0x04, 0x08, 0x20, 0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20,
	0x81, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x82, 0x84, 0x04, 0x83, 0x04, 0x08, 0x20, 0x81, 0x05, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00,
	0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00,
	0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00,
	0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x26, 0x00, 0x00, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02,
	0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00,
	0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08,
	0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff,
	0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
	0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff,
	0xff, 0x00, 0x00, 0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00,
	0x06, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
	0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b,
	0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00,
	0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10,
	0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff,
	0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x07, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10,
	0x10, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
	0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02,
	0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff,
	0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x02, 0x00, 0x00, 0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00,
	0xff, 0xff, 0x08, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x08,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0xff, 0xff, 0x09, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00,
	0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00,
	0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b,
	0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00,
	0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x4b, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00,
	0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08,
	0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00,
	0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00,
	0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
	0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00,
	0x00, 0x0a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88,
	0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00,
	0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14,
	0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00,
	0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff,
	0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88,
	0x14, 0x88, 0x82, 0x00, 0x00, 0xff, 0xff, 0x0b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82,
	0x00, 0x00, 0xff, 0xff, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00,
	0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11,
	0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff,
	0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11,
	0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff,
	0xff, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00,
	0x0c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00, 0x0c, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x11, 0x11, 0x11, 0x24, 0xff, 0xff, 0x00, 0x00
}; // Level 0
// Level 1
static const unsigned char compressed_image_data_13x13x2l1[] = {
	0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x26, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x26, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x08, 0x08, 0x08, 0x26, 0x00, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08,
	0x08, 0x08, 0x26, 0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02,
	0xff, 0xff, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0xff, 0xff, 0x00,
	0x00, 0x0e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0xff, 0xff, 0x00, 0x00, 0x0e, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x4b, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18,
	0x4b, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x4b, 0xff, 0xff,
	0x00, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0xff, 0xff, 0x10,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0xff, 0xff, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x08, 0x08, 0x08, 0x02, 0x00, 0x00, 0xff, 0xff, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11,
	0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 0x11, 0x12, 0x00,
	0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00,
	0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x05, 0x11, 0x11, 0x12, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10,
	0x10, 0x10, 0x02, 0x00, 0x00, 0x00, 0x00, 0x12, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x27, 0xff, 0xff, 0x00,
	0x00, 0x13, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x27, 0xff, 0xff, 0x00, 0x00, 0x13, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x27, 0xff, 0xff, 0x00, 0x00, 0x13, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x27, 0xff, 0xff, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x8a, 0x94, 0x06, 0x8b, 0x14, 0x28, 0xa2, 0x85, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x94, 0x06,
	0x8b, 0x14, 0x28, 0xa2, 0x85, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x94, 0x06, 0x8b, 0x14, 0x28,
	0xa2, 0x85, 0x14, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x8a, 0x94, 0x06, 0x8b, 0x14, 0x28, 0xa2, 0x85, 0x15,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x26, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x26, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x10, 0x10, 0x10, 0x26, 0x00, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10,
	0x10, 0x26, 0x00, 0x00, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0xff,
	0xff, 0x00, 0x00, 0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0xff, 0xff, 0x00, 0x00,
	0x16, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0xff, 0xff, 0x00, 0x00, 0x16, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0xff, 0xff, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88,
	0x14, 0x88, 0x82, 0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82,
	0x00, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x88, 0x14, 0x88, 0x82, 0x00, 0x00, 0x00,
	0x00, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0xff, 0xff, 0x18, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0xff, 0xff, 0x18, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x10, 0x10, 0x10, 0x02, 0x00, 0x00, 0xff, 0xff
}; // Level 1
// Level 2
static const unsigned char compressed_image_data_13x13x2l2[] = {
	0x19, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x08, 0x08, 0x08, 0x27, 0x00, 0x00, 0xff, 0xff, 0x1a, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0x00, 0x00, 0x00, 0x00, 0x1b, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x48, 0x48, 0x48, 0xff, 0xff, 0xff, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x8e, 0x9c, 0x07, 0x8f, 0x1c, 0x38, 0xe3, 0x87, 0x1d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x18, 0x18, 0x18, 0x26, 0x00, 0x00, 0x00, 0x00, 0x1e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x58,
	0x58, 0x93, 0xff, 0xff, 0xff, 0xff, 0x1f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x02,
	0xff, 0xff, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x18, 0x18, 0x18, 0x02, 0x00, 0x00,
	0xff, 0xff, 0x21, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdb, 0x00, 0x00, 0x00, 0x00,
	0x22, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x23, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x02, 0x00, 0x00, 0x00, 0x00, 0x24, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x22, 0x22, 0x22, 0x00, 0x00, 0x00, 0x00, 0x00
}; // Level 2
   // Level 3
static const unsigned char compressed_image_data_13x13x2l3[] = {
	0x25, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x91, 0x04, 0x91, 0x12, 0xff, 0xff, 0x00, 0x00, 0x26, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x20, 0x20, 0x20, 0x26, 0x00, 0x00, 0x00, 0x00, 0x27, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x02, 0xff, 0xff, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x94, 0xa8, 0x0d, 0x16, 0x28, 0x51, 0x45, 0x0a, 0x29, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x20, 0x20, 0x20, 0x02, 0x00, 0x00, 0xff, 0xff, 0x2a, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x6f, 0x00, 0x00, 0xff, 0xff, 0x2b, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x02,
	0x00, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0xac, 0x0d, 0x97, 0x2c, 0x59,
	0x65, 0x8b, 0x2d, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x99, 0x15, 0x99, 0x92, 0x00, 0x00, 0xff, 0xff,
	0x2e, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x28, 0x28, 0x28, 0x26, 0x00, 0x00, 0x00, 0x00, 0x2f, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x30, 0x30, 0x30, 0x02, 0xff, 0xff, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x98, 0xb0, 0x0e, 0x1a, 0x30, 0x61, 0x86, 0x0c
}; // Level 3
// Image 13x13x2

const compressedImage compressed_images[] = {
	// Image 8x8x2
	// Level 0
	{
		8,							  // image_width
		8,							  // image_height
		2,							  // number_of_array_elements
		0,							  // mipmap_level
		768,						  // image_size
		compressed_image_data_8x8x2l0 // image_data
	},								  // Level 0
									  // Level 1
	{
		8,							  // image_width
		8,							  // image_height
		2,							  // number_of_array_elements
		1,							  // mipmap_level
		192,						  // image_size
		compressed_image_data_8x8x2l1 // image_data
	},								  // Level 1
									  // Level 2
	{
		8,							  // image_width
		8,							  // image_height
		2,							  // number_of_array_elements
		2,							  // mipmap_level
		192,						  // image_size
		compressed_image_data_8x8x2l2 // image_data
	},								  // Level 2
									  // Level 3
	{
		8,							  // image_width
		8,							  // image_height
		2,							  // number_of_array_elements
		3,							  // mipmap_level
		192,						  // image_size
		compressed_image_data_8x8x2l3 // image_data
	},								  // Level 3
									  // Image 8x8x2
									  // Image 13x13x2
									  // Level 0
	{
		13,								// image_width
		13,								// image_height
		2,								// number_of_array_elements
		0,								// mipmap_level
		3072,							// image_size
		compressed_image_data_13x13x2l0 // image_data
	},									// Level 0
										// Level 1
	{
		13,								// image_width
		13,								// image_height
		2,								// number_of_array_elements
		1,								// mipmap_level
		768,							// image_size
		compressed_image_data_13x13x2l1 // image_data
	},									// Level 1
										// Level 2
	{
		13,								// image_width
		13,								// image_height
		2,								// number_of_array_elements
		2,								// mipmap_level
		192,							// image_size
		compressed_image_data_13x13x2l2 // image_data
	},									// Level 2
										// Level 3
	{
		13,								// image_width
		13,								// image_height
		2,								// number_of_array_elements
		3,								// mipmap_level
		192,							// image_size
		compressed_image_data_13x13x2l3 // image_data
	},									// Level 3
										// Image 13x13x2
};

const unsigned int n_compressed_images = 8;

#endif // _ESEXTCTEXTURECUBEMAPARRAYSAMPLINGRESOURCES_HPP
