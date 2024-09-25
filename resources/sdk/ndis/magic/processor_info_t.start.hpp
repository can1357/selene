#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROCESSOR_INFO.CpuNumber", cpu_number, 0x0, 0x20, true, 0xebb053d530de53ec)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROCESSOR_INFO.PhysicalPackageId", physical_package_id, 0x20, 0x20, true, 0x839a40296c9085f0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROCESSOR_INFO.CoreId", core_id, 0x40, 0x20, true, 0x658614821a9a571d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_PROCESSOR_INFO.HyperThreadID", hyper_thread_id, 0x60, 0x20, true, 0x7ec68ba7dc337a88)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif