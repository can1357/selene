#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY.Flags", flags, 0x0, 0x20, true, 0x4b6f4cd1c3a979ad)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_PROCESS_MITIGATION_SYSTEM_CALL_FILTER_POLICY.FilterId", filter_id, 0x0, 0x4, true, 0xf664361dd4f9bdb, 4, uint32_t)
#else
#define _m00
#define _m01
#endif