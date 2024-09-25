#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO.FxIrpSize", fx_irp_size, 0x0, 0x20, true, 0x634a3e1d13cdc01d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO.IrpPtr", irp_ptr, 0x20, 0x20, true, 0x6ba0a1440a183457)
#else
#define _m00
#define _m01
#endif