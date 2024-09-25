#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HIBERFILE_BUCKET.MaxPhysicalMemory", max_physical_memory, 0x0, 0x40, true, 0x23da80c8a1c76767)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 3>), "_HIBERFILE_BUCKET.PhysicalMemoryPercent", physical_memory_percent, 0x40, 0x60, true, 0x57a722baceca0be0)
#else
#define _m00
#define _m01
#endif