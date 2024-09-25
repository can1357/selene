#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_REGION_INFORMATION.Address", address, 0x0, 0x40, true, 0x748aec0738c8f887)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_REGION_INFORMATION.ReserveSize", reserve_size, 0x40, 0x40, true, 0xc206b20d1d154106)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_REGION_INFORMATION.CommitSize", commit_size, 0x80, 0x40, true, 0x9b1965685647f9cc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_REGION_INFORMATION.FirstRangeInformationOffset", first_range_information_offset, 0xc0, 0x40, true, 0x99c1d77a55391e77)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HEAP_REGION_INFORMATION.NextRegionInformationOffset", next_region_information_offset, 0x100, 0x40, true, 0xcdfbdf94619043a6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif