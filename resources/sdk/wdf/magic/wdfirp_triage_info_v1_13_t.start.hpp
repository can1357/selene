#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_13.FxIrpSize", fx_irp_size, 0x0, 0x0, false, 0x78423b58598d4dd9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_13.IrpPtr", irp_ptr, 0x0, 0x0, false, 0xe21dd59685bfa8f4)
#else
#define _m00
#define _m01
#endif