#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ZONE_HEADER.FreeList", free_list, 0x0, 0x40, true, 0xba48c06e46aa7776)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_ZONE_HEADER.SegmentList", segment_list, 0x40, 0x40, true, 0x8437cee006ffcf87)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONE_HEADER.BlockSize", block_size, 0x80, 0x20, true, 0x8e2f877ed025ad96)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ZONE_HEADER.TotalSegmentSize", total_segment_size, 0xa0, 0x20, true, 0x40ced2e6669c267a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif