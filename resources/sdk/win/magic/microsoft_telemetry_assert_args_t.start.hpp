#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MicrosoftTelemetryAssertArgs.Version", version, 0x0, 0x0, false, 0xca358a42663d72fb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MicrosoftTelemetryAssertArgs.ImageBase", image_base, 0x0, 0x0, false, 0x24972382073f6459)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MicrosoftTelemetryAssertArgs.ReturnAddress", return_address, 0x0, 0x0, false, 0x1bf705a26b50c2c3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MicrosoftTelemetryAssertArgs.HasArgs", has_args, 0x0, 0x0, false, 0xfc44f6d084a6366d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const char*), "_MicrosoftTelemetryAssertArgs.OriginatingBinary", originating_binary, 0x0, 0x0, false, 0x5e03458b4e63f772)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MicrosoftTelemetryAssertArgs.Dword1", dword1, 0x0, 0x0, false, 0x7c9aa4054f4bdf81)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MicrosoftTelemetryAssertArgs.Dword2", dword2, 0x0, 0x0, false, 0xadae779c1a7950a4)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_MicrosoftTelemetryAssertArgs.DumpNeeded", dump_needed, 0x0, 0x0, false, 0x65d3e05cd3baa299)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif