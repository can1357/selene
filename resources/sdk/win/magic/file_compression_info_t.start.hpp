#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FILE_COMPRESSION_INFO.CompressedFileSize", compressed_file_size, 0x0, 0x40, true, 0x3d1dd46bbe8b4fac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_FILE_COMPRESSION_INFO.CompressionFormat", compression_format, 0x40, 0x10, true, 0x47212c7511a6d231)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_COMPRESSION_INFO.CompressionUnitShift", compression_unit_shift, 0x50, 0x8, true, 0x26a2502184cec493)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_COMPRESSION_INFO.ChunkShift", chunk_shift, 0x58, 0x8, true, 0x61226400b3b97a68)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_COMPRESSION_INFO.ClusterShift", cluster_shift, 0x60, 0x8, true, 0xab343acc58d9628)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif