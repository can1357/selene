#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_ERROR_STATUS.ErrorStatus", error_status, 0x0, 0x40, true, 0x903c19c2e19e45ce)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_WHEA_ERROR_STATUS.ErrorType", error_type, 0x8, 0x8, true, 0x8b146d735fe99003, 8, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.Address", address, 0x10, 0x1, true, 0xce109ed53e733907, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.Control", control, 0x11, 0x1, true, 0x65fc0c0658614caf, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.Data", data, 0x12, 0x1, true, 0x49078edfc145ba9b, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.Responder", responder, 0x13, 0x1, true, 0x2a2297a8d2986f2, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.Requester", requester, 0x14, 0x1, true, 0x59f4ec3e19e5db85, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.FirstError", first_error, 0x15, 0x1, true, 0x772ff02eae8eba40, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_STATUS.Overflow", overflow, 0x16, 0x1, true, 0x8cb1b55a60e4744e, 1, uint64_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#endif