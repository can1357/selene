#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::acpi_resource_type_t), "_PEP_ACPI_INTERRUPT_RESOURCE.Type", type, 0x0, 0x20, true, 0xad7bf06833735ed1)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_PEP_ACPI_INTERRUPT_RESOURCE.InterruptType", interrupt_type, 0x20, 0x20, true, 0x630c41f447da050c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_PEP_ACPI_INTERRUPT_RESOURCE.InterruptPolarity", interrupt_polarity, 0x40, 0x20, true, 0xcbcdd5942cae8f34)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union pep::acpi_resource_flags_t), "_PEP_ACPI_INTERRUPT_RESOURCE.Flags", flags, 0x60, 0x20, true, 0x2303985ea6d812e9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_INTERRUPT_RESOURCE.Count", count, 0x80, 0x8, true, 0xa47802bea8f3e359)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_PEP_ACPI_INTERRUPT_RESOURCE.Pins", pins, 0xc0, 0x40, true, 0x4e3190a9121f0041)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif