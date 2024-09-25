#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::acpi_resource_type_t), "_PEP_ACPI_GPIO_RESOURCE.Type", type, 0x0, 0x20, true, 0x3835a758b5df2ea1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pep::acpi_resource_flags_t), "_PEP_ACPI_GPIO_RESOURCE.Flags", flags, 0x20, 0x20, true, 0x1def538da3d96333)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_PEP_ACPI_GPIO_RESOURCE.InterruptType", interrupt_type, 0x40, 0x20, true, 0x791ad7e709b23f3c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_PEP_ACPI_GPIO_RESOURCE.InterruptPolarity", interrupt_polarity, 0x60, 0x20, true, 0x1c88a992e2631400)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::gpio_pin_config_type_t), "_PEP_ACPI_GPIO_RESOURCE.PinConfig", pin_config, 0x80, 0x20, true, 0x4a0ced0ff6404480)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::gpio_pin_iorestriction_type_t), "_PEP_ACPI_GPIO_RESOURCE.IoRestrictionType", io_restriction_type, 0xa0, 0x20, true, 0x6520d78bdd920227)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_GPIO_RESOURCE.DriveStrength", drive_strength, 0xc0, 0x10, true, 0x1e900b83a2f661c7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_GPIO_RESOURCE.DebounceTimeout", debounce_timeout, 0xd0, 0x10, true, 0x42380ee7f373b162)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t*), "_PEP_ACPI_GPIO_RESOURCE.PinTable", pin_table, 0x100, 0x40, true, 0xb47ab492ee0b2466)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_GPIO_RESOURCE.PinCount", pin_count, 0x140, 0x10, true, 0x2b46de9b6b8db913)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_GPIO_RESOURCE.ResourceSourceIndex", resource_source_index, 0x150, 0x8, true, 0x32ea273c0a0f2c9a)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view*), "_PEP_ACPI_GPIO_RESOURCE.ResourceSourceName", resource_source_name, 0x180, 0x40, true, 0xb3a8145ae2fab10b)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_PEP_ACPI_GPIO_RESOURCE.VendorData", vendor_data, 0x1c0, 0x40, true, 0x5221af5fb1182e49)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_GPIO_RESOURCE.VendorDataLength", vendor_data_length, 0x200, 0x10, true, 0xe972761617108fd9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#define _m13
#endif