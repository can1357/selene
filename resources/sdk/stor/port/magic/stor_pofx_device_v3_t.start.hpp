#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.Version", version, 0x0, 0x20, true, 0x9104c3d8f603dea9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.Size", size, 0x20, 0x20, true, 0x4d1d58d66b438b47)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.ComponentCount", component_count, 0x40, 0x20, true, 0x7ab8daf3f3c5d597)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.Flags", flags, 0x60, 0x20, true, 0x75f11e9557eeb18c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.UnitMinIdleTimeoutInMS", unit_min_idle_timeout_in_ms, 0x80, 0x20, true, 0xa7e0d34264236d93)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.AdapterIdleTimeoutInMS", adapter_idle_timeout_in_ms, 0x80, 0x20, true, 0x2c8624218dc00ca3)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_STOR_POFX_DEVICE_V3.MinimumPowerCyclePeriodInMS", minimum_power_cycle_period_in_ms, 0xa0, 0x20, true, 0x1e3298d621c41405)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct stor::port::stor_pofx_component_t, 1>), "_STOR_POFX_DEVICE_V3.Components", components, 0xc0, 0x0, true, 0x403ebf3e93923d46)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif