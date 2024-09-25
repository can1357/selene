#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "USN_TRACK_MODIFIED_RANGES.Flags", flags, 0x0, 0x20, true, 0x1e12491ef67eddc2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "USN_TRACK_MODIFIED_RANGES.ChunkSize", chunk_size, 0x40, 0x40, true, 0xb3082a28e7cfbdd)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "USN_TRACK_MODIFIED_RANGES.FileSizeThreshold", file_size_threshold, 0x80, 0x40, true, 0xb70b2f98172f219d)
#else
#define _m00
#define _m01
#define _m02
#endif