#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.Version", version, 0x0, 0x20, true, 0xfd9b7159de733478)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(void*), "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.ConnectionContext.Generic", generic, 0x0, 0x40, true, 0x1fae557924628c36)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.ConnectionContext.InterruptObject", interrupt_object, 0x0, 0x40, true, 0x555a8b8e256e690b)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct io::interrupt_message_info_t*), "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.ConnectionContext.InterruptMessageTable", interrupt_message_table, 0x0, 0x40, true, 0xdade08b0d4fea03f)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(u0_connection_context_t), "_IO_REPORT_INTERRUPT_ACTIVE_STATE_PARAMETERS.ConnectionContext", connection_context, 0x40, 0x40, true, 0x85be9f8f3d730fe9)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif