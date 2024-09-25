#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(const uint32_t), "UnbiasedTimer._dwTimeout", dw_timeout, 0x0, 0x20, true, 0x23db7b5f48c09b4)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "UnbiasedTimer._startTime", start_time, 0x40, 0x40, true, 0x411145d91839fe5d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(bool), "UnbiasedTimer._isStarted", is_started, 0x80, 0x8, true, 0x2776e9c8ccbf4903)
#else
#define _m00
#define _m01
#define _m02
#endif