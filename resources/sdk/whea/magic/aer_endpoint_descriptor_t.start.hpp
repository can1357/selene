#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.Type", type, 0x0, 0x10, true, 0xac68d443fd97222a)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.Enabled", enabled, 0x10, 0x8, true, 0xe6ae0ef3ff1573fa)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.BusNumber", bus_number, 0x20, 0x20, true, 0x88860014bf8ec962)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pci_slot_number_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.Slot", slot, 0x40, 0x20, true, 0x7fd3e0d315ec2f47)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.DeviceControl", device_control, 0x60, 0x10, true, 0x7ac5020414d502e)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::aer_endpoint_descriptor_flags_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.Flags", flags, 0x70, 0x10, true, 0x87b7d43b61e23b25)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.UncorrectableErrorMask", uncorrectable_error_mask, 0x80, 0x20, true, 0x16a5f8571d0e4974)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.UncorrectableErrorSeverity", uncorrectable_error_severity, 0xa0, 0x20, true, 0xe1850de7d53ee915)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.CorrectableErrorMask", correctable_error_mask, 0xc0, 0x20, true, 0x173556313cca2e0a)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_AER_ENDPOINT_DESCRIPTOR.AdvancedCapsAndControl", advanced_caps_and_control, 0xe0, 0x20, true, 0x12cf0ce855f9e1a1)
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
#endif