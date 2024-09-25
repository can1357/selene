#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_WALK_ENTRY.DataAddress", data_address, 0x0, 0x40, true, 0xd91c8252692e3af9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_WALK_ENTRY.DataSize", data_size, 0x40, 0x40, true, 0x9275969457438b77)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_HEAP_WALK_ENTRY.OverheadBytes", overhead_bytes, 0x80, 0x8, true, 0x7d969d4405685d3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RTL_HEAP_WALK_ENTRY.SegmentIndex", segment_index, 0x88, 0x8, true, 0x56ea0af966ba2d50)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_WALK_ENTRY.Flags", flags, 0x90, 0x10, true, 0xa0bb9208bf3d964f)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_WALK_ENTRY.Block.Settable", settable, 0x0, 0x40, true, 0x900de334e8a9af06)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_WALK_ENTRY.Block.TagIndex", tag_index, 0x40, 0x10, true, 0x958818d5a079f6ee)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_RTL_HEAP_WALK_ENTRY.Block.AllocatorBackTraceIndex", allocator_back_trace_index, 0x50, 0x10, true, 0xd0356181ffb9e0aa)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_block_t), "_RTL_HEAP_WALK_ENTRY.Block", block, 0xc0, 0xc0, true, 0xe1b9515b78e1d31c)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_WALK_ENTRY.Segment.CommittedSize", committed_size, 0x0, 0x20, true, 0x53bdb77c5c2f27ef)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_HEAP_WALK_ENTRY.Segment.UnCommittedSize", un_committed_size, 0x20, 0x20, true, 0x9bd36cf7cce6335d)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_WALK_ENTRY.Segment.FirstEntry", first_entry, 0x40, 0x40, true, 0x4d2085df3ceca074)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_RTL_HEAP_WALK_ENTRY.Segment.LastEntry", last_entry, 0x80, 0x40, true, 0xb592b9748f8d96e4)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u5_segment_t), "_RTL_HEAP_WALK_ENTRY.Segment", segment, 0xc0, 0xc0, true, 0x4d7e185c572003ec)
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
#define _m10
#define _m11
#define _m12
#define _m13
#endif