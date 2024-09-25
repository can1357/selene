#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION.NumberOfRanges", number_of_ranges, 0x0, 0x10, true, 0x80a583cd16c98b80)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pprocess_dynamic_enforced_address_range_t ), "_PROCESS_DYNAMIC_ENFORCED_ADDRESS_RANGES_INFORMATION.Ranges", ranges, 0x40, 0x40, true, 0x9111b226e3850e50)
#else
#define _m00
#define _m01
#endif