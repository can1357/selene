#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pep::acpi_resource_type_t), "_PEP_ACPI_RESOURCE.Type", type, 0x0, 0x20, true, 0x6279de78c0ad9d6d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_io_memory_resource_t), "_PEP_ACPI_RESOURCE.IoMemory", io_memory, 0x0, 0x0, true, 0x2059d8ce95813e89)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_interrupt_resource_t), "_PEP_ACPI_RESOURCE.Interrupt", interrupt, 0x0, 0x0, true, 0xe29df7d8d8c14ce9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_gpio_resource_t), "_PEP_ACPI_RESOURCE.Gpio", gpio, 0x0, 0x40, true, 0x3c5b201cd939dc7e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_spb_i2c_resource_t), "_PEP_ACPI_RESOURCE.SpbI2c", spb_i2c, 0x0, 0x80, true, 0x8a4c5a2f5c49fa1a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_spb_spi_resource_t), "_PEP_ACPI_RESOURCE.SpbSpi", spb_spi, 0x0, 0xc0, true, 0x9aa2f6e97235143e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_spb_uart_resource_t), "_PEP_ACPI_RESOURCE.SpbUart", spb_uart, 0x0, 0xc0, true, 0xd525960b2de4bfad)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_extended_address_t), "_PEP_ACPI_RESOURCE.ExtendedAddress", extended_address, 0x0, 0x40, true, 0xae7596d7773858eb)
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