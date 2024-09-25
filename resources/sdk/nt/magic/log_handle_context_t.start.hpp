#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LOG_HANDLE_CONTEXT.LogHandle", log_handle, 0x0, 0x40, true, 0x820a4cc6e24e8481)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, int64_t)>*), "_LOG_HANDLE_CONTEXT.FlushToLsnRoutine", flush_to_lsn_routine, 0x40, 0x40, true, 0x1e3477abb901629c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, uint16_t*)>*), "_LOG_HANDLE_CONTEXT.QueryLogHandleInfoRoutine", query_log_handle_info_routine, 0x80, 0x40, true, 0xae206ac07d4c6611)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_statistics_t), "_LOG_HANDLE_CONTEXT.DirtyPageStatistics", dirty_page_statistics, 0xc0, 0xc0, true, 0xeecddf3b66b0f4d0)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dirty_page_thresholds_t), "_LOG_HANDLE_CONTEXT.DirtyPageThresholds", dirty_page_thresholds, 0x180, 0xc0, true, 0xc4164efd38c8618)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOG_HANDLE_CONTEXT.AdditionalPagesToWrite", additional_pages_to_write, 0x340, 0x20, true, 0xfdb9f9553ea80ef7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOG_HANDLE_CONTEXT.CcLWScanDPThreshold", cc_lw_scan_dp_threshold, 0x360, 0x20, true, 0x15bd34f6312d3ff1)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOG_HANDLE_CONTEXT.LargestLsnForCurrentLWScan", largest_lsn_for_current_lw_scan, 0x380, 0x40, true, 0xd51fee2f6c4ec338)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::file_object_t*), "_LOG_HANDLE_CONTEXT.RelatedFileObject", related_file_object, 0x3c0, 0x40, true, 0xeff94062629118eb)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_LOG_HANDLE_CONTEXT.LargestLsnFileObjectKey", largest_lsn_file_object_key, 0x400, 0x40, true, 0xbbf541e304e6011b)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_LOG_HANDLE_CONTEXT.LastLWTimeStamp", last_lw_time_stamp, 0x440, 0x40, true, 0x47da12ce3b190fa3)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_LOG_HANDLE_CONTEXT.Flags", flags, 0x480, 0x20, true, 0x394ae136d0475db7)
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