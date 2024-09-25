#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_BYTE_COUNTER_VALUE.Bytes", bytes, 0x0, 0x40, true, 0x12333246dfb3e5a4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_GFT_BYTE_COUNTER_VALUE.LastUpdate", last_update, 0x40, 0x40, true, 0x2de316df2897bdb6)
#else
#define _m00
#define _m01
#endif