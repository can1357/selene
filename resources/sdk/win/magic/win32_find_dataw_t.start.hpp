#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAW.dwFileAttributes", dw_file_attributes, 0x0, 0x20, true, 0xf5c976a467cff3a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FIND_DATAW.ftCreationTime", ft_creation_time, 0x20, 0x40, true, 0x9a34f85ffb46ccef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FIND_DATAW.ftLastAccessTime", ft_last_access_time, 0x60, 0x40, true, 0xe664490221c4e9e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WIN32_FIND_DATAW.ftLastWriteTime", ft_last_write_time, 0xa0, 0x40, true, 0x3a5c2e2b4e82fffa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAW.nFileSizeHigh", n_file_size_high, 0xe0, 0x20, true, 0xcce917c775c2bf4a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAW.nFileSizeLow", n_file_size_low, 0x100, 0x20, true, 0xadb460dad1c20e83)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAW.dwReserved0", dw_reserved0, 0x120, 0x20, true, 0xa199a27d29e83d2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WIN32_FIND_DATAW.dwReserved1", dw_reserved1, 0x140, 0x20, true, 0x8d4e809f96891b5b)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 260>), "_WIN32_FIND_DATAW.cFileName", c_file_name, 0x160, 0x40, true, 0x8c09ac9412c77075)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 14>), "_WIN32_FIND_DATAW.cAlternateFileName", c_alternate_file_name, 0x11a0, 0xe0, true, 0xe11e5370b4742b1c)
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