#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_MEM_RESET_INFO.BaseAddress", base_address, 0x0, 0x40, true, 0x8d87de65191eb752)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_MEM_RESET_INFO.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0xce220002e516947b)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PERFINFO_MEM_RESET_INFO.TypeInfo", type_info, 0x80, 0x2, true, 0xe877d830256ef5a9, 2, uint32_t)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_MEM_RESET_INFO.Flags", flags, 0x80, 0x20, true, 0x2dfd380572d39707)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif