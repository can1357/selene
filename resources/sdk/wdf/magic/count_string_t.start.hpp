#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_count_string.Length", length, 0x0, 0x10, true, 0x5a4fe12735e7076a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_count_string.MaximumLength", maximum_length, 0x10, 0x10, true, 0x66ef27ca094c3374)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_count_string.Buffer", buffer, 0x40, 0x40, true, 0xa818853226333520)
#else
#define _m00
#define _m01
#define _m02
#endif