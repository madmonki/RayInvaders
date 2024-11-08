////////////////////////////////////////////////////////////////////////////////////////
//                                                                                    //
// ImageAsCode exporter v1.0 - Image pixel data exported as an array of bytes         //
//                                                                                    //
// more info and bugs-report:  github.com/raysan5/raylib                              //
// feedback and support:       ray[at]raylib.com                                      //
//                                                                                    //
// Copyright (c) 2018-2024 Ramon Santamaria (@raysan5)                                //
//                                                                                    //
////////////////////////////////////////////////////////////////////////////////////////

#pragma once

// Image data information
#define ALIEN3_TEXTURE_WIDTH    41
#define ALIEN3_TEXTURE_HEIGHT   40
#define ALIEN3_TEXTURE_FORMAT   7          // raylib internal pixel format

static unsigned char ALIEN3_TEXTURE_DATA[6560] = { 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xf3,
0xd8, 0x3f, 0x0, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff,
0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xff, 0xff, 0xff, 0x0, 0xf3,
0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff, 0xf3, 0xd8, 0x3f, 0xff };
