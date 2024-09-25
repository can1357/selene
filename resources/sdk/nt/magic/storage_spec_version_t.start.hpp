#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_SPEC_VERSION.MinorVersion.SubMinor", sub_minor, 0x0, 0x8, true, 0x20991c87adbe0573)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_STORAGE_SPEC_VERSION.MinorVersion.Minor", minor, 0x8, 0x8, true, 0xa74ef6d0920e1a57)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_SPEC_VERSION.MinorVersion.AsUshort", as_ushort, 0x0, 0x10, true, 0x8f2af439c94f4fe1)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_minor_version_t), "_STORAGE_SPEC_VERSION.MinorVersion", minor_version, 0x0, 0x10, true, 0x5abf57af7e577c6f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_STORAGE_SPEC_VERSION.MajorVersion", major_version, 0x10, 0x10, true, 0x3c87279888d2226)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_SPEC_VERSION.AsUlong", as_ulong, 0x0, 0x20, true, 0x47aaf55669c95d53)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif