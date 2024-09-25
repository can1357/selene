#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::port_message_t*), "_WORKER_FACTORY_DEFERRED_WORK.AlpcSendMessage", alpc_send_message, 0x0, 0x40, true, 0x301f6bbc8aff06b9)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_WORKER_FACTORY_DEFERRED_WORK.AlpcSendMessagePort", alpc_send_message_port, 0x40, 0x40, true, 0xa4ce82625e9d64f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_DEFERRED_WORK.AlpcSendMessageFlags", alpc_send_message_flags, 0x80, 0x20, true, 0x23ee92b6abbeab1f)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WORKER_FACTORY_DEFERRED_WORK.Flags", flags, 0xa0, 0x20, true, 0x23d49d6219c65c6a)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#endif