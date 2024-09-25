#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REGISTER_COMPOSITE_DEVICE.Version", version, 0x0, 0x10, true, 0xb1c42264bda9e79a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_REGISTER_COMPOSITE_DEVICE.Size", size, 0x10, 0x10, true, 0xfa569159e04f1435)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::composite_device_capabilities_t), "_REGISTER_COMPOSITE_DEVICE.CapabilityFlags", capability_flags, 0x80, 0x20, true, 0x12011691536ff33b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_REGISTER_COMPOSITE_DEVICE.FunctionCount", function_count, 0xa0, 0x20, true, 0xba844c10dfaa8a58)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif