#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_CONTROL_STATUS_REASON_PARAMSA.dwReason", dw_reason, 0x0, 0x20, true, 0xfc0db6db72c8363)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char*), "_SERVICE_CONTROL_STATUS_REASON_PARAMSA.pszComment", psz_comment, 0x40, 0x40, true, 0x235d31cd55d39486)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_SERVICE_CONTROL_STATUS_REASON_PARAMSA.ServiceStatus", service_status, 0x80, 0x20, true, 0x404d552b7ab5e9c9)
#else
#define _m00
#define _m01
#define _m02
#endif