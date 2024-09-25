#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_ACTRL_PROPERTY_ENTRYW.lpProperty", lp_property, 0x0, 0x40, true, 0x6a75a40656783fd5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::actrl_access_entry_listw_t*), "_ACTRL_PROPERTY_ENTRYW.pAccessEntryList", p_access_entry_list, 0x40, 0x40, true, 0x372abd90e61f717b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_PROPERTY_ENTRYW.fListFlags", f_list_flags, 0x80, 0x20, true, 0xf3a8400e7be3b2cc)
#else
#define _m00
#define _m01
#define _m02
#endif