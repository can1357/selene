#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIRTUALGPURESOURCES.PartitionId", partition_id, 0x0, 0x20, true, 0xe188e00518e89494)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIRTUALGPURESOURCES.NumMemoryAllocations", num_memory_allocations, 0x20, 0x20, true, 0xaa105d5ed3bd6603)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct dxgk::virtualgpumemoryresource_t, 1>), "_DXGKARG_SETVIRTUALGPURESOURCES.MemoryInfo", memory_info, 0x40, 0x0, true, 0x9f321fa854d409d9)
#else
#define _m00
#define _m01
#define _m02
#endif