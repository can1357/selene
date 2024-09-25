#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_PERFINFO_IPI_SEND_DATA.WorkerRoutine", worker_routine, 0x40, 0x40, true, 0x69538cae484c681b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IPI_SEND_DATA.RequestType", request_type, 0x80, 0x20, true, 0xb30ba519fafe60e1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IPI_SEND_DATA.IpiType", ipi_type, 0xa0, 0x20, true, 0xc9c05224c7582845)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PERFINFO_IPI_SEND_DATA.TargetCount", target_count, 0xc0, 0x20, true, 0xcf6bcb022683d9b2)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_PERFINFO_IPI_SEND_DATA.InitialTime", initial_time, 0x0, 0x40, true, 0xebe27ab20423f564)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif