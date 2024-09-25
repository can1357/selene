#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_NDIS_TIMER.Timer", timer, 0x0, 0x0, true, 0x687451395aac71cf)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_NDIS_TIMER.Dpc", dpc, 0x200, 0x0, true, 0xd54f11f5a0530475)
#else
#define _m00
#define _m01
#endif