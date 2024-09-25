#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.AttentionButtonPressed", attention_button_pressed, 0x0, 0x1, true, 0xbbfbceb89a6c6030, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.PowerFaultDetected", power_fault_detected, 0x1, 0x1, true, 0x5ea34564ddc61e5a, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.MRLSensorChanged", mrl_sensor_changed, 0x2, 0x1, true, 0xc8d01be030f02a66, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.PresenceDetectChanged", presence_detect_changed, 0x3, 0x1, true, 0x9bdd1ff39a04f4ee, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.CommandCompleted", command_completed, 0x4, 0x1, true, 0x763767d1a7a2daf6, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.MRLSensorState", mrl_sensor_state, 0x5, 0x1, true, 0xfb81b020bfa6c3f3, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.PresenceDetectState", presence_detect_state, 0x6, 0x1, true, 0x3bf9c4cada00487d, 1, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.ElectromechanicalLockEngaged", electromechanical_lock_engaged, 0x7, 0x1, true, 0xc6a872d1ac764a14, 1, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.DataLinkStateChanged", data_link_state_changed, 0x8, 0x1, true, 0x206e2a8d0187ffd1, 1, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.Rsvd", rsvd, 0x9, 0x7, true, 0xd734ba7ddd4e4162, 7, uint16_t)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SLOT_STATUS_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0xeb4461cfd396a03b)
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