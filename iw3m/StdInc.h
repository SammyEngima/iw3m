#pragma once

#define VERSIONSTRING "iLabsIW3:1.0-10"

// ---------------------------------------------------------
#define _CRT_SECURE_NO_WARNINGS

#define WIN32_LEAN_AND_MEAN		
#include <windows.h>
#include "d3d9.h"
#include "myIDirect3D9.h"
#include "myIDirect3DDevice9.h"
#include "myIDirect3DSwapChain9.h"

#include <iostream>
#include <string>
#include <time.h>
#include <io.h>

#include "IW3.h"
#include "Utils.h"
#include "Hooking.h"

void Main_UnprotectModule(HMODULE hMod);

#define MASTERSERVERIP 0x157C923F

void Sys_RunInit();
void PatchCoD4();