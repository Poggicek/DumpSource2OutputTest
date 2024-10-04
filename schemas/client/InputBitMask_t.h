enum InputBitMask_t : uint64_t
{
	IN_NONE = 0,
	IN_ALL = -1,
	IN_ATTACK = 1,
	IN_JUMP = 2,
	IN_DUCK = 4,
	IN_FORWARD = 8,
	IN_BACK = 16,
	IN_USE = 32,
	IN_TURNLEFT = 128,
	IN_TURNRIGHT = 256,
	IN_MOVELEFT = 512,
	IN_MOVERIGHT = 1024,
	IN_ATTACK2 = 2048,
	IN_RELOAD = 8192,
	IN_SPEED = 65536,
	IN_JOYAUTOSPRINT = 131072,
	IN_FIRST_MOD_SPECIFIC_BIT = 4294967296,
	IN_USEORRELOAD = 4294967296,
	IN_SCORE = 8589934592,
	IN_ZOOM = 17179869184,
	IN_LOOK_AT_WEAPON = 34359738368,
};
