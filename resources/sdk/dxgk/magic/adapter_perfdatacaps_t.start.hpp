#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATACAPS.MaxMemoryBandwidth", max_memory_bandwidth, 0x0, 0x40, true, 0xd2662c08ad86fa82)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_DXGK_ADAPTER_PERFDATACAPS.MaxPCIEBandwidth", max_pcie_bandwidth, 0x40, 0x40, true, 0x32f17160505c2cf7)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ADAPTER_PERFDATACAPS.MaxFanRPM", max_fan_rpm, 0x80, 0x20, true, 0x93da7504200a8382)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ADAPTER_PERFDATACAPS.TemperatureMax", temperature_max, 0xa0, 0x20, true, 0x2e94c77db7073b15)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_ADAPTER_PERFDATACAPS.TemperatureWarning", temperature_warning, 0xc0, 0x20, true, 0x8318e7c4d44abad7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif