#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_2DREGION.cx", cx, 0x0, 0x20, true, 0xcec28e03c7d567ba)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "DISPLAYCONFIG_2DREGION.cy", cy, 0x20, 0x20, true, 0xbae579ff91839c0f)
#else
#define _m00
#define _m01
#endif