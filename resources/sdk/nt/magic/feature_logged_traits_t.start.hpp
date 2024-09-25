#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FEATURE_LOGGED_TRAITS.version", version, 0x0, 0x10, true, 0xfbea9ed33e71a18e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "FEATURE_LOGGED_TRAITS.baseVersion", base_version, 0x10, 0x10, true, 0xb225d4f0c3c74f51)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FEATURE_LOGGED_TRAITS.stage", stage, 0x20, 0x8, true, 0x82eb99b386ad1b30)
#else
#define _m00
#define _m01
#define _m02
#endif