#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "_EVENT_TRACE_PROPERTIES_V2.Wnode", wnode, 0x0, 0x80, true, 0x90baaad82af9ee5e)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.BufferSize", buffer_size, 0x180, 0x20, true, 0x7376acf315b1eabf)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.MinimumBuffers", minimum_buffers, 0x1a0, 0x20, true, 0x8d722bcd665efb22)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.MaximumBuffers", maximum_buffers, 0x1c0, 0x20, true, 0xf673e6a29001e612)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.MaximumFileSize", maximum_file_size, 0x1e0, 0x20, true, 0xc3270186b4a3d4fd)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.LogFileMode", log_file_mode, 0x200, 0x20, true, 0xa4e3fc39835eca83)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.FlushTimer", flush_timer, 0x220, 0x20, true, 0x73ca7b40df4e9081)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.EnableFlags", enable_flags, 0x240, 0x20, true, 0xeb422ba76821f5fc)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EVENT_TRACE_PROPERTIES_V2.AgeLimit", age_limit, 0x260, 0x20, true, 0x16c82d1789f57f7f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EVENT_TRACE_PROPERTIES_V2.FlushThreshold", flush_threshold, 0x260, 0x20, true, 0xa2807db1df98b135)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.NumberOfBuffers", number_of_buffers, 0x280, 0x20, true, 0x48f2ff73caec8bcf)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.FreeBuffers", free_buffers, 0x2a0, 0x20, true, 0x8505ed632cde7ca5)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.EventsLost", events_lost, 0x2c0, 0x20, true, 0xce67b30342d6f7ae)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.BuffersWritten", buffers_written, 0x2e0, 0x20, true, 0xa70631b9e3c1f22a)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.LogBuffersLost", log_buffers_lost, 0x300, 0x20, true, 0x617bf2246d5d1951)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.RealTimeBuffersLost", real_time_buffers_lost, 0x320, 0x20, true, 0x5fc7d36c1e8adf77)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_TRACE_PROPERTIES_V2.LoggerThreadId", logger_thread_id, 0x340, 0x40, true, 0xe0dc99eb4dee7963)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.LogFileNameOffset", log_file_name_offset, 0x380, 0x20, true, 0x1b784e55df1c4838)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.LoggerNameOffset", logger_name_offset, 0x3a0, 0x20, true, 0xe4d777dff2715736)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint8_t), "_EVENT_TRACE_PROPERTIES_V2.VersionNumber", version_number, 0x3c0, 0x8, true, 0x5b6d55c3b0cec30a, 8, uint32_t)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.V2Control", v2_control, 0x3c0, 0x20, true, 0x65de5902d2cdd0fa)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES_V2.FilterDescCount", filter_desc_count, 0x3e0, 0x20, true, 0x5e1133c42a8ae090)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::event_filter_descriptor_t*), "_EVENT_TRACE_PROPERTIES_V2.FilterDesc", filter_desc, 0x400, 0x40, true, 0x1581f07c15bfe328)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EVENT_TRACE_PROPERTIES_V2.Wow", wow, 0x440, 0x1, true, 0xcb71b00c22dfc3c5, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EVENT_TRACE_PROPERTIES_V2.QpcDeltaTracking", qpc_delta_tracking, 0x441, 0x1, true, 0xe0d6f009a8311821, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EVENT_TRACE_PROPERTIES_V2.LargeMdlPages", large_mdl_pages, 0x442, 0x1, true, 0x95e4f45e7c471178, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_EVENT_TRACE_PROPERTIES_V2.ExcludeKernelStack", exclude_kernel_stack, 0x443, 0x1, true, 0xab85a2a5e6dd932, 1, uint32_t)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_EVENT_TRACE_PROPERTIES_V2.V2Options", v2_options, 0x440, 0x40, true, 0x5b24eb223290bf17)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#endif