#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_AsDevice.Pdo", pdo, 0x0, 0x0, false, 0xf0500729ca7c609a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::component_t), "_AsDevice.Component", component, 0x0, 0x0, false, 0x8a30f2ede4ae5c3a)
#else
#define _m00
#define _m01
#endif