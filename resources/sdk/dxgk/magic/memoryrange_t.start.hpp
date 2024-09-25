#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MEMORYRANGE.SegmentOffset", segment_offset, 0x0, 0x40, true, 0x75face109199ca4b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_MEMORYRANGE.SizeInBytes", size_in_bytes, 0x40, 0x40, true, 0x326c98481044461e)
#else
#define _m00
#define _m01
#endif