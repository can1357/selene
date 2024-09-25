#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE_PRESENT_INTERFACE.Size", size, 0x0, 0x10, true, 0x9f123ceb182fdcd9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEVICE_PRESENT_INTERFACE.Version", version, 0x10, 0x10, true, 0x7e7835af915531e9)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_DEVICE_PRESENT_INTERFACE.Context", context, 0x40, 0x40, true, 0x79a2b19a7484878a)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_DEVICE_PRESENT_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x2d45ec334eec03ee)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_DEVICE_PRESENT_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x8ecd9d8be4372fdd)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_is_device_present_t ), "_PCI_DEVICE_PRESENT_INTERFACE.IsDevicePresent", is_device_present, 0x100, 0x40, true, 0x7e17f626432422a7)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_is_device_present_ex_t ), "_PCI_DEVICE_PRESENT_INTERFACE.IsDevicePresentEx", is_device_present_ex, 0x140, 0x40, true, 0x86d145db609862b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif