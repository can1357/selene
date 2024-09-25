#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(int2_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.Preference", preference, 0x0, 0x2, true, 0xf8cdcfe239629a0e, 2, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.Rgb", rgb, 0x2, 0x6, true, 0xbfa7fc6029c6b55c, 6, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.YCbCr444", y_cb_cr444, 0x8, 0x6, true, 0xb3bdff97782b64f7, 6, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.YCbCr422", y_cb_cr422, 0xe, 0x6, true, 0xf3457a2cc9ba1537, 6, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.YCbCr420", y_cb_cr420, 0x14, 0x6, true, 0x99dacddc74db5dd8, 6, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.Intensity", intensity, 0x1a, 0x6, true, 0xa1819484ed0d426e, 6, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMDT_WIRE_FORMAT_AND_PREFERENCE.Value", value, 0x0, 0x20, true, 0x76c6bf8b1c7d7432)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif