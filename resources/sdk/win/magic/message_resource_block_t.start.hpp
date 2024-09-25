#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_RESOURCE_BLOCK.LowId", low_id, 0x0, 0x20, true, 0xbf7c974d5b45063b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_RESOURCE_BLOCK.HighId", high_id, 0x20, 0x20, true, 0x11eb47a08d0094fc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MESSAGE_RESOURCE_BLOCK.OffsetToEntries", offset_to_entries, 0x40, 0x20, true, 0x217a3c3296fa78a8)
#else
#define _m00
#define _m01
#define _m02
#endif