#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMPRESSED_DATA_INFO.CompressionFormatAndEngine", compression_format_and_engine, 0x0, 0x10, true, 0x2a5f6eabafe176ef)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_COMPRESSED_DATA_INFO.CompressionUnitShift", compression_unit_shift, 0x10, 0x8, true, 0x610d4697a40423a9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_COMPRESSED_DATA_INFO.ChunkShift", chunk_shift, 0x18, 0x8, true, 0xc5efb03c3437101)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_COMPRESSED_DATA_INFO.ClusterShift", cluster_shift, 0x20, 0x8, true, 0x65296c08f05d73f9)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_COMPRESSED_DATA_INFO.NumberOfChunks", number_of_chunks, 0x30, 0x10, true, 0x25bc65404449fcd3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_COMPRESSED_DATA_INFO.CompressedChunkSizes", compressed_chunk_sizes, 0x40, 0x20, true, 0x1c6e6156e26fc9bc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif