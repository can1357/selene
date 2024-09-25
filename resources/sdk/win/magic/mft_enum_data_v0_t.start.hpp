#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "MFT_ENUM_DATA_V0.StartFileReferenceNumber", start_file_reference_number, 0x0, 0x40, true, 0xc345f217f0a93eb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MFT_ENUM_DATA_V0.LowUsn", low_usn, 0x40, 0x40, true, 0x7187770104f870ee)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "MFT_ENUM_DATA_V0.HighUsn", high_usn, 0x80, 0x40, true, 0x5c1ef6ac1a6f2196)
#else
#define _m00
#define _m01
#define _m02
#endif