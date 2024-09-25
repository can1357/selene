#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V3.Size", size, 0x0, 0x10, true, 0x79576288bb1de47b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_USB_BUS_INTERFACE_USBDI_V3.Version", version, 0x10, 0x10, true, 0x301720a05369bee0)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_USB_BUS_INTERFACE_USBDI_V3.BusContext", bus_context, 0x40, 0x40, true, 0x2b6aa11043642247)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V3.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x53004e04188e93e0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_USB_BUS_INTERFACE_USBDI_V3.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x90552bfd59afb620)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_getusbdi_version_t ), "_USB_BUS_INTERFACE_USBDI_V3.GetUSBDIVersion", get_usbdi_version, 0x100, 0x40, true, 0x557285968a64061f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_USB_BUS_INTERFACE_USBDI_V3.QueryBusTime", query_bus_time, 0x140, 0x40, true, 0x4e0457dc4cd87d7)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_submit_iso_out_urb_t ), "_USB_BUS_INTERFACE_USBDI_V3.SubmitIsoOutUrb", submit_iso_out_urb, 0x180, 0x40, true, 0xf2d94b87999c4e4e)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_query_bus_information_t ), "_USB_BUS_INTERFACE_USBDI_V3.QueryBusInformation", query_bus_information, 0x1c0, 0x40, true, 0x3c1f37c86e5cce36)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(void*)>*), "_USB_BUS_INTERFACE_USBDI_V3.IsDeviceHighSpeed", is_device_high_speed, 0x200, 0x40, true, 0xe7bb593ce179b4ac)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_enum_log_entry_t ), "_USB_BUS_INTERFACE_USBDI_V3.EnumLogEntry", enum_log_entry, 0x240, 0x40, true, 0x101183d191660b11)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_USB_BUS_INTERFACE_USBDI_V3.QueryBusTimeEx", query_bus_time_ex, 0x280, 0x40, true, 0x32ac986f4dd2018e)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(pusb_busiffn_query_controller_type_t ), "_USB_BUS_INTERFACE_USBDI_V3.QueryControllerType", query_controller_type, 0x2c0, 0x40, true, 0xd7bc91d7bade1bab)
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
#define _m11
#define _m12
#endif