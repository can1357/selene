#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_GET_DEVICE_SPECIFIC_DATA.Signature", signature, 0x0, 0x20, true, 0x5eb0efc1d8d9b2fe)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::guid_t), "_ACPI_GET_DEVICE_SPECIFIC_DATA.Section", section, 0x20, 0x80, true, 0xac3f4aec8cc0bed6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_ACPI_GET_DEVICE_SPECIFIC_DATA.PropertyNameLength", property_name_length, 0xa0, 0x20, true, 0x1da816531a683f40)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_ACPI_GET_DEVICE_SPECIFIC_DATA.PropertyName", property_name, 0xc0, 0x8, true, 0x6dc4f271ec1f59d7)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif