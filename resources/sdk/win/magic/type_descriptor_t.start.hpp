#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const void*), "_TypeDescriptor.pVFTable", p_vf_table, 0x0, 0x40, true, 0x55e9d62d9a0cbb1e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char>), "_TypeDescriptor.name", name, 0x80, 0x0, true, 0x8a7c2e8067cee70a)
#else
#define _m00
#define _m01
#endif