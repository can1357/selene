#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_7_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_7.Next", next, 0x0, 0x0, false, 0xf9504c786bb6b8d7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_7.Size", size, 0x0, 0x0, false, 0x810c44c5319e39a8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_7.Bind", bind, 0x0, 0x0, false, 0xe3c39fd14e700ebc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_7.Unbind", unbind, 0x0, 0x0, false, 0x7adbbc4790645915)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif