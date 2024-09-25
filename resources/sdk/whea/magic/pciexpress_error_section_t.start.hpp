#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pciexpress_error_section_validbits_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.ValidBits", valid_bits, 0x0, 0x40, true, 0x71f64f56d3c6ae26)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum whea::pciexpress_device_type_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.PortType", port_type, 0x40, 0x20, true, 0x528f3c75c0f2e38a)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pciexpress_version_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.Version", version, 0x60, 0x20, true, 0xe23dca4e57d12b85)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pciexpress_command_status_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.CommandStatus", command_status, 0x80, 0x20, true, 0x65e156ba033cf8a7)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct whea::pciexpress_device_id_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.DeviceId", device_id, 0xc0, 0x80, true, 0x8558cd4742f960f8)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.DeviceSerialNumber", device_serial_number, 0x140, 0x40, true, 0xff1ea5692f54ce05)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union whea::pciexpress_bridge_control_status_t), "_WHEA_PCIEXPRESS_ERROR_SECTION.BridgeControlStatus", bridge_control_status, 0x180, 0x20, true, 0xde368407ae4562db)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 60>), "_WHEA_PCIEXPRESS_ERROR_SECTION.ExpressCapability", express_capability, 0x1a0, 0xe0, true, 0x52a3712804f20f62)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 96>), "_WHEA_PCIEXPRESS_ERROR_SECTION.AerInfo", aer_info, 0x380, 0x0, true, 0x1ea8a76b95b27868)
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