#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LEARNING_MODE_DATA.Settings", settings, 0x0, 0x20, true, 0xef7d5f4394377675)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LEARNING_MODE_DATA.Enabled", enabled, 0x20, 0x8, true, 0x161dc8e20f933498)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_LEARNING_MODE_DATA.PermissiveModeEnabled", permissive_mode_enabled, 0x28, 0x8, true, 0x5193bc18172a32f2)
#else
#define _m00
#define _m01
#define _m02
#endif