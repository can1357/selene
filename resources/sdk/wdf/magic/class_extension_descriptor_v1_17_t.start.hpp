#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_17_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_17.Next", next, 0x0, 0x0, false, 0x609f98e94d82aa92)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_17.Size", size, 0x0, 0x0, false, 0xf73013736654d742)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_17.Bind", bind, 0x0, 0x0, false, 0x5512e36b8f5861b9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_17.Unbind", unbind, 0x0, 0x0, false, 0x997b74aef6196b3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif