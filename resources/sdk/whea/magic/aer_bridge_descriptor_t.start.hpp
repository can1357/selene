#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0x471ee51fce1bdbb3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xee4537b31e0d7bb4)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.BusNumber", bus_number, 0x20, 0x20, true, 0xab0afe7c71a97110)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pci_slot_number_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.Slot", slot, 0x40, 0x20, true, 0x8d80b56183998686)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.DeviceControl", device_control, 0x60, 0x10, true, 0xf48dd498ad901547)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::aer_bridge_descriptor_flags_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.Flags", flags, 0x70, 0x10, true, 0xd99f4ab5e098f819)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.UncorrectableErrorMask", uncorrectable_error_mask, 0x80, 0x20, true, 0xad9df14f15016cf6)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.UncorrectableErrorSeverity", uncorrectable_error_severity, 0xa0, 0x20, true, 0x5da5cebd91f3ff00)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.CorrectableErrorMask", correctable_error_mask, 0xc0, 0x20, true, 0x176ad602cfe2804)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.AdvancedCapsAndControl", advanced_caps_and_control, 0xe0, 0x20, true, 0x4469ffd30ceff690)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.SecondaryUncorrectableErrorMask", secondary_uncorrectable_error_mask, 0x100, 0x20, true, 0xd813618a0355bf9e)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.SecondaryUncorrectableErrorSev", secondary_uncorrectable_error_sev, 0x120, 0x20, true, 0xb933818993c7045b)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_BRIDGE_DESCRIPTOR.SecondaryCapsAndControl", secondary_caps_and_control, 0x140, 0x20, true, 0x777055688cdd0323)
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