#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_THERMAL_COOLING_INTERFACE.Size", size, 0x0, 0x10, true, 0xb560a05ea246f7a3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_THERMAL_COOLING_INTERFACE.Version", version, 0x10, 0x10, true, 0xb8e7ad63554d646e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_THERMAL_COOLING_INTERFACE.Context", context, 0x40, 0x40, true, 0x3a2e029b37586954)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_THERMAL_COOLING_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xf8511591ef97ae77)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_THERMAL_COOLING_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x371fe1a9d6f6a7c3)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_THERMAL_COOLING_INTERFACE.Flags", flags, 0x100, 0x20, true, 0x38a0b4b90dcb3ecd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_THERMAL_COOLING_INTERFACE.ActiveCooling", active_cooling, 0x140, 0x40, true, 0x36913db878de8b3f)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint32_t)>*), "_THERMAL_COOLING_INTERFACE.PassiveCooling", passive_cooling, 0x180, 0x40, true, 0x628b370778e4262)
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