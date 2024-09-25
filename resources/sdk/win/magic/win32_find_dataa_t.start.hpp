#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAA.dwFileAttributes", dw_file_attributes, 0x0, 0x20, true, 0x15415c51da3491d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FIND_DATAA.ftCreationTime", ft_creation_time, 0x20, 0x40, true, 0xec2ec0758402db25)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FIND_DATAA.ftLastAccessTime", ft_last_access_time, 0x60, 0x40, true, 0x520c7fb3d0c5480a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FIND_DATAA.ftLastWriteTime", ft_last_write_time, 0xa0, 0x40, true, 0xe9c86d306d441b2b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAA.nFileSizeHigh", n_file_size_high, 0xe0, 0x20, true, 0xc4e75f890d9950d6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAA.nFileSizeLow", n_file_size_low, 0x100, 0x20, true, 0xc723fe86cc536a6f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAA.dwReserved0", dw_reserved0, 0x120, 0x20, true, 0x525b2c238979df0b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAA.dwReserved1", dw_reserved1, 0x140, 0x20, true, 0x744fdbc7c977c570)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 260>), "_WIN32_FIND_DATAA.cFileName", c_file_name, 0x160, 0x20, true, 0xd9c26563534261f2)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 14>), "_WIN32_FIND_DATAA.cAlternateFileName", c_alternate_file_name, 0x980, 0x70, true, 0x788467ad0a8927c6)
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