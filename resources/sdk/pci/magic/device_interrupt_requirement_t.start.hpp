#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_INTERRUPT_REQUIREMENT.LineBased", line_based, 0x0, 0x0, true, 0x7aff090216c3af1a)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pci::interrupt_type_t), "_PCI_DEVICE_INTERRUPT_REQUIREMENT.Message.Type", type, 0x0, 0x20, true, 0x199ad39405c1186)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_PCI_DEVICE_INTERRUPT_REQUIREMENT.Message.MessagesRequested", messages_requested, 0x20, 0x20, true, 0xc07a8232849a37f6)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::resource_descriptor_t), "_PCI_DEVICE_INTERRUPT_REQUIREMENT.Message.SingleMessage", single_message, 0x40, 0x0, true, 0x7a7a3f6660ddf8df)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_message_t), "_PCI_DEVICE_INTERRUPT_REQUIREMENT.Message", message, 0x100, 0x40, true, 0x99b49534eac0d38a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif