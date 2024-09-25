#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_RTL_UMS_CONTEXT.Link", link, 0x0, 0x40, true, 0xc4360bcfe5ed0f86)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context), "_RTL_UMS_CONTEXT.Context", context, 0x80, 0x80, true, 0xd83c0725e561c3ec)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_UMS_CONTEXT.Teb", teb, 0x2700, 0x40, true, 0x93c2a9208c9a4019)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_RTL_UMS_CONTEXT.UserContext", user_context, 0x2740, 0x40, true, 0x4912da75f55ad279)
#define _m04 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.ScheduledThread", scheduled_thread, 0x2780, 0x1, true, 0x340dbf128051847e, 1, uint32_t)
#define _m05 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.Suspended", suspended, 0x2781, 0x1, true, 0xf1d8ba963491bad8, 1, uint32_t)
#define _m06 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.VolatileContext", volatile_context, 0x2782, 0x1, true, 0xee3760fbf59f4e2, 1, uint32_t)
#define _m07 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.Terminated", terminated, 0x2783, 0x1, true, 0xe63b7bcdde4d3adb, 1, uint32_t)
#define _m08 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.DebugActive", debug_active, 0x2784, 0x1, true, 0x9f999b0b65070cbb, 1, uint32_t)
#define _m09 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.RunningOnSelfThread", running_on_self_thread, 0x2785, 0x1, true, 0x8afb1ac7db301389, 1, uint32_t)
#define _m10 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_RTL_UMS_CONTEXT.DenyRunningOnSelfThread", deny_running_on_self_thread, 0x2786, 0x1, true, 0xabb0c64ce47bd3a1, 1, uint32_t)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_RTL_UMS_CONTEXT.Flags", flags, 0x2780, 0x20, true, 0x56ecb96d9eea397d)
#define _m12 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_RTL_UMS_CONTEXT.KernelUpdateLock", kernel_update_lock, 0x27c0, 0x2, true, 0xad265baff324a038, 2, uint64_t)
#define _m13 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint62_t), "_RTL_UMS_CONTEXT.PrimaryClientID", primary_client_id, 0x27c2, 0x3e, true, 0xb551c877f68e472, 62, uint64_t)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_RTL_UMS_CONTEXT.ContextLock", context_lock, 0x27c0, 0x40, true, 0x2ea3586cf9fb903d)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::ums_context_t*), "_RTL_UMS_CONTEXT.PrimaryUmsContext", primary_ums_context, 0x2800, 0x40, true, 0xcdbac19b017b1fc7)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UMS_CONTEXT.SwitchCount", switch_count, 0x2840, 0x20, true, 0x6551238508bcf450)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UMS_CONTEXT.KernelYieldCount", kernel_yield_count, 0x2860, 0x20, true, 0x7223f17710275f93)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UMS_CONTEXT.MixedYieldCount", mixed_yield_count, 0x2880, 0x20, true, 0x55f5448a22bcfbbb)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RTL_UMS_CONTEXT.YieldCount", yield_count, 0x28a0, 0x20, true, 0xe07f847d406fdb40)
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
#define _m11
#define _m12
#define _m13
#define _m14
#define _m15
#define _m16
#define _m17
#define _m18
#define _m19
#endif