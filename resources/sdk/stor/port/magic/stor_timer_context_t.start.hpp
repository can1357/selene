#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct stor::port::raid_adapter_extension_t*), "_STOR_TIMER_CONTEXT.Adapter", adapter, 0x0, 0x40, true, 0x7c005b6ef7254522)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_STOR_TIMER_CONTEXT.Timer", timer, 0x40, 0x0, true, 0xcd21a449fad62936)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_STOR_TIMER_CONTEXT.TimerDpc", timer_dpc, 0x240, 0x0, true, 0x7a65d11c281bc0c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*)>*), "_STOR_TIMER_CONTEXT.Callback", callback, 0x440, 0x40, true, 0x312e856099bf5439)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_STOR_TIMER_CONTEXT.CallbackContext", callback_context, 0x480, 0x40, true, 0xe737c45ab395e22a)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::workitem_t*), "_STOR_TIMER_CONTEXT.FreeTimerWorkItem", free_timer_work_item, 0x4c0, 0x40, true, 0x218e175aa58f802d)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif