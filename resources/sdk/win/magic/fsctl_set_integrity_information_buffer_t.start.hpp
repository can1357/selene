#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER.ChecksumAlgorithm", checksum_algorithm, 0x0, 0x10, true, 0x9f46e3fa61adff68)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FSCTL_SET_INTEGRITY_INFORMATION_BUFFER.Flags", flags, 0x20, 0x20, true, 0xcdc900a2d9f7d4bb)
#else
#define _m00
#define _m01
#endif