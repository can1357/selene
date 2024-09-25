#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_FREE_EL_RECORD_ARGS.TraceContext", trace_context, 0x0, 0x40, true, 0x9606c674f7d8b55e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::storage_errorlog_packet_t*), "_STOR_FREE_EL_RECORD_ARGS.ErrorLogPacket", error_log_packet, 0x40, 0x40, true, 0x8cf2328aba1abad5)
#else
#define _m00
#define _m01
#endif