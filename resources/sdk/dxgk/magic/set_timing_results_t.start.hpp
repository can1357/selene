#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DXGK_SET_TIMING_RESULTS.ConnectionStatusChanges", connection_status_changes, 0x0, 0x1, true, 0x91050d879436333d, 1, uint32_t)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_DXGK_SET_TIMING_RESULTS.Value", value, 0x0, 0x20, true, 0x210fe3196a2adf0d)
#else
#define _m00
#define _m01
#endif