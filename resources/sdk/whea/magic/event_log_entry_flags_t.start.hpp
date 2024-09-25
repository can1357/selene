#if !IN_PARSER
#define _m00 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.LogInternalEtw", log_internal_etw, 0x1, 0x1, true, 0xc7c7f78a8ff29202, 1, uint32_t)
#define _m01 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.LogBlackbox", log_blackbox, 0x2, 0x1, true, 0xdfa3320781da305b, 1, uint32_t)
#define _m02 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.LogSel", log_sel, 0x3, 0x1, true, 0x71ac692f1934bbf0, 1, uint32_t)
#define _m03 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.RawSel", raw_sel, 0x4, 0x1, true, 0xfeb8a273601c6db5, 1, uint32_t)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.NoFormat", no_format, 0x5, 0x1, true, 0xa12ff3ce0fdbf0c6, 1, uint32_t)
#define _m05 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.Driver", driver, 0x6, 0x1, true, 0x15b9d0660ed2676e, 1, uint32_t)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEA_EVENT_LOG_ENTRY_FLAGS.AsULONG", as_ulong, 0x0, 0x20, true, 0xc345a4ecac3fbbf3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif