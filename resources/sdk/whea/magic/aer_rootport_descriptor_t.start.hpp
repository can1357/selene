#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0x6d2db52f4b83318)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0x7d9d9f097f8bd946)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.BusNumber", bus_number, 0x20, 0x20, true, 0x3fde4d00a07a9b05)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pci_slot_number_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.Slot", slot, 0x40, 0x20, true, 0x18d00431990b5b7d)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.DeviceControl", device_control, 0x60, 0x10, true, 0x50b3f66b8c54817c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::aer_rootport_descriptor_flags_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.Flags", flags, 0x70, 0x10, true, 0xa06667762768a474)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.UncorrectableErrorMask", uncorrectable_error_mask, 0x80, 0x20, true, 0x8d041fcbc399fd56)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.UncorrectableErrorSeverity", uncorrectable_error_severity, 0xa0, 0x20, true, 0xce01c9900980db91)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.CorrectableErrorMask", correctable_error_mask, 0xc0, 0x20, true, 0x37b3e079cb9f18f5)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.AdvancedCapsAndControl", advanced_caps_and_control, 0xe0, 0x20, true, 0x446215cfa8734b61)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ROOTPORT_DESCRIPTOR.RootErrorCommand", root_error_command, 0x100, 0x20, true, 0x652bb8d2b33fee0b)
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