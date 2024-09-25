#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECEIVE_TOKEN_INFORMATION.OperationCode", operation_code, 0x0, 0x8, true, 0xff0cb3ced66575f1)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_RECEIVE_TOKEN_INFORMATION.ServiceAction", service_action, 0x8, 0x5, true, 0x543d45419bdb5213, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_RECEIVE_TOKEN_INFORMATION.ListIdentifier", list_identifier, 0x10, 0x20, true, 0xb8a41865455dc554)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_RECEIVE_TOKEN_INFORMATION.AllocationLength", allocation_length, 0x50, 0x20, true, 0xcf8f3d4033614022)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_RECEIVE_TOKEN_INFORMATION.Control", control, 0x78, 0x8, true, 0x9cf2ee342b6bb719)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif