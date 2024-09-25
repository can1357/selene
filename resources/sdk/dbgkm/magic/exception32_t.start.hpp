#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::exception_record32_t), "_DBGKM_EXCEPTION32.ExceptionRecord", exception_record, 0x0, 0x80, true, 0x486eecb0593c1a1f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_EXCEPTION32.FirstChance", first_chance, 0x280, 0x20, true, 0x6f911299c231ea2b)
#else
#define _m00
#define _m01
#endif