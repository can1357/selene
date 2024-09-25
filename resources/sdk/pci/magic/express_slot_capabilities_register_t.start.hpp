#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.AttentionButtonPresent", attention_button_present, 0x0, 0x1, true, 0x3188173cfa08ddee, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.PowerControllerPresent", power_controller_present, 0x1, 0x1, true, 0x95affbb98090174d, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.MRLSensorPresent", mrl_sensor_present, 0x2, 0x1, true, 0x7ea244b7aab294ee, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.AttentionIndicatorPresent", attention_indicator_present, 0x3, 0x1, true, 0x6bbef132d6038515, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.PowerIndicatorPresent", power_indicator_present, 0x4, 0x1, true, 0x705b57544d796c47, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.HotPlugSurprise", hot_plug_surprise, 0x5, 0x1, true, 0x47d0f0f440e7351d, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.HotPlugCapable", hot_plug_capable, 0x6, 0x1, true, 0xe0b9ffecf9412f66, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.SlotPowerLimit", slot_power_limit, 0x7, 0x8, true, 0x9f9ab6af5b2115b2, 8, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.SlotPowerLimitScale", slot_power_limit_scale, 0xf, 0x2, true, 0xca4b04a6b5e7c2ec, 2, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.ElectromechanicalLockPresent", electromechanical_lock_present, 0x11, 0x1, true, 0x9b2ea8b28f76e17e, 1, uint32_t)
#define _m10 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.NoCommandCompletedSupport", no_command_completed_support, 0x12, 0x1, true, 0x2460202ef06e67ad, 1, uint32_t)
#define _m11 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint13_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.PhysicalSlotNumber", physical_slot_number, 0x13, 0xd, true, 0x64c4c51d5a24bd83, 13, uint32_t)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_EXPRESS_SLOT_CAPABILITIES_REGISTER.AsULONG", as_ulong, 0x0, 0x20, true, 0x4805fe193afc4136)
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