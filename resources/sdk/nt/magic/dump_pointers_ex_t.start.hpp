#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dump_pointers_version_t), "_DUMP_POINTERS_EX.Header", header, 0x0, 0x40, true, 0x1a06c0a55d9e3904)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.DumpData", dump_data, 0x40, 0x40, true, 0x30314a2a927578af)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.CommonBufferVa", common_buffer_va, 0x80, 0x40, true, 0xe056caaeceec34d4)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_EX.CommonBufferSize", common_buffer_size, 0xc0, 0x20, true, 0x2afdde4cfd060149)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DUMP_POINTERS_EX.AllocateCommonBuffers", allocate_common_buffers, 0xe0, 0x8, true, 0x78598a7a6ddaad91)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.DeviceObject", device_object, 0x100, 0x40, true, 0x50da0a0230636c8f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.DriverList", driver_list, 0x140, 0x40, true, 0xebc236c74f3b9fbd)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_EX.dwPortFlags", dw_port_flags, 0x180, 0x20, true, 0x30ee3b3463ea7de5)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_EX.MaxDeviceDumpSectionSize", max_device_dump_section_size, 0x1a0, 0x20, true, 0xea8d7e4eea779078)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_EX.MaxDeviceDumpLevel", max_device_dump_level, 0x1c0, 0x20, true, 0x44b39e1d07fb5461)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DUMP_POINTERS_EX.MaxTransferSize", max_transfer_size, 0x1e0, 0x20, true, 0x8f550022eebcec47)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.AdapterObject", adapter_object, 0x200, 0x40, true, 0x78baf1dde32b9c4c)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.MappedRegisterBase", mapped_register_base, 0x240, 0x40, true, 0xc23f0048dee76c89)
#define _m13 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t*), "_DUMP_POINTERS_EX.DeviceReady", device_ready, 0x280, 0x40, true, 0xad4d6ee21f1bddb0)
#define _m14 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_DUMP_POINTERS_EX.DumpDevicePowerOn", dump_device_power_on, 0x2c0, 0x40, true, 0x418e2849dc5c1e93)
#define _m15 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_DUMP_POINTERS_EX.DumpDevicePowerOnContext", dump_device_power_on_context, 0x300, 0x40, true, 0x5f59c85e6f7356fa)
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
#define _m15
#endif