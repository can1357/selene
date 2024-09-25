#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wfinddata32_t.attrib", attrib, 0x0, 0x20, true, 0x41e3bd2dc3432faf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wfinddata32_t.time_create", time_create, 0x20, 0x20, true, 0xb0db6f647059db0b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wfinddata32_t.time_access", time_access, 0x40, 0x20, true, 0x158a522faa1946fd)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wfinddata32_t.time_write", time_write, 0x60, 0x20, true, 0x7ffad7e398218391)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wfinddata32_t.size", size, 0x80, 0x20, true, 0x53116fc14bc7e41f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_wfinddata32_t.name", name, 0xa0, 0x40, true, 0x3f8bb71edbd0252e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif