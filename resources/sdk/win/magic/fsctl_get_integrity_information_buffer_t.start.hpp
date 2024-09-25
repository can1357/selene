#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FSCTL_GET_INTEGRITY_INFORMATION_BUFFER.ChecksumAlgorithm", checksum_algorithm, 0x0, 0x10, true, 0xc1c8fb54adede441)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_GET_INTEGRITY_INFORMATION_BUFFER.Flags", flags, 0x20, 0x20, true, 0x5d840426bb4d4f4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_GET_INTEGRITY_INFORMATION_BUFFER.ChecksumChunkSizeInBytes", checksum_chunk_size_in_bytes, 0x40, 0x20, true, 0x89c66a310211a116)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_GET_INTEGRITY_INFORMATION_BUFFER.ClusterSizeInBytes", cluster_size_in_bytes, 0x60, 0x20, true, 0xcd28c860c0da17ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif