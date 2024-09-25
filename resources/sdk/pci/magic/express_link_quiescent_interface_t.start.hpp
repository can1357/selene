#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.Size", size, 0x0, 0x10, true, 0xb014a1dcb8174722)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.Version", version, 0x10, 0x10, true, 0x99e5e41b10fdd2d3)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.Context", context, 0x40, 0x40, true, 0x7bba396b4cdb18b9)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x59029c2518a93a34)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x7b450cc507a96b00)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.PciExpressEnterLinkQuiescentMode", pci_express_enter_link_quiescent_mode, 0x100, 0x40, true, 0x26d4e41f7b630a8f)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<int32_t(void*)>*), "_PCI_EXPRESS_LINK_QUIESCENT_INTERFACE.PciExpressExitLinkQuiescentMode", pci_express_exit_link_quiescent_mode, 0x140, 0x40, true, 0x5787ba85e2d7ef97)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif