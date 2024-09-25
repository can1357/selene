#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pep::acpi_spb_resource_t), "_PEP_ACPI_SPB_UART_RESOURCE.SpbCommon", spb_common, 0x0, 0x40, true, 0xcc1086ff52d03d22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PEP_ACPI_SPB_UART_RESOURCE.BaudRate", baud_rate, 0x140, 0x20, true, 0xd5f05cd1480304ca)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_SPB_UART_RESOURCE.RxBufferSize", rx_buffer_size, 0x160, 0x10, true, 0x2a8b363f7874df68)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_PEP_ACPI_SPB_UART_RESOURCE.TxBufferSize", tx_buffer_size, 0x170, 0x10, true, 0x11a703cbcd051e32)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_SPB_UART_RESOURCE.Parity", parity, 0x180, 0x8, true, 0x301eb988295c2f89)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_PEP_ACPI_SPB_UART_RESOURCE.LinesInUse", lines_in_use, 0x188, 0x8, true, 0xbef0d2ca8c20a495)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif