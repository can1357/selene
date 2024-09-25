#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_BASIC_INFORMATION.BaseAddress", base_address, 0x0, 0x40, true, 0xe929394a2f51f465)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_MEMORY_BASIC_INFORMATION.AllocationBase", allocation_base, 0x40, 0x40, true, 0x818dc78fb03ff5a0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION.AllocationProtect", allocation_protect, 0x80, 0x20, true, 0x902d24543e6198c9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_MEMORY_BASIC_INFORMATION.RegionSize", region_size, 0xc0, 0x40, true, 0x7b3f7f1c1b670147)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION.State", state, 0x100, 0x20, true, 0x1f9c2f5785cd2f4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION.Protect", protect, 0x120, 0x20, true, 0x841b7e6c754eac38)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_MEMORY_BASIC_INFORMATION.Type", type, 0x140, 0x20, true, 0x39a84d17b0bde6ea)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_MEMORY_BASIC_INFORMATION.PartitionId", partition_id, 0xa0, 0x10, true, 0xd74fcda235684d8b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif