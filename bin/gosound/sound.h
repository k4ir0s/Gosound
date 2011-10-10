#ifndef _SOUND_H_
#define _SOUND_H_

class	sound_mgr
{
public:
	sound_mgr();
	~sound_mgr();

private:
	FMOD_SYSTEM		*sys;
	FMOD_SOUND		*sound;
	FMOD_CHANNEL	*channel;
};

#endif //_SOUND_H_