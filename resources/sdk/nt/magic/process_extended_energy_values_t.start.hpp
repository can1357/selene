#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_energy_values_t), "_PROCESS_EXTENDED_ENERGY_VALUES.Base", base, 0x0, 0x80, true, 0x13c9d31ef4003c8e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::process_energy_values_extension_t), "_PROCESS_EXTENDED_ENERGY_VALUES.Extension", extension, 0x880, 0x0, true, 0x74cd8878b1a3dec7)
#else
#define _m00
#define _m01
#endif