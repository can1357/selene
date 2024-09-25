#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_spb_resource_t), "_PEP_ACPI_SPB_I2C_RESOURCE.SpbCommon", spb_common, 0x0, 0x40, true, 0xef066ad8ce888c12)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_ACPI_SPB_I2C_RESOURCE.ConnectionSpeed", connection_speed, 0x140, 0x20, true, 0xc7fd7d46ca6e0364)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_SPB_I2C_RESOURCE.SlaveAddress", slave_address, 0x160, 0x10, true, 0xadd8899e2d1d2a96)
#else
#define _m00
#define _m01
#define _m02
#endif