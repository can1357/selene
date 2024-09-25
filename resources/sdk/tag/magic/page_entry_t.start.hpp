#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tag::page_entry_t*), "tagPageEntry.pNext", p_next, 0x0, 0x40, true, 0x7bc24b6dcc466e80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "tagPageEntry.dwFlag", dw_flag, 0x40, 0x20, true, 0xa5d6a57c38afa920)
#else
#define _m00
#define _m01
#endif