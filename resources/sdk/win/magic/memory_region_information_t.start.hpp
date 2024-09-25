#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_REGION_INFORMATION.AllocationBase", allocation_base, 0x0, 0x40, true, 0x158c87b3b0050953)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_REGION_INFORMATION.AllocationProtect", allocation_protect, 0x40, 0x20, true, 0x5ebe2a6e015a7022)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_REGION_INFORMATION.RegionType", region_type, 0x60, 0x20, true, 0x689fb2e4cf5c10ab)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.Private", _private, 0x60, 0x1, true, 0xa1177f1c2d5a620b, 1, uint32_t)
#define _m04 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.MappedDataFile", mapped_data_file, 0x61, 0x1, true, 0x27ca2e7e73b9d18, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.MappedImage", mapped_image, 0x62, 0x1, true, 0x5fb31d0b755baeb4, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.MappedPageFile", mapped_page_file, 0x63, 0x1, true, 0xffcf43b6c12615e2, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.MappedPhysical", mapped_physical, 0x64, 0x1, true, 0x6ad98e17cdd02630, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.DirectMapped", direct_mapped, 0x65, 0x1, true, 0x57005583f087130f, 1, uint32_t)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_REGION_INFORMATION.RegionSize", region_size, 0x80, 0x40, true, 0x16746dd5b60ab997)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_REGION_INFORMATION.CommitSize", commit_size, 0xc0, 0x40, true, 0xeeef3baa7b95defe)
#define _m11 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.SoftwareEnclave", software_enclave, 0x66, 0x1, true, 0x722c26557060a23a, 1, uint32_t)
#define _m12 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.PageSize64K", page_size64k, 0x67, 0x1, true, 0x99922fb4d6b423b7, 1, uint32_t)
#define _m13 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.PlaceholderReservation", placeholder_reservation, 0x68, 0x1, true, 0xba803278a86ba02, 1, uint32_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_REGION_INFORMATION.PartitionId", partition_id, 0x100, 0x40, true, 0xc23d4a59e1b8c6a7)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_REGION_INFORMATION.NodePreference", node_preference, 0x140, 0x40, true, 0x11b19cdd615df8e9)
#define _m16 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.MappedAwe", mapped_awe, 0x0, 0x0, false, 0x785102fdefa11970, 1, uint32_t)
#define _m17 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.MappedWriteWatch", mapped_write_watch, 0x0, 0x0, false, 0x93b38bbd10d6bf63, 1, uint32_t)
#define _m18 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.PageSizeLarge", page_size_large, 0x0, 0x0, false, 0x839ce6cad622f7f9, 1, uint32_t)
#define _m19 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_MEMORY_REGION_INFORMATION.PageSizeHuge", page_size_huge, 0x0, 0x0, false, 0x1e0770de7d6e3130, 1, uint32_t)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif