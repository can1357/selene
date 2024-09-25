#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REMOVE_ELEMENT_AND_TRUNCATE.OperationCode", operation_code, 0x0, 0x8, true, 0x8e55d20b1bc8fc4)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_REMOVE_ELEMENT_AND_TRUNCATE.ServiceAction", service_action, 0x8, 0x5, true, 0xa00873d711fe72c0, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 8>), "_REMOVE_ELEMENT_AND_TRUNCATE.RequestedCapacity", requested_capacity, 0x10, 0x40, true, 0xbdca35ff35a28278)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_REMOVE_ELEMENT_AND_TRUNCATE.ElementIdentifier", element_identifier, 0x50, 0x20, true, 0x30c4297a2f353b1b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_REMOVE_ELEMENT_AND_TRUNCATE.Control", control, 0x78, 0x8, true, 0x9b1ec1e0dfc006f9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif