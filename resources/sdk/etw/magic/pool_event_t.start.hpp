#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_POOL_EVENT.PoolType", pool_type, 0x0, 0x20, true, 0x439368947998edcd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ETW_POOL_EVENT.Tag", tag, 0x20, 0x20, true, 0x77467ec6a9dc39c6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_ETW_POOL_EVENT.NumberOfBytes", number_of_bytes, 0x40, 0x40, true, 0xde653903c3916704)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_ETW_POOL_EVENT.Entry", entry, 0x80, 0x40, true, 0x5635186a8e3ec6c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif