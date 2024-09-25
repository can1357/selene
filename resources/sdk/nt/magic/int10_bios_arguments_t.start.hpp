#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Eax", eax, 0x0, 0x20, true, 0x206e8820992c027e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Ebx", ebx, 0x20, 0x20, true, 0xd730160b60be2133)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Ecx", ecx, 0x40, 0x20, true, 0xba8a49e1649ba1cb)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Edx", edx, 0x60, 0x20, true, 0x18366ea3f8059167)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Esi", esi, 0x80, 0x20, true, 0x33b264d8dd9f9029)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Edi", edi, 0xa0, 0x20, true, 0x80aa89ffbbcc4985)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_INT10_BIOS_ARGUMENTS.Ebp", ebp, 0xc0, 0x20, true, 0x3db0b06360a7279d)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_INT10_BIOS_ARGUMENTS.SegDs", seg_ds, 0xe0, 0x10, true, 0x9698e747de6b8f9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_INT10_BIOS_ARGUMENTS.SegEs", seg_es, 0xf0, 0x10, true, 0xb205708e0a1ad34d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif