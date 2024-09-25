#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AVRF_CLIENT_ID_WOW64.UniqueProcess", unique_process, 0x0, 0x40, true, 0xfc37af6fe91123ca)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AVRF_CLIENT_ID_WOW64.UniqueThread", unique_thread, 0x40, 0x40, true, 0xdb30c652e9188c92)
#else
#define _m00
#define _m01
#endif