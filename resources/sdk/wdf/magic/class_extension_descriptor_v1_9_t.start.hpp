#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_9_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_9.Next", next, 0x0, 0x0, false, 0xa869569e24fea967)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_9.Size", size, 0x0, 0x0, false, 0xef9a5b552f1a813b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_9.Bind", bind, 0x0, 0x0, false, 0x80322be5cadbc7ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_9.Unbind", unbind, 0x0, 0x0, false, 0xd5de3e33df1137e3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif