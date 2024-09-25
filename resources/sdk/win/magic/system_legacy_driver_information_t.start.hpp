#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_LEGACY_DRIVER_INFORMATION.VetoType", veto_type, 0x0, 0x20, true, 0xcb9960a1d6002b8b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_SYSTEM_LEGACY_DRIVER_INFORMATION.VetoList", veto_list, 0x40, 0x80, true, 0xf3aecc3af1444546)
#else
#define _m00
#define _m01
#endif