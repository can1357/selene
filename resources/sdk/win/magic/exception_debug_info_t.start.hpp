#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t), "_EXCEPTION_DEBUG_INFO.ExceptionRecord", exception_record, 0x0, 0xc0, true, 0xd9a93697b9b25146)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_EXCEPTION_DEBUG_INFO.dwFirstChance", dw_first_chance, 0x4c0, 0x20, true, 0xbcfc385b15a8486c)
#else
#define _m00
#define _m01
#endif