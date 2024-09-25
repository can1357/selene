#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BUS_HANDLER.Version", version, 0x0, 0x20, true, 0x4f75be61388dba5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_BUS_HANDLER.InterfaceType", interface_type, 0x20, 0x20, true, 0x7854b57196577b53)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::bus_data_type_t), "_BUS_HANDLER.ConfigurationType", configuration_type, 0x40, 0x20, true, 0xf9ff48213b5321d9)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BUS_HANDLER.BusNumber", bus_number, 0x60, 0x20, true, 0xc28482ea76f71c75)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_BUS_HANDLER.DeviceObject", device_object, 0x80, 0x40, true, 0x5f7685ee1cff868f)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::bus_handler_t*), "_BUS_HANDLER.ParentHandler", parent_handler, 0xc0, 0x40, true, 0x32a139ddcb01beb6)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_BUS_HANDLER.BusData", bus_data, 0x100, 0x40, true, 0x3dcb68848521f71)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_BUS_HANDLER.DeviceControlExtensionSize", device_control_extension_size, 0x140, 0x20, true, 0xaffdf68b062ac10)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::supported_ranges_t*), "_BUS_HANDLER.BusAddresses", bus_addresses, 0x180, 0x40, true, 0xe0058a5c28f628e6)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, uint32_t, void*, uint32_t, uint32_t)>*), "_BUS_HANDLER.GetBusData", get_bus_data, 0x240, 0x40, true, 0x5c59d95b489d2ddc)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, uint32_t, void*, uint32_t, uint32_t)>*), "_BUS_HANDLER.SetBusData", set_bus_data, 0x280, 0x40, true, 0x383a573790212689)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, struct io::resource_requirements_list_t**)>*), "_BUS_HANDLER.AdjustResourceList", adjust_resource_list, 0x2c0, 0x40, true, 0x157a15d6b49b85cf)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, nt::unicode_view*, nt::unicode_view*, struct nt::driver_object_t*, struct nt::device_object_t*, uint32_t, struct cm::resource_list_t**)>*), "_BUS_HANDLER.AssignSlotResources", assign_slot_resources, 0x300, 0x40, true, 0xfabca33d6fa7f6ee)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<uint8_t(struct nt::bus_handler_t*, struct nt::bus_handler_t*, int64_t, uint32_t*, int64_t*)>*), "_BUS_HANDLER.TranslateBusAddress", translate_bus_address, 0x340, 0x40, true, 0x328e6ac319b3e4a)
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
#define _m13
#endif