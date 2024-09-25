#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FILE_ATTRIBUTE_DATA.dwFileAttributes", dw_file_attributes, 0x0, 0x20, true, 0xbff771c425d3faa6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FILE_ATTRIBUTE_DATA.ftCreationTime", ft_creation_time, 0x20, 0x40, true, 0x8832fa017bfce72f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FILE_ATTRIBUTE_DATA.ftLastAccessTime", ft_last_access_time, 0x60, 0x40, true, 0xe7d9cda770461475)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FILE_ATTRIBUTE_DATA.ftLastWriteTime", ft_last_write_time, 0xa0, 0x40, true, 0x911e8f5976bb2e79)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FILE_ATTRIBUTE_DATA.nFileSizeHigh", n_file_size_high, 0xe0, 0x20, true, 0x49fd194ef98b9859)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FILE_ATTRIBUTE_DATA.nFileSizeLow", n_file_size_low, 0x100, 0x20, true, 0x79f0adb7b633e4a1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif