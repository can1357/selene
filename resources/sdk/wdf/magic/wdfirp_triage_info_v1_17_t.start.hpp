#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_17.FxIrpSize", fx_irp_size, 0x0, 0x0, false, 0xc36dd79f7cb735f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_17.IrpPtr", irp_ptr, 0x0, 0x0, false, 0x1dee88c7815b0e01)
#else
#define _m00
#define _m01
#endif