#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t*), "WinRTActivationPropertiesData.activatableClassId", activatable_class_id, 0x0, 0x40, true, 0xe9bb404f55037015)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::hstring_t*), "WinRTActivationPropertiesData.packageFullName", package_full_name, 0x40, 0x40, true, 0x995e7debfa8642ee)
#else
#define _m00
#define _m01
#endif