#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_HIDDEN_PROCESSOR_POWER_INTERFACE.Version", version, 0x0, 0x20, true, 0x71606d07a3241689)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint64_t*)>*), "_HIDDEN_PROCESSOR_POWER_INTERFACE.ReadPerfMsr", read_perf_msr, 0x40, 0x40, true, 0x8d8a0063c8d566ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint32_t, uint64_t, uint64_t)>*), "_HIDDEN_PROCESSOR_POWER_INTERFACE.WritePerfMsr", write_perf_msr, 0x80, 0x40, true, 0xf5802138eed32d5d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint16_t, uint16_t, uint32_t*)>*), "_HIDDEN_PROCESSOR_POWER_INTERFACE.ReadPerfIoPort", read_perf_io_port, 0xc0, 0x40, true, 0xc7d4496d7b4c5d68)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(uint32_t, uint16_t, uint16_t, uint32_t, uint32_t)>*), "_HIDDEN_PROCESSOR_POWER_INTERFACE.WritePerfIoPort", write_perf_io_port, 0x100, 0x40, true, 0x46102d08fb158011)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif