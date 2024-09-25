#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_COMPRESSION_INFORMATION.CompressedFileSize", compressed_file_size, 0x0, 0x40, true, 0x17ac2b6a3910be96)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_COMPRESSION_INFORMATION.CompressionFormat", compression_format, 0x40, 0x10, true, 0xecde920fd9e958b0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_COMPRESSION_INFORMATION.CompressionUnitShift", compression_unit_shift, 0x50, 0x8, true, 0x961e02cbec10985c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_COMPRESSION_INFORMATION.ChunkShift", chunk_shift, 0x58, 0x8, true, 0xc7ce293bed9ea81d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_COMPRESSION_INFORMATION.ClusterShift", cluster_shift, 0x60, 0x8, true, 0x6e86b93e77c9785)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif