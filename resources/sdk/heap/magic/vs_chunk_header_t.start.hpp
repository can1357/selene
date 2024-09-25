#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union heap::vs_chunk_header_size_t), "_HEAP_VS_CHUNK_HEADER.Sizes", sizes, 0x0, 0x40, true, 0x4778b14361b3165a)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_HEAP_VS_CHUNK_HEADER.EncodedSegmentPageOffset", encoded_segment_page_offset, 0x40, 0x8, true, 0x269b1203f1c1c98e, 8, uint32_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VS_CHUNK_HEADER.UnusedBytes", unused_bytes, 0x48, 0x1, true, 0x73e7195207df29bc, 1, uint32_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HEAP_VS_CHUNK_HEADER.SkipDuringWalk", skip_during_walk, 0x49, 0x1, true, 0x8f677794aea76eee, 1, uint32_t)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_VS_CHUNK_HEADER.AllocatedChunkBits", allocated_chunk_bits, 0x40, 0x20, true, 0xa1d9ad70f68b746a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif