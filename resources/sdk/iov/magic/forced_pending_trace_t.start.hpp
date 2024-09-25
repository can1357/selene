#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_IOV_FORCED_PENDING_TRACE.Irp", irp, 0x0, 0x40, true, 0x29fe8eef9d4ad96f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_IOV_FORCED_PENDING_TRACE.Thread", thread, 0x40, 0x40, true, 0x148900a5c2ae5614)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 62>), "_IOV_FORCED_PENDING_TRACE.StackTrace", stack_trace, 0x80, 0x80, true, 0x139074f9713d4505)
#else
#define _m00
#define _m01
#define _m02
#endif