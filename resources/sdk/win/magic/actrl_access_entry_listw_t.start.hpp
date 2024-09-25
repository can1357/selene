#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_ACCESS_ENTRY_LISTW.cEntries", c_entries, 0x0, 0x20, true, 0xc53c991864a6287c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::actrl_access_entryw_t*), "_ACTRL_ACCESS_ENTRY_LISTW.pAccessList", p_access_list, 0x40, 0x40, true, 0xdda1b60b5b02ee76)
#else
#define _m00
#define _m01
#endif