#include "StdInc.h"

void PatchIW3();
void Auth_VerifyIdentity();

void Sys_RunInit()
{
	DetermineGameFlags();
	//Auth_VerifyIdentity();
	PatchIW3();
}

void PatchIW3_Misc();
void PatchIW3_VA();

void PatchIW3()
{
	PatchIW3_Misc();
	PatchIW3_VA();
}

#define DPMASTER "cod4master.activision.com"

void PatchIW3_Misc()
{
	// master server
	*(DWORD*)0x47188C = (DWORD)DPMASTER;
	*(DWORD*)0x5337FD = (DWORD)DPMASTER;

	// server cache rename
	*(DWORD*)0x4764D9 = (DWORD)"ServerCacheData.dat";
	*(DWORD*)0x476545 = (DWORD)"ServerCacheData.dat";

	// build tag in UI code
	*(DWORD*)0x5434BC = (DWORD)"IW3M r1";

	// console '%s: %s> ' string
	//*(DWORD*)0x5A44B4 = (DWORD)(VERSIONSTRING "> ");

	// version string
	//*(DWORD*)0x4FF1E0 = (DWORD)(VERSIONSTRING " (built " __DATE__ " " __TIME__ ")\n");
}