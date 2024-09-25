#if !IN_PARSER
#define _m00 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KTIMER.Header", header, 0x0, 0xc0, true, 0x33a9c7636f18f776)
#define _m01 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTIMER.DueTime", due_time, 0xc0, 0x40, true, 0x3218e143a1c2fe47)
#define _m02 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTIMER.TimerListEntry", timer_list_entry, 0x100, 0x80, true, 0xd1eb09a9d5c54cd7)
#define _m03 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_KTIMER.Dpc", dpc, 0x180, 0x40, true, 0xdb3d1e062f8387f8)
#define _m04 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_KTIMER.Processor", processor, 0x1c0, 0x10, true, 0x23e4023215379600, 0, uint16_t,uint32_t)
#define _m05 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTIMER.Period", period, 0x1e0, 0x20, true, 0xa936554472e83124)
#define _m06 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTIMER.TimerType", timer_type, 0x1d0, 0x10, true, 0x755341ada1e62bd0)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#define _m05
#define _m06
#endif