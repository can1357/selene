#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_EXTENDED_VOLUME_DATA.ByteCount", byte_count, 0x0, 0x20, true, 0xdbbddceb5abf2c92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NTFS_EXTENDED_VOLUME_DATA.MajorVersion", major_version, 0x20, 0x10, true, 0xd4116b5e46ac9e37)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NTFS_EXTENDED_VOLUME_DATA.MinorVersion", minor_version, 0x30, 0x10, true, 0xa300957038659a64)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_EXTENDED_VOLUME_DATA.BytesPerPhysicalSector", bytes_per_physical_sector, 0x40, 0x20, true, 0x8ee4528cc1feae27)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NTFS_EXTENDED_VOLUME_DATA.LfsMajorVersion", lfs_major_version, 0x60, 0x10, true, 0x3a3665dfac59857b)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "NTFS_EXTENDED_VOLUME_DATA.LfsMinorVersion", lfs_minor_version, 0x70, 0x10, true, 0x31f6b8680359b8d8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_EXTENDED_VOLUME_DATA.MaxDeviceTrimExtentCount", max_device_trim_extent_count, 0x80, 0x20, true, 0x34ce8f5b5f69a56a)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_EXTENDED_VOLUME_DATA.MaxDeviceTrimByteCount", max_device_trim_byte_count, 0xa0, 0x20, true, 0x6b67175a217be7e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_EXTENDED_VOLUME_DATA.MaxVolumeTrimExtentCount", max_volume_trim_extent_count, 0xc0, 0x20, true, 0x6d6005b086f1d993)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "NTFS_EXTENDED_VOLUME_DATA.MaxVolumeTrimByteCount", max_volume_trim_byte_count, 0xe0, 0x20, true, 0x2d679173ccc1839b)
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
#endif