#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_PARAMETERS.NumberOfHbaRequests", number_of_hba_requests, 0x0, 0x20, true, 0x30b2d589f2ac3238)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum stor::port::storage_bus_type_t), "_RAID_ADAPTER_PARAMETERS.BusType", bus_type, 0x20, 0x20, true, 0x9cfbfe503e423536)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_ADAPTER_PARAMETERS.UncachedExtAlignment", uncached_ext_alignment, 0x40, 0x20, true, 0x6fbd15ad3fa247d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_PARAMETERS.MaximumUncachedAddress", maximum_uncached_address, 0x80, 0x40, true, 0x10caf4ff25527d62)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_PARAMETERS.MinimumUncachedAddress", minimum_uncached_address, 0xc0, 0x40, true, 0x4645a0237f3f2d15)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_PARAMETERS.BoundaryAddress", boundary_address, 0x100, 0x40, true, 0x5df610f68d05961e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_PARAMETERS.MinimumPhysicalAddress", minimum_physical_address, 0x140, 0x40, true, 0x903ead0b5ad429a3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_RAID_ADAPTER_PARAMETERS.MaximumPhysicalAddress", maximum_physical_address, 0x180, 0x40, true, 0x459cafe44c1222c8)
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