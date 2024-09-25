#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALSAPIC.Type", type, 0x0, 0x8, true, 0x889f36f7e04a54a9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALSAPIC.Length", length, 0x8, 0x8, true, 0x78f0b68c58f5ee81)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALSAPIC.ACPIProcessorID", acpi_processor_id, 0x10, 0x8, true, 0xac6ab4560a1d27d3)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALSAPIC.APICID", apicid, 0x18, 0x8, true, 0x9c60c089afe09765)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALSAPIC.APICEID", apiceid, 0x20, 0x8, true, 0xebf342f69de7ea39)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALSAPIC.Flags", flags, 0x40, 0x20, true, 0xd3ac56943a36b603)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALSAPIC.ACPIProcessorUIDInteger", acpi_processor_uid_integer, 0x60, 0x20, true, 0x6c1102426f7f0343)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<char, 1>), "_PROCLOCALSAPIC.ACPIProcessorUIDString", acpi_processor_uid_string, 0x80, 0x8, true, 0x87b9a83e64784a4f)
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