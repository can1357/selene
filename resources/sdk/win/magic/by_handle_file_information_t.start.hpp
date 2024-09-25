#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.dwFileAttributes", dw_file_attributes, 0x0, 0x20, true, 0x588f90f49f060fcc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_BY_HANDLE_FILE_INFORMATION.ftCreationTime", ft_creation_time, 0x20, 0x40, true, 0x15373147047c2001)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_BY_HANDLE_FILE_INFORMATION.ftLastAccessTime", ft_last_access_time, 0x60, 0x40, true, 0x16060b176a62f6c6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_BY_HANDLE_FILE_INFORMATION.ftLastWriteTime", ft_last_write_time, 0xa0, 0x40, true, 0x7d29336ab051af0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.dwVolumeSerialNumber", dw_volume_serial_number, 0xe0, 0x20, true, 0xd4171d9f09bc1c4a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.nFileSizeHigh", n_file_size_high, 0x100, 0x20, true, 0x99b2690b93d0b30f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.nFileSizeLow", n_file_size_low, 0x120, 0x20, true, 0x4a65c038ab245728)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.nNumberOfLinks", n_number_of_links, 0x140, 0x20, true, 0x2063fe2815ee7dce)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.nFileIndexHigh", n_file_index_high, 0x160, 0x20, true, 0xa8838d4432b906d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BY_HANDLE_FILE_INFORMATION.nFileIndexLow", n_file_index_low, 0x180, 0x20, true, 0x72c10101dd8f7b0b)
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