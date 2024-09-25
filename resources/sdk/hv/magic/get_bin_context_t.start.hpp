#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_GET_BIN_CONTEXT.OutstandingReference", outstanding_reference, 0x0, 0x1, true, 0x2184cb4523437740, 1, uint16_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_GET_BIN_CONTEXT.AcquiredRundown", acquired_rundown, 0x0, 0x0, false, 0x2dfa9522c524e713, 1, uint16_t)
#else
#define _m00
#define _m01
#endif