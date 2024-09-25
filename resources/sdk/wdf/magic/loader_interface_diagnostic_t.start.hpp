#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct wdf::interface_header_t), "_WDF_LOADER_INTERFACE_DIAGNOSTIC.Header", header, 0x0, 0x80, true, 0xcedeb7c1732480af)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pwdf_ldr_diagnostics_value_by_name_as_ulong_t ), "_WDF_LOADER_INTERFACE_DIAGNOSTIC.DiagnosticsValueByNameAsULONG", diagnostics_value_by_name_as_ulong, 0x80, 0x40, true, 0x40227862777bfeac)
#else
#define _m00
#define _m01
#endif