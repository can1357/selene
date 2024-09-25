#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MFT_ENUM_DATA_V1.StartFileReferenceNumber", start_file_reference_number, 0x0, 0x40, true, 0x8766ed24a99da5b1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MFT_ENUM_DATA_V1.LowUsn", low_usn, 0x40, 0x40, true, 0xb07e5f7b211f8063)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MFT_ENUM_DATA_V1.HighUsn", high_usn, 0x80, 0x40, true, 0x67a92d35dc293b7d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "MFT_ENUM_DATA_V1.MinMajorVersion", min_major_version, 0xc0, 0x10, true, 0xaeb745f5c167daec)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "MFT_ENUM_DATA_V1.MaxMajorVersion", max_major_version, 0xd0, 0x10, true, 0x51a6b99969d9b92e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif