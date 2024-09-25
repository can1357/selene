#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_record64_t), "_DBGKM_EXCEPTION64.ExceptionRecord", exception_record, 0x0, 0xc0, true, 0x7e384a5dd418dca6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_EXCEPTION64.FirstChance", first_chance, 0x4c0, 0x20, true, 0xd199fc49346ab509)
#else
#define _m00
#define _m01
#endif