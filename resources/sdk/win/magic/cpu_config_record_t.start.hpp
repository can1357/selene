#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_CONFIG_RECORD.ProcessorSpeed", processor_speed, 0x0, 0x20, true, 0xbc61c9990a04d98f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_CONFIG_RECORD.NumberOfProcessors", number_of_processors, 0x20, 0x20, true, 0x4cf0763e5d60653b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_CONFIG_RECORD.MemorySize", memory_size, 0x40, 0x20, true, 0xf5353e387d23ae2e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_CONFIG_RECORD.PageSize", page_size, 0x60, 0x20, true, 0xa6902894dda125ff)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_CONFIG_RECORD.AllocationGranularity", allocation_granularity, 0x80, 0x20, true, 0xa4159373c6f194b2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_CPU_CONFIG_RECORD.ComputerName", computer_name, 0xa0, 0x0, true, 0x43ccc3cd41c9b55f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 134>), "_CPU_CONFIG_RECORD.DomainName", domain_name, 0x10a0, 0x60, true, 0xc3cd5a437cccf479)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CPU_CONFIG_RECORD.HyperThreadingFlag", hyper_threading_flag, 0x1900, 0x40, true, 0xdb4d526d86e9b365)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_CPU_CONFIG_RECORD.HighestUserAddress", highest_user_address, 0x1940, 0x40, true, 0xfbd77d4f1c2d83c3)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPU_CONFIG_RECORD.ProcessorArchitecture", processor_architecture, 0x1980, 0x10, true, 0x960ba6bee0c42222)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPU_CONFIG_RECORD.ProcessorLevel", processor_level, 0x1990, 0x10, true, 0x30d7c3c91d36975f)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_CPU_CONFIG_RECORD.ProcessorRevision", processor_revision, 0x19a0, 0x10, true, 0x83bd26ac873b2ac5)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CPU_CONFIG_RECORD.NxEnabled", nx_enabled, 0x19b0, 0x8, true, 0xa213b735ab9d5029)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_CPU_CONFIG_RECORD.PaeEnabled", pae_enabled, 0x19b8, 0x8, true, 0x8a4d63163b61e55b)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CPU_CONFIG_RECORD.MemorySpeed", memory_speed, 0x19c0, 0x20, true, 0x472144564d18bcd5)
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
#endif