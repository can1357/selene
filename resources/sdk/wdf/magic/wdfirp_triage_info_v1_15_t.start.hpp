#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_15.FxIrpSize", fx_irp_size, 0x0, 0x0, false, 0xfca9d4d8221b2c4b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFIRP_TRIAGE_INFO_V1_15.IrpPtr", irp_ptr, 0x0, 0x0, false, 0x71bd78872cab4f57)
#else
#define _m00
#define _m01
#endif