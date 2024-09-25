#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_SPECIFIC_PARAMETERS.ParamType", param_type, 0x0, 0x20, true, 0xbbf2a880cb37772f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CO_SPECIFIC_PARAMETERS.Length", length, 0x20, 0x20, true, 0x9f47c36b88a8ff2c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_CO_SPECIFIC_PARAMETERS.Parameters", parameters, 0x40, 0x8, true, 0x44f66e5b68c03880)
#else
#define _m00
#define _m01
#define _m02
#endif