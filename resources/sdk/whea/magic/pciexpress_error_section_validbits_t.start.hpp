#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.PortType", port_type, 0x0, 0x1, true, 0x6042962d2baaca14, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.Version", version, 0x1, 0x1, true, 0xcc78878e502040db, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.CommandStatus", command_status, 0x2, 0x1, true, 0x19e65b610d760b24, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.DeviceId", device_id, 0x3, 0x1, true, 0x45b4482a58f5fa83, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.DeviceSerialNumber", device_serial_number, 0x4, 0x1, true, 0x5d2f1eacd7f9c9d9, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.BridgeControlStatus", bridge_control_status, 0x5, 0x1, true, 0x9cff5715bd31eb78, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.ExpressCapability", express_capability, 0x6, 0x1, true, 0x27d69e03eececfc9, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.AerInfo", aer_info, 0x7, 0x1, true, 0x13b10d2b07f218c1, 1, uint64_t)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIEXPRESS_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0xf3e05d14c7740f3a)
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
#endif