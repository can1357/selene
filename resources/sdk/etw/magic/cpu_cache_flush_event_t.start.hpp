#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_CPU_CACHE_FLUSH_EVENT.Address", address, 0x0, 0x40, true, 0xa14ca3ec2379f6ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_CPU_CACHE_FLUSH_EVENT.Bytes", bytes, 0x40, 0x40, true, 0x1f3fc02b95d7fdb1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_CPU_CACHE_FLUSH_EVENT.Clean", clean, 0x80, 0x8, true, 0xf1b11ad275d0ec7b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_CPU_CACHE_FLUSH_EVENT.FullFlush", full_flush, 0x88, 0x8, true, 0x12ed2ddc52c345e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_ETW_CPU_CACHE_FLUSH_EVENT.Rectangle", rectangle, 0x90, 0x8, true, 0x12708b78bebb7979)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif