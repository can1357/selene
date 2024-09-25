#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_PROTECTION_LEVEL_PARAMETERS.ulProtectionType", ul_protection_type, 0x0, 0x20, true, 0xd606b1b2b76cff)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKMDT_OPM_SET_PROTECTION_LEVEL_PARAMETERS.ulProtectionLevel", ul_protection_level, 0x20, 0x20, true, 0xa7ffc61d3e7cf58f)
#else
#define _m00
#define _m01
#endif