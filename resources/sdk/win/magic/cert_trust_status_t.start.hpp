#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TRUST_STATUS.dwErrorStatus", dw_error_status, 0x0, 0x20, true, 0x145fcf587500b643)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_TRUST_STATUS.dwInfoStatus", dw_info_status, 0x20, 0x20, true, 0xea9993d9f67e5b89)
#else
#define _m00
#define _m01
#endif