#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::port_message_t), "_LPC_UNREGISTER_PROCESS_MSG.PortMsg", port_msg, 0x0, 0x40, true, 0x736c7e83ba9c0ce2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LPC_UNREGISTER_PROCESS_MSG.UniqueProcessId", unique_process_id, 0x140, 0x40, true, 0x882ab73c2b2efced)
#else
#define _m00
#define _m01
#endif