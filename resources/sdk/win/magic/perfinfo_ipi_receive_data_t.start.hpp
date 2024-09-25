#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_IPI_RECEIVE_DATA.WorkerRoutine", worker_routine, 0x40, 0x40, true, 0xe7e8e9be6fda30be)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IPI_RECEIVE_DATA.RequestType", request_type, 0x80, 0x20, true, 0xab059f865c625ee8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_IPI_RECEIVE_DATA.InitialTime", initial_time, 0x0, 0x40, true, 0x56a87aca2d9ca9fd)
#else
#define _m00
#define _m01
#define _m02
#endif