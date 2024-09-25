#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_CAPABILITIES_REGISTER.CapabilityVersion", capability_version, 0x0, 0x4, true, 0xc46aff293c556428, 4, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PCI_EXPRESS_CAPABILITIES_REGISTER.DeviceType", device_type, 0x4, 0x4, true, 0x83a418a96ce4fd0f, 4, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_CAPABILITIES_REGISTER.SlotImplemented", slot_implemented, 0x8, 0x1, true, 0xc1f93fcb6991d6b6, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PCI_EXPRESS_CAPABILITIES_REGISTER.InterruptMessageNumber", interrupt_message_number, 0x9, 0x5, true, 0x6b655ba6b58c6baf, 5, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_CAPABILITIES_REGISTER.Rsvd", rsvd, 0xe, 0x2, true, 0x736294e4a145d080, 2, uint16_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_CAPABILITIES_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x26f0efbbd751e5e)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif