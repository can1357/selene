#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wfinddata32i64_t.attrib", attrib, 0x0, 0x20, true, 0xf326bf5670e4c338)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wfinddata32i64_t.time_create", time_create, 0x20, 0x20, true, 0x91f261c99c9d3937)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wfinddata32i64_t.time_access", time_access, 0x40, 0x20, true, 0xd4d8cf5c95ec42d8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_wfinddata32i64_t.time_write", time_write, 0x60, 0x20, true, 0x2b73e2bf7e4d913e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata32i64_t.size", size, 0x80, 0x40, true, 0x2f6288e974801b90)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_wfinddata32i64_t.name", name, 0xc0, 0x40, true, 0xadb0456e60afb03f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif