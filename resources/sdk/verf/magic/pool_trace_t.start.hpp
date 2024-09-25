#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_VF_POOL_TRACE.Address", address, 0x0, 0x40, true, 0xe8b68bd445891ecb)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_VF_POOL_TRACE.Size", size, 0x40, 0x40, true, 0x2e48ae5c097286dc)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_VF_POOL_TRACE.Thread", thread, 0x80, 0x40, true, 0xb90adcddcdf4d392)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 13>), "_VF_POOL_TRACE.StackTrace", stack_trace, 0xc0, 0x40, true, 0x6be7611bc0a13efc)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif