#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::integrateddisplayflags_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.Flags", flags, 0x0, 0x20, true, 0x3c40b8d6d3e3b307)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::video_signal_info_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.NativeTiming", native_timing, 0x40, 0xc0, true, 0xabfa4dbd5be2bd56)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::monitorlinkinfo_capabilities_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.LinkCapabilities", link_capabilities, 0x200, 0x20, true, 0x7a1c2e68c368aa66)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::colorimetry_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.Colorimetry", colorimetry, 0x220, 0xa0, true, 0x8643852b4d433b42)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.DisplayTechnology", display_technology, 0x3c0, 0x8, true, 0x25ebc5fcd8a2c532)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.IntendedUsage", intended_usage, 0x3c8, 0x8, true, 0x2a313a28e2527672)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.Instance", instance, 0x3d0, 0x8, true, 0xcb21abf5e81d4c0e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.DescriptorType", descriptor_type, 0x3d8, 0x8, true, 0x27b08a869c7e6d4a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_DXGK_QUERYINTEGRATEDDISPLAYOUT.Descriptor", descriptor, 0x3e0, 0x8, true, 0xdf431f0fefcb5d04)
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