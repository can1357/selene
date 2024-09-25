#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "IORING_BUFFER_INFO.Address", address, 0x0, 0x0, false, 0x1408f483c2f4e60c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "IORING_BUFFER_INFO.Length", length, 0x0, 0x0, false, 0xc6b9129c8dee8c01)
#else
#define _m00
#define _m01
#endif