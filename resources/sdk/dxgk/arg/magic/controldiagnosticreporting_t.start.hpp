#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_categories_t), "_DXGKARG_CONTROLDIAGNOSTICREPORTING.DiagnosticCategory", diagnostic_category, 0x0, 0x20, true, 0x5e20184e89eea6f9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_types_t), "_DXGKARG_CONTROLDIAGNOSTICREPORTING.RequestedDiagnostics", requested_diagnostics, 0x20, 0x20, true, 0xb077eec2ef1510a0)
#else
#define _m00
#define _m01
#endif