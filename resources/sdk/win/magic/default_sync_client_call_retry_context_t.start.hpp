#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DefaultSyncClientCallRetryContext._cAutoRetries", c_auto_retries, 0x40, 0x20, true, 0x81f1a252f715715a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DefaultSyncClientCallRetryContext._cLastAutoRetryWaitIn100ns", c_last_auto_retry_wait_in100ns, 0x60, 0x20, true, 0x7d3023a23fc90f36)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DefaultSyncClientCallRetryContext._cMaxAutoRetryWaitIn100ns", c_max_auto_retry_wait_in100ns, 0x80, 0x20, true, 0x6b086874a72f9ca8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DefaultSyncClientCallRetryContext._cTotalAutoRetryWaitIn100ns", c_total_auto_retry_wait_in100ns, 0xa0, 0x20, true, 0x2a4305f2cc245b7c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "DefaultSyncClientCallRetryContext._hr", hr, 0xc0, 0x20, true, 0x19a7e1df79f664a1)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "DefaultSyncClientCallRetryContext._dwWakeup", dw_wakeup, 0x100, 0x40, true, 0x54898f0e6fed49e)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "DefaultSyncClientCallRetryContext._dwMillSecToWait", dw_mill_sec_to_wait, 0x140, 0x20, true, 0x8c10280a5b4da7b4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif