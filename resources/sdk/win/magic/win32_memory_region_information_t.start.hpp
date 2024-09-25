#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "WIN32_MEMORY_REGION_INFORMATION.AllocationBase", allocation_base, 0x0, 0x40, true, 0x565454dc30d8d835)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_REGION_INFORMATION.AllocationProtect", allocation_protect, 0x40, 0x20, true, 0xb8d59295e64d14e8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "WIN32_MEMORY_REGION_INFORMATION.Flags", flags, 0x60, 0x20, true, 0xe2ee0984c5d7c6ab)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "WIN32_MEMORY_REGION_INFORMATION.Private", _private, 0x60, 0x1, true, 0xf6a14383b931e0a2, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "WIN32_MEMORY_REGION_INFORMATION.MappedDataFile", mapped_data_file, 0x61, 0x1, true, 0x133168c492e8dad7, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "WIN32_MEMORY_REGION_INFORMATION.MappedImage", mapped_image, 0x62, 0x1, true, 0x6bf22df9fd880710, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "WIN32_MEMORY_REGION_INFORMATION.MappedPageFile", mapped_page_file, 0x63, 0x1, true, 0xc1771906fd458073, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "WIN32_MEMORY_REGION_INFORMATION.MappedPhysical", mapped_physical, 0x64, 0x1, true, 0x94b22a2728cc90ae, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "WIN32_MEMORY_REGION_INFORMATION.DirectMapped", direct_mapped, 0x65, 0x1, true, 0x2a1dd6be9a3c2fe0, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_REGION_INFORMATION.RegionSize", region_size, 0x80, 0x40, true, 0x62d01c1a0892a30e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "WIN32_MEMORY_REGION_INFORMATION.CommitSize", commit_size, 0xc0, 0x40, true, 0x69c37a8ff84d6442)
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