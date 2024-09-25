#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_t*), "FxTagTracker.m_Globals", m_globals, 0x0, 0x40, true, 0xb2219a1be2ea121e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum fx::tag_tracker_type_t), "FxTagTracker.m_TrackerType", m_tracker_type, 0x40, 0x8, true, 0x6b08254c04292865)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "FxTagTracker.m_CaptureStack", m_capture_stack, 0x48, 0x8, true, 0xaa70892bab14443)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::object_t*), "FxTagTracker.m_OwningObject", m_owning_object, 0x80, 0x40, true, 0x6b4e70a69ab34092)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "FxTagTracker.m_TrackerEntry", m_tracker_entry, 0xc0, 0x80, true, 0x87b9ee8c0592e2d)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxTagTracker.m_FailedCount", m_failed_count, 0x140, 0x20, true, 0x75940a6d9b620225)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "FxTagTracker.m_SpinLock", m_spin_lock, 0x180, 0x80, true, 0x380eb7ff138346fb)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::tag_tracking_block_t*), "FxTagTracker.m_Next", m_next, 0x200, 0x40, true, 0x27fd6c194588758d)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct fx::tag_history_t, 25>), "FxTagTracker.m_TagHistory", m_tag_history, 0x240, 0x80, true, 0x30236d480358dbd0)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "FxTagTracker.m_CurRefHistory", m_cur_ref_history, 0x27c0, 0x20, true, 0x9b5455230579a412)
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