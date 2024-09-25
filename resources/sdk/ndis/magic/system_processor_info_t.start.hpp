#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_SYSTEM_PROCESSOR_INFO.Header", header, 0x0, 0x20, true, 0x2eefe0bdbf8ce78a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.Flags", flags, 0x20, 0x20, true, 0xd16f2bcc51180557)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum ndis::processor_vendor_t), "_NDIS_SYSTEM_PROCESSOR_INFO.ProcessorVendor", processor_vendor, 0x40, 0x20, true, 0xa2cb32fc0ef1db62)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.NumPhysicalPackages", num_physical_packages, 0x60, 0x20, true, 0xe84e078244ed4d6a)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.NumCores", num_cores, 0x80, 0x20, true, 0x35089edf57535aae)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.NumCoresPerPhysicalPackage", num_cores_per_physical_package, 0xa0, 0x20, true, 0x9b930729f54b5be7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.MaxHyperThreadingCpusPerCore", max_hyper_threading_cpus_per_core, 0xc0, 0x20, true, 0x80d9e84b2515c1d3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.RssBaseCpu", rss_base_cpu, 0xe0, 0x20, true, 0x83aab2cb7521e8e7)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_SYSTEM_PROCESSOR_INFO.RssCpuCount", rss_cpu_count, 0x100, 0x20, true, 0xa2b91f66c77fc196)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_NDIS_SYSTEM_PROCESSOR_INFO.RssProcessors", rss_processors, 0x140, 0x40, true, 0xf72f7ac008be57a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct ndis::processor_info_t, 64>), "_NDIS_SYSTEM_PROCESSOR_INFO.CpuInfo", cpu_info, 0x180, 0x0, true, 0x444bcb59aa9c76a)
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