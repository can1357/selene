#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "READ_FILE_USN_DATA.MinMajorVersion", min_major_version, 0x0, 0x10, true, 0x85d2ed497937c989)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "READ_FILE_USN_DATA.MaxMajorVersion", max_major_version, 0x10, 0x10, true, 0xee23fe81c7151ba6)
#else
#define _m00
#define _m01
#endif