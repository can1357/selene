#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_CREATE_CONFIG.Size", size, 0x0, 0x20, true, 0xfdc5872168703a22)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDF_USB_DEVICE_CREATE_CONFIG.USBDClientContractVersion", usbd_client_contract_version, 0x20, 0x20, true, 0x79811e5c13d68e6d)
#else
#define _m00
#define _m01
#endif