#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct win::eisa_memory_type_t), "_EISA_MEMORY_CONFIGURATION.ConfigurationByte", configuration_byte, 0x0, 0x8, true, 0x8d4b0c6634a8c20b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EISA_MEMORY_CONFIGURATION.DataSize", data_size, 0x8, 0x8, true, 0xcad15a3009e8cbbb)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EISA_MEMORY_CONFIGURATION.AddressLowWord", address_low_word, 0x10, 0x10, true, 0x76607dbcecfb1df2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_EISA_MEMORY_CONFIGURATION.AddressHighByte", address_high_byte, 0x20, 0x8, true, 0x4c871371528f6716)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_EISA_MEMORY_CONFIGURATION.MemorySize", memory_size, 0x28, 0x10, true, 0x6b66a162b69e5767)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif