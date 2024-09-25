#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.ErrorStatus", error_status, 0x0, 0x1, true, 0x539bbc31492db9e1, 1, uint64_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.ErrorType", error_type, 0x1, 0x1, true, 0x9a892242a0349d8, 1, uint64_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.BusId", bus_id, 0x2, 0x1, true, 0x87cd40b8eec57ff7, 1, uint64_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.BusAddress", bus_address, 0x3, 0x1, true, 0x82dfd3215d11ad3a, 1, uint64_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.BusData", bus_data, 0x4, 0x1, true, 0x194b8f4f63903b3d, 1, uint64_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.BusCommand", bus_command, 0x5, 0x1, true, 0x96835f59e99dc703, 1, uint64_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.RequesterId", requester_id, 0x6, 0x1, true, 0x7a7d96fef8e8f0e6, 1, uint64_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.CompleterId", completer_id, 0x7, 0x1, true, 0xcfccade12cb4d880, 1, uint64_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.TargetId", target_id, 0x8, 0x1, true, 0x2d7508b67e83f7d4, 1, uint64_t)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_WHEA_PCIXBUS_ERROR_SECTION_VALIDBITS.ValidBits", valid_bits, 0x0, 0x40, true, 0x43d48ebc6d406116)
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
#define _m09
#endif