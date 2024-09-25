#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CLIENT_INFO.Size", size, 0x0, 0x20, true, 0x3da1e7989a19fbe6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_CLIENT_INFO.RegistryPath", registry_path, 0x40, 0x40, true, 0xb7071cc0e0a5c546)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::driver_object_t*), "_CLIENT_INFO.DriverObject", driver_object, 0x0, 0x0, false, 0x4f3b31627a344c7d)
#else
#define _m00
#define _m01
#define _m02
#endif