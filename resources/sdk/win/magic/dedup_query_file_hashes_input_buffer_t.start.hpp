#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER.Version", version, 0x0, 0x20, true, 0x29373ed489293f65)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER.QueryFlags", query_flags, 0x20, 0x20, true, 0x7423fe4084c65240)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER.HashAlgorithm", hash_algorithm, 0x40, 0x20, true, 0x426c45a1d7cbdd40)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER.RangeOffsetInFile", range_offset_in_file, 0x80, 0x40, true, 0xaa7fea54ebe855b5)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_DEDUP_QUERY_FILE_HASHES_INPUT_BUFFER.RangeLength", range_length, 0xc0, 0x40, true, 0x38fe7358b5621325)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif