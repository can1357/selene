#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_ADAPTER_INFO.Version", version, 0x0, 0x20, true, 0xe2c59119021c0502)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_entry_t), "_DUMP_ADAPTER_INFO.Entry", entry, 0x40, 0x80, true, 0x19038cdcd998e192)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_DUMP_ADAPTER_INFO.Id", id, 0xc0, 0x80, true, 0x1f928b5f5633e55e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_ADAPTER_INFO.Flags", flags, 0x140, 0x20, true, 0x5c3ee36dd9839b1b)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_ADAPTER_INFO.ContextSize", context_size, 0x160, 0x20, true, 0x1fc4e3f35b4ba4ee)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_ADAPTER_INFO.Context", context, 0x180, 0x40, true, 0x7194cb235bc7a6b1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::dump_driver_info_t*), "_DUMP_ADAPTER_INFO.DriverInfo", driver_info, 0x1c0, 0x40, true, 0x338d2d01c4042e86)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_ADAPTER_INFO.DmaAdapterObject", dma_adapter_object, 0x200, 0x40, true, 0xbc61811ae5655896)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_ADAPTER_INFO.CommonBufferSize", common_buffer_size, 0x240, 0x20, true, 0x9e633166582e278)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 2>), "_DUMP_ADAPTER_INFO.CommonBufferVA", common_buffer_va, 0x280, 0x80, true, 0xf4fcd54be4a06c96)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int64_t, 2>), "_DUMP_ADAPTER_INFO.CommonBufferPA", common_buffer_pa, 0x300, 0x80, true, 0x971948d197858d2a)
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