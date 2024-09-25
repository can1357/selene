#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_ENCRYPTED_DATA_INFO.StartingFileOffset", starting_file_offset, 0x0, 0x40, true, 0xd085f60957a24152)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTED_DATA_INFO.OutputBufferOffset", output_buffer_offset, 0x40, 0x20, true, 0xb0bcb48eb897ff57)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTED_DATA_INFO.BytesWithinFileSize", bytes_within_file_size, 0x60, 0x20, true, 0x83276de3fd1c3c44)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ENCRYPTED_DATA_INFO.BytesWithinValidDataLength", bytes_within_valid_data_length, 0x80, 0x20, true, 0x44ed758f40b77308)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ENCRYPTED_DATA_INFO.CompressionFormat", compression_format, 0xa0, 0x10, true, 0x4fa35d7d1610b901)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ENCRYPTED_DATA_INFO.DataUnitShift", data_unit_shift, 0xb0, 0x8, true, 0x3f9d68f2cf4d849f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ENCRYPTED_DATA_INFO.ChunkShift", chunk_shift, 0xb8, 0x8, true, 0xf851dddef49fdc69)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ENCRYPTED_DATA_INFO.ClusterShift", cluster_shift, 0xc0, 0x8, true, 0xc5edbd3411d48ff9)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_ENCRYPTED_DATA_INFO.EncryptionFormat", encryption_format, 0xc8, 0x8, true, 0xac31c4be52052f27)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_ENCRYPTED_DATA_INFO.NumberOfDataBlocks", number_of_data_blocks, 0xd0, 0x10, true, 0x6279455d480e4fba)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_ENCRYPTED_DATA_INFO.DataBlockSize", data_block_size, 0xe0, 0x20, true, 0xffd27d22262f7aa1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif