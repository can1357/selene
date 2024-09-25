#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MTA_USAGE_GLOBALS.dwStackCapture", dw_stack_capture, 0x0, 0x20, true, 0xebba7c56047c8903)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MTA_USAGE_GLOBALS.p_cMTAInits", p_c_mta_inits, 0x40, 0x40, true, 0xce99404e1272d794)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MTA_USAGE_GLOBALS.p_cMTAIncInits", p_c_mta_inc_inits, 0x80, 0x40, true, 0xdc312f113b307f6c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MTA_USAGE_GLOBALS.p_cMTAWaiters", p_c_mta_waiters, 0xc0, 0x40, true, 0xa5d24fc6b23b7b9f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t*), "_MTA_USAGE_GLOBALS.p_cMTAIncrementorSize", p_c_mta_incrementor_size, 0x100, 0x40, true, 0x6ece5c5b64b0239a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MTA_USAGE_GLOBALS.dwCompletionTimeOut", dw_completion_time_out, 0x140, 0x20, true, 0xef290c8391e1476f)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_MTA_USAGE_GLOBALS.pListEntryHeadMTAUsageIncrementor", p_list_entry_head_mta_usage_incrementor, 0x180, 0x40, true, 0x11554fe2fd6bcf61)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t*), "_MTA_USAGE_GLOBALS.p_posMTAIncrementorCompleted", p_pos_mta_incrementor_completed, 0x1c0, 0x40, true, 0x9509019b5b37af86)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::mta_usage_incrementor_t**), "_MTA_USAGE_GLOBALS.ppMTAUsageCompletedIncrementorHead", pp_mta_usage_completed_incrementor_head, 0x200, 0x40, true, 0x817a2600e294dfb5)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum win::mta_host_usage_flags_t*), "_MTA_USAGE_GLOBALS.p_fMTAHostUsageFlags", p_f_mta_host_usage_flags, 0x240, 0x40, true, 0x5a02dc3824836195)
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