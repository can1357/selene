#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_MMSUPPORT_SHARED.WorkingSetLock", working_set_lock, 0x0, 0x20, true, 0xa0465c021da84250)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_MMSUPPORT_SHARED.GoodCitizenWaiting", good_citizen_waiting, 0x20, 0x20, true, 0xc74f82ac86600acf)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_SHARED.ReleasedCommitDebt", released_commit_debt, 0x40, 0x40, true, 0xdfa935c154683c9b)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_SHARED.ResetPagesRepurposedCount", reset_pages_repurposed_count, 0x80, 0x40, true, 0xb21ce455bbad6ed9)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMSUPPORT_SHARED.WsSwapSupport", ws_swap_support, 0xc0, 0x40, true, 0x201ee378b3e0f1ef)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMSUPPORT_SHARED.CommitReleaseContext", commit_release_context, 0x100, 0x40, true, 0xf3c89eb7154d8aa8)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMSUPPORT_SHARED.AccessLog", access_log, 0x140, 0x40, true, 0x4e50098c39050704)
#define _m07 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint64_t), "_MMSUPPORT_SHARED.ChargedWslePages", charged_wsle_pages, 0x180, 0x40, true, 0x495adc4c1c6fd5bd, 64, uint64_t)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_SHARED.ActualWslePages", actual_wsle_pages, 0x1c0, 0x40, true, 0x1f2862d933837f7d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MMSUPPORT_SHARED.ShadowMapping", shadow_mapping, 0x240, 0x40, true, 0xd0b02ac0c347436)
#define _m10 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int64_t), "_MMSUPPORT_SHARED.WorkingSetCoreLock", working_set_core_lock, 0x200, 0x40, true, 0xb860cc949bcc11c5, 0, uint64_t,uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MMSUPPORT_SHARED.WorkingSetSizeOverhead", working_set_size_overhead, 0x0, 0x0, false, 0xf6412e23ba390a05)
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
#define _m10
#define _m11
#endif