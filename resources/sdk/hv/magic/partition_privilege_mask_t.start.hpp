#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_HV_PARTITION_PRIVILEGE_MASK.AsUINT64", as_uint64, 0x0, 0x40, true, 0x989c04e2b1dc59cc)
#define _m001 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessVpRunTimeReg", access_vp_run_time_reg, 0x0, 0x1, true, 0xf895ccde8615ab49, 1, uint64_t)
#define _m002 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessPartitionReferenceCounter", access_partition_reference_counter, 0x1, 0x1, true, 0x2a978d0a34401651, 1, uint64_t)
#define _m003 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessSynicRegs", access_synic_regs, 0x2, 0x1, true, 0x38fd0b9c954f6818, 1, uint64_t)
#define _m004 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessSyntheticTimerRegs", access_synthetic_timer_regs, 0x3, 0x1, true, 0x9703fae083294ba8, 1, uint64_t)
#define _m005 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessIntrCtrlRegs", access_intr_ctrl_regs, 0x4, 0x1, true, 0xbe4f10983be5f7d1, 1, uint64_t)
#define _m006 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessHypercallMsrs", access_hypercall_msrs, 0x5, 0x1, true, 0x63e7030558c451bf, 1, uint64_t)
#define _m007 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessVpIndex", access_vp_index, 0x6, 0x1, true, 0x306e8ec67b89cdb2, 1, uint64_t)
#define _m008 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessResetReg", access_reset_reg, 0x7, 0x1, true, 0xbaa2c71f7fab5533, 1, uint64_t)
#define _m009 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessStatsReg", access_stats_reg, 0x8, 0x1, true, 0xc1a0fc42829133d9, 1, uint64_t)
#define _m010 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessPartitionReferenceTsc", access_partition_reference_tsc, 0x9, 0x1, true, 0x15546ab2d90b82c1, 1, uint64_t)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessGuestIdleReg", access_guest_idle_reg, 0xa, 0x1, true, 0x434d7bf9f1da5fb1, 1, uint64_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessFrequencyRegs", access_frequency_regs, 0xb, 0x1, true, 0x51f9ba38fd36e6e3, 1, uint64_t)
#define _m013 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessDebugRegs", access_debug_regs, 0xc, 0x1, true, 0x9e99c403a5f98184, 1, uint64_t)
#define _m014 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessReenlightenmentControls", access_reenlightenment_controls, 0xd, 0x1, true, 0xa5f9227886675b3b, 1, uint64_t)
#define _m015 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.CreatePartitions", create_partitions, 0x20, 0x1, true, 0x341bd632d469388, 1, uint64_t)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessPartitionId", access_partition_id, 0x21, 0x1, true, 0xba54f9f8d0dd39d, 1, uint64_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessMemoryPool", access_memory_pool, 0x22, 0x1, true, 0x2fdb5a32baccb8cb, 1, uint64_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AdjustMessageBuffers", adjust_message_buffers, 0x23, 0x1, true, 0x33ea6cc35642f0ad, 1, uint64_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.PostMessages", post_messages, 0x24, 0x1, true, 0x469cf9f05d17d479, 1, uint64_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.SignalEvents", signal_events, 0x25, 0x1, true, 0xf6015bf33259850f, 1, uint64_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.CreatePort", create_port, 0x26, 0x1, true, 0x8abf82027f8ddd1c, 1, uint64_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.ConnectPort", connect_port, 0x27, 0x1, true, 0x4bdae8eeda46d3d1, 1, uint64_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessStats", access_stats, 0x28, 0x1, true, 0xb15b5525293fc0f6, 1, uint64_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.Debugging", debugging, 0x2b, 0x1, true, 0x3fe27f45a73feb3d, 1, uint64_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.CpuManagement", cpu_management, 0x2c, 0x1, true, 0xe0b24acedf533192, 1, uint64_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.ConfigureProfiler", configure_profiler, 0x2d, 0x1, true, 0x4252c7287af34035, 1, uint64_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessVpExitTracing", access_vp_exit_tracing, 0x2e, 0x1, true, 0xc693d1ac1658f0da, 1, uint64_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.EnableExtendedGvaRangesForFlushVirtualAddressList", enable_extended_gva_ranges_for_flush_virtual_address_list, 0x2f, 0x1, true, 0xd9a54fbb1c42d452, 1, uint64_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessVsm", access_vsm, 0x30, 0x1, true, 0x62c34ba50425cb11, 1, uint64_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessVpRegisters", access_vp_registers, 0x31, 0x1, true, 0x175595a6cdb9dbc3, 1, uint64_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.UnusedBit", unused_bit, 0x32, 0x1, true, 0xa6235351a003bead, 1, uint64_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.FastHypercallOutput", fast_hypercall_output, 0x33, 0x1, true, 0x4ea0419d2fd4132a, 1, uint64_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.EnableExtendedHypercalls", enable_extended_hypercalls, 0x34, 0x1, true, 0x789eb4137f88e8e0, 1, uint64_t)
#define _m034 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.StartVirtualProcessor", start_virtual_processor, 0x35, 0x1, true, 0x762f70a3f04671d0, 1, uint64_t)
#define _m035 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessRootSchedulerReg", access_root_scheduler_reg, 0xe, 0x1, true, 0xb3b5be367cc21e4a, 1, uint64_t)
#define _m036 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.AccessTscInvariantControls", access_tsc_invariant_controls, 0xf, 0x1, true, 0x201fbdd7b88c118d, 1, uint64_t)
#define _m037 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_HV_PARTITION_PRIVILEGE_MASK.Isolation", isolation, 0x36, 0x1, true, 0xf1636723bde5f04b, 1, uint64_t)
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
#endif