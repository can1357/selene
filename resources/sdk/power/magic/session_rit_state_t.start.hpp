#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_POWER_SESSION_RIT_STATE.Active", active, 0x0, 0x8, true, 0xa66361f5f6dcd6ba)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint64_t), "_POWER_SESSION_RIT_STATE.LastInputTime", last_input_time, 0x20, 0x20, true, 0xeeefc96a8a2851bd, 0, uint32_t,uint64_t)
#else
#define _m00
#define _m01
#endif