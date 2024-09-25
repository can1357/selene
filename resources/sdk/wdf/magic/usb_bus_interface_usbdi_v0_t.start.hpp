#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V0.Size", size, 0x0, 0x10, true, 0xc8c3d0827e087af4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V0.Version", version, 0x10, 0x10, true, 0xb74b7dd82becfc4)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_BUS_INTERFACE_USBDI_V0.BusContext", bus_context, 0x40, 0x40, true, 0xca6841a147c90245)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V0.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x4be6eb03bba942cb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V0.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x6b7b41244404869c)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_getusbdi_version_t ), "_USB_BUS_INTERFACE_USBDI_V0.GetUSBDIVersion", get_usbdi_version, 0x100, 0x40, true, 0x169caf37cea2d4c5)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_USB_BUS_INTERFACE_USBDI_V0.QueryBusTime", query_bus_time, 0x140, 0x40, true, 0x9289b9f03200d641)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_submit_iso_out_urb_t ), "_USB_BUS_INTERFACE_USBDI_V0.SubmitIsoOutUrb", submit_iso_out_urb, 0x180, 0x40, true, 0x56e7ee81b722abd1)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_query_bus_information_t ), "_USB_BUS_INTERFACE_USBDI_V0.QueryBusInformation", query_bus_information, 0x1c0, 0x40, true, 0x7cab6a8c70ef9a9f)
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
#endif