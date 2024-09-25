#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_THREAD_INFORMATION.KernelTime", kernel_time, 0x0, 0x40, true, 0x2a52a10fa0881dab)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_THREAD_INFORMATION.UserTime", user_time, 0x40, 0x40, true, 0xc4a92849d7a669b8)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_SYSTEM_THREAD_INFORMATION.CreateTime", create_time, 0x80, 0x40, true, 0x7b4c05264b2ca3dc)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_THREAD_INFORMATION.WaitTime", wait_time, 0xc0, 0x20, true, 0x90f60a525effd771)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_SYSTEM_THREAD_INFORMATION.StartAddress", start_address, 0x100, 0x40, true, 0xbcdc47e3f47be833)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::client_id_t), "_SYSTEM_THREAD_INFORMATION.ClientId", client_id, 0x140, 0x80, true, 0xee805236abe58be7)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SYSTEM_THREAD_INFORMATION.Priority", priority, 0x1c0, 0x20, true, 0xb876f31cd78e0)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_SYSTEM_THREAD_INFORMATION.BasePriority", base_priority, 0x1e0, 0x20, true, 0x9a2d8e3885be81e0)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_THREAD_INFORMATION.ContextSwitches", context_switches, 0x200, 0x20, true, 0xe783a09082e720af)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_THREAD_INFORMATION.ThreadState", thread_state, 0x220, 0x20, true, 0xa1a38b1c4284dc2a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_SYSTEM_THREAD_INFORMATION.WaitReason", wait_reason, 0x240, 0x20, true, 0x16413e67cea9e9fa)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#define _m07
#define _m08
#define _m09
#define _m10
#endif