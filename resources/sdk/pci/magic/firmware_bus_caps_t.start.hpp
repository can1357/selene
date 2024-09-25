#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_FIRMWARE_BUS_CAPS.Type", type, 0x0, 0x10, true, 0x3bba045ffffb7e6)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_PCI_FIRMWARE_BUS_CAPS.Length", length, 0x10, 0x10, true, 0xd2a0fbc8f122a21a)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FIRMWARE_BUS_CAPS.SixtyFourBitDevice", sixty_four_bit_device, 0x20, 0x1, true, 0x2377aedbd455df4, 1, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FIRMWARE_BUS_CAPS.PciXMode1EccCapable", pci_x_mode1_ecc_capable, 0x21, 0x1, true, 0xaec57585e340028c, 1, uint8_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FIRMWARE_BUS_CAPS.DeviceIdMessagingCapable", device_id_messaging_capable, 0x22, 0x1, true, 0x541458b9985c8630, 1, uint8_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_PCI_FIRMWARE_BUS_CAPS.ObffWakeSignalCapable", obff_wake_signal_capable, 0x23, 0x1, true, 0x38d4d25e144ec5f7, 1, uint8_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_FIRMWARE_BUS_CAPS.CurrentSpeedAndMode", current_speed_and_mode, 0x28, 0x8, true, 0xbaa1f11f4d9a05cb)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_FIRMWARE_BUS_CAPS.SupportedSpeedsAndModesLowByte", supported_speeds_and_modes_low_byte, 0x30, 0x8, true, 0x65be89cd862aa389)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_FIRMWARE_BUS_CAPS.SupportedSpeedsAndModesHighByte", supported_speeds_and_modes_high_byte, 0x38, 0x8, true, 0x42cb67ac36c4d773)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PCI_FIRMWARE_BUS_CAPS.Voltage", voltage, 0x40, 0x8, true, 0x986d156c2f01736e)
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