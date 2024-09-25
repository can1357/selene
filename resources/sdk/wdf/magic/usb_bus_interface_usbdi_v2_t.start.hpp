#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V2.Size", size, 0x0, 0x10, true, 0x4c9363018f67c98d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V2.Version", version, 0x10, 0x10, true, 0xcfa3f5ebdf160933)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_BUS_INTERFACE_USBDI_V2.BusContext", bus_context, 0x40, 0x40, true, 0x1cfbda71963e5a77)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V2.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x71889418468451cd)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V2.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x2bd03bdb4fae6cd8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_getusbdi_version_t ), "_USB_BUS_INTERFACE_USBDI_V2.GetUSBDIVersion", get_usbdi_version, 0x100, 0x40, true, 0x8dce5752511f7b63)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_USB_BUS_INTERFACE_USBDI_V2.QueryBusTime", query_bus_time, 0x140, 0x40, true, 0x85db12716804dbb3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_submit_iso_out_urb_t ), "_USB_BUS_INTERFACE_USBDI_V2.SubmitIsoOutUrb", submit_iso_out_urb, 0x180, 0x40, true, 0x7b44d4fa0208f346)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_query_bus_information_t ), "_USB_BUS_INTERFACE_USBDI_V2.QueryBusInformation", query_bus_information, 0x1c0, 0x40, true, 0x2ca5862568fca6e)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_USB_BUS_INTERFACE_USBDI_V2.IsDeviceHighSpeed", is_device_high_speed, 0x200, 0x40, true, 0xa08c39ff8996dbe4)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_enum_log_entry_t ), "_USB_BUS_INTERFACE_USBDI_V2.EnumLogEntry", enum_log_entry, 0x240, 0x40, true, 0x183d26a7aa2fe4bf)
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
#endif