#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_spb_resource_t), "_PEP_ACPI_SPB_SPI_RESOURCE.SpbCommon", spb_common, 0x0, 0x40, true, 0x9e83b5eb4039c338)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_ACPI_SPB_SPI_RESOURCE.ConnectionSpeed", connection_speed, 0x140, 0x20, true, 0x6914dced1b8c9ae8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_SPB_SPI_RESOURCE.DataBitLength", data_bit_length, 0x160, 0x8, true, 0x99b1327cee2a17d0)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_SPB_SPI_RESOURCE.Phase", phase, 0x168, 0x8, true, 0x7585961174ca32d1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_SPB_SPI_RESOURCE.Polarity", polarity, 0x170, 0x8, true, 0x91dc4f9ae1bde14d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_SPB_SPI_RESOURCE.DeviceSelection", device_selection, 0x180, 0x10, true, 0x9853e958d1ce1b05)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif