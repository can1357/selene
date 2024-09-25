#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.DSITypeMajor", dsi_type_major, 0x0, 0x8, true, 0x7c130cb6013e2f91)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.DSITypeMinor", dsi_type_minor, 0x8, 0x8, true, 0xcb3490a8856978c3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.SpecVersionMajor", spec_version_major, 0x10, 0x8, true, 0x9c4b87b90ea6509e)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.SpecVersionMinor", spec_version_minor, 0x18, 0x8, true, 0x9c8eaf0efcc045b4)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.SpecVersionPatch", spec_version_patch, 0x20, 0x8, true, 0x80ca10e5bf258d20)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_DXGK_DSI_CAPS.TargetMaximumReturnPacketSize", target_maximum_return_packet_size, 0x30, 0x10, true, 0x84ec390b707c24cb)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.ResultCodeFlags", result_code_flags, 0x40, 0x8, true, 0x6e39e059c3a33d61)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.ResultCodeStatus", result_code_status, 0x48, 0x8, true, 0x8163660a483f9e1b)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.Revision", revision, 0x50, 0x8, true, 0x234e5593c0680b18)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.Level", level, 0x58, 0x8, true, 0xd8ec99dbbbfdaa59)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.DeviceClassHi", device_class_hi, 0x60, 0x8, true, 0x950808531393a41f)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.DeviceClassLo", device_class_lo, 0x68, 0x8, true, 0x413c2601651e4c8d)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.ManufacturerHi", manufacturer_hi, 0x70, 0x8, true, 0x627366603be49fca)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.ManufacturerLo", manufacturer_lo, 0x78, 0x8, true, 0xa2a340a47e7bb60b)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.ProductHi", product_hi, 0x80, 0x8, true, 0xb2e1adb1678877dc)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.ProductLo", product_lo, 0x88, 0x8, true, 0xe002f48e3ba77603)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.LengthHi", length_hi, 0x90, 0x8, true, 0x23c867532b60537e)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_DSI_CAPS.LengthLo", length_lo, 0x98, 0x8, true, 0xb95c68385483e3f8)
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
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif