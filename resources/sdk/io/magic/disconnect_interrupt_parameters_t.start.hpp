#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_DISCONNECT_INTERRUPT_PARAMETERS.Version", version, 0x0, 0x20, true, 0xb949e3db645061a9)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_DISCONNECT_INTERRUPT_PARAMETERS.ConnectionContext.Generic", generic, 0x0, 0x40, true, 0x7dc67290204f1cd5)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_IO_DISCONNECT_INTERRUPT_PARAMETERS.ConnectionContext.InterruptObject", interrupt_object, 0x0, 0x40, true, 0xf86db3321c8d9ed0)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t*), "_IO_DISCONNECT_INTERRUPT_PARAMETERS.ConnectionContext.InterruptMessageTable", interrupt_message_table, 0x0, 0x40, true, 0x43aa2a86f0d9b5e)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_connection_context_t), "_IO_DISCONNECT_INTERRUPT_PARAMETERS.ConnectionContext", connection_context, 0x40, 0x40, true, 0x653298eabdabf2ab)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif