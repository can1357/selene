#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FLS_DATA.Entry", entry, 0x0, 0x80, true, 0x1d662b3eb2b1261e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 128>), "_FLS_DATA.Slots", slots, 0x80, 0x0, true, 0x4f552b2e52a52890)
#else
#define _m00
#define _m01
#endif