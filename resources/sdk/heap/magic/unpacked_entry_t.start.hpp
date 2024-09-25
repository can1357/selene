#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_HEAP_UNPACKED_ENTRY.PreviousBlockPrivateData", previous_block_private_data, 0x0, 0x40, true, 0xf3d4382e4d9c9444)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_UNPACKED_ENTRY.Size", size, 0x40, 0x10, true, 0x787eed130952a2d4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_UNPACKED_ENTRY.Flags", flags, 0x50, 0x8, true, 0x40065b45b735dea8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_UNPACKED_ENTRY.SmallTagIndex", small_tag_index, 0x58, 0x8, true, 0xace6e1de093342aa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_UNPACKED_ENTRY.SubSegmentCode", sub_segment_code, 0x40, 0x20, true, 0xc7ac841b68b956a2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_UNPACKED_ENTRY.PreviousSize", previous_size, 0x60, 0x10, true, 0xae3672120d54ca85)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_UNPACKED_ENTRY.SegmentOffset", segment_offset, 0x70, 0x8, true, 0x322e1699fbcb3ac0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_UNPACKED_ENTRY.LFHFlags", lfh_flags, 0x70, 0x8, true, 0x26f7533faf7e3e12)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_HEAP_UNPACKED_ENTRY.UnusedBytes", unused_bytes, 0x78, 0x8, true, 0x294f906a6d5c58fd)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_UNPACKED_ENTRY.CompactHeader", compact_header, 0x40, 0x40, true, 0xc4eb1cc0ac923106)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#endif