#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_BUS_INTERFACE_STANDARD.Size", size, 0x0, 0x10, true, 0x2675c4cac33d1230)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_BUS_INTERFACE_STANDARD.Version", version, 0x10, 0x10, true, 0xbd0d52e57e533e0c)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_BUS_INTERFACE_STANDARD.Context", context, 0x40, 0x40, true, 0x81b3ec5bceb605c2)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_BUS_INTERFACE_STANDARD.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x872ec070d6eb6991)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_BUS_INTERFACE_STANDARD.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x617b794bfa45bac)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ptranslate_bus_address_t ), "_BUS_INTERFACE_STANDARD.TranslateBusAddress", translate_bus_address, 0x100, 0x40, true, 0xa4238d2ac6e8f83f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_dma_adapter_t ), "_BUS_INTERFACE_STANDARD.GetDmaAdapter", get_dma_adapter, 0x140, 0x40, true, 0x8ed18808210b18d9)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_set_device_data_t ), "_BUS_INTERFACE_STANDARD.SetBusData", set_bus_data, 0x180, 0x40, true, 0x43bd723b2c31d139)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_set_device_data_t ), "_BUS_INTERFACE_STANDARD.GetBusData", get_bus_data, 0x1c0, 0x40, true, 0x5119639df891cb24)
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