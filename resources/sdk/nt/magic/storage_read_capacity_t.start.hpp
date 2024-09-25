#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_READ_CAPACITY.Version", version, 0x0, 0x20, true, 0x165524eb1e90b62b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_READ_CAPACITY.Size", size, 0x20, 0x20, true, 0xf38b0a67b8043790)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_STORAGE_READ_CAPACITY.BlockLength", block_length, 0x40, 0x20, true, 0x74f2203183bd9c32)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_STORAGE_READ_CAPACITY.NumberOfBlocks", number_of_blocks, 0x80, 0x40, true, 0x9a5d74f7d2c13bfc)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_STORAGE_READ_CAPACITY.DiskLength", disk_length, 0xc0, 0x40, true, 0x5a60668aea241c87)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif