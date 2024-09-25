#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMachineNamesHelper._lRefs", l_refs, 0x0, 0x20, true, 0xa87504f0093bbecb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "CMachineNamesHelper._dwNumStrings", dw_num_strings, 0x20, 0x20, true, 0x36041bc7222a5688)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t**), "CMachineNamesHelper._ppszStrings", ppsz_strings, 0x40, 0x40, true, 0xdcc54451f94a5444)
#else
#define _m00
#define _m01
#define _m02
#endif