#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksemaphore_t), "_LPCP_NONPAGED_PORT_QUEUE.Semaphore", semaphore, 0x0, 0x0, true, 0x337bc8d8c71cd2)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct lpcp::port_object_t*), "_LPCP_NONPAGED_PORT_QUEUE.BackPointer", back_pointer, 0x100, 0x40, true, 0x3831f402de07c533)
#else
#define _m00
#define _m01
#endif