#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wfinddata64i32_t.attrib", attrib, 0x0, 0x20, true, 0xb94fa461e21be1d3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64i32_t.time_create", time_create, 0x40, 0x40, true, 0x297e84e765ea9734)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64i32_t.time_access", time_access, 0x80, 0x40, true, 0x333da8922b67db4e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64i32_t.time_write", time_write, 0xc0, 0x40, true, 0xae0cc7afbf2270b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wfinddata64i32_t.size", size, 0x100, 0x20, true, 0x5c8098430de9e02a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_wfinddata64i32_t.name", name, 0x120, 0x40, true, 0xf3a6912a54edebb5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif