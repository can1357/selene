#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_15_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_15.Next", next, 0x0, 0x0, false, 0x62e608aae13032ae)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_15.Size", size, 0x0, 0x0, false, 0x8b97e51d287f1614)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_15.Bind", bind, 0x0, 0x0, false, 0x2b84bfcadccf5fe5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_15.Unbind", unbind, 0x0, 0x0, false, 0x6bf019417b489d7a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif