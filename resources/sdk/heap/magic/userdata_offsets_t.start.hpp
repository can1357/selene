#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_USERDATA_OFFSETS.FirstAllocationOffset", first_allocation_offset, 0x0, 0x10, true, 0xaf3d6e48794d61e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_USERDATA_OFFSETS.BlockStride", block_stride, 0x10, 0x10, true, 0xd52c7d3ec59ddb3b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_USERDATA_OFFSETS.StrideAndOffset", stride_and_offset, 0x0, 0x20, true, 0x3789018024baf3f2)
#else
#define _m00
#define _m01
#define _m02
#endif