#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_ENG_EVENT.pKEvent", p_k_event, 0x0, 0x40, true, 0xfa11d27509632212)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENG_EVENT.fFlags", f_flags, 0x40, 0x20, true, 0x62004b2cfe19539f)
#else
#define _m00
#define _m01
#endif