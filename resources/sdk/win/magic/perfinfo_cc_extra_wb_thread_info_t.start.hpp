#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_EXTRA_WB_THREAD_INFO.ThreadAction", thread_action, 0x0, 0x20, true, 0x93c0f80bfdd87e5b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_CC_EXTRA_WB_THREAD_INFO.ActiveExtraWBThreads", active_extra_wb_threads, 0x20, 0x20, true, 0xb020d7eff32c9070)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_EXTRA_WB_THREAD_INFO.TotalDirtyPages", total_dirty_pages, 0x40, 0x40, true, 0x27975abe66de3e48)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_EXTRA_WB_THREAD_INFO.DirtyPageThreshold", dirty_page_threshold, 0x80, 0x40, true, 0x94355ee19c54d06e)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_CC_EXTRA_WB_THREAD_INFO.AvailablePages", available_pages, 0xc0, 0x40, true, 0x63c8d5fc80f152da)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif