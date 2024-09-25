#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCLAVE_INIT_INFO_VBS.Length", length, 0x0, 0x20, true, 0xadfe356a4df58ed6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCLAVE_INIT_INFO_VBS.ThreadCount", thread_count, 0x20, 0x20, true, 0xebc0812cedb55ee1)
#else
#define _m00
#define _m01
#endif