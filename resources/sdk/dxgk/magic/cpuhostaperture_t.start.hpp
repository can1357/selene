#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_CPUHOSTAPERTURE.PhysicalAddress", physical_address, 0x0, 0x40, true, 0x6666ad08e0387cd9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_CPUHOSTAPERTURE.SizeInPages", size_in_pages, 0x40, 0x20, true, 0xfbe1519154fea12f)
#else
#define _m00
#define _m01
#endif