#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class asl::log_t), "AslLogGlobalLogger.Log", log, 0x0, 0x40, true, 0xa2af317bcc19038e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class asl::telemetry_t), "AslLogGlobalLogger.Telemetry", telemetry, 0x40, 0x40, true, 0xa4eae5f217a45c4d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(asl_log_pfn_vprintf_t ), "AslLogGlobalLogger.PfnLogListener", pfn_log_listener, 0x80, 0x40, true, 0x6c236116a20b365b)
#else
#define _m00
#define _m01
#define _m02
#endif