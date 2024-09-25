#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.AttentionButtonEnable", attention_button_enable, 0x0, 0x1, true, 0x496edb5d27c644db, 1, uint16_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.PowerFaultDetectEnable", power_fault_detect_enable, 0x1, 0x1, true, 0x5c4d4765aac25571, 1, uint16_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.MRLSensorEnable", mrl_sensor_enable, 0x2, 0x1, true, 0xa70a6ffb35a03418, 1, uint16_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.PresenceDetectEnable", presence_detect_enable, 0x3, 0x1, true, 0xb53b41b8c2f52df1, 1, uint16_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.CommandCompletedEnable", command_completed_enable, 0x4, 0x1, true, 0x37a66799c9bfafb4, 1, uint16_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.HotPlugInterruptEnable", hot_plug_interrupt_enable, 0x5, 0x1, true, 0x9bd464a96bfdb87e, 1, uint16_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.AttentionIndicatorControl", attention_indicator_control, 0x6, 0x2, true, 0xdce77d0619150de6, 2, uint16_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.PowerIndicatorControl", power_indicator_control, 0x8, 0x2, true, 0x7fd2e6014b522f04, 2, uint16_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.PowerControllerControl", power_controller_control, 0xa, 0x1, true, 0xc91014898d3ea7c1, 1, uint16_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.ElectromechanicalLockControl", electromechanical_lock_control, 0xb, 0x1, true, 0x8b94d236a287aa4c, 1, uint16_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.DataLinkStateChangeEnable", data_link_state_change_enable, 0xc, 0x1, true, 0x999a7aa17e8a8c36, 1, uint16_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.Rsvd", rsvd, 0xd, 0x3, true, 0xa9fa3adabf7c2bc7, 3, uint16_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_EXPRESS_SLOT_CONTROL_REGISTER.AsUSHORT", as_ushort, 0x0, 0x10, true, 0x68d94cf04db07ab)
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
#define _m12
#endif