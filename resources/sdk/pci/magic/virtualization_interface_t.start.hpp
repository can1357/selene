#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_VIRTUALIZATION_INTERFACE.Size", size, 0x0, 0x10, true, 0xd76e0e386d139522)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_VIRTUALIZATION_INTERFACE.Version", version, 0x10, 0x10, true, 0x46d13448503050b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_VIRTUALIZATION_INTERFACE.Context", context, 0x40, 0x40, true, 0x714cd2e7be15ae7c)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_VIRTUALIZATION_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x8fe5b3b82b4201e5)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_VIRTUALIZATION_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x3589782025cf3c53)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*), "_PCI_VIRTUALIZATION_INTERFACE.SetVirtualFunctionData", set_virtual_function_data, 0x100, 0x40, true, 0x6ded2804fe1b193e)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<uint32_t(void*, uint16_t, void*, uint32_t, uint32_t)>*), "_PCI_VIRTUALIZATION_INTERFACE.GetVirtualFunctionData", get_virtual_function_data, 0x140, 0x40, true, 0xf2aa3fc99bb753b4)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pget_virtual_device_location_t ), "_PCI_VIRTUALIZATION_INTERFACE.GetLocation", get_location, 0x180, 0x40, true, 0x649398001c5e068a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t*)>*), "_PCI_VIRTUALIZATION_INTERFACE.GetResources", get_resources, 0x1c0, 0x40, true, 0xa57ebec2db7d6b33)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(penable_virtualization_t ), "_PCI_VIRTUALIZATION_INTERFACE.EnableVirtualization", enable_virtualization, 0x200, 0x40, true, 0xe4139d165efff570)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*, uint32_t*)>*), "_PCI_VIRTUALIZATION_INTERFACE.GetVirtualFunctionProbedBars", get_virtual_function_probed_bars, 0x240, 0x40, true, 0xb259d527a209a49a)
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