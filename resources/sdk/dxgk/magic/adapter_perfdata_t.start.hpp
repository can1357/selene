#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATA.MemoryFrequency", memory_frequency, 0x0, 0x40, true, 0xb54d91e98a17dc6c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATA.MaxMemoryFrequency", max_memory_frequency, 0x40, 0x40, true, 0x944f6034c5e53dc)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATA.MaxMemoryFrequencyOC", max_memory_frequency_oc, 0x80, 0x40, true, 0x5bfd4bd93fc3dc5d)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATA.MemoryBandwidth", memory_bandwidth, 0xc0, 0x40, true, 0xc09cca0ce7640289)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATA.PCIEBandwidth", pcie_bandwidth, 0x100, 0x40, true, 0x200c4775ce0f6733)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ADAPTER_PERFDATA.FanRPM", fan_rpm, 0x140, 0x20, true, 0xf707455c383b6dd3)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ADAPTER_PERFDATA.Power", power, 0x160, 0x20, true, 0xe76e363020d064bf)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ADAPTER_PERFDATA.Temperature", temperature, 0x180, 0x20, true, 0x31be949be2d9591c)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGK_ADAPTER_PERFDATA.PowerStateOverride", power_state_override, 0x1a0, 0x8, true, 0x67e30729d29ed50e)
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
#endif