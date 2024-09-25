#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALAPIC.Type", type, 0x0, 0x8, true, 0x998f82232e0205d9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALAPIC.Length", length, 0x8, 0x8, true, 0x4d94e8f60d6086ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALAPIC.ACPIProcessorID", acpi_processor_id, 0x10, 0x8, true, 0xa9b3ec120c53db4c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALAPIC.APICID", apicid, 0x18, 0x8, true, 0x1f49cf05a57b7ba8)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALAPIC.Flags", flags, 0x20, 0x20, true, 0xf4e14d147e9d2dc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif