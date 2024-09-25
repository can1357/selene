#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_BUS_RESOURCE_UPDATE_INTERFACE.Size", size, 0x0, 0x10, true, 0x8bff42f165901645)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_BUS_RESOURCE_UPDATE_INTERFACE.Version", version, 0x10, 0x10, true, 0xccd3a2b84e4aeab0)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_BUS_RESOURCE_UPDATE_INTERFACE.Context", context, 0x40, 0x40, true, 0x7c9791246298f6db)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_BUS_RESOURCE_UPDATE_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x1e73896c267e13b2)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_BUS_RESOURCE_UPDATE_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0xf75a371c6e7c9d50)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_updated_bus_resource_t ), "_BUS_RESOURCE_UPDATE_INTERFACE.GetUpdatedBusResource", get_updated_bus_resource, 0x100, 0x40, true, 0xacde423fa0cc8554)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif