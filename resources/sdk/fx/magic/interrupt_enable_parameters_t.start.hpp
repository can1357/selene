#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::interrupt_t*), "FxInterruptEnableParameters.Interrupt", interrupt, 0x0, 0x40, true, 0x8ecc98aa7d2af27e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxInterruptEnableParameters.ReturnVal", return_val, 0x40, 0x20, true, 0x7a2cfcb481f7bb24)
#else
#define _m00
#define _m01
#endif