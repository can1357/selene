#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::cryptoapi_blob_t), "_CMC_PEND_INFO.PendToken", pend_token, 0x0, 0x80, true, 0x93f651029ae6e677)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_CMC_PEND_INFO.PendTime", pend_time, 0x80, 0x40, true, 0x713922c21806a5ac)
#else
#define _m00
#define _m01
#endif