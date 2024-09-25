#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_ACCOUNTING.Lock", lock, 0x0, 0x40, true, 0x472230aeb8d3e9ac)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_FX_ACCOUNTING.Active", active, 0x40, 0x8, true, 0x9137eed7549d897b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_FX_ACCOUNTING.DripsRequiredState", drips_required_state, 0x60, 0x20, true, 0x92d5384727907f74)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_POP_FX_ACCOUNTING.ActiveStamp", active_stamp, 0xc0, 0x40, true, 0x76196b6e49ce90f6)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_active_time_accounting_t), "_POP_FX_ACCOUNTING.CsActiveTimeAccounting", cs_active_time_accounting, 0x100, 0x0, true, 0x501fa1ec6b35bb89)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_active_time_accounting_t), "_POP_FX_ACCOUNTING.CsCriticalActiveTimeAccounting", cs_critical_active_time_accounting, 0x400, 0x0, true, 0x5c86067f04156c29)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_FX_ACCOUNTING.Level", level, 0x80, 0x20, true, 0x40618716b9b1a88b)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_FX_ACCOUNTING.CsActiveTime", cs_active_time, 0x0, 0x0, false, 0x518e00e1a16967be)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_POP_FX_ACCOUNTING.CriticalActiveTime", critical_active_time, 0x0, 0x0, false, 0xd2bfeb9bf5de40e4)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pop::fx_accounting_mode_t), "_POP_FX_ACCOUNTING.AccountingMode", accounting_mode, 0x0, 0x0, false, 0xddf11e9517dcc4a4)
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