#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_5_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_5.Next", next, 0x0, 0x0, false, 0xb159f79f33311d4d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_5.Size", size, 0x0, 0x0, false, 0x275983daffca166b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_5.Bind", bind, 0x0, 0x0, false, 0x7c8d7f975239f7e5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_5.Unbind", unbind, 0x0, 0x0, false, 0xcd1b6edda689a92b)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif