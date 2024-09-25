#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::object_header_t), "_NDIS_MINIPORT_INIT_PARAMETERS.Header", header, 0x0, 0x20, true, 0xd75dea552be8e851)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_INIT_PARAMETERS.Flags", flags, 0x20, 0x20, true, 0xf23d609821938add)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_list_t*), "_NDIS_MINIPORT_INIT_PARAMETERS.AllocatedResources", allocated_resources, 0x40, 0x40, true, 0xda5e6858c571e914)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_INIT_PARAMETERS.IMDeviceInstanceContext", im_device_instance_context, 0x80, 0x40, true, 0x20fd6656b4e60bad)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_INIT_PARAMETERS.MiniportAddDeviceContext", miniport_add_device_context, 0xc0, 0x40, true, 0x487d0a1bd2694acd)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_MINIPORT_INIT_PARAMETERS.IfIndex", if_index, 0x100, 0x20, true, 0xaa8114e693b722a9)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union ndis::net_luid_lh_t), "_NDIS_MINIPORT_INIT_PARAMETERS.NetLuid", net_luid, 0x140, 0x40, true, 0xe61e3d8b76a6781b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::port_authentication_parameters_t*), "_NDIS_MINIPORT_INIT_PARAMETERS.DefaultPortAuthStates", default_port_auth_states, 0x180, 0x40, true, 0x137b864d31259993)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::pci_device_custom_properties_t*), "_NDIS_MINIPORT_INIT_PARAMETERS.PciDeviceCustomProperties", pci_device_custom_properties, 0x1c0, 0x40, true, 0xec3022f4dc50794f)
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