#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.ProtocolIdentifier", protocol_identifier, 0x0, 0x4, true, 0xe07c971e9f4dab42, 4, uint8_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.EIP", eip, 0x4, 0x1, true, 0x8737b1c2487cd42f, 1, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.Invalid", invalid, 0x7, 0x1, true, 0x2b050205b7da8505, 1, uint8_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.Length", length, 0x8, 0x8, true, 0x691d00e26e6249c3)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.ElementIndex", element_index, 0x18, 0x8, true, 0xb10791a749d1ea4a)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(union nt::ses_protocol_information_t), "_SES_ADDITIONAL_ELEMENT_STATUS_DESCRIPTOR.ProtocolInfo", protocol_info, 0x20, 0x0, true, 0x7119fbf82d703317)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif