#if !IN_PARSER
#define _m000 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_DISPATCHER_HEADER.Lock", lock, 0x0, 0x20, true, 0xc81e3afe51c5ccd2)
#define _m001 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DISPATCHER_HEADER.LockNV", lock_nv, 0x0, 0x20, true, 0xae2e6a632692ba96)
#define _m002 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Type", type, 0x0, 0x8, true, 0x4a1a984214644ce)
#define _m003 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Signalling", signalling, 0x8, 0x8, true, 0xd9df5a3aab8a08cd)
#define _m004 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Size", size, 0x10, 0x8, true, 0x8bfc72f7c81eba8f)
#define _m005 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.TimerType", timer_type, 0x0, 0x8, true, 0xd091f920d0c2d6bb)
#define _m006 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.TimerControlFlags", timer_control_flags, 0x8, 0x8, true, 0x456b03c65c6904ca)
#define _m007 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Absolute", absolute, 0x8, 0x1, true, 0xdd681cfb5e39a400, 1, uint8_t)
#define _m008 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Wake", wake, 0x9, 0x1, true, 0x440e87928c03cb91, 1, uint8_t)
#define _m009 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DISPATCHER_HEADER.EncodedTolerableDelay", encoded_tolerable_delay, 0xa, 0x6, true, 0x486b7daec8ac47bf, 6, uint8_t)
#define _m010 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Hand", hand, 0x10, 0x8, true, 0xb459d179cccee402)
#define _m011 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.TimerMiscFlags", timer_misc_flags, 0x18, 0x8, true, 0xc7d5257049bd29b)
#define _m012 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DISPATCHER_HEADER.Index", index, 0x18, 0x6, true, 0xaf80731b8411c2ac, 6, uint8_t)
#define _m013 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Inserted", inserted, 0x1e, 0x1, true, 0xb9a7abd3e84e5e9d, 1, uint8_t)
#define _m014 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Expired", expired, 0x1f, 0x1, true, 0x1f5fc2af8f9f811, 1, uint8_t)
#define _m015 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Timer2Type", timer2_type, 0x0, 0x8, true, 0xb8139b71e5eb22ee)
#define _m016 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Timer2Flags", timer2_flags, 0x8, 0x8, true, 0x7b7067a0eb84fb5a)
#define _m017 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Timer2Inserted", timer2_inserted, 0x8, 0x1, true, 0x40c05079fa244803, 1, uint8_t)
#define _m018 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Timer2Expiring", timer2_expiring, 0x9, 0x1, true, 0x6202c7bd17cc874c, 1, uint8_t)
#define _m019 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Timer2CancelPending", timer2_cancel_pending, 0xa, 0x1, true, 0x2455fa6f48bd300b, 1, uint8_t)
#define _m020 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Timer2SetPending", timer2_set_pending, 0xb, 0x1, true, 0x4ae23bf0fb13585f, 1, uint8_t)
#define _m021 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Timer2Running", timer2_running, 0xc, 0x1, true, 0x4a76e3807601ef6d, 1, uint8_t)
#define _m022 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Timer2Disabled", timer2_disabled, 0xd, 0x1, true, 0xe98e5422bb40511e, 1, uint8_t)
#define _m023 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISPATCHER_HEADER.Timer2ReservedFlags", timer2_reserved_flags, 0xe, 0x2, true, 0x99609832aa050768, 2, uint8_t)
#define _m024 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.QueueType", queue_type, 0x0, 0x8, true, 0x74442caec8b84e6c)
#define _m025 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.QueueControlFlags", queue_control_flags, 0x8, 0x8, true, 0xdcd94a0befa9896c)
#define _m026 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Abandoned", abandoned, 0x8, 0x1, true, 0x2d941c18589140c5, 1, uint8_t)
#define _m027 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.DisableIncrement", disable_increment, 0x9, 0x1, true, 0xae604b87d4348beb, 1, uint8_t)
#define _m028 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DISPATCHER_HEADER.QueueReservedControlFlags", queue_reserved_control_flags, 0xa, 0x6, true, 0x20c4a1600a0dda45, 6, uint8_t)
#define _m029 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.QueueSize", queue_size, 0x10, 0x8, true, 0x2b025c62e7a197b8)
#define _m030 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.QueueReserved", queue_reserved, 0x18, 0x8, true, 0x4d153bdf9e812528)
#define _m031 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.ThreadType", thread_type, 0x0, 0x8, true, 0x5872e32d00a1d635)
#define _m032 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.ThreadControlFlags", thread_control_flags, 0x10, 0x8, true, 0x337bb0908955d0f3)
#define _m033 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.CycleProfiling", cycle_profiling, 0x10, 0x1, true, 0x859e0f18767873a2, 1, uint8_t)
#define _m034 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.CounterProfiling", counter_profiling, 0x11, 0x1, true, 0x37c7a7b118b71ba4, 1, uint8_t)
#define _m035 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.GroupScheduling", group_scheduling, 0x12, 0x1, true, 0x4925c94ec5fe9335, 1, uint8_t)
#define _m036 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.AffinitySet", affinity_set, 0x13, 0x1, true, 0xe04ce52c531fd03f, 1, uint8_t)
#define _m037 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Tagged", tagged, 0x14, 0x1, true, 0x65fd5c832b5d1a4a, 1, uint8_t)
#define _m038 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.EnergyProfiling", energy_profiling, 0x15, 0x1, true, 0x2195f143885f0c60, 1, uint8_t)
#define _m039 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint2_t), "_DISPATCHER_HEADER.ThreadReservedControlFlags", thread_reserved_control_flags, 0x17, 0x1, true, 0x2c48dc63c25a7f6f, 0, uint8_t)
#define _m040 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.DebugActive", debug_active, 0x18, 0x8, true, 0xe01b681282081d18)
#define _m041 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.ActiveDR7", active_dr7, 0x18, 0x1, true, 0x2cee82601e212eeb, 1, uint8_t)
#define _m042 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Instrumented", instrumented, 0x19, 0x1, true, 0x3bb812a2cc42764c, 1, uint8_t)
#define _m043 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Minimal", minimal, 0x1a, 0x1, true, 0xf3ffde3a2e217a17, 1, uint8_t)
#define _m044 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.MutantType", mutant_type, 0x0, 0x8, true, 0xebf86f5afe341cc9)
#define _m045 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.MutantSize", mutant_size, 0x8, 0x8, true, 0xd2d4d899b3b22b67)
#define _m046 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.DpcActive", dpc_active, 0x10, 0x8, true, 0x7bff36ffad3e5e30)
#define _m047 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.MutantReserved", mutant_reserved, 0x18, 0x8, true, 0x833eba88d970def8)
#define _m048 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(int32_t), "_DISPATCHER_HEADER.SignalState", signal_state, 0x20, 0x20, true, 0xe392f499096e7881)
#define _m049 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_DISPATCHER_HEADER.WaitListHead", wait_list_head, 0x40, 0x80, true, 0xc87464221cf0782)
#define _m050 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Timer2ComponentId", timer2_component_id, 0x10, 0x8, true, 0xea1755360c2fff2e)
#define _m051 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Timer2RelativeId", timer2_relative_id, 0x18, 0x8, true, 0xf68685280c51cb3a)
#define _m052 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.ThreadReserved", thread_reserved, 0x8, 0x8, true, 0x6b174318e14ec4cf)
#define _m053 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.SchedulerAssist", scheduler_assist, 0x16, 0x1, true, 0x459554c8f7c946ff, 1, uint8_t)
#define _m054 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.AltSyscall", alt_syscall, 0x1d, 0x1, true, 0x6567ebab652ea7b4, 1, uint8_t)
#define _m055 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.UmsScheduled", ums_scheduled, 0x1e, 0x1, true, 0x1a2af273c1d48dff, 1, uint8_t)
#define _m056 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.UmsPrimary", ums_primary, 0x1f, 0x1, true, 0xe4564e07319b7ecb, 1, uint8_t)
#define _m057 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Timer2Reserved1", timer2_reserved1, 0x10, 0x8, true, 0xb7a24df6976af7c3)
#define _m058 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.Timer2Reserved2", timer2_reserved2, 0x18, 0x8, true, 0x785d3ea1c5616e41)
#define _m059 _SDK_NONVOL_PROPERTY(_SDK_ESCAPE(uint8_t), "_DISPATCHER_HEADER.ThreadSpecControl", thread_spec_control, 0x8, 0x8, true, 0xe1fb51ab08c1e0a0)
#define _m060 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.SpecControlIbrs", spec_control_ibrs, 0x8, 0x1, true, 0x811172ec8a5a43fb, 1, uint8_t)
#define _m061 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.SpecControlStibp", spec_control_stibp, 0x9, 0x1, true, 0xed35fc19044bc906, 1, uint8_t)
#define _m062 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint6_t), "_DISPATCHER_HEADER.SpecControlReserved", spec_control_reserved, 0xa, 0x6, true, 0xce721fa7c3c9b1c1, 6, uint8_t)
#define _m063 _SDK_NONVOL_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_DISPATCHER_HEADER.Emulation", emulation, 0x1e, 0x1, true, 0xb3253164529f1023, 1, uint8_t)
#else
#define _m000
#define _m001
#define _m002
#define _m003
#define _m004
#define _m005
#define _m006
#define _m007
#define _m008
#define _m009
#define _m010
#define _m011
#define _m012
#define _m013
#define _m014
#define _m015
#define _m016
#define _m017
#define _m018
#define _m019
#define _m020
#define _m021
#define _m022
#define _m023
#define _m024
#define _m025
#define _m026
#define _m027
#define _m028
#define _m029
#define _m030
#define _m031
#define _m032
#define _m033
#define _m034
#define _m035
#define _m036
#define _m037
#define _m038
#define _m039
#define _m040
#define _m041
#define _m042
#define _m043
#define _m044
#define _m045
#define _m046
#define _m047
#define _m048
#define _m049
#define _m050
#define _m051
#define _m052
#define _m053
#define _m054
#define _m055
#define _m056
#define _m057
#define _m058
#define _m059
#define _m060
#define _m061
#define _m062
#define _m063
#endif