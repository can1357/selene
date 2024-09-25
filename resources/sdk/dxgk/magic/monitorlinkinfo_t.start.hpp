#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::monitorlinkinfo_usagehints_t), "_DXGK_MONITORLINKINFO.UsageHints", usage_hints, 0x0, 0x20, true, 0x3afd8f718d95bbca)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union dxgk::monitorlinkinfo_capabilities_t), "_DXGK_MONITORLINKINFO.Capabilities", capabilities, 0x20, 0x20, true, 0x93d4a9656f0ca241)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union d3dk::mdt::wire_format_and_preference_t), "_DXGK_MONITORLINKINFO.DitheringSupport", dithering_support, 0x40, 0x20, true, 0xbc3c07aff08c0787)
#else
#define _m00
#define _m01
#define _m02
#endif