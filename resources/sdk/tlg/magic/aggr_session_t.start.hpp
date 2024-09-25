#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::event_entry_lookup_table_t), "TLG_AGGR_SESSION.TlgHashTable", tlg_hash_table, 0x0, 0x40, true, 0xa58eb74efbd5e1c5)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::srwlock_t), "TLG_AGGR_SESSION.SharedLock", shared_lock, 0x840, 0x40, true, 0x2af056277cfff2d2)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tlg::agg_internal_stats_t), "TLG_AGGR_SESSION.InternalStats", internal_stats, 0x880, 0x40, true, 0xd1568dfee7a279c5)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*), "TLG_AGGR_SESSION.pEnableCallback", p_enable_callback, 0x9c0, 0x40, true, 0x24da508adb2cff88)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "TLG_AGGR_SESSION.pCallbackContext", p_callback_context, 0xa00, 0x40, true, 0x12db9fc26d5138a6)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const struct tlg::provider_t*), "TLG_AGGR_SESSION.hProvider", h_provider, 0xa40, 0x40, true, 0x60aa2e03ec673cf1)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tlg::aggr_session_t*), "TLG_AGGR_SESSION.NextSession", next_session, 0xa80, 0x40, true, 0x50b3c69c823c9d15)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::timer_t*), "TLG_AGGR_SESSION.Timer", timer, 0xac0, 0x40, true, 0xa095c986251146d9)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "TLG_AGGR_SESSION.FlushPeriod_ms", flush_period_ms, 0xb00, 0x20, true, 0x3a78e29b02f73b5b)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "TLG_AGGR_SESSION.CompleteFlushPending", complete_flush_pending, 0xb20, 0x8, true, 0x61ac7074cae5b733)
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