#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V1.Size", size, 0x0, 0x10, true, 0x1e3e1449d1b3a195)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V1.Version", version, 0x10, 0x10, true, 0x647fe4397bbd0b96)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_BUS_INTERFACE_USBDI_V1.BusContext", bus_context, 0x40, 0x40, true, 0x7b31ea7795d4f0c9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V1.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x60b3a274c8157dc2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V1.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xc00631817c075fea)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_getusbdi_version_t ), "_USB_BUS_INTERFACE_USBDI_V1.GetUSBDIVersion", get_usbdi_version, 0x100, 0x40, true, 0x2b5e05f57b4760ae)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_USB_BUS_INTERFACE_USBDI_V1.QueryBusTime", query_bus_time, 0x140, 0x40, true, 0x7e4457186d4c8cdc)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_submit_iso_out_urb_t ), "_USB_BUS_INTERFACE_USBDI_V1.SubmitIsoOutUrb", submit_iso_out_urb, 0x180, 0x40, true, 0x793c1f4892783e4e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_query_bus_information_t ), "_USB_BUS_INTERFACE_USBDI_V1.QueryBusInformation", query_bus_information, 0x1c0, 0x40, true, 0xab88be40c4e55d18)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_USB_BUS_INTERFACE_USBDI_V1.IsDeviceHighSpeed", is_device_high_speed, 0x200, 0x40, true, 0x86db4f0b09d2c9f7)
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
#endif