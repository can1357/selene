#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ClientCallRetryContext._cAutoRetries", c_auto_retries, 0x0, 0x20, true, 0xe31a8dd48ec304b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ClientCallRetryContext._cLastAutoRetryWaitIn100ns", c_last_auto_retry_wait_in100ns, 0x20, 0x20, true, 0xef57ef00934fe645)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ClientCallRetryContext._cMaxAutoRetryWaitIn100ns", c_max_auto_retry_wait_in100ns, 0x40, 0x20, true, 0xc43b4b5aee9a1caa)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "ClientCallRetryContext._cTotalAutoRetryWaitIn100ns", c_total_auto_retry_wait_in100ns, 0x60, 0x20, true, 0xced3f1482f0109fa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif