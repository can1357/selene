#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union mm::page_access_info_flags_t), "_MM_PAGE_ACCESS_INFO.Flags", flags, 0x0, 0x20, true, 0xdca8b6e787b0b185)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MM_PAGE_ACCESS_INFO.FileOffset", file_offset, 0x0, 0x40, true, 0xbf6b3e14fb6a6262)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_PAGE_ACCESS_INFO.VirtualAddress", virtual_address, 0x0, 0x40, true, 0x2d494ecd7672c06c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MM_PAGE_ACCESS_INFO.PointerProtoPte", pointer_proto_pte, 0x0, 0x40, true, 0x94f20aa3bb3fa5b2)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif