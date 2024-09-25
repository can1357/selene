#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::wnode_header_t), "_EVENT_TRACE_PROPERTIES.Wnode", wnode, 0x0, 0x80, true, 0xc8b82499d2c23475)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.BufferSize", buffer_size, 0x180, 0x20, true, 0xe0228c89d133cc37)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.MinimumBuffers", minimum_buffers, 0x1a0, 0x20, true, 0x9ce2df6cf06b7483)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.MaximumBuffers", maximum_buffers, 0x1c0, 0x20, true, 0x767d67a4d6be0554)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.MaximumFileSize", maximum_file_size, 0x1e0, 0x20, true, 0xe16a25ec9cc4d765)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.LogFileMode", log_file_mode, 0x200, 0x20, true, 0xd4cec5fb31f3b4b0)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.FlushTimer", flush_timer, 0x220, 0x20, true, 0xda0c3fbfed072417)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.EnableFlags", enable_flags, 0x240, 0x20, true, 0x95144919c9d4c0a6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EVENT_TRACE_PROPERTIES.AgeLimit", age_limit, 0x260, 0x20, true, 0x138fdeab958030a8)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_EVENT_TRACE_PROPERTIES.FlushThreshold", flush_threshold, 0x260, 0x20, true, 0x92fc852bc186b130)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.NumberOfBuffers", number_of_buffers, 0x280, 0x20, true, 0xe340fb1cc9623703)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.FreeBuffers", free_buffers, 0x2a0, 0x20, true, 0x175c273938267217)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.EventsLost", events_lost, 0x2c0, 0x20, true, 0x812056174bd7de7a)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.BuffersWritten", buffers_written, 0x2e0, 0x20, true, 0x29503c81fbcd09c9)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.LogBuffersLost", log_buffers_lost, 0x300, 0x20, true, 0x4cc2bb065a54ddd2)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.RealTimeBuffersLost", real_time_buffers_lost, 0x320, 0x20, true, 0xf8d0013c64f5d5fe)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_EVENT_TRACE_PROPERTIES.LoggerThreadId", logger_thread_id, 0x340, 0x40, true, 0xa819e105142e6329)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.LogFileNameOffset", log_file_name_offset, 0x380, 0x20, true, 0x1dacf989d841f217)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_EVENT_TRACE_PROPERTIES.LoggerNameOffset", logger_name_offset, 0x3a0, 0x20, true, 0xf841c7106fb3bef5)
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
#define _m18
#endif