#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum dxgk::wddmversion_t), "_DXGK_WDDMDEVICECAPS.WDDMVersion", wddm_version, 0x0, 0x20, true, 0xd9103c0bbf6ded0e)
#else
#define _m00
#endif