#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_STATUS.cbSize", cb_size, 0x0, 0x20, true, 0x5e8daf739e88170d)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_STATUS.dwIndex", dw_index, 0x20, 0x20, true, 0x4b9f7672371fb2f1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_STATUS.dwError", dw_error, 0x40, 0x20, true, 0xacceae3f25b728a)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_STATUS.dwReason", dw_reason, 0x60, 0x20, true, 0x464d4195bd77f108)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_CERT_REVOCATION_STATUS.fHasFreshnessTime", f_has_freshness_time, 0x80, 0x20, true, 0x252bebfb1779266e)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_CERT_REVOCATION_STATUS.dwFreshnessTime", dw_freshness_time, 0xa0, 0x20, true, 0xef885d24a40ea8fb)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif