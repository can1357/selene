#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RELATIVE_SYMLINK_INFO.ExposedNamespaceLength", exposed_namespace_length, 0x0, 0x10, true, 0xeef1f0c90d00ff95)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RELATIVE_SYMLINK_INFO.Flags", flags, 0x10, 0x10, true, 0xe60f6a5f2354971b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_RELATIVE_SYMLINK_INFO.DeviceNameLength", device_name_length, 0x20, 0x10, true, 0x39d73c8c85c6f60d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::relative_symlink_info_t*), "_RELATIVE_SYMLINK_INFO.InteriorMountPoint", interior_mount_point, 0x40, 0x40, true, 0x21c43951ba1d1a9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_RELATIVE_SYMLINK_INFO.OpenedName", opened_name, 0x80, 0x80, true, 0x6888e00ba9ffdc00)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif