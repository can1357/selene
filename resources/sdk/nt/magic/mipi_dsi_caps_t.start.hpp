#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.DSITypeMajor", dsi_type_major, 0x0, 0x8, true, 0x510a09c3c18d2600)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.DSITypeMinor", dsi_type_minor, 0x8, 0x8, true, 0x6d6628169a31f00b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.SpecVersionMajor", spec_version_major, 0x10, 0x8, true, 0x6df1129f8708c9ba)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.SpecVersionMinor", spec_version_minor, 0x18, 0x8, true, 0xbc1462874365e430)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.SpecVersionPatch", spec_version_patch, 0x20, 0x8, true, 0xe3690f6c5068466b)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MIPI_DSI_CAPS.TargetMaximumReturnPacketSize", target_maximum_return_packet_size, 0x30, 0x10, true, 0x534b867aef34348a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.ResultCodeFlags", result_code_flags, 0x40, 0x8, true, 0x63d1e1e6e6e68282)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.ResultCodeStatus", result_code_status, 0x48, 0x8, true, 0x6f429e246d60ec0a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.Revision", revision, 0x50, 0x8, true, 0x41b4d07071e479c3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.Level", level, 0x58, 0x8, true, 0xbc4d9fce4e39d76d)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.DeviceClassHi", device_class_hi, 0x60, 0x8, true, 0xdca20570e89750c6)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.DeviceClassLo", device_class_lo, 0x68, 0x8, true, 0x6f8a5aee102e0bd5)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.ManufacturerHi", manufacturer_hi, 0x70, 0x8, true, 0xd83931cc2b2679a8)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.ManufacturerLo", manufacturer_lo, 0x78, 0x8, true, 0x381c3e67c40f8916)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.ProductHi", product_hi, 0x80, 0x8, true, 0xaa8ef1d7e40c704e)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.ProductLo", product_lo, 0x88, 0x8, true, 0xad64f04c6cdbbeb4)
#define _m16 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.LengthHi", length_hi, 0x90, 0x8, true, 0xd0aad02676f203c5)
#define _m17 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_MIPI_DSI_CAPS.LengthLo", length_lo, 0x98, 0x8, true, 0x7bd10ae4cb09a724)
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