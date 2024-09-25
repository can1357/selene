#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMDT_PALETTEDATA.Red", red, 0x0, 0x8, true, 0x6c811d75ac5efa14)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMDT_PALETTEDATA.Green", green, 0x8, 0x8, true, 0xad1e7068ce716c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMDT_PALETTEDATA.Blue", blue, 0x10, 0x8, true, 0x281df75d5782889f)
#else
#define _m00
#define _m01
#define _m02
#endif