#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::timer_entry_t*), "_NDIS_TIMER_ENTRY.NextTimer", next_timer, 0x0, 0x0, false, 0x799835e66ccffa48)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_NDIS_TIMER_ENTRY.GlobalLink", global_link, 0x0, 0x0, false, 0xab9d98178a09aebe)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TIMER_ENTRY.Handle", handle, 0x0, 0x0, false, 0x8de23c77413e6ee)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_NDIS_TIMER_ENTRY.Timer", timer, 0x0, 0x0, false, 0xb6fab8bdc58db717)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_NDIS_TIMER_ENTRY.Dpc", dpc, 0x0, 0x0, false, 0x2dc2357cad564cf2)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_NDIS_TIMER_ENTRY.AllocationTag", allocation_tag, 0x0, 0x0, false, 0x84ac4c09ed201a8d)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, void*)>*), "_NDIS_TIMER_ENTRY.TimerFunction", timer_function, 0x0, 0x0, false, 0x89ba929e02a02612)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TIMER_ENTRY.DefaultFunctionContext", default_function_context, 0x0, 0x0, false, 0xd19ea60d405804d2)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_TIMER_ENTRY.FunctionContext", function_context, 0x0, 0x0, false, 0x63c9efeec549a826)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_TIMER_ENTRY.Miniport", miniport, 0x0, 0x0, false, 0x519a1b7b5abc5e4d)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_NDIS_TIMER_ENTRY.Periodic", periodic, 0x0, 0x0, false, 0xf512051c8a80708c)
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