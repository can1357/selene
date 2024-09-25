#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::interface_type_t), "_CM_FULL_RESOURCE_DESCRIPTOR.InterfaceType", interface_type, 0x0, 0x20, true, 0x6d9c83fdf74fd976)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_CM_FULL_RESOURCE_DESCRIPTOR.BusNumber", bus_number, 0x20, 0x20, true, 0x1525a0e72a448e34)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct cm::partial_resource_list_t), "_CM_FULL_RESOURCE_DESCRIPTOR.PartialResourceList", partial_resource_list, 0x40, 0xe0, true, 0x1cb41798af3aba13)
#else
#define _m00
#define _m01
#define _m02
#endif