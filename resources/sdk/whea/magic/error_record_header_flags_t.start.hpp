#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.Recovered", recovered, 0x0, 0x1, true, 0x7d0818da738cbd60, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.PreviousError", previous_error, 0x1, 0x1, true, 0x6bb5d8e0785e2195, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.Simulated", simulated, 0x2, 0x1, true, 0x8903756df6053f06, 1, uint32_t)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0x6ed729a27a03279e)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.DeviceDriver", device_driver, 0x3, 0x1, true, 0xb9b96ecd8297bed5, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.CriticalEvent", critical_event, 0x4, 0x1, true, 0x69100618b518d547, 1, uint32_t)
#define _m06 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.PersistPfn", persist_pfn, 0x5, 0x1, true, 0xe545449f2adb3faf, 1, uint32_t)
#define _m07 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.SectionsTruncated", sections_truncated, 0x6, 0x1, true, 0x777935ae6fa76a8a, 1, uint32_t)
#define _m08 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.RecoveryInProgress", recovery_in_progress, 0x7, 0x1, true, 0xa893e41abc1a8075, 1, uint32_t)
#define _m09 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_ERROR_RECORD_HEADER_FLAGS.Throttle", throttle, 0x8, 0x1, true, 0xce8e168ed533203a, 1, uint32_t)
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