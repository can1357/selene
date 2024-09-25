#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagKERNINGPAIR.wFirst", w_first, 0x0, 0x10, true, 0xad534627e33807ee)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "tagKERNINGPAIR.wSecond", w_second, 0x10, 0x10, true, 0xe46106064e64ab43)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "tagKERNINGPAIR.iKernAmount", i_kern_amount, 0x20, 0x20, true, 0xcbd9b0adcc5cd73c)
#else
#define _m00
#define _m01
#define _m02
#endif