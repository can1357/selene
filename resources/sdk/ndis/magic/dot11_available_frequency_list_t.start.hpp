#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_DOT11_AVAILABLE_FREQUENCY_LIST.Header", header, 0x0, 0x20, true, 0xe962e3b808e470a2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_AVAILABLE_FREQUENCY_LIST.uNumOfEntries", u_num_of_entries, 0x20, 0x20, true, 0x146d0ce789de6793)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_DOT11_AVAILABLE_FREQUENCY_LIST.uTotalNumOfEntries", u_total_num_of_entries, 0x40, 0x20, true, 0x19028cf59d10c08f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 1>), "_DOT11_AVAILABLE_FREQUENCY_LIST.uFrequencyValue", u_frequency_value, 0x60, 0x20, true, 0xa393554d8deb62e4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif