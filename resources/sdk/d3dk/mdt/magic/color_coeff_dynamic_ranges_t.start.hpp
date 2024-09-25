#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES.FirstChannel", first_channel, 0x0, 0x20, true, 0x494a757ba8c3da60)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES.SecondChannel", second_channel, 0x20, 0x20, true, 0x71532bf24789c7c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES.ThirdChannel", third_channel, 0x40, 0x20, true, 0x33a04892872d18f)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_COLOR_COEFF_DYNAMIC_RANGES.FourthChannel", fourth_channel, 0x60, 0x20, true, 0x63d35fdd9100d2ea)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif