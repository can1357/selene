#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_categories_t), "_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT.DiagnosticCategory", diagnostic_category, 0x0, 0x20, true, 0x5f672250467e89b2)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_types_t), "_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT.NoninvasiveTypes", noninvasive_types, 0x20, 0x20, true, 0x28f67f4ee714682f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct dxgk::diagnostic_types_t), "_DXGKARG_QUERYDIAGNOSTICTYPESSUPPORT.InvasiveTypes", invasive_types, 0x40, 0x20, true, 0xdb5048f993adb5b8)
#else
#define _m00
#define _m01
#define _m02
#endif