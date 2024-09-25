#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_MEMORY_LIMIT_DATA.CommitLimitBytes", commit_limit_bytes, 0x0, 0x40, true, 0x87b70cb850a39843)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_MEMORY_LIMIT_DATA.CommitLimitFailureCode", commit_limit_failure_code, 0x40, 0x40, true, 0x9121531a90b90409)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_MEMORY_LIMIT_DATA.MaxAllocationSizeBytes", max_allocation_size_bytes, 0x80, 0x40, true, 0x886d1858a484ede9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_RTL_HEAP_MEMORY_LIMIT_DATA.AllocationLimitFailureCode", allocation_limit_failure_code, 0xc0, 0x40, true, 0x81cbb98b2a6828fe)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif