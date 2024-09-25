#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SECURITY_INTERFACE.Size", size, 0x0, 0x10, true, 0xa190a80175b64ac)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_SECURITY_INTERFACE.Version", version, 0x10, 0x10, true, 0x9f75d52cda5bc290)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_SECURITY_INTERFACE.Context", context, 0x40, 0x40, true, 0x5af37cac70cc33b9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_SECURITY_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0xfe4d16394931b6ad)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_SECURITY_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x2c59bd4eb404d6c3)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_set_acs_t ), "_PCI_SECURITY_INTERFACE.SetAccessControlServices", set_access_control_services, 0x100, 0x40, true, 0x11c5aa61f011d69f)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif