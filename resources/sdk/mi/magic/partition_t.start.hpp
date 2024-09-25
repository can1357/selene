#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_core_t), "_MI_PARTITION.Core", core, 0x0, 0xc0, true, 0xe561d1b1dc5c4a01)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_modwrites_t), "_MI_PARTITION.Modwriter", modwriter, 0xdc0, 0x0, true, 0x57610e8608da188e)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_stores_t), "_MI_PARTITION.Store", store, 0x2400, 0x80, true, 0xfe60534891c7652d)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_segments_t), "_MI_PARTITION.Segments", segments, 0x2a00, 0x0, true, 0xdd51c20a073982f3)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_page_lists_t), "_MI_PARTITION.PageLists", page_lists, 0x4400, 0x0, true, 0xf36277631f472f20)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_commit_t), "_MI_PARTITION.Commit", commit, 0xc200, 0x0, true, 0x5b4b7aebfa00c319)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::partition_zeroing_t), "_MI_PARTITION.Zeroing", zeroing, 0xc400, 0x80, true, 0xf28a82fc28e205f2)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::page_combining_support_t), "_MI_PARTITION.PageCombine", page_combine, 0xc980, 0x80, true, 0xf1a45ef928531119)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_MI_PARTITION.WorkingSetControl", working_set_control, 0xd600, 0x40, true, 0x475245feab11437c)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::mmworking_set_expansion_head_t), "_MI_PARTITION.WorkingSetExpansionHead", working_set_expansion_head, 0xd640, 0x80, true, 0x30acbd5cf0d1499d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::visible_partition_t), "_MI_PARTITION.Vp", vp, 0xd800, 0x0, true, 0xda0a7ef9340059de)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_MI_PARTITION.SessionDetachTimeStamp", session_detach_time_stamp, 0xd6c0, 0x20, true, 0x8095869d5b14f079)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct mi::special_purpose_memory_state_t), "_MI_PARTITION.SpecialPurposeMemory", special_purpose_memory, 0x0, 0x0, false, 0xb071c9464bbb0a8b)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_MI_PARTITION.LastPeriodicTelemetryLogTime", last_periodic_telemetry_log_time, 0x0, 0x0, false, 0xf4bcb9d930dbbe9c)
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
#endif