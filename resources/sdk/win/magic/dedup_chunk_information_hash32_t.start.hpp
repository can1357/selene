#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEDUP_CHUNK_INFORMATION_HASH32.ChunkFlags", chunk_flags, 0x0, 0x20, true, 0xaded84372a0b8251)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEDUP_CHUNK_INFORMATION_HASH32.ChunkOffsetInFile", chunk_offset_in_file, 0x40, 0x40, true, 0x3ad04e2d8f30d1ef)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEDUP_CHUNK_INFORMATION_HASH32.ChunkSize", chunk_size, 0x80, 0x40, true, 0x9268e43a773e01a7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 32>), "_DEDUP_CHUNK_INFORMATION_HASH32.HashVal", hash_val, 0xc0, 0x0, true, 0x121fd3d937823e2c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif