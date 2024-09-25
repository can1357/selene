#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_STACK_FRAME.ModuleId", module_id, 0x0, 0x20, true, 0x96e1a0c264fbcaa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SK_CRASH_STACK_FRAME.Rva", rva, 0x20, 0x20, true, 0x6b4bfec58989bda2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SK_CRASH_STACK_FRAME.Pc", pc, 0x0, 0x40, true, 0x79ba73326d27c22)
#else
#define _m00
#define _m01
#define _m02
#endif