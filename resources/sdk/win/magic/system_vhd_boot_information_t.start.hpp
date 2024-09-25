#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_SYSTEM_VHD_BOOT_INFORMATION.OsDiskIsVhd", os_disk_is_vhd, 0x0, 0x8, true, 0x75bff6f1d0e56051)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_VHD_BOOT_INFORMATION.OsVhdFilePathOffset", os_vhd_file_path_offset, 0x20, 0x20, true, 0x9e9dafa7bf91764)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 1>), "_SYSTEM_VHD_BOOT_INFORMATION.OsVhdParentVolume", os_vhd_parent_volume, 0x40, 0x10, true, 0x9b79f5b4d7a0537b)
#else
#define _m00
#define _m01
#define _m02
#endif