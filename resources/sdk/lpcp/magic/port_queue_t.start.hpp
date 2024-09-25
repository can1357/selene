#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct lpcp::nonpaged_port_queue_t*), "_LPCP_PORT_QUEUE.NonPagedPortQueue", non_paged_port_queue, 0x0, 0x40, true, 0x18f45b8a3e20cf8b)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t*), "_LPCP_PORT_QUEUE.Semaphore", semaphore, 0x40, 0x40, true, 0x4a632c42fbebac08)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_LPCP_PORT_QUEUE.ReceiveHead", receive_head, 0x80, 0x80, true, 0x4d48f09b4684cae8)
#else
#define _m00
#define _m01
#define _m02
#endif