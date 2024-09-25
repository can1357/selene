#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE.Packets", packets, 0x0, 0x40, true, 0x38e8febfb8e211e7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE.Bytes", bytes, 0x40, 0x40, true, 0xc7d28011b5d23af1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_NDIS_GFT_PACKET_BYTE_COUNTER_VALUE.LastUpdate", last_update, 0x80, 0x40, true, 0x8c178371f3098428)
#else
#define _m00
#define _m01
#define _m02
#endif