#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DGPU_PHYSICAL_ADDRESS.SegmentId", segment_id, 0x0, 0x20, true, 0x644efd80d96b011e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DGPU_PHYSICAL_ADDRESS.SegmentOffset", segment_offset, 0x40, 0x40, true, 0x2ce1d6fb4a430299)
#else
#define _m00
#define _m01
#endif