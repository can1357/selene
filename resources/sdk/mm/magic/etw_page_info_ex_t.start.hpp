#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mm::etw_page_info_t), "_MM_ETW_PAGE_INFO_EX.PageInfo", page_info, 0x0, 0xc0, true, 0xec0a5a40f86011fc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union mm::etw_page_extra_info_t), "_MM_ETW_PAGE_INFO_EX.Info", info, 0xc0, 0x40, true, 0xffd04f4f2ac63501)
#else
#define _m00
#define _m01
#endif