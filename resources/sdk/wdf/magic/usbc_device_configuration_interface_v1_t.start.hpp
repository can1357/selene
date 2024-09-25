#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.Size", size, 0x0, 0x10, true, 0x95e236478814c04b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.Version", version, 0x10, 0x10, true, 0x5e0411b6e50ebd96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.Context", context, 0x40, 0x40, true, 0x2a870be0c3dc4eaa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xf1c8e73729bce74c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x77142c9b3ae3da48)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(usbc_start_device_callback_t ), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.StartDeviceCallback", start_device_callback, 0x100, 0x40, true, 0xedbca7b615cd5398)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(usbc_pdo_enable_callback_t ), "_USBC_DEVICE_CONFIGURATION_INTERFACE_V1.PdoEnableCallback", pdo_enable_callback, 0x140, 0x40, true, 0x4f401e2639a11d01)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif