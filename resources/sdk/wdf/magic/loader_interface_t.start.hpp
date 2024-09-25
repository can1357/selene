#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::interface_header_t), "_WDF_LOADER_INTERFACE.Header", header, 0x0, 0x80, true, 0x280f66007d668c7d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pwdf_register_library_t ), "_WDF_LOADER_INTERFACE.RegisterLibrary", register_library, 0x80, 0x40, true, 0xbdfc821734cd4faa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pwdf_version_bind_t ), "_WDF_LOADER_INTERFACE.VersionBind", version_bind, 0xc0, 0x40, true, 0x514a3da4d859c184)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pwdf_version_unbind_t ), "_WDF_LOADER_INTERFACE.VersionUnbind", version_unbind, 0x100, 0x40, true, 0x8e68331589f2fa60)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pwdf_ldr_diagnostics_value_by_name_as_ulong_t ), "_WDF_LOADER_INTERFACE.DiagnosticsValueByNameAsULONG", diagnostics_value_by_name_as_ulong, 0x140, 0x40, true, 0x38040cf38c4c2c1f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif