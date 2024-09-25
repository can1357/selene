#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SERVICE_CONTROL_STATUS_REASON_PARAMSW.dwReason", dw_reason, 0x0, 0x20, true, 0x67eb164e8018948a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_SERVICE_CONTROL_STATUS_REASON_PARAMSW.pszComment", psz_comment, 0x40, 0x40, true, 0xcd33e8e2a0b7acce)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::service_status_process_t), "_SERVICE_CONTROL_STATUS_REASON_PARAMSW.ServiceStatus", service_status, 0x80, 0x20, true, 0x587e9184a53b12b4)
#else
#define _m00
#define _m01
#define _m02
#endif