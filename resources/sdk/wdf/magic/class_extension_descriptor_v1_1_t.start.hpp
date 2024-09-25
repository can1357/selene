#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_1_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_1.Next", next, 0x0, 0x0, false, 0x94d3b394bfbafe08)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_1.Size", size, 0x0, 0x0, false, 0xbef30e5a5170b4cb)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_1.Bind", bind, 0x0, 0x0, false, 0x665c7be559434724)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_1.Unbind", unbind, 0x0, 0x0, false, 0x144dc0f46200331c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif