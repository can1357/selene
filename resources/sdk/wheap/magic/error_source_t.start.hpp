#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_WHEAP_ERROR_SOURCE.ListEntry", list_entry, 0x0, 0x80, true, 0x356b5de7d5b10ed0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.FailedAllocations", failed_allocations, 0x80, 0x20, true, 0xa46ba7ac32de3d1f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.PlatformErrorSourceId", platform_error_source_id, 0xa0, 0x20, true, 0xc31b14361dacacd7)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WHEAP_ERROR_SOURCE.ErrorCount", error_count, 0xc0, 0x20, true, 0x67d670baea04ebc1)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.RecordCount", record_count, 0xe0, 0x20, true, 0x4b93fdf4b9a13ad9)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.RecordLength", record_length, 0x100, 0x20, true, 0x2b629ed736acbe90)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.PoolTag", pool_tag, 0x120, 0x20, true, 0xa56d5038feee84b0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum whea::error_source_type_t), "_WHEAP_ERROR_SOURCE.Type", type, 0x140, 0x20, true, 0xf3ea687c40e74795)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wheap::error_record_wrapper_t*), "_WHEAP_ERROR_SOURCE.Records", records, 0x180, 0x40, true, 0x1b6f9ab9983d12ce)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WHEAP_ERROR_SOURCE.Context", context, 0x1c0, 0x40, true, 0x27e02e9cd09381e)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.SectionCount", section_count, 0x200, 0x20, true, 0x8da016035bf3d719)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.SectionLength", section_length, 0x220, 0x20, true, 0x4bcbaf232ba4a5cc)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_WHEAP_ERROR_SOURCE.TickCountAtLastError", tick_count_at_last_error, 0x240, 0x40, true, 0x4046dcb6f9e01482)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.AccumulatedErrors", accumulated_errors, 0x280, 0x20, true, 0x559594fbe13a707d)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WHEAP_ERROR_SOURCE.TotalErrors", total_errors, 0x2a0, 0x20, true, 0xf371becb2b287c3)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_WHEAP_ERROR_SOURCE.Deferred", deferred, 0x2c0, 0x8, true, 0x23b6c33858b3057d)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct whea::error_source_descriptor_t), "_WHEAP_ERROR_SOURCE.Descriptor", descriptor, 0x300, 0x60, true, 0x17c3074abf537b85)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_WHEAP_ERROR_SOURCE.Busy", busy, 0x2e0, 0x20, true, 0x8c607e8e93a6fde7)
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
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#endif