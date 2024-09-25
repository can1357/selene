#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_IOV_IRP_TRACE.Irp", irp, 0x0, 0x40, true, 0xe5f5761a199943a8)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_IOV_IRP_TRACE.Thread", thread, 0x40, 0x40, true, 0xe1409c4baf6ce867)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IOV_IRP_TRACE.KernelApcDisable", kernel_apc_disable, 0x80, 0x10, true, 0x891d16f5b0625eec)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_IOV_IRP_TRACE.SpecialApcDisable", special_apc_disable, 0x90, 0x10, true, 0xd2e1a99559d1d738)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_IOV_IRP_TRACE.CombinedApcDisable", combined_apc_disable, 0x80, 0x20, true, 0xc9828bb93c38c172)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_IOV_IRP_TRACE.Irql", irql, 0xa0, 0x8, true, 0x7351d9654ff73ac7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 13>), "_IOV_IRP_TRACE.StackTrace", stack_trace, 0xc0, 0x40, true, 0xa789f54b479ab0e4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif