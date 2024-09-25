#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V2.Version", version, 0x0, 0x20, true, 0xe8ae52d8ad820692)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V2.Size", size, 0x20, 0x20, true, 0xe9b3547caa184fe5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V2.ComponentCount", component_count, 0x40, 0x20, true, 0xb4ba5521bd7ed838)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V2.Flags", flags, 0x60, 0x20, true, 0x4e978af55b363db2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V2.UnitMinIdleTimeoutInMS", unit_min_idle_timeout_in_ms, 0x80, 0x20, true, 0x479a60194ac895ea)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V2.AdapterIdleTimeoutInMS", adapter_idle_timeout_in_ms, 0x80, 0x20, true, 0x45036fc633d88d14)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_pofx_component_t, 1>), "_STOR_POFX_DEVICE_V2.Components", components, 0xc0, 0x0, true, 0xac47baede4982995)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif