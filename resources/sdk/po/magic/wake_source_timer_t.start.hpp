#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::wake_source_header_t), "_PO_WAKE_SOURCE_TIMER.Header", header, 0x0, 0x40, true, 0x22737d759a8fab0e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::diagnostic_buffer_t), "_PO_WAKE_SOURCE_TIMER.Reason", reason, 0x40, 0x40, true, 0xb8fed4aeaa463b7f)
#else
#define _m00
#define _m01
#endif