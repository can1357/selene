#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pool_state_t), "_MI_SYSTEM_INFORMATION.Pools", pools, 0x0, 0x40, true, 0xccb4cdd74e7561e7)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::section_state_t), "_MI_SYSTEM_INFORMATION.Sections", sections, 0x600, 0x0, true, 0x299106d7a0f44f97)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_image_state_t), "_MI_SYSTEM_INFORMATION.SystemImages", system_images, 0x2000, 0x40, true, 0xa4c98336fdc30e3)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::session_state_t), "_MI_SYSTEM_INFORMATION.Sessions", sessions, 0x2540, 0x40, true, 0x925ebc1a62921efe)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::process_state_t), "_MI_SYSTEM_INFORMATION.Processes", processes, 0xaa80, 0x40, true, 0x6ca619c220b207a2)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::hardware_state_t), "_MI_SYSTEM_INFORMATION.Hardware", hardware, 0xae00, 0x0, true, 0x11c27b78b590ee0f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_va_state_t), "_MI_SYSTEM_INFORMATION.SystemVa", system_va, 0xbc00, 0x0, true, 0xc7b72fca9f6c8a3f)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::combine_state_t), "_MI_SYSTEM_INFORMATION.PageCombines", page_combines, 0xe200, 0x0, true, 0x4ec43d5fe5cea600)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::pagelist_state_t), "_MI_SYSTEM_INFORMATION.PageLists", page_lists, 0xe300, 0x40, true, 0x3157155646d4f900)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_state_t), "_MI_SYSTEM_INFORMATION.Partitions", partitions, 0xe800, 0x0, true, 0xc6385672e2561ec2)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::shutdown_state_t), "_MI_SYSTEM_INFORMATION.Shutdowns", shutdowns, 0xee00, 0xc0, true, 0xbe32c5fdc9215cdf)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::error_state_t), "_MI_SYSTEM_INFORMATION.Errors", errors, 0xf1c0, 0x40, true, 0x4c0800bc943f2ee2)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::access_log_state_t), "_MI_SYSTEM_INFORMATION.AccessLog", access_log, 0xf800, 0x0, true, 0xb596208a6ebbf100)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::debugger_state_t), "_MI_SYSTEM_INFORMATION.Debugger", debugger, 0xfc00, 0xc0, true, 0x3f74a3b2f42d1ba6)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::standby_state_t), "_MI_SYSTEM_INFORMATION.Standby", standby, 0x10500, 0x80, true, 0x704d425451b3f08a)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_pte_state_t), "_MI_SYSTEM_INFORMATION.SystemPtes", system_ptes, 0x10a00, 0x0, true, 0xef2db05f5ebae7ba)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::io_page_state_t), "_MI_SYSTEM_INFORMATION.IoPages", io_pages, 0x11a00, 0x40, true, 0x45ee61ce4b477ee4)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::paging_io_state_t), "_MI_SYSTEM_INFORMATION.PagingIo", paging_io, 0x11d80, 0x80, true, 0x648158b1b9978145)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::common_page_state_t), "_MI_SYSTEM_INFORMATION.CommonPages", common_pages, 0x12300, 0x40, true, 0xbca64a1f53c4c5a9)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_trim_state_t), "_MI_SYSTEM_INFORMATION.Trims", trims, 0x12a00, 0x0, true, 0x1f6636a9844e3a91)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_SYSTEM_INFORMATION.Cookie", cookie, 0x12e40, 0x40, true, 0xddc4f5e67626bdc7)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile**), "_MI_SYSTEM_INFORMATION.BootRegistryRuns", boot_registry_runs, 0x12e80, 0x40, true, 0xef4107531a37cf07)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MI_SYSTEM_INFORMATION.ZeroingDisabled", zeroing_disabled, 0x12ec0, 0x20, true, 0xde4169b3ad66dc48)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_INFORMATION.FullyInitialized", fully_initialized, 0x12ee0, 0x8, true, 0xaf69d6fcb7cf2b5c)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MI_SYSTEM_INFORMATION.SafeBooted", safe_booted, 0x12ee8, 0x8, true, 0xab6d74f54dfb0d46)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tlg::provider_t*), "_MI_SYSTEM_INFORMATION.TraceLogging", trace_logging, 0x12f00, 0x40, true, 0x4d39f6dfbe018c25)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::visible_state_t), "_MI_SYSTEM_INFORMATION.Vs", vs, 0x13000, 0x0, true, 0x1780559dd4937597)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::enclave_state_t), "_MI_SYSTEM_INFORMATION.Enclaves", enclaves, 0x12c00, 0x40, true, 0x3aa96716e7ce7d85)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::system_accelerators_t), "_MI_SYSTEM_INFORMATION.Accelerators", accelerators, 0x0, 0x0, false, 0xd514631f96c167ff)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::hot_patch_state_t), "_MI_SYSTEM_INFORMATION.HotPatch", hot_patch, 0x0, 0x0, false, 0xf26a964369edf6a9)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#endif