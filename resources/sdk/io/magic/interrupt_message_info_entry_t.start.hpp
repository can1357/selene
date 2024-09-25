#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int64_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.MessageAddress", message_address, 0x0, 0x40, true, 0x31ae35148d674e8c)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.TargetProcessorSet", target_processor_set, 0x40, 0x40, true, 0x39ed3da44c9e6eb6)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kinterrupt_t*), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.InterruptObject", interrupt_object, 0x80, 0x40, true, 0x83f4e8a0cb0ffe08)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.MessageData", message_data, 0xc0, 0x20, true, 0x1517efee7aa2ae04)
#define _m04 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.Vector", vector, 0xe0, 0x20, true, 0x4b4092b988c52dab)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.Irql", irql, 0x100, 0x8, true, 0xa3634a8b4517b755)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_mode_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.Mode", mode, 0x120, 0x20, true, 0x7362128cdefcbcb8)
#define _m07 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(enum nt::kinterrupt_polarity_t), "_IO_INTERRUPT_MESSAGE_INFO_ENTRY.Polarity", polarity, 0x140, 0x20, true, 0xeea21e2523c03b80)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#endif