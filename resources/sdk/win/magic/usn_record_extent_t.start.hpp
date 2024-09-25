#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_EXTENT.Offset", offset, 0x0, 0x40, true, 0x159901b9a44fe41d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_RECORD_EXTENT.Length", length, 0x40, 0x40, true, 0x7a480a85c191f762)
#else
#define _m00
#define _m01
#endif