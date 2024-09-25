#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_RESERVE_INFORMATION.RequestsPerPeriod", requests_per_period, 0x0, 0x20, true, 0xb547a8e54f303bdf)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_RESERVE_INFORMATION.Period", period, 0x20, 0x20, true, 0x67464e3023a4cd0b)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_SFIO_RESERVE_INFORMATION.RetryFailures", retry_failures, 0x40, 0x8, true, 0x862d747ddc846aad)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_FILE_SFIO_RESERVE_INFORMATION.Discardable", discardable, 0x48, 0x8, true, 0x3c1dc7230600b2b)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_RESERVE_INFORMATION.RequestSize", request_size, 0x60, 0x20, true, 0x8f011462f9de8110)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_FILE_SFIO_RESERVE_INFORMATION.NumOutstandingRequests", num_outstanding_requests, 0x80, 0x20, true, 0x72688058c3e44c43)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif