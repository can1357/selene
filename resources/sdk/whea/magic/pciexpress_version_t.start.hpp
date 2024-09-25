#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PCIEXPRESS_VERSION.MinorVersion", minor_version, 0x0, 0x8, true, 0xd14e5167fe084857)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_PCIEXPRESS_VERSION.MajorVersion", major_version, 0x8, 0x8, true, 0x46251b98f22ce5ff)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_PCIEXPRESS_VERSION.AsULONG", as_ulong, 0x0, 0x20, true, 0x982331dd1fb33164)
#else
#define _m00
#define _m01
#define _m02
#endif