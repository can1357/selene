#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_PACKET_COUNTER_VALUE.Packets", packets, 0x0, 0x40, true, 0x7dddf898a59cff62)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_GFT_PACKET_COUNTER_VALUE.LastUpdate", last_update, 0x40, 0x40, true, 0xd3b6c99c828de34e)
#else
#define _m00
#define _m01
#endif