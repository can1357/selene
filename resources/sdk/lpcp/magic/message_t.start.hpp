#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LPCP_MESSAGE.Entry", entry, 0x0, 0x80, true, 0x65306edb10b0d681)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_LPCP_MESSAGE.FreeEntry", free_entry, 0x0, 0x40, true, 0x3b3cdf3fdf82a89f)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LPCP_MESSAGE.SenderPort", sender_port, 0x80, 0x40, true, 0xee293d063a4f0589)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ethread_t*), "_LPCP_MESSAGE.RepliedToThread", replied_to_thread, 0xc0, 0x40, true, 0xf366292edf9fa7ac)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_LPCP_MESSAGE.PortContext", port_context, 0x100, 0x40, true, 0xc885b6a5687e51f0)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::port_message_t), "_LPCP_MESSAGE.Request", request, 0x140, 0x40, true, 0x6d8dc71fcf6c41f6)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif