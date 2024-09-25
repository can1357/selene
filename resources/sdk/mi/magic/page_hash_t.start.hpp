#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGE_HASH.HashValue", hash_value, 0x0, 0x0, false, 0xf439fe3ff9848f31)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PAGE_HASH.PageFileOffset", page_file_offset, 0x0, 0x0, false, 0x422be33cac3ea7cf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmpte_t*), "_MI_PAGE_HASH.OwningPte", owning_pte, 0x0, 0x0, false, 0x139bcc31722c3170)
#else
#define _m00
#define _m01
#define _m02
#endif