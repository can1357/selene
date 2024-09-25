#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEDEVICEFLAGS.SystemDevice", system_device, 0x0, 0x1, true, 0x9eface0ca9937f41, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_CREATEDEVICEFLAGS.GdiDevice", gdi_device, 0x1, 0x1, true, 0x966a46eabfc5dd78, 1, uint32_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CREATEDEVICEFLAGS.Value", value, 0x0, 0x20, true, 0x6facef705b0ec623)
#else
#define _m00
#define _m01
#define _m02
#endif