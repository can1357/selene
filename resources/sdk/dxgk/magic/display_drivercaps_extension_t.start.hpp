#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.SecureDisplaySupport", secure_display_support, 0x0, 0x1, true, 0x372e2852139f73f5, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.VirtualModeSupport", virtual_mode_support, 0x1, 0x1, true, 0x6dc5bb9fcb82f79b, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.HdrFP16ScanoutSupport", hdr_fp16_scanout_support, 0x2, 0x1, true, 0xba443ba284c80913, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.HdrARGB10ScanoutSupport", hdr_argb10_scanout_support, 0x3, 0x1, true, 0x5278bae24042b474, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.Hdr10MetadataSupport", hdr10_metadata_support, 0x4, 0x1, true, 0xf1e99f799f0155ea, 1, uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_DISPLAY_DRIVERCAPS_EXTENSION.Value", value, 0x0, 0x20, true, 0x53b4df06c0f1fd42)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif