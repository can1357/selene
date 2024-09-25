#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_BUS_INTERFACE_STANDARD.Size", size, 0x0, 0x10, true, 0x344d11437c1db66d)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_BUS_INTERFACE_STANDARD.Version", version, 0x10, 0x10, true, 0x8c11545c63e3c130)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_PCI_BUS_INTERFACE_STANDARD.Context", context, 0x40, 0x40, true, 0xc46a0c69048d5d50)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_BUS_INTERFACE_STANDARD.InterfaceReference", interface_reference, 0x80, 0x40, true, 0x4cf5718b64866b1f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_BUS_INTERFACE_STANDARD.InterfaceDereference", interface_dereference, 0xc0, 0x40, true, 0x76b5640fdfe235af)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_read_write_config_t ), "_PCI_BUS_INTERFACE_STANDARD.ReadConfig", read_config, 0x100, 0x40, true, 0xb05087ed4cc51a5a)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_read_write_config_t ), "_PCI_BUS_INTERFACE_STANDARD.WriteConfig", write_config, 0x140, 0x40, true, 0xfc62369bf109abd0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_pin_to_line_t ), "_PCI_BUS_INTERFACE_STANDARD.PinToLine", pin_to_line, 0x180, 0x40, true, 0x90d6bfd48774880a)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_line_to_pin_t ), "_PCI_BUS_INTERFACE_STANDARD.LineToPin", line_to_pin, 0x1c0, 0x40, true, 0x86a6e801413593d0)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(ppci_root_bus_capability_t ), "_PCI_BUS_INTERFACE_STANDARD.RootBusCapability", root_bus_capability, 0x200, 0x40, true, 0x29d51157a0c77bb)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint8_t)>*), "_PCI_BUS_INTERFACE_STANDARD.ExpressWakeControl", express_wake_control, 0x240, 0x40, true, 0xd5afb4b5209141a2)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*)>*), "_PCI_BUS_INTERFACE_STANDARD.PrepareMultistageResume", prepare_multistage_resume, 0x280, 0x40, true, 0x662697922aec17da)
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
#endif