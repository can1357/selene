#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LFH_BLOCK_ZONE.ListEntry", list_entry, 0x0, 0x80, true, 0x8e467f7540157251)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_LFH_BLOCK_ZONE.NextIndex", next_index, 0x80, 0x20, true, 0xb8fa2dae39fc02bd)
#else
#define _m00
#define _m01
#endif