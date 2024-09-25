#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SyncClientCallRetryContext._cAutoRetries", c_auto_retries, 0x40, 0x20, true, 0xb2544a52a4d702d0)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SyncClientCallRetryContext._cLastAutoRetryWaitIn100ns", c_last_auto_retry_wait_in100ns, 0x60, 0x20, true, 0x829c422121ca29b)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SyncClientCallRetryContext._cMaxAutoRetryWaitIn100ns", c_max_auto_retry_wait_in100ns, 0x80, 0x20, true, 0xe07fd58694fd481e)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SyncClientCallRetryContext._cTotalAutoRetryWaitIn100ns", c_total_auto_retry_wait_in100ns, 0xa0, 0x20, true, 0x6231c1a690c3583f)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::hresult), "SyncClientCallRetryContext._hr", hr, 0xc0, 0x20, true, 0xbe6f33c066a5ce16)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "SyncClientCallRetryContext._dwWakeup", dw_wakeup, 0x100, 0x40, true, 0x8a1f7cee92638a4a)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "SyncClientCallRetryContext._dwMillSecToWait", dw_mill_sec_to_wait, 0x140, 0x20, true, 0x44efd00aff02eac3)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif