#if !IN_PARSER
#define _m00 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.StateFlags.Initialized", initialized, 0x0, 0x0, false, 0x1dd71d63fb3e82cc, 1, uint32_t)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.StateFlags.AsULong", as_u_long, 0x0, 0x0, false, 0x94b185c0c9635489)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_state_flags_t), "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.StateFlags", state_flags, 0x0, 0x0, false, 0xff84d61ff5a02e8)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.SystemThreadMaxCount", system_thread_max_count, 0x0, 0x0, false, 0xa3bfee278e9aa31c)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_RAID_MINIPORT_SYSTEM_THREAD_CONTEXT.SystemThreadCurrentCount", system_thread_current_count, 0x0, 0x0, false, 0x824dd13e87e1ffdf)
#else
#define _m00
#define _m01
#define _m02
#define _m03
#define _m04
#endif