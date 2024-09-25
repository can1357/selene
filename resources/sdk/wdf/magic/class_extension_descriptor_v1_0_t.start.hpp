#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_0_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_0.Next", next, 0x0, 0x0, false, 0x8ad04cb3dbce2b56)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_0.Size", size, 0x0, 0x0, false, 0x8849e99d9599b08d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_0.Bind", bind, 0x0, 0x0, false, 0x9ca8d150714b7ea5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_0.Unbind", unbind, 0x0, 0x0, false, 0x74b4eb15a8e4d5ca)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif