#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.PhysicalDeviceObject", physical_device_object, 0x0, 0x40, true, 0x69343f43ce7f926b)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t**), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.InterruptObject", interrupt_object, 0x40, 0x40, true, 0xb48ee16e43644b0f)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkservice_routine_t ), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.ServiceRoutine", service_routine, 0x80, 0x40, true, 0xe414f3b627a6dad7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.ServiceContext", service_context, 0xc0, 0x40, true, 0x7c3f73fb26c64635)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.SpinLock", spin_lock, 0x100, 0x40, true, 0x74338e6170357465)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.SynchronizeIrql", synchronize_irql, 0x140, 0x8, true, 0x9a764e37fec64f46)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.FloatingSave", floating_save, 0x148, 0x8, true, 0x9f14e296dc869e9e)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.ShareVector", share_vector, 0x150, 0x8, true, 0xa46a638464df665)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.Vector", vector, 0x160, 0x20, true, 0x7ce62548d0821999)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.Irql", irql, 0x180, 0x8, true, 0xce97ad2f0b28daed)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.InterruptMode", interrupt_mode, 0x1a0, 0x20, true, 0x2f458c29acff6f19)
#define _m11 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.ProcessorEnableMask", processor_enable_mask, 0x1c0, 0x40, true, 0x32998a42c64f8dd2)
#define _m12 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_IO_CONNECT_INTERRUPT_FULLY_SPECIFIED_PARAMETERS.Group", group, 0x200, 0x10, true, 0x618667d54cea6818)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#define _m11
#define _m12
#endif