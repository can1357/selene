#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALX2APIC.Type", type, 0x0, 0x0, false, 0x5afa20b0b2cea0b7)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PROCLOCALX2APIC.Length", length, 0x0, 0x0, false, 0xf5a0cb670af84ac6)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALX2APIC.APICID", apicid, 0x0, 0x0, false, 0xaf2249520b38d061)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALX2APIC.Flags", flags, 0x0, 0x0, false, 0x9d6ad6672ed7897d)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCLOCALX2APIC.ACPIProcessorID", acpi_processor_id, 0x0, 0x0, false, 0x40a02a1d7caee3e5)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif