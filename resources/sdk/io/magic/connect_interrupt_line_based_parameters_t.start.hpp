#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.PhysicalDeviceObject", physical_device_object, 0x0, 0x40, true, 0x32c27381849b2425)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t**), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.InterruptObject", interrupt_object, 0x40, 0x40, true, 0xc79d2adbbaa1c8bf)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkservice_routine_t ), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.ServiceRoutine", service_routine, 0x80, 0x40, true, 0x18b25c5b6fb8150b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.ServiceContext", service_context, 0xc0, 0x40, true, 0xa73373a2c2a1256c)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.SpinLock", spin_lock, 0x100, 0x40, true, 0x7d44f307f08d291c)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.SynchronizeIrql", synchronize_irql, 0x140, 0x8, true, 0xce23709cecd6ee51)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_LINE_BASED_PARAMETERS.FloatingSave", floating_save, 0x148, 0x8, true, 0xbd27f294e842912d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif