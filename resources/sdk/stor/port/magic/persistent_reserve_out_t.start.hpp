#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERSISTENT_RESERVE_OUT.OperationCode", operation_code, 0x0, 0x8, true, 0xbedaaa9954943b5d)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERSISTENT_RESERVE_OUT.ServiceAction", service_action, 0x8, 0x5, true, 0x242ed8c40259416b, 5, uint8_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERSISTENT_RESERVE_OUT.Type", type, 0x10, 0x4, true, 0xe6f074ab491f77d6, 4, uint8_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PERSISTENT_RESERVE_OUT.Scope", scope, 0x14, 0x4, true, 0xc4a2fde81bf05e49, 4, uint8_t)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PERSISTENT_RESERVE_OUT.ParameterListLength", parameter_list_length, 0x38, 0x10, true, 0x2955a4ca62a7c81)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERSISTENT_RESERVE_OUT.Control", control, 0x48, 0x8, true, 0x26f64beae855b403)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif