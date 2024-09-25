#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_CONFIGURATION.OperationCode", operation_code, 0x0, 0x8, true, 0xb3fe31d5bdec9da1)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_GET_CONFIGURATION.RequestType", request_type, 0x8, 0x2, true, 0xaad67ca896c36d9c, 2, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_GET_CONFIGURATION.StartingFeature", starting_feature, 0x10, 0x10, true, 0x6b0b8aaf23cc5c3b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_GET_CONFIGURATION.AllocationLength", allocation_length, 0x38, 0x10, true, 0xc5fbfcfef5456095)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_GET_CONFIGURATION.Control", control, 0x48, 0x8, true, 0xf66af6b48fe90d75)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif