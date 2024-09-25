#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SPECIAL_POOL_INFORMATION.PoolTag", pool_tag, 0x0, 0x20, true, 0xb29f8a10c97486af)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_SPECIAL_POOL_INFORMATION.Flags", flags, 0x20, 0x20, true, 0xf39200a4df11d509)
#else
#define _m00
#define _m01
#endif