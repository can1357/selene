#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE.VirtualFunctionIndex", virtual_function_index, 0x0, 0x20, true, 0x41480ba093b3d8a3)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE.PowerState", power_state, 0x20, 0x20, true, 0xd06bca4f23d6e289)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DXGKARG_SETVIRTUALFUNCTIONPOWERSTATE.Wake", wake, 0x40, 0x8, true, 0xf4af4b68436af831)
#else
#define _m00
#define _m01
#define _m02
#endif