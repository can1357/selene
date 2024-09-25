#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_MI_DEFERRED_PFNS_TO_FREE.ListHead", list_head, 0x0, 0x0, false, 0x7789102c26725fd2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_DEFERRED_PFNS_TO_FREE.NumberOfPages", number_of_pages, 0x0, 0x0, false, 0x45774db22e8c20c8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_DEFERRED_PFNS_TO_FREE.TbFlushStamp", tb_flush_stamp, 0x0, 0x0, false, 0x1979600e45915f71)
#else
#define _m00
#define _m01
#define _m02
#endif