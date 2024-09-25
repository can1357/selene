#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_DEBUGGING_DEVICE_IN_USE.Segment", segment, 0x0, 0x10, true, 0xfac8b52897a44502)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEBUGGING_DEVICE_IN_USE.Bus", bus, 0x20, 0x20, true, 0xa11ff7a9a3676ca6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEBUGGING_DEVICE_IN_USE.Slot", slot, 0x40, 0x20, true, 0x55241504f1480693)
#else
#define _m00
#define _m01
#define _m02
#endif