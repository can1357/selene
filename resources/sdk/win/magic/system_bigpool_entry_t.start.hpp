#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_BIGPOOL_ENTRY.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x750998403a9efc21)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SYSTEM_BIGPOOL_ENTRY.NonPaged", non_paged, 0x0, 0x1, true, 0xb8829d7720f01cfd, 1, uint64_t)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_BIGPOOL_ENTRY.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0x6bc0a1fb042d29be)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_SYSTEM_BIGPOOL_ENTRY.Tag", tag, 0x80, 0x20, true, 0xdaa6d95d6c40c516)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_BIGPOOL_ENTRY.TagUlong", tag_ulong, 0x80, 0x20, true, 0xe7f0bf5adf4abbc5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif