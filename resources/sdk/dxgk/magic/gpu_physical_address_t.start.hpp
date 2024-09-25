#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_GPU_PHYSICAL_ADDRESS.MemorySegmentId", memory_segment_id, 0x0, 0x20, true, 0x502714f26530a5e3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_GPU_PHYSICAL_ADDRESS.MemorySegmentOffset", memory_segment_offset, 0x40, 0x40, true, 0xccbdbe0b65c9156c)
#else
#define _m00
#define _m01
#endif