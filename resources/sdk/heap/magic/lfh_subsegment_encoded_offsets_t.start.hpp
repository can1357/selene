#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS.BlockSize", block_size, 0x0, 0x10, true, 0x2c90edb59380b193)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS.FirstBlockOffset", first_block_offset, 0x10, 0x10, true, 0x10e6aa8735b8c24b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_LFH_SUBSEGMENT_ENCODED_OFFSETS.EncodedData", encoded_data, 0x0, 0x20, true, 0x50ff8b48dce62994)
#else
#define _m00
#define _m01
#define _m02
#endif