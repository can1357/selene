#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATACAPS.PhysicalAdapterIndex", physical_adapter_index, 0x0, 0x20, true, 0xf62c78609141df84)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATACAPS.MaxMemoryBandwidth", max_memory_bandwidth, 0x40, 0x40, true, 0x674d0dad7bdfc1bd)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_D3DKMT_ADAPTER_PERFDATACAPS.MaxPCIEBandwidth", max_pcie_bandwidth, 0x80, 0x40, true, 0x137692feb02bc361)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATACAPS.MaxFanRPM", max_fan_rpm, 0xc0, 0x20, true, 0xb197c36c4a40b5df)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATACAPS.TemperatureMax", temperature_max, 0xe0, 0x20, true, 0x5680b68da961dc09)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_D3DKMT_ADAPTER_PERFDATACAPS.TemperatureWarning", temperature_warning, 0x100, 0x20, true, 0xd3d54266b0816ade)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif