#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_wfinddata64_t.attrib", attrib, 0x0, 0x20, true, 0x25556d3f3683fafa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64_t.time_create", time_create, 0x40, 0x40, true, 0xf5f98e3ef82d6b57)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64_t.time_access", time_access, 0x80, 0x40, true, 0x5ffe46b66cfe2d9c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64_t.time_write", time_write, 0xc0, 0x40, true, 0x3647320518dba804)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_wfinddata64_t.size", size, 0x100, 0x40, true, 0x76765e36f9ec7395)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_wfinddata64_t.name", name, 0x140, 0x40, true, 0xfc0e2e148dc85451)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif