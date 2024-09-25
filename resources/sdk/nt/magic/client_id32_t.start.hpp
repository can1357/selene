#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLIENT_ID32.UniqueProcess", unique_process, 0x0, 0x20, true, 0x9b9f0e539a40f7dc)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLIENT_ID32.UniqueThread", unique_thread, 0x20, 0x20, true, 0x5c1d13bd42ed544c)
#else
#define _m00
#define _m01
#endif