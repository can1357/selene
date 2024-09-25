#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLIENT_ID64.UniqueProcess", unique_process, 0x0, 0x40, true, 0x6a7b8eda4ffc863f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CLIENT_ID64.UniqueThread", unique_thread, 0x40, 0x40, true, 0xe395508b9c22edeb)
#else
#define _m00
#define _m01
#endif