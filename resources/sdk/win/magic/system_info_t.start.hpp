#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INFO.dwOemId", dw_oem_id, 0x0, 0x20, true, 0xa480cd62b25e143e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_INFO.wProcessorArchitecture", w_processor_architecture, 0x0, 0x10, true, 0x38c0718df69b655b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_INFO.wReserved", w_reserved, 0x10, 0x10, true, 0x3e91cfc4eee7cd26)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INFO.dwPageSize", dw_page_size, 0x20, 0x20, true, 0x8a1e5dfe7a3a6a2a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_INFO.lpMinimumApplicationAddress", lp_minimum_application_address, 0x40, 0x40, true, 0xdd7b38e599e621ca)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_INFO.lpMaximumApplicationAddress", lp_maximum_application_address, 0x80, 0x40, true, 0x30343a64f38ba1d9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_SYSTEM_INFO.dwActiveProcessorMask", dw_active_processor_mask, 0xc0, 0x40, true, 0x25a939a7a7edce60)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INFO.dwNumberOfProcessors", dw_number_of_processors, 0x100, 0x20, true, 0x4638fe7fe0296f2c)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INFO.dwProcessorType", dw_processor_type, 0x120, 0x20, true, 0xebe74795bc259411)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_INFO.dwAllocationGranularity", dw_allocation_granularity, 0x140, 0x20, true, 0x7f462ea3b14384c9)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_INFO.wProcessorLevel", w_processor_level, 0x160, 0x10, true, 0x17976b9b46950b33)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_SYSTEM_INFO.wProcessorRevision", w_processor_revision, 0x170, 0x10, true, 0xafbe7a4029666133)
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
#endif