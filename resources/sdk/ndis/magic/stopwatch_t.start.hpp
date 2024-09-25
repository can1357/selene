#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NdisStopwatch.QpcStartTime", qpc_start_time, 0x0, 0x0, false, 0xeb034d76efe52c0e)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NdisStopwatch.QpFrequency", qp_frequency, 0x0, 0x0, false, 0xd76170fa7d96ca2d)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "NdisStopwatch.QpcLastStopTime", qpc_last_stop_time, 0x0, 0x0, false, 0x885abe18330a0da)
#else
#define _m00
#define _m01
#define _m02
#endif