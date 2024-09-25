#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPOSVERSIONINFO.Size", size, 0x0, 0x20, true, 0x5e99daa3f0f76d3d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPOSVERSIONINFO.MajorVersion", major_version, 0x20, 0x20, true, 0xa7278585eaa35594)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPOSVERSIONINFO.MinorVersion", minor_version, 0x40, 0x20, true, 0xee2617aa21b71df9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_VPOSVERSIONINFO.BuildNumber", build_number, 0x60, 0x20, true, 0xec08854adf86c932)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VPOSVERSIONINFO.ServicePackMajor", service_pack_major, 0x80, 0x10, true, 0xbf63efbbf893bc04)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_VPOSVERSIONINFO.ServicePackMinor", service_pack_minor, 0x90, 0x10, true, 0xa9f95906cbf4b3e6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif