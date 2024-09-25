#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_NDIS_MINIPORT_TIMER.Timer", timer, 0x0, 0x0, true, 0x1ce7b5e2b6b889fd)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_NDIS_MINIPORT_TIMER.Dpc", dpc, 0x200, 0x0, true, 0x329ca877a82834d1)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(void*, void*, void*, void*)>*), "_NDIS_MINIPORT_TIMER.MiniportTimerFunction", miniport_timer_function, 0x400, 0x40, true, 0xca36236b0d40ab5c)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_NDIS_MINIPORT_TIMER.MiniportTimerContext", miniport_timer_context, 0x440, 0x40, true, 0xed14025c6d2d3535)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_block_t*), "_NDIS_MINIPORT_TIMER.Miniport", miniport, 0x480, 0x40, true, 0x77ce3953dbe7fa8)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ndis::miniport_timer_t*), "_NDIS_MINIPORT_TIMER.NextTimer", next_timer, 0x4c0, 0x40, true, 0x698145e5258f54c4)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#endif