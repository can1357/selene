#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::page_entry_t*), "SystemPageEntry.pNext", p_next, 0x0, 0x40, true, 0x448df295e8ef2ff3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SystemPageEntry.dwFlag", dw_flag, 0x40, 0x20, true, 0x1363d15ed2726404)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::system_block_header_t*), "SystemPageEntry.pHeapBlock", p_heap_block, 0x80, 0x40, true, 0x2db33d475dd76246)
#else
#define _m00
#define _m01
#define _m02
#endif