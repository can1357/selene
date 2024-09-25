#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTLP_HEAP_FEATURES.UseSegmentHeap", use_segment_heap, 0x0, 0x0, false, 0x11f1dcf553ca8e51, 1, uint8_t)
#define _m01 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTLP_HEAP_FEATURES.EnableTagging", enable_tagging, 0x0, 0x0, false, 0x7d88e6f8b125ce2c, 1, uint8_t)
#define _m02 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTLP_HEAP_FEATURES.EnableStackTracking", enable_stack_tracking, 0x0, 0x0, false, 0xf4d74707384bcbd1, 1, uint8_t)
#define _m03 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RTLP_HEAP_FEATURES.DisableDbgBreakOnCorruption", disable_dbg_break_on_corruption, 0x0, 0x0, false, 0xccc379965aa1d602, 1, uint8_t)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif