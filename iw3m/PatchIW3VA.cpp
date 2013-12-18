#include "StdInc.h"

StompHook vaHook;
DWORD vaHookLoc = 0x571E30;

void PatchIW3_VA()
{
	vaHook.initialize(vaHookLoc, va);
	vaHook.installHook();
}