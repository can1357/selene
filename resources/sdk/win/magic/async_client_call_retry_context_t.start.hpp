#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AsyncClientCallRetryContext._cAutoRetries", c_auto_retries, 0x0, 0x20, true, 0x19d1bfe1b468a2ce)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AsyncClientCallRetryContext._cLastAutoRetryWaitIn100ns", c_last_auto_retry_wait_in100ns, 0x20, 0x20, true, 0x49b7eb93df59a54a)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AsyncClientCallRetryContext._cMaxAutoRetryWaitIn100ns", c_max_auto_retry_wait_in100ns, 0x40, 0x20, true, 0x366d376dc2da3004)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AsyncClientCallRetryContext._cTotalAutoRetryWaitIn100ns", c_total_auto_retry_wait_in100ns, 0x60, 0x20, true, 0xe6cf53eb59630abb)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct tp::timer_t*), "AsyncClientCallRetryContext._pTimer", p_timer, 0xc0, 0x40, true, 0xb0ff424c8a23f959)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "AsyncClientCallRetryContext._isCancellationRequested", is_cancellation_requested, 0x1a0, 0x8, true, 0x28f36fd2283eec8d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "AsyncClientCallRetryContext._allowFinalRetryAttempt", allow_final_retry_attempt, 0x1a8, 0x8, true, 0x83e3be10529e674)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "AsyncClientCallRetryContext._retryCount", retry_count, 0x240, 0x20, true, 0xceb69cc29bf97a20)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif