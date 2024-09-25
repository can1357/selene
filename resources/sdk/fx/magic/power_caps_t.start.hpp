#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FxPowerCaps.Caps", caps, 0x0, 0x10, true, 0xf9e5b19889ebf63b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerCaps.DeviceWake", device_wake, 0x10, 0x8, true, 0xee6516f66feaff83)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxPowerCaps.SystemWake", system_wake, 0x18, 0x8, true, 0x5b7d06d6ff22f171)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerCaps.States", states, 0x20, 0x20, true, 0x271a78d388b44f8c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerCaps.D1Latency", d1_latency, 0x40, 0x20, true, 0x399a785a6f680302)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerCaps.D2Latency", d2_latency, 0x60, 0x20, true, 0xcbcc9e415c9575ff)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "FxPowerCaps.D3Latency", d3_latency, 0x80, 0x20, true, 0x2ca4abe12394f881)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif