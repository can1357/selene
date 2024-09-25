#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_EXCEPTION_INFORMATION.AlignmentFixupCount", alignment_fixup_count, 0x0, 0x20, true, 0x845dfe2b568a0787)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_EXCEPTION_INFORMATION.ExceptionDispatchCount", exception_dispatch_count, 0x20, 0x20, true, 0x8723c7748297c9ac)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_EXCEPTION_INFORMATION.FloatingEmulationCount", floating_emulation_count, 0x40, 0x20, true, 0xb8d5b0f5eac7872a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_EXCEPTION_INFORMATION.ByteWordEmulationCount", byte_word_emulation_count, 0x60, 0x20, true, 0xb2f7397b3854dfc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif