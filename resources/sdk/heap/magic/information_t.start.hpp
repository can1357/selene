#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION.Address", address, 0x0, 0x40, true, 0x7c1a30356edba5e3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HEAP_INFORMATION.Mode", mode, 0x40, 0x20, true, 0x11ca582b62a8641c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION.ReserveSize", reserve_size, 0x80, 0x40, true, 0xb82c1fff40a29990)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION.CommitSize", commit_size, 0xc0, 0x40, true, 0xe45df8472c8c7aaa)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION.FirstRegionInformationOffset", first_region_information_offset, 0x100, 0x40, true, 0xa31c85cba34522f0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_INFORMATION.NextHeapInformationOffset", next_heap_information_offset, 0x140, 0x40, true, 0x94c1e08f2c481ff1)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif