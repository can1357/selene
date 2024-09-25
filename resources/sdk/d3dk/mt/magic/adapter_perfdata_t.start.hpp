#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATA.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xa1b6589e124c6820)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATA.MemoryFrequency", memory_frequency, 0x40, 0x40, true, 0x4996aaae699f06c6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATA.MaxMemoryFrequency", max_memory_frequency, 0x80, 0x40, true, 0xf9d51e20f7b500d3)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATA.MaxMemoryFrequencyOC", max_memory_frequency_oc, 0xc0, 0x40, true, 0x624cdff362d0c4e8)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATA.MemoryBandwidth", memory_bandwidth, 0x100, 0x40, true, 0xd186b3bf53a613a1)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATA.PCIEBandwidth", pcie_bandwidth, 0x140, 0x40, true, 0x4c9c93c5d8dba579)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATA.FanRPM", fan_rpm, 0x180, 0x20, true, 0x10d61f2894598b51)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATA.Power", power, 0x1a0, 0x20, true, 0xd8a2711d4afaeb4a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATA.Temperature", temperature, 0x1c0, 0x20, true, 0xb839955f0d1c4e60)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_D3DKMT_ADAPTER_PERFDATA.PowerStateOverride", power_state_override, 0x1e0, 0x8, true, 0xe3157054b6b02b46)
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
#endif