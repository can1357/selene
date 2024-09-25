#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct wdf::class_extension_descriptor_t*), "_WDF_CLASS_EXTENSION_DESCRIPTOR.Next", next, 0x0, 0x40, true, 0x4eb8c3d0f625e752)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_CLASS_EXTENSION_DESCRIPTOR.Size", size, 0x40, 0x20, true, 0xa364431776a17bd3)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::driver_object_t*, nt::unicode_view*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR.Bind", bind, 0x80, 0x40, true, 0xc59c831be6796303)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::driver_object_t*)>*), "_WDF_CLASS_EXTENSION_DESCRIPTOR.Unbind", unbind, 0xc0, 0x40, true, 0x4f87e4cd25eab96)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif