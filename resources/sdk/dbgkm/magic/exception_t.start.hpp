#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::exception_record_t), "_DBGKM_EXCEPTION.ExceptionRecord", exception_record, 0x0, 0xc0, true, 0xef9c1f961b9e27c4)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DBGKM_EXCEPTION.FirstChance", first_chance, 0x4c0, 0x20, true, 0x88256ec1b8573926)
#else
#define _m00
#define _m01
#endif