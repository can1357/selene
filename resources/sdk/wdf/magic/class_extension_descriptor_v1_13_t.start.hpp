#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_13_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_13.Next", next, 0x0, 0x0, false, 0xd857e8b5b9c8081f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_13.Size", size, 0x0, 0x0, false, 0x1c8139849abd0652)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_13.Bind", bind, 0x0, 0x0, false, 0x12d22ce28b7a02a3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_13.Unbind", unbind, 0x0, 0x0, false, 0x3c04011b8890b2e4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif