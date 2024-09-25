#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_FRAME_TYPE_RECORD.NumEntries", num_entries, 0x0, 0x20, true, 0x227d003e059c478c)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::frame_type_and_open_t, 16>), "_NDIS_FRAME_TYPE_RECORD.Entry", entry, 0x40, 0x0, true, 0xdb68b50cb5efc411)
#else
#define _m00
#define _m01
#endif