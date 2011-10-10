#include "gosound.h"
#include "fmod.hpp"
#include "fmod_errors.h"
#include "sound.h"

sound_mgr::sound_mgr()
{
	FMOD_System_Create(&sys);
	FMOD_System_Init(sys, 16, FMOD_INIT_NORMAL, NULL);
}

sound_mgr::~sound_mgr()
{
	FMOD_System_Release(sys);
}