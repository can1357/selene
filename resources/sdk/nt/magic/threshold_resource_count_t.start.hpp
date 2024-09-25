#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_THRESHOLD_RESOURCE_COUNT.ResourceCount", resource_count, 0x0, 0x20, true, 0x932f38f9acd90db3)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_THRESHOLD_RESOURCE_COUNT.Scope", scope, 0x20, 0x2, true, 0x3c51591096b04679, 2, uint8_t)
#else
#define _m00
#define _m01
#endif