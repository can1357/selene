#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_11.FxIrpSize", fx_irp_size, 0x0, 0x0, false, 0x2d322e7f02ba4e07)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_11.IrpPtr", irp_ptr, 0x0, 0x0, false, 0x2119d85c0bf5a7cd)
#else
#define _m00
#define _m01
#endif