#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::integrateddisplayflags_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.Flags", flags, 0x0, 0x20, true, 0x14eedd55f6d099e3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct d3dk::mdt::video_signal_info_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.NativeTiming", native_timing, 0x40, 0xc0, true, 0xe2a733b8e9b68cf8)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::monitorlinkinfo_capabilities_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.LinkCapabilities", link_capabilities, 0x200, 0x20, true, 0x62a351ae01eb9c86)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::colorimetry_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.Colorimetry", colorimetry, 0x220, 0xa0, true, 0x6f9d6ba197779a70)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.DisplayTechnology", display_technology, 0x3c0, 0x8, true, 0x68de861bb8b8ac63)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.IntendedUsage", intended_usage, 0x3c8, 0x8, true, 0xbcc6acbae7761e63)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.Instance", instance, 0x3d0, 0x8, true, 0xeb0e0daf3092cc17)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.DescriptorType", descriptor_type, 0x3d8, 0x8, true, 0x687524676d193b92)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mdt::wire_format_and_preference_t), "_DXGK_QUERYINTEGRATEDDISPLAYOUT2.DitheringSupport", dithering_support, 0x3e0, 0x20, true, 0x3c62038c5130f634)
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