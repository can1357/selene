#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_WORK_ON_BEHALF_TICKET.ThreadId", thread_id, 0x0, 0x20, true, 0xcd6b4fd5deba70ad)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_ALPC_WORK_ON_BEHALF_TICKET.ThreadCreationTimeLow", thread_creation_time_low, 0x20, 0x20, true, 0x7ec57bbda9509b6a)
#else
#define _m00
#define _m01
#endif