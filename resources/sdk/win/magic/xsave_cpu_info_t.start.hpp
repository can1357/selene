#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "XSAVE_CPU_INFO.Processor", processor, 0x0, 0x8, true, 0x624c0aa461f6a7fa)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "XSAVE_CPU_INFO.Family", family, 0x10, 0x10, true, 0x14d8868295034e6b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "XSAVE_CPU_INFO.Model", model, 0x20, 0x10, true, 0xeadc60412be0066a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "XSAVE_CPU_INFO.Stepping", stepping, 0x30, 0x10, true, 0x59e4cc3cf9277494)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "XSAVE_CPU_INFO.ExtendedModel", extended_model, 0x40, 0x10, true, 0x4cf75bf176bc9e08)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "XSAVE_CPU_INFO.ExtendedFamily", extended_family, 0x60, 0x20, true, 0x1c830452507bce7f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "XSAVE_CPU_INFO.MicrocodeVersion", microcode_version, 0x80, 0x40, true, 0xc439fdb457288f9c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif