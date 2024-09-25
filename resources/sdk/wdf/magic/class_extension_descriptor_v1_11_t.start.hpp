#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pcwdf_class_extension_descriptor_v1_11_t ), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_11.Next", next, 0x0, 0x0, false, 0xebd50f5ade25ca6)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_11.Size", size, 0x0, 0x0, false, 0x2ba3a6162b0185ae)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_11.Bind", bind, 0x0, 0x0, false, 0xe22bf8315290e03f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR_V1_11.Unbind", unbind, 0x0, 0x0, false, 0x18d795242d6bbaf9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif