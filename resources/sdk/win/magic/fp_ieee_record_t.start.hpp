#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_ieee_value_t), "_FP_IEEE_RECORD.Operand1", operand1, 0x0, 0xc0, true, 0x509f7fb125446bad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_ieee_value_t), "_FP_IEEE_RECORD.Operand2", operand2, 0xc0, 0xc0, true, 0xe30cec48b01cafb5)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::fp_ieee_value_t), "_FP_IEEE_RECORD.Result", result, 0x180, 0xc0, true, 0x192e7cf4d18ed3b6)
#else
#define _m00
#define _m01
#define _m02
#endif