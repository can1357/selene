#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.PhysicalDeviceObject", physical_device_object, 0x0, 0x40, true, 0x5ad49acfb3d2fa2e)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void**), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.ConnectionContext.Generic", generic, 0x0, 0x40, true, 0xd03b7897eabeaa01)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t**), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.ConnectionContext.InterruptMessageTable", interrupt_message_table, 0x0, 0x40, true, 0x7d8cd154eecbc4e5)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t**), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.ConnectionContext.InterruptObject", interrupt_object, 0x0, 0x40, true, 0x253c572d98019d58)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_connection_context_t), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.ConnectionContext", connection_context, 0x40, 0x40, true, 0xec3b88fb24862f14)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkmessage_service_routine_t ), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.MessageServiceRoutine", message_service_routine, 0x80, 0x40, true, 0xb922c3678ec28f52)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.ServiceContext", service_context, 0xc0, 0x40, true, 0x497c50d678cd84a0)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t*), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.SpinLock", spin_lock, 0x100, 0x40, true, 0x52dddba9f4ddfaf7)
#define _m08 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.SynchronizeIrql", synchronize_irql, 0x140, 0x8, true, 0x62b2bd5574bc2ea3)
#define _m09 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.FloatingSave", floating_save, 0x148, 0x8, true, 0xa74aaa5bb87a6c66)
#define _m10 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(pkservice_routine_t ), "_IO_CONNECT_INTERRUPT_MESSAGE_BASED_PARAMETERS.FallBackServiceRoutine", fall_back_service_routine, 0x180, 0x40, true, 0x6f8e99d9bf13d08e)
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
#endif