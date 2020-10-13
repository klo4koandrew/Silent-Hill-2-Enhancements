#pragma once

#include "External\d3d8to9\source\d3d8to9.hpp"

typedef IDirect3D8 *(WINAPI *Direct3DCreate8Proc)(UINT);

void EnableD3d8to9();
Direct3D8 *WINAPI Direct3DCreate8to9(UINT SDKVersion);

extern Direct3DCreate8Proc m_pDirect3DCreate8;
