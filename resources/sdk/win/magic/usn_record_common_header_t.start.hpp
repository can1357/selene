#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_RECORD_COMMON_HEADER.RecordLength", record_length, 0x0, 0x20, true, 0xfb7739cd8a655c32)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_COMMON_HEADER.MajorVersion", major_version, 0x20, 0x10, true, 0xf2b90f2b8956f1e7)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "USN_RECORD_COMMON_HEADER.MinorVersion", minor_version, 0x30, 0x10, true, 0xf1ba00b88ca8e92)
#else
#define _m00
#define _m01
#define _m02
#endif