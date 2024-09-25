#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACTRL_ALISTW.cEntries", c_entries, 0x0, 0x20, true, 0x3545d244d076d8d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::actrl_property_entryw_t*), "_ACTRL_ALISTW.pPropertyAccessList", p_property_access_list, 0x40, 0x40, true, 0x40e163849ec78d63)
#else
#define _m00
#define _m01
#endif