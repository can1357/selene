#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_INTERRUPT_MESSAGE_INFO.UnifiedIrql", unified_irql, 0x0, 0x8, true, 0x84ec79e3b1f6ecc)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_INTERRUPT_MESSAGE_INFO.MessageCount", message_count, 0x20, 0x20, true, 0xeaca633d924a6954)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(sdk::array<struct io::interrupt_message_info_entry_t, 1>), "_IO_INTERRUPT_MESSAGE_INFO.MessageInfo", message_info, 0x40, 0x80, true, 0x2e542f6ee0742a3e)
#else
#define _m00
#define _m01
#define _m02
#endif