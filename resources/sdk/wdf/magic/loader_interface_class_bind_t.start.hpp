#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::interface_header_t), "_WDF_LOADER_INTERFACE_CLASS_BIND.Header", header, 0x0, 0x80, true, 0xe46f22681b7416b8)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_version_bind_class_t ), "_WDF_LOADER_INTERFACE_CLASS_BIND.VersionBindClass", version_bind_class, 0x80, 0x40, true, 0xad1a9f6a19e2fb73)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pfn_wdf_version_unbind_class_t ), "_WDF_LOADER_INTERFACE_CLASS_BIND.VersionUnbindClass", version_unbind_class, 0xc0, 0x40, true, 0x5ae399c374e45487)
#else
#define _m00
#define _m01
#define _m02
#endif