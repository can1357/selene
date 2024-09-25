#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERSISTENT_RESERVE_IN.OperationCode", operation_code, 0x0, 0x8, true, 0xcab1a9aa902031a6)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_PERSISTENT_RESERVE_IN.ServiceAction", service_action, 0x8, 0x5, true, 0x22b851409b436c11, 5, uint8_t)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_PERSISTENT_RESERVE_IN.AllocationLength", allocation_length, 0x38, 0x10, true, 0xf9ee77d3f1608306)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_PERSISTENT_RESERVE_IN.Control", control, 0x48, 0x8, true, 0x4eab7eeb85a9959c)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif