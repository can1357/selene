#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::wudfmessage_reply_header_t), "_WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY.Header", header, 0x0, 0x20, true, 0xb013cff9221aabb3)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY.ProcessTimeout", process_timeout, 0x20, 0x20, true, 0x69c18f6aa79a6efc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WDFPROCMGMT_MESSAGE_QUERY_PROCESS_REPLY.DebugModeFlags", debug_mode_flags, 0x40, 0x20, true, 0xfe773315ae3fbd89)
#else
#define _m00
#define _m01
#define _m02
#endif