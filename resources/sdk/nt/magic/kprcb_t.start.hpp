#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.MxCsr", mx_csr, 0x0, 0x20, true, 0x516c71ee53641cd9)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.LegacyNumber", legacy_number, 0x20, 0x8, true, 0xa8acae52a70d6ad6)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.ReservedMustBeZero", reserved_must_be_zero, 0x28, 0x8, true, 0xcf8d516fc4371114)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.InterruptRequest", interrupt_request, 0x30, 0x8, true, 0x1e48851d776b2e9d)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.IdleHalt", idle_halt, 0x38, 0x8, true, 0xb40888414a866dc6)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KPRCB.CurrentThread", current_thread, 0x40, 0x40, true, 0x5d64a5cdd9562411)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KPRCB.NextThread", next_thread, 0x80, 0x40, true, 0x4b399fdffa8b5fb5)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KPRCB.IdleThread", idle_thread, 0xc0, 0x40, true, 0x442dfa7b3fdd9ac9)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.NestingLevel", nesting_level, 0x100, 0x8, true, 0x5c4a092772aa705b)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.ClockOwner", clock_owner, 0x108, 0x8, true, 0xd87e6c93bdd86b66)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.PendingTickFlags", pending_tick_flags, 0x110, 0x8, true, 0x9a764e38e041662c)
#define _m011 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.PendingTick", pending_tick, 0x110, 0x1, true, 0x68d5755520fdcc44, 1, uint8_t)
#define _m012 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.PendingBackupTick", pending_backup_tick, 0x111, 0x1, true, 0xdca68efb21e3fb3f, 1, uint8_t)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.IdleState", idle_state, 0x118, 0x8, true, 0xe43f145dfbf8ad63)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.Number", number, 0x120, 0x20, true, 0x5770b8254ee4e143)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.RspBase", rsp_base, 0x140, 0x40, true, 0xc930ea4376612bb5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.PrcbLock", prcb_lock, 0x180, 0x40, true, 0xcefa091806686036)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<char*, union nt::kpriority_state_t*>), "_KPRCB.PriorityState", priority_state, 0x1c0, 0x40, true, 0xbeca5e1faeaf5e0a)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KPRCB.CpuType", cpu_type, 0x200, 0x8, true, 0x936206c1a26399e)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KPRCB.CpuID", cpu_id, 0x208, 0x8, true, 0x41ad7cbe80ceacfd)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPRCB.CpuStep", cpu_step, 0x210, 0x10, true, 0x8f150b7286821202)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.CpuStepping", cpu_stepping, 0x210, 0x8, true, 0x7205a284b4a8fd1f)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.CpuModel", cpu_model, 0x218, 0x8, true, 0xdaee414b14120a5d)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.MHz", m_hz, 0x220, 0x20, true, 0x5732c98ca9f1c156)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 8>), "_KPRCB.HalReserved", hal_reserved, 0x240, 0x0, true, 0x36feef1442274060)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPRCB.MinorVersion", minor_version, 0x440, 0x10, true, 0xb120860072f2d959)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPRCB.MajorVersion", major_version, 0x450, 0x10, true, 0x451582e1649ae8cf)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BuildType", build_type, 0x460, 0x8, true, 0xae04569bda8d86ad)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.CpuVendor", cpu_vendor, 0x468, 0x8, true, 0xada129b943bf802f)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_KPRCB.CoresPerPhysicalProcessor", cores_per_physical_processor, 0x470, 0x8, true, 0x345e7a9ccf4d95ac, 0, uint8_t,uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint32_t), "_KPRCB.LogicalProcessorsPerCore", logical_processors_per_core, 0x478, 0x8, true, 0x28b8abba6c2b3ec, 0, uint8_t,uint32_t)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.GroupSetMember", group_set_member, 0x640, 0x40, true, 0x1072dcf56669fd82)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.Group", group, 0x680, 0x8, true, 0xb112577fa39d3d1f)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.GroupIndex", group_index, 0x688, 0x8, true, 0xc332b82441867229)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.InitialApicId", initial_apic_id, 0x6a0, 0x20, true, 0xfc056029d27d8bab)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ScbOffset", scb_offset, 0x6c0, 0x20, true, 0xfa9bdab388a5104)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ApicMask", apic_mask, 0x6e0, 0x20, true, 0x77050e9ffcc5097)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.AcpiReserved", acpi_reserved, 0x700, 0x40, true, 0xfad57678af25e9ac)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CFlushSize", c_flush_size, 0x740, 0x20, true, 0xbd5b9376f4b63373)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.TrappedSecurityDomain", trapped_security_domain, 0x780, 0x40, true, 0xafdebd753e54dcbe)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbState", bpb_state, 0x7c0, 0x8, true, 0x25bfc0e2aae63b17)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprocessor_state_t), "_KPRCB.ProcessorState", processor_state, 0x800, 0x0, true, 0xec6f8b827bc8d88e)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kspin_lock_queue_t, 17>), "_KPRCB.LockQueue", lock_queue, 0x3780, 0x80, true, 0x9f1bce2b383e6b82)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct pp::lookaside_list_t, 16>), "_KPRCB.PPLookasideList", pp_lookaside_list, 0x4000, 0x0, true, 0xad6db8789f02fa73)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::general_lookaside_pool_t, 32>), "_KPRCB.PPNxPagedLookasideList", pp_nx_paged_lookaside_list, 0x4800, 0x0, true, 0x9d0372fee0c3deac)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::general_lookaside_pool_t, 32>), "_KPRCB.PPNPagedLookasideList", ppn_paged_lookaside_list, 0xa800, 0x0, true, 0xc9e26c2ee2c4b134)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::general_lookaside_pool_t, 32>), "_KPRCB.PPPagedLookasideList", pp_paged_lookaside_list, 0x10800, 0x0, true, 0xe7fb40ab0fde80f0)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KPRCB.DeferredReadyListHead", deferred_ready_list_head, 0x16840, 0x40, true, 0x6a68c19b8dc3d5fd)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmPageFaultCount", mm_page_fault_count, 0x16880, 0x20, true, 0x424f41826362caea)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmCopyOnWriteCount", mm_copy_on_write_count, 0x168a0, 0x20, true, 0xce22d1ffaa1b81e6)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmTransitionCount", mm_transition_count, 0x168c0, 0x20, true, 0x3aa89e705577d36a)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmDemandZeroCount", mm_demand_zero_count, 0x168e0, 0x20, true, 0x5e8dfc3db2acb960)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmPageReadCount", mm_page_read_count, 0x16900, 0x20, true, 0x2f16fd1cea43ef92)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmPageReadIoCount", mm_page_read_io_count, 0x16920, 0x20, true, 0xdc56ff0cf8f19c2b)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmDirtyPagesWriteCount", mm_dirty_pages_write_count, 0x16940, 0x20, true, 0x46a19ddab09213bf)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmDirtyWriteIoCount", mm_dirty_write_io_count, 0x16960, 0x20, true, 0xb055431c19cfc45a)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmMappedPagesWriteCount", mm_mapped_pages_write_count, 0x16980, 0x20, true, 0x5ee1acd4bdfabb51)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmMappedWriteIoCount", mm_mapped_write_io_count, 0x169a0, 0x20, true, 0xfdd7a16eef6e8d8c)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.KeSystemCalls", ke_system_calls, 0x169c0, 0x20, true, 0x3b1e188b11b00ec)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.KeContextSwitches", ke_context_switches, 0x169e0, 0x20, true, 0xf2fdd8e90c3eac7b)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastReadNoWait", cc_fast_read_no_wait, 0x16a20, 0x20, true, 0xd1b37da914c17ac6)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastReadWait", cc_fast_read_wait, 0x16a40, 0x20, true, 0xffa666249bcbf23b)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastReadNotPossible", cc_fast_read_not_possible, 0x16a60, 0x20, true, 0x2ce9d55d2a1dd181)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcCopyReadNoWait", cc_copy_read_no_wait, 0x16a80, 0x20, true, 0x1604221f0c0511c0)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcCopyReadWait", cc_copy_read_wait, 0x16aa0, 0x20, true, 0xe157d183c195b927)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcCopyReadNoWaitMiss", cc_copy_read_no_wait_miss, 0x16ac0, 0x20, true, 0x56c416d103ffdb18)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.IoReadOperationCount", io_read_operation_count, 0x16ae0, 0x20, true, 0x17ef822eba4e396)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.IoWriteOperationCount", io_write_operation_count, 0x16b00, 0x20, true, 0x603a8563b3bbb34f)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.IoOtherOperationCount", io_other_operation_count, 0x16b20, 0x20, true, 0x60f1c0f451a63a0f)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KPRCB.IoReadTransferCount", io_read_transfer_count, 0x16b40, 0x40, true, 0x68eebeed2cccea77)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KPRCB.IoWriteTransferCount", io_write_transfer_count, 0x16b80, 0x40, true, 0x2eae765b90227b41)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KPRCB.IoOtherTransferCount", io_other_transfer_count, 0x16bc0, 0x40, true, 0xac7fef5f1e5a0b2c)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.PacketBarrier", packet_barrier, 0x16c00, 0x20, true, 0xa036fc43709749ba)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.TargetCount", target_count, 0x16c20, 0x20, true, 0xd6263f54e05e6527)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KPRCB.IpiFrozen", ipi_frozen, 0x16c40, 0x20, true, 0x2a47f3f5113d90e0)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.IsrDpcStats", isr_dpc_stats, 0x16c80, 0x40, true, 0x3ab421b05440815)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DeviceInterrupts", device_interrupts, 0x16cc0, 0x20, true, 0x508aab34daed9dc8)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.LookasideIrpFloat", lookaside_irp_float, 0x16ce0, 0x20, true, 0xfee26d8a75e18280)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.InterruptLastCount", interrupt_last_count, 0x16d00, 0x20, true, 0x22875b941568ef31)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.InterruptRate", interrupt_rate, 0x16d20, 0x20, true, 0xeb99c76e1ca49ee9)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_KPRCB.InterruptObjectPool", interrupt_object_pool, 0x18400, 0x80, true, 0x7710cf9b32120a50)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kdpc_data_t, 2>), "_KPRCB.DpcData", dpc_data, 0x18600, 0x80, true, 0xe85ef69cdc80e52c)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.DpcStack", dpc_stack, 0x18880, 0x40, true, 0x973e32d721751d1)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.MaximumDpcQueueDepth", maximum_dpc_queue_depth, 0x188c0, 0x20, true, 0xc97c7411ff89936f)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcRequestRate", dpc_request_rate, 0x188e0, 0x20, true, 0x683ea67c301dd7e4)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.MinimumDpcRate", minimum_dpc_rate, 0x18900, 0x20, true, 0xa1a567133562e5c0)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcLastCount", dpc_last_count, 0x18920, 0x20, true, 0x1010a8bc7a682bdc)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.ThreadDpcEnable", thread_dpc_enable, 0x18940, 0x8, true, 0x940089c2d4281403)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KPRCB.QuantumEnd", quantum_end, 0x18948, 0x8, true, 0x948a5890b03b320f)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KPRCB.DpcRoutineActive", dpc_routine_active, 0x18950, 0x8, true, 0xdfe2a69fca8b7052)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KPRCB.IdleSchedule", idle_schedule, 0x18958, 0x8, true, 0xe94b005d700794a0)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.DpcRequestSummary", dpc_request_summary, 0x18960, 0x20, true, 0xe5b5aeefacf08ce9)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<int16_t, 2>), "_KPRCB.DpcRequestSlot", dpc_request_slot, 0x18960, 0x20, true, 0x14fb1fd7ed1b6c00)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KPRCB.NormalDpcState", normal_dpc_state, 0x18960, 0x10, true, 0x5446f90c13beaede)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KPRCB.ThreadDpcState", thread_dpc_state, 0x18970, 0x10, true, 0x560605946cadb965)
#define _m095 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalProcessingActive", dpc_normal_processing_active, 0x18960, 0x1, true, 0x5102d4af3bfffc96, 1, uint32_t)
#define _m096 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalProcessingRequested", dpc_normal_processing_requested, 0x18961, 0x1, true, 0xa5288196b3b92ca4, 1, uint32_t)
#define _m097 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalThreadSignal", dpc_normal_thread_signal, 0x18962, 0x1, true, 0x7d609c82b79f1632, 1, uint32_t)
#define _m098 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalTimerExpiration", dpc_normal_timer_expiration, 0x18963, 0x1, true, 0xa93885cddb73eedb, 1, uint32_t)
#define _m099 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalDpcPresent", dpc_normal_dpc_present, 0x18964, 0x1, true, 0x1557a701e43b71b9, 1, uint32_t)
#define _m100 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalLocalInterrupt", dpc_normal_local_interrupt, 0x18965, 0x1, true, 0xd5349108ccacf1a8, 1, uint32_t)
#define _m101 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint10_t), "_KPRCB.DpcNormalSpare", dpc_normal_spare, 0x18966, 0xa, true, 0xf5bcd4c61752c2a3, 0, uint32_t)
#define _m102 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcThreadActive", dpc_thread_active, 0x18970, 0x1, true, 0x6d307d8f89a0d729, 1, uint32_t)
#define _m103 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcThreadRequested", dpc_thread_requested, 0x18971, 0x1, true, 0xd80871ab4dcb194d, 1, uint32_t)
#define _m104 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint14_t), "_KPRCB.DpcThreadSpare", dpc_thread_spare, 0x18972, 0xe, true, 0xa1648cbfa20999de, 14, uint32_t)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.LastTick", last_tick, 0x189a0, 0x20, true, 0x25356915e2017e1e)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ClockInterrupts", clock_interrupts, 0x189c0, 0x20, true, 0x8099fb3561e2406a)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ReadyScanTick", ready_scan_tick, 0x189e0, 0x20, true, 0xa30d7d305d199b73)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<void*, 256>), "_KPRCB.InterruptObject", interrupt_object, 0x18a00, 0x0, true, 0xcc4de465b7bc71f8)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_table_t), "_KPRCB.TimerTable", timer_table, 0x1ca00, 0xc0, true, 0x98c426918ccd9d81)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kgate_t), "_KPRCB.DpcGate", dpc_gate, 0x3dc00, 0xc0, true, 0x5c437f358822e7ea)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KPRCB.CallDpc", call_dpc, 0x3dd00, 0x0, true, 0x25b38ea4b5616e6a)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.ClockKeepAlive", clock_keep_alive, 0x3df00, 0x20, true, 0xea4aa74e153441bf)
#define _m113 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint16_t), "_KPRCB.NmiActive", nmi_active, 0x3df30, 0x8, true, 0x9da8c31df75db919, 0, uint16_t,uint8_t)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.DpcWatchdogCount", dpc_watchdog_count, 0x3df60, 0x20, true, 0xab309343380ea230)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.KeSpinLockOrdering", ke_spin_lock_ordering, 0x3df80, 0x20, true, 0xb9c01d7f61d274a9)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.CachedPtes", cached_ptes, 0x3dfc0, 0x40, true, 0xe9fc5a8e7b4aa18d)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPRCB.WaitListHead", wait_list_head, 0x3e000, 0x80, true, 0x71db12403bf6fdb)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.WaitLock", wait_lock, 0x3e080, 0x40, true, 0x7dbee500ccd2edca)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ReadySummary", ready_summary, 0x3e0c0, 0x20, true, 0xb766d2b30347a92)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.AffinitizedSelectionMask", affinitized_selection_mask, 0x3e0e0, 0x20, true, 0x8e86748dac93fe7e)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.QueueIndex", queue_index, 0x3e100, 0x20, true, 0x2feb740b48a7d5d3)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KPRCB.TimerExpirationDpc", timer_expiration_dpc, 0x3e180, 0x0, true, 0xfaf54478ace6eb66)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::rb_tree_t), "_KPRCB.ScbQueue", scb_queue, 0x3e380, 0x80, true, 0x733e7afba5096479)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<nt::list_entry_t, 32>), "_KPRCB.DispatcherReadyListHead", dispatcher_ready_list_head, 0x3e400, 0x0, true, 0x87007d3ec4f2e837)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.InterruptCount", interrupt_count, 0x3f400, 0x20, true, 0xd88ec58743178d58)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.KernelTime", kernel_time, 0x3f420, 0x20, true, 0x547905216c5dd5cf)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.UserTime", user_time, 0x3f440, 0x20, true, 0x3f5cf28294b61af0)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcTime", dpc_time, 0x3f460, 0x20, true, 0x156fd10feed2c391)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.InterruptTime", interrupt_time, 0x3f480, 0x20, true, 0xb55522eb73d219d4)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.AdjustDpcThreshold", adjust_dpc_threshold, 0x3f4a0, 0x20, true, 0xdb39dd6abc1b83d0)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.DebuggerSavedIRQL", debugger_saved_irql, 0x3f4c0, 0x8, true, 0x646f1ac3b22dcbde)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.GroupSchedulingOverQuota", group_scheduling_over_quota, 0x3f4c8, 0x8, true, 0xb206d32d848ab9b1)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KPRCB.DeepSleep", deep_sleep, 0x3f4d0, 0x8, true, 0x642dad34efb9bd43)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcTimeCount", dpc_time_count, 0x3f4e0, 0x20, true, 0x8d8ac0d2d67d8595)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.PeriodicCount", periodic_count, 0x3f520, 0x20, true, 0x1f7161043692f29d)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.PeriodicBias", periodic_bias, 0x3f540, 0x20, true, 0x825ab74cf8cc09ac)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.AvailableTime", available_time, 0x3f560, 0x20, true, 0x883f7753ddea868d)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.KeExceptionDispatchCount", ke_exception_dispatch_count, 0x3f580, 0x20, true, 0xe50d947800f0ab28)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.StartCycles", start_cycles, 0x3f600, 0x40, true, 0x6a1df267bae72e)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 2>), "_KPRCB.TaggedCycles", tagged_cycles, 0x3f680, 0xc0, true, 0x449d750cdf6ba1b0)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.AffinitizedCycles", affinitized_cycles, 0x3f740, 0x40, true, 0x6360dcf4865969c6)
#define _m142 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile int64_t), "_KPRCB.MmSpinLockOrdering", mm_spin_lock_ordering, 0x3f820, 0x20, true, 0x50adb75e6ca4a9ae, 0, uint32_t,uint64_t)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.PageColor", page_color, 0x3f880, 0x20, true, 0xe8323b74fe452cc2)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.NodeColor", node_color, 0x3f8a0, 0x20, true, 0xa606f78eeafdb91c)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.NodeShiftedColor", node_shifted_color, 0x3f8c0, 0x20, true, 0x735460bf351fe136)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.SecondaryColorMask", secondary_color_mask, 0x3f8e0, 0x20, true, 0x6a318945e84d8db3)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.CycleTime", cycle_time, 0x3f9c0, 0x40, true, 0x60d8d1cfb10ee12a)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<sdk::array<uint64_t, 2>, 4>), "_KPRCB.Cycles", cycles, 0x3fa00, 0x0, true, 0xd38bdeb38d656bc)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastMdlReadNoWait", cc_fast_mdl_read_no_wait, 0x3fc00, 0x20, true, 0xa5885e49ffc56ede)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastMdlReadWait", cc_fast_mdl_read_wait, 0x3fc20, 0x20, true, 0x4134956f0ab05530)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastMdlReadNotPossible", cc_fast_mdl_read_not_possible, 0x3fc40, 0x20, true, 0x98ff7bd01d1b6f86)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMapDataNoWait", cc_map_data_no_wait, 0x3fc60, 0x20, true, 0xd8cd8583f6a1dac9)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMapDataWait", cc_map_data_wait, 0x3fc80, 0x20, true, 0xf01c63917d9960e1)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcPinMappedDataCount", cc_pin_mapped_data_count, 0x3fca0, 0x20, true, 0x7d78bdede5234e0)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcPinReadNoWait", cc_pin_read_no_wait, 0x3fcc0, 0x20, true, 0xef5d156aa1a791c7)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcPinReadWait", cc_pin_read_wait, 0x3fce0, 0x20, true, 0xd874750518049953)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMdlReadNoWait", cc_mdl_read_no_wait, 0x3fd00, 0x20, true, 0xf5bc26dc89767c77)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMdlReadWait", cc_mdl_read_wait, 0x3fd20, 0x20, true, 0x39ad75c86e23c263)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcLazyWriteHotSpots", cc_lazy_write_hot_spots, 0x3fd40, 0x20, true, 0x8b24c4776a137ed6)
#define _m160 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcLazyWriteIos", cc_lazy_write_ios, 0x3fd60, 0x20, true, 0x8cc119cf466df402)
#define _m161 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcLazyWritePages", cc_lazy_write_pages, 0x3fd80, 0x20, true, 0x557f5a6347e42a1f)
#define _m162 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcDataFlushes", cc_data_flushes, 0x3fda0, 0x20, true, 0x1cf103ef772b101f)
#define _m163 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcDataPages", cc_data_pages, 0x3fdc0, 0x20, true, 0x33141250ef5e8ebc)
#define _m164 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcLostDelayedWrites", cc_lost_delayed_writes, 0x3fde0, 0x20, true, 0xfd963e0b6181cddd)
#define _m165 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastReadResourceMiss", cc_fast_read_resource_miss, 0x3fe00, 0x20, true, 0x61e3f7a2615501ba)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcCopyReadWaitMiss", cc_copy_read_wait_miss, 0x3fe20, 0x20, true, 0x9d721c9ac9c78a1)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcFastMdlReadResourceMiss", cc_fast_mdl_read_resource_miss, 0x3fe40, 0x20, true, 0x374f958cdbadd3e7)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMapDataNoWaitMiss", cc_map_data_no_wait_miss, 0x3fe60, 0x20, true, 0xb4ed23ad4f8325eb)
#define _m169 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMapDataWaitMiss", cc_map_data_wait_miss, 0x3fe80, 0x20, true, 0x641e2b0985dd267)
#define _m170 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcPinReadNoWaitMiss", cc_pin_read_no_wait_miss, 0x3fea0, 0x20, true, 0x55e82b6a168cd6d9)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcPinReadWaitMiss", cc_pin_read_wait_miss, 0x3fec0, 0x20, true, 0x761b7482b67560e6)
#define _m172 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMdlReadNoWaitMiss", cc_mdl_read_no_wait_miss, 0x3fee0, 0x20, true, 0xf3a75d4f61ad96b3)
#define _m173 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcMdlReadWaitMiss", cc_mdl_read_wait_miss, 0x3ff00, 0x20, true, 0x7c534a4f01ecdf62)
#define _m174 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CcReadAheadIos", cc_read_ahead_ios, 0x3ff20, 0x20, true, 0x35ae6199e03e93e9)
#define _m175 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmCacheTransitionCount", mm_cache_transition_count, 0x3ff40, 0x20, true, 0x4c770f66286ad111)
#define _m176 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmCacheReadCount", mm_cache_read_count, 0x3ff60, 0x20, true, 0x7c60245788dbb77f)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KPRCB.MmCacheIoCount", mm_cache_io_count, 0x3ff80, 0x20, true, 0x21d2e5065132db2f)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_power_state_t), "_KPRCB.PowerState", power_state, 0x40000, 0x0, true, 0x4ad20b17b3de2d6a)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KPRCB.ScbList", scb_list, 0x41040, 0x80, true, 0xeb50b2d7187753a3)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KPRCB.DpcWatchdogDpc", dpc_watchdog_dpc, 0x412c0, 0x0, true, 0x4735aeb72a3c83e9)
#define _m181 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::cache_descriptor_t, 5>), "_KPRCB.Cache", cache, 0x416c0, 0xe0, true, 0xf9ec694f9b3f6281)
#define _m182 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CacheCount", cache_count, 0x418a0, 0x20, true, 0xbdbdf9487f966fcc)
#define _m183 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KPRCB.CachedCommit", cached_commit, 0x418c0, 0x20, true, 0x5030d80e53b195a8)
#define _m184 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KPRCB.CachedResidentAvailable", cached_resident_available, 0x418e0, 0x20, true, 0x9569ecf54335730c)
#define _m185 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.WheaInfo", whea_info, 0x41900, 0x40, true, 0x4b0b1296277dba0e)
#define _m186 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.EtwSupport", etw_support, 0x41940, 0x40, true, 0x26d33ebd0e9e54f6)
#define _m187 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.ExSaPageArray", ex_sa_page_array, 0x41980, 0x40, true, 0x103e53457410e3dc)
#define _m188 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.KeAlignmentFixupCount", ke_alignment_fixup_count, 0x419c0, 0x20, true, 0x37cff55cfc830d53)
#define _m189 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::slist_header_t), "_KPRCB.HypercallPageList", hypercall_page_list, 0x41a00, 0x80, true, 0xe2bd9221e6696709)
#define _m190 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_KPRCB.StatisticsPage", statistics_page, 0x41a80, 0x40, true, 0x6f31ad1526f75a9a)
#define _m191 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.GenerationTarget", generation_target, 0x41ac0, 0x40, true, 0xc89872f3b788933e)
#define _m192 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.HypercallCachedPages", hypercall_cached_pages, 0x41c00, 0x40, true, 0x36b100709c7244a1)
#define _m193 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.VirtualApicAssist", virtual_apic_assist, 0x41c40, 0x40, true, 0xa53995b72459a84d)
#define _m194 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KPRCB.PackageProcessorSet", package_processor_set, 0x41c80, 0x40, true, 0x7b2db05c513998fa)
#define _m195 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.SharedReadyQueueMask", shared_ready_queue_mask, 0x42200, 0x40, true, 0xa815745774fe584a)
#define _m196 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kshared_ready_queue_t*), "_KPRCB.SharedReadyQueue", shared_ready_queue, 0x42240, 0x40, true, 0x87b819eb8be7d59a)
#define _m197 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.SharedQueueScanOwner", shared_queue_scan_owner, 0x42280, 0x20, true, 0x9b804c6dc9ab49ee)
#define _m198 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ScanSiblingIndex", scan_sibling_index, 0x422a0, 0x20, true, 0x8659efc7ae1a622)
#define _m199 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.CoreProcessorSet", core_processor_set, 0x422c0, 0x40, true, 0x6cc51d13b36d8d78)
#define _m200 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.ScanSiblingMask", scan_sibling_mask, 0x42300, 0x40, true, 0xa48101bfc8587739)
#define _m201 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.LLCMask", llc_mask, 0x42340, 0x40, true, 0x33e6c26fbabf9916)
#define _m202 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::processor_profile_control_area_t*), "_KPRCB.ProcessorProfileControlArea", processor_profile_control_area, 0x424c0, 0x40, true, 0x94108047164257ee)
#define _m203 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.ProfileEventIndexAddress", profile_event_index_address, 0x42500, 0x40, true, 0x642fe66e78427234)
#define _m204 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_KPRCB.DpcWatchdogProfile", dpc_watchdog_profile, 0x42540, 0x40, true, 0xd4163438c65d3f78)
#define _m205 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void**), "_KPRCB.DpcWatchdogProfileCurrentEmptyCapture", dpc_watchdog_profile_current_empty_capture, 0x42580, 0x40, true, 0x4fd39526ffdef162)
#define _m206 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::synch_counters_t), "_KPRCB.SynchCounters", synch_counters, 0x42600, 0xc0, true, 0xeef532b3dfa4c332)
#define _m207 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::filesystem_disk_counters_t), "_KPRCB.FsCounters", fs_counters, 0x42c00, 0x80, true, 0x5ad676d7f37fb7be)
#define _m208 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 13>), "_KPRCB.VendorString", vendor_string, 0x42c80, 0x68, true, 0xdccf73782de77735)
#define _m209 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.FeatureBits", feature_bits, 0x42d00, 0x40, true, 0xea60a35ca2613c36)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KPRCB.UpdateSignature", update_signature, 0x42d40, 0x40, true, 0x1d0e82fb74d6b8ab)
#define _m211 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.PteBitCache", pte_bit_cache, 0x42d80, 0x40, true, 0x780e8251307ec820)
#define _m212 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.PteBitOffset", pte_bit_offset, 0x42dc0, 0x20, true, 0x531dac89be73af15)
#define _m213 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::context*), "_KPRCB.Context", context, 0x42e00, 0x40, true, 0xa9822c3ac8456ff8)
#define _m214 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ContextFlagsInit", context_flags_init, 0x42e40, 0x20, true, 0x92e6d027fd564c9e)
#define _m215 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::xsave_area_t*), "_KPRCB.ExtendedState", extended_state, 0x42e80, 0x40, true, 0x6c7f2746ae647305)
#define _m216 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.IsrStack", isr_stack, 0x42ec0, 0x40, true, 0xfb3648b1a8716b69)
#define _m217 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kentropy_timing_state_t), "_KPRCB.EntropyTimingState", entropy_timing_state, 0x42f00, 0x80, true, 0x5af31d8537f698fb)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KPRCB.AbSelfIoBoostsList", ab_self_io_boosts_list, 0x43b80, 0x40, true, 0x584166d4fbb99015)
#define _m219 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KPRCB.AbPropagateBoostsList", ab_propagate_boosts_list, 0x43bc0, 0x40, true, 0x2a858d2cea4c4f05)
#define _m220 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KPRCB.AbDpc", ab_dpc, 0x43c00, 0x0, true, 0x8ef4453367d66c45)
#define _m221 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct iop::irp_stack_profiler_t), "_KPRCB.IoIrpStackProfilerCurrent", io_irp_stack_profiler_current, 0x43e00, 0xa0, true, 0xc75f402ebf207b21)
#define _m222 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct iop::irp_stack_profiler_t), "_KPRCB.IoIrpStackProfilerPrevious", io_irp_stack_profiler_previous, 0x440a0, 0xa0, true, 0x7e6c6111cc7e8157)
#define _m223 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::kshared_ready_queue_t, struct nt::kshared_ready_queue_t*>), "_KPRCB.LocalSharedReadyQueue", local_shared_ready_queue, 0x44400, 0x80, true, 0xb6cb00dccbbe1a8b)
#define _m224 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.TimerExpirationTraceCount", timer_expiration_trace_count, 0x45800, 0x20, true, 0x18a45d920831e874)
#define _m225 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::ktimer_expiration_trace_t, 16>), "_KPRCB.TimerExpirationTrace", timer_expiration_trace, 0x45840, 0x0, true, 0x75bc54cd0b2d919e)
#define _m226 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::request_mailbox_t*), "_KPRCB.Mailbox", mailbox, 0x46200, 0x40, true, 0xa1911837842d27ef)
#define _m227 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.KernelDirectoryTableBase", kernel_directory_table_base, 0x47400, 0x40, true, 0xb7736dba1f8e1ebf)
#define _m228 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.RspBaseShadow", rsp_base_shadow, 0x47440, 0x40, true, 0xa5c31c3240eaa7d5)
#define _m229 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.UserRspShadow", user_rsp_shadow, 0x47480, 0x40, true, 0x3a787e2fee4f7a0e)
#define _m230 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ShadowFlags", shadow_flags, 0x474c0, 0x20, true, 0x81fda0357ffbd74)
#define _m231 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::request_mailbox_t, 1>), "_KPRCB.RequestMailbox", request_mailbox, 0x57600, 0x0, true, 0x91f185d13155052e)
#define _m232 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.TscFrequency", tsc_frequency, 0x480, 0x40, true, 0x834e7ec45cfb0c33)
#define _m233 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kprcbflag_t), "_KPRCB.PrcbFlags", prcb_flags, 0x760, 0x20, true, 0x1e5fe202468c4d59)
#define _m234 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbCpuIdle", bpb_cpu_idle, 0x7c0, 0x1, true, 0x9bc5979bd21ad746, 1, uint8_t)
#define _m235 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbFlushRsbOnTrap", bpb_flush_rsb_on_trap, 0x7c1, 0x1, true, 0x52cfd025af136e32, 1, uint8_t)
#define _m236 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbIbpbOnReturn", bpb_ibpb_on_return, 0x7c2, 0x1, true, 0x48d9616b7eaf213e, 1, uint8_t)
#define _m237 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbIbpbOnTrap", bpb_ibpb_on_trap, 0x7c3, 0x1, true, 0x226ab9ebc0633119, 1, uint8_t)
#define _m238 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbIbpbOnRetpolineExit", bpb_ibpb_on_retpoline_exit, 0x7c4, 0x1, true, 0x108c3fd47cab0b25, 1, uint8_t)
#define _m239 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KPRCB.BpbStateReserved", bpb_state_reserved, 0x7c5, 0x3, true, 0x90d06d3e0ee423ad, 3, uint8_t)
#define _m240 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbFeatures", bpb_features, 0x7c8, 0x8, true, 0x77f150616f0a95ee)
#define _m241 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbClearOnIdle", bpb_clear_on_idle, 0x7c8, 0x1, true, 0xf48beb2afce4c030, 1, uint8_t)
#define _m242 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbEnabled", bpb_enabled, 0x7c9, 0x1, true, 0x56b6ee00f2109048, 1, uint8_t)
#define _m243 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbSmep", bpb_smep, 0x7ca, 0x1, true, 0xe39542fdffd783a4, 1, uint8_t)
#define _m244 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_KPRCB.BpbFeaturesReserved", bpb_features_reserved, 0x7cb, 0x5, true, 0xd80548c95e390952, 5, uint8_t)
#define _m245 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbCurrentSpecCtrl", bpb_current_spec_ctrl, 0x7d0, 0x8, true, 0xdcaf2fc7d77e9544)
#define _m246 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbKernelSpecCtrl", bpb_kernel_spec_ctrl, 0x7d8, 0x8, true, 0x4b37e310f893dd56)
#define _m247 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbNmiSpecCtrl", bpb_nmi_spec_ctrl, 0x7e0, 0x8, true, 0x86000fffa4094030)
#define _m248 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbUserSpecCtrl", bpb_user_spec_ctrl, 0x7e8, 0x8, true, 0xcbda70b4d5936b10)
#define _m249 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int16_t), "_KPRCB.PairRegister", pair_register, 0x7f0, 0x10, true, 0x5cc6477086474c5)
#define _m250 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::xsave_area_header_t*), "_KPRCB.ExtendedSupervisorState", extended_supervisor_state, 0x3600, 0x40, true, 0x4afa13db6ef62fe5)
#define _m251 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ProcessorSignature", processor_signature, 0x3640, 0x20, true, 0x9458d23b6b59b2f2)
#define _m252 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ProcessorFlags", processor_flags, 0x3660, 0x20, true, 0x1bb0bafa20debf9d)
#define _m253 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbRetpolineExitSpecCtrl", bpb_retpoline_exit_spec_ctrl, 0x3680, 0x8, true, 0x90cbddedfd09fba4)
#define _m254 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbTrappedRetpolineExitSpecCtrl", bpb_trapped_retpoline_exit_spec_ctrl, 0x3688, 0x8, true, 0xe9d5549626a51cf6)
#define _m255 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbTrappedBpbState", bpb_trapped_bpb_state, 0x3690, 0x8, true, 0x774e21114c5a6c20)
#define _m256 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbTrappedCpuIdle", bpb_trapped_cpu_idle, 0x3690, 0x1, true, 0x1cd95818bb558302, 1, uint8_t)
#define _m257 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbTrappedFlushRsbOnTrap", bpb_trapped_flush_rsb_on_trap, 0x3691, 0x1, true, 0x7833636165ae212e, 1, uint8_t)
#define _m258 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbTrappedIbpbOnReturn", bpb_trapped_ibpb_on_return, 0x3692, 0x1, true, 0x4991a53cf92ae154, 1, uint8_t)
#define _m259 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbTrappedIbpbOnTrap", bpb_trapped_ibpb_on_trap, 0x3693, 0x1, true, 0xde4dfc9fc6e709cb, 1, uint8_t)
#define _m260 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbTrappedIbpbOnRetpolineExit", bpb_trapped_ibpb_on_retpoline_exit, 0x3694, 0x1, true, 0xb6f5297813ae01d1, 1, uint8_t)
#define _m261 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KPRCB.BpbtrappedBpbStateReserved", bpbtrapped_bpb_state_reserved, 0x3695, 0x3, true, 0x75cccdbf65b551e5, 3, uint8_t)
#define _m262 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.BpbRetpolineState", bpb_retpoline_state, 0x3698, 0x8, true, 0xa511043cd6e3a108)
#define _m263 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbRunningNonRetpolineCode", bpb_running_non_retpoline_code, 0x3698, 0x1, true, 0xd1dbd4dfe39a2132, 1, uint8_t)
#define _m264 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbIndirectCallsSafe", bpb_indirect_calls_safe, 0x3699, 0x1, true, 0x2ca2469d2da38e88, 1, uint8_t)
#define _m265 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbRetpolineEnabled", bpb_retpoline_enabled, 0x369a, 0x1, true, 0xefefa9a8437102fd, 1, uint8_t)
#define _m266 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint5_t), "_KPRCB.BpbRetpolineStateReserved", bpb_retpoline_state_reserved, 0x369b, 0x5, true, 0x5781ae284655043c, 5, uint8_t)
#define _m267 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.MsrIa32TsxCtrl", msr_ia32_tsx_ctrl, 0x16800, 0x40, true, 0xd37c14e27886441a)
#define _m268 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprcb_t*), "_KPRCB.PairPrcb", pair_prcb, 0x16d80, 0x40, true, 0x90cff55a5e8df001)
#define _m269 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kstatic_affinity_block_t), "_KPRCB.StaticAffinity", static_affinity, 0x16dc0, 0x0, true, 0x756ab1710f9dab09)
#define _m270 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct rtl::hash_table_t*), "_KPRCB.DpcRuntimeHistoryHashTable", dpc_runtime_history_hash_table, 0x18480, 0x40, true, 0x6fdddb387f092704)
#define _m271 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t*), "_KPRCB.DpcRuntimeHistoryHashTableCleanupDpc", dpc_runtime_history_hash_table_cleanup_dpc, 0x184c0, 0x40, true, 0xc78e676e94e7f8ed)
#define _m272 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*), "_KPRCB.CurrentDpcRoutine", current_dpc_routine, 0x18500, 0x40, true, 0x69e0fe4f0e326ad9)
#define _m273 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.CurrentDpcRuntimeHistoryCached", current_dpc_runtime_history_cached, 0x18540, 0x40, true, 0x580c1e762cac43cf)
#define _m274 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.CurrentDpcStartTime", current_dpc_start_time, 0x18580, 0x40, true, 0x8e5060ead9de51b8)
#define _m275 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.MceActive", mce_active, 0x3df38, 0x8, true, 0x1c091064b37a6c5f)
#define _m276 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPRCB.CombinedNmiMceActive", combined_nmi_mce_active, 0x3df30, 0x10, true, 0x2af02590d93da45c)
#define _m277 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcWatchdogSequenceNumber", dpc_watchdog_sequence_number, 0x3e160, 0x20, true, 0x57bab1846c7b8e9e)
#define _m278 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ReadyThreadCount", ready_thread_count, 0x3f5a0, 0x20, true, 0x26f04608e20c14fe)
#define _m279 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.ReadyQueueExpectedRunTime", ready_queue_expected_run_time, 0x3f5c0, 0x40, true, 0xfc0ab05ecbe0687b)
#define _m280 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_KPRCB.CachedStack", cached_stack, 0x3f840, 0x40, true, 0x656513635f30deae)
#define _m281 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.ExceptionStackActive", exception_stack_active, 0x3f930, 0x8, true, 0x97d35178f41e2b09)
#define _m282 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.TbFlushListActive", tb_flush_list_active, 0x3f938, 0x8, true, 0x3ed39249da28f6aa)
#define _m283 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.ExceptionStack", exception_stack, 0x3f940, 0x40, true, 0xcc4bf355bd3e3e19)
#define _m284 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.MmInternal", mm_internal, 0x3ffc0, 0x40, true, 0x9a0b49685609dd4e)
#define _m285 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KPRCB.ForceIdleDpc", force_idle_dpc, 0x410c0, 0x0, true, 0xabbf90eb91133e0f)
#define _m286 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.PackageId", package_id, 0x421c0, 0x20, true, 0xa3ae4c4243f9a6e6)
#define _m287 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.SchedulerAssist", scheduler_assist, 0x425c0, 0x40, true, 0x536df94c7bd8c3ff)
#define _m301 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_stibp_pairing_trace_t), "_KPRCB.StibpPairingTrace", stibp_pairing_trace, 0x439c0, 0xc0, true, 0xd6be5aac0a755d7a)
#define _m302 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksecure_fault_information_t), "_KPRCB.SecureFault", secure_fault, 0x44340, 0x80, true, 0x8fd88deac94d628b)
#define _m303 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::machine_check_context_t, 2>), "_KPRCB.McheckContext", mcheck_context, 0x46400, 0x0, true, 0xa40dcb6f3f3a505f)
#define _m304 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::klock_queue_handle_t, 4>), "_KPRCB.SelfmapLockHandle", selfmap_lock_handle, 0x46a00, 0x0, true, 0xd9204d6039057f22)
#define _m305 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.PrcbPad138c", prcb_pad138c, 0x47500, 0x40, true, 0x405ce3f3e212795d)
#define _m306 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPRCB.PrcbPad138d", prcb_pad138d, 0x47540, 0x10, true, 0xe6674f4745efba2a)
#define _m307 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KPRCB.VerwSelector", verw_selector, 0x47550, 0x10, true, 0xfa8cca4fc6defe91)
#define _m308 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DbgMceNestingLevel", dbg_mce_nesting_level, 0x47560, 0x20, true, 0x16730d2fca948bdc)
#define _m309 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DbgMceFlags", dbg_mce_flags, 0x47580, 0x20, true, 0x95943d247b921a72)
#define _m310 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::knode_t*), "_KPRCB.ParentNode", parent_node, 0x600, 0x40, true, 0xf9061dea3d929e67)
#define _m311 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.DpcWatchdogPeriod", dpc_watchdog_period, 0x3df40, 0x20, true, 0x9501d4edc5799ef8)
#define _m312 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcWatchdogProfileCumulativeDpcThreshold", dpc_watchdog_profile_cumulative_dpc_threshold, 0x3dfa0, 0x20, true, 0x5312d4633850d024)
#define _m313 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcTimeLimit", dpc_time_limit, 0x3f500, 0x20, true, 0x390b24403499ab4b)
#define _m314 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.TaggedCyclesStart", tagged_cycles_start, 0x3f640, 0x40, true, 0x31f3d2dd2e712308)
#define _m315 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcWatchdogProfileSingleDpcThreshold", dpc_watchdog_profile_single_dpc_threshold, 0x3f800, 0x20, true, 0xb56427e6596593c6)
#define _m316 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.HyperPte", hyper_pte, 0x41000, 0x40, true, 0xa6576e0d1ab7b118)
#define _m317 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_KPRCB.DpcWatchdogTimer", dpc_watchdog_timer, 0x414c0, 0x0, true, 0x265fbe2dc6628fc4)
#define _m318 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_KPRCB.CacheProcessorMask", cache_processor_mask, 0x42380, 0x40, true, 0xee8887f407b2f268)
#define _m319 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.ImportantCycles", important_cycles, 0x3f780, 0x40, true, 0x7d21fe6d6b83fcdd)
#define _m320 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.UnimportantCycles", unimportant_cycles, 0x3f7c0, 0x40, true, 0x4f813b279bff1567)
#define _m321 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.LegacyCoresPerPhysicalProcessor", legacy_cores_per_physical_processor, 0x0, 0x0, false, 0x1942c228b16a76b2)
#define _m322 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.LegacyLogicalProcessorsPerCore", legacy_logical_processors_per_core, 0x0, 0x0, false, 0x16a357c8eeed6b7d)
#define _m323 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprcb_tracepoint_log_t*), "_KPRCB.TracepointLog", tracepoint_log, 0x0, 0x0, false, 0x1a1e49efcec7ba44)
#define _m324 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscheduler_subnode_t*), "_KPRCB.SchedulerSubNode", scheduler_sub_node, 0x0, 0x0, false, 0x9dc5c762a33b03b6)
#define _m325 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksoftware_interrupt_batch_t), "_KPRCB.DeferredDispatchInterrupts", deferred_dispatch_interrupts, 0x0, 0x0, false, 0x1555abc973f7f54d)
#define _m326 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KPRCB.DpcDelegateThread", dpc_delegate_thread, 0x0, 0x0, false, 0x44a7722e0f5ccc4a)
#define _m327 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalPriorityAntiStarvation", dpc_normal_priority_anti_starvation, 0x0, 0x0, false, 0xe639c74387a352f9, 1, uint32_t)
#define _m328 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KPRCB.DpcNormalSwapToDpcDelegate", dpc_normal_swap_to_dpc_delegate, 0x0, 0x0, false, 0x5c7cf3fecc638e07, 1, uint32_t)
#define _m329 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.SingleDpcSoftTimeLimitTicks", single_dpc_soft_time_limit_ticks, 0x0, 0x0, false, 0xfd23416d1bf3640d)
#define _m330 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ksingle_dpc_soft_timeout_event_info_t*), "_KPRCB.SingleDpcSoftTimeoutEventInfo", single_dpc_soft_timeout_event_info, 0x0, 0x0, false, 0xe1236b7d35d4c6d5)
#define _m331 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CumulativeDpcSoftTimeLimitTicks", cumulative_dpc_soft_time_limit_ticks, 0x0, 0x0, false, 0xfbbe9ce0d5b3aae9)
#define _m332 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcWatchdogProfileBufferSize", dpc_watchdog_profile_buffer_size, 0x0, 0x0, false, 0xdeeab0a08b37fda1)
#define _m333 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KPRCB.DpcWatchdogPeriodTicks", dpc_watchdog_period_ticks, 0x0, 0x0, false, 0x7433bc404121fc52)
#define _m334 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcWatchdogProfileCumulativeDpcThresholdTicks", dpc_watchdog_profile_cumulative_dpc_threshold_ticks, 0x0, 0x0, false, 0xdc4405dca32b710a)
#define _m335 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.NormalPriorityQueueIndex", normal_priority_queue_index, 0x0, 0x0, false, 0xfd83db58fbbff7e8)
#define _m336 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.NormalPriorityReadyScanTick", normal_priority_ready_scan_tick, 0x0, 0x0, false, 0xebfe392d5d8e8e80)
#define _m337 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcTimeLimitTicks", dpc_time_limit_ticks, 0x0, 0x0, false, 0xd36cf8010f66a84d)
#define _m338 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_KPRCB.CyclesByThreadType", cycles_by_thread_type, 0x0, 0x0, false, 0xff23faa2f3da1e77)
#define _m339 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CpuCycleScalingFactor", cpu_cycle_scaling_factor, 0x0, 0x0, false, 0xceb9ebcfba8903e1)
#define _m340 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "_KPRCB.PerformanceScoreByClass", performance_score_by_class, 0x0, 0x0, false, 0xbe2726f24626c46b)
#define _m341 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint16_t, 8>), "_KPRCB.EfficiencyScoreByClass", efficiency_score_by_class, 0x0, 0x0, false, 0xd0f2cb064bc29136)
#define _m342 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DpcWatchdogProfileSingleDpcThresholdTicks", dpc_watchdog_profile_single_dpc_threshold_ticks, 0x0, 0x0, false, 0x4575852a848975ac)
#define _m343 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.SystemWorkKickInProgress", system_work_kick_in_progress, 0x0, 0x0, false, 0xbeaf54bc35cf31d6)
#define _m344 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ProcessorId", processor_id, 0x0, 0x0, false, 0x9c71b2c658bfafe9)
#define _m345 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CoreId", core_id, 0x0, 0x0, false, 0x7fa4ff653de72cc5)
#define _m346 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.ModuleId", module_id, 0x0, 0x0, false, 0x7e48ebf8ab875f1)
#define _m347 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.DieId", die_id, 0x0, 0x0, false, 0x6dfbfac83d017d41)
#define _m348 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_KPRCB.TopologyId", topology_id, 0x0, 0x0, false, 0xdfd76a34bfa17f3e)
#define _m349 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint32_t, 5>), "_KPRCB.NodeRelativeTopologyIndex", node_relative_topology_index, 0x0, 0x0, false, 0xf3fdfe5fe96e31b4)
#define _m350 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kcore_control_block_t*), "_KPRCB.CoreControlBlock", core_control_block, 0x0, 0x0, false, 0xe321fb1279ac5b63)
#define _m351 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.GroupModuleProcessorSet", group_module_processor_set, 0x0, 0x0, false, 0x9cc0744dda250255)
#define _m352 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KPRCB.SmtIsolationThread", smt_isolation_thread, 0x0, 0x0, false, 0x814aa7aa18f5ad79)
#define _m353 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kclock_timer_state_t), "_KPRCB.ClockTimerState", clock_timer_state, 0x0, 0x0, false, 0xc4197beb7267a3db)
#define _m354 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.TransitionShadowStack", transition_shadow_stack, 0x0, 0x0, false, 0xe26009ae826d37fc)
#define _m355 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.KernelShadowStackInitial", kernel_shadow_stack_initial, 0x0, 0x0, false, 0xf147c4d0c44bb11f)
#define _m356 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t*), "_KPRCB.IstShadowStacksTable", ist_shadow_stacks_table, 0x0, 0x0, false, 0x988b5f5eb7467381)
#define _m357 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KPRCB.CachedShadowStack", cached_shadow_stack, 0x0, 0x0, false, 0xfd718cacc642be0b)
#define _m358 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KPRCB.DieProcessorSet", die_processor_set, 0x0, 0x0, false, 0x1dbfa3fc7f3791ec)
#define _m359 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.CoresPerPhysicalDie", cores_per_physical_die, 0x0, 0x0, false, 0xb9cb36a842bc6bd6)
#define _m360 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.LogicalProcessorsPerModule", logical_processors_per_module, 0x0, 0x0, false, 0xc2d4401cd388000f)
#define _m361 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_KPRCB.FreezeForRecoveryDpc", freeze_for_recovery_dpc, 0x0, 0x0, false, 0x78d1b0776066544d)
#define _m362 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kaffinity_ex_t), "_KPRCB.ModuleProcessorSet", module_processor_set, 0x0, 0x0, false, 0xd6cad074431071a4)
#define _m363 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kcore_control_block_t), "_KPRCB.LocalCoreControlBlock", local_core_control_block, 0x0, 0x0, false, 0xf5ee4ceb57ebe3dd)
#define _m364 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kaffinity_ex_t, 5>), "_KPRCB.CacheProcessorSet", cache_processor_set, 0x0, 0x0, false, 0xc0bbb49ea95c51c5)
#define _m365 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.LastNonHrTimerExpiration", last_non_hr_timer_expiration, 0x0, 0x0, false, 0xb3e89be59c273b26)
#define _m366 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbIbrsPresent", bpb_ibrs_present, 0x0, 0x0, false, 0x5d48c383bf393874, 1, uint8_t)
#define _m367 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbStibpPresent", bpb_stibp_present, 0x0, 0x0, false, 0x259a9d0a17cda65a, 1, uint8_t)
#define _m368 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbSmepPresent", bpb_smep_present, 0x0, 0x0, false, 0x4c29cc7463857955, 1, uint8_t)
#define _m369 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbSimulateIbrs", bpb_simulate_ibrs, 0x0, 0x0, false, 0x4e70ded56ce869b3, 1, uint8_t)
#define _m370 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.BpbSimulateIbpb", bpb_simulate_ibpb, 0x0, 0x0, false, 0xe65460481f9270cb, 1, uint8_t)
#define _m371 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint3_t), "_KPRCB.BpbReserved", bpb_reserved, 0x0, 0x0, false, 0x4b499c20ca5d5d6d, 3, uint8_t)
#define _m372 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 7>), "_KPRCB.BpbPad", bpb_pad, 0x0, 0x0, false, 0x4dbca32381d12f93)
#define _m373 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.LastTimerHand", last_timer_hand, 0x0, 0x0, false, 0xa01d3555cb96112a)
#define _o88 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KPRCB.StibpPairingTrace.UpdateCycle", update_cycle, 0x0, 0x20, true, 0xad7420327bc468f9)
#define _o89 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KPRCB.StibpPairingTrace.PairLocal", pair_local, 0x20, 0x10, true, 0x6476e76f8007bb59)
#define _o90 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.StibpPairingTrace.PairLocalLow", pair_local_low, 0x20, 0x8, true, 0x92fdf98fa8c64d20)
#define _o91 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.StibpPairingTrace.PairLocalForceStibp", pair_local_force_stibp, 0x28, 0x1, true, 0x11307a8f78efbfc8, 1, uint8_t)
#define _o92 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.StibpPairingTrace.Frozen", frozen, 0x2d, 0x1, true, 0x21fa206e65a7bdff, 1, uint8_t)
#define _o93 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.StibpPairingTrace.ForceUntrusted", force_untrusted, 0x2e, 0x1, true, 0x9c9679c9b13b387e, 1, uint8_t)
#define _o94 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KPRCB.StibpPairingTrace.SynchIpi", synch_ipi, 0x2f, 0x1, true, 0xc6a874c7c35d5119, 1, uint8_t)
#define _o95 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KPRCB.StibpPairingTrace.PairRemote", pair_remote, 0x30, 0x10, true, 0xed174a84828866b6)
#define _o96 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KPRCB.StibpPairingTrace.PairRemoteLow", pair_remote_low, 0x30, 0x8, true, 0x48ba1568627e2b93)
#define _o97 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 24>), "_KPRCB.StibpPairingTrace.Trace", trace, 0x40, 0xc0, true, 0xe6c667f444689e9c)
#define _o98 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.StibpPairingTrace.LocalDomain", local_domain, 0x100, 0x40, true, 0x82247191a29a8b6f)
#define _o99 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KPRCB.StibpPairingTrace.RemoteDomain", remote_domain, 0x140, 0x40, true, 0x9f2d0485cac39248)
#define _p00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_KPRCB.StibpPairingTrace.Thread", thread, 0x180, 0x40, true, 0x6e3537c51774f88d)
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
#define _m064
#define _m065
#define _m066
#define _m067
#define _m068
#define _m069
#define _m070
#define _m071
#define _m072
#define _m073
#define _m074
#define _m075
#define _m076
#define _m077
#define _m078
#define _m079
#define _m080
#define _m081
#define _m082
#define _m083
#define _m084
#define _m085
#define _m086
#define _m087
#define _m088
#define _m089
#define _m090
#define _m091
#define _m092
#define _m093
#define _m094
#define _m095
#define _m096
#define _m097
#define _m098
#define _m099
#define _m100
#define _m101
#define _m102
#define _m103
#define _m104
#define _m105
#define _m106
#define _m107
#define _m108
#define _m109
#define _m110
#define _m111
#define _m112
#define _m113
#define _m114
#define _m115
#define _m116
#define _m117
#define _m118
#define _m119
#define _m120
#define _m121
#define _m122
#define _m123
#define _m124
#define _m125
#define _m126
#define _m127
#define _m128
#define _m129
#define _m130
#define _m131
#define _m132
#define _m133
#define _m134
#define _m135
#define _m136
#define _m137
#define _m138
#define _m139
#define _m140
#define _m141
#define _m142
#define _m143
#define _m144
#define _m145
#define _m146
#define _m147
#define _m148
#define _m149
#define _m150
#define _m151
#define _m152
#define _m153
#define _m154
#define _m155
#define _m156
#define _m157
#define _m158
#define _m159
#define _m160
#define _m161
#define _m162
#define _m163
#define _m164
#define _m165
#define _m166
#define _m167
#define _m168
#define _m169
#define _m170
#define _m171
#define _m172
#define _m173
#define _m174
#define _m175
#define _m176
#define _m177
#define _m178
#define _m179
#define _m180
#define _m181
#define _m182
#define _m183
#define _m184
#define _m185
#define _m186
#define _m187
#define _m188
#define _m189
#define _m190
#define _m191
#define _m192
#define _m193
#define _m194
#define _m195
#define _m196
#define _m197
#define _m198
#define _m199
#define _m200
#define _m201
#define _m202
#define _m203
#define _m204
#define _m205
#define _m206
#define _m207
#define _m208
#define _m209
#define _m210
#define _m211
#define _m212
#define _m213
#define _m214
#define _m215
#define _m216
#define _m217
#define _m218
#define _m219
#define _m220
#define _m221
#define _m222
#define _m223
#define _m224
#define _m225
#define _m226
#define _m227
#define _m228
#define _m229
#define _m230
#define _m231
#define _m232
#define _m233
#define _m234
#define _m235
#define _m236
#define _m237
#define _m238
#define _m239
#define _m240
#define _m241
#define _m242
#define _m243
#define _m244
#define _m245
#define _m246
#define _m247
#define _m248
#define _m249
#define _m250
#define _m251
#define _m252
#define _m253
#define _m254
#define _m255
#define _m256
#define _m257
#define _m258
#define _m259
#define _m260
#define _m261
#define _m262
#define _m263
#define _m264
#define _m265
#define _m266
#define _m267
#define _m268
#define _m269
#define _m270
#define _m271
#define _m272
#define _m273
#define _m274
#define _m275
#define _m276
#define _m277
#define _m278
#define _m279
#define _m280
#define _m281
#define _m282
#define _m283
#define _m284
#define _m285
#define _m286
#define _m287
#define _m301
#define _m302
#define _m303
#define _m304
#define _m305
#define _m306
#define _m307
#define _m308
#define _m309
#define _m310
#define _m311
#define _m312
#define _m313
#define _m314
#define _m315
#define _m316
#define _m317
#define _m318
#define _m319
#define _m320
#define _m321
#define _m322
#define _m323
#define _m324
#define _m325
#define _m326
#define _m327
#define _m328
#define _m329
#define _m330
#define _m331
#define _m332
#define _m333
#define _m334
#define _m335
#define _m336
#define _m337
#define _m338
#define _m339
#define _m340
#define _m341
#define _m342
#define _m343
#define _m344
#define _m345
#define _m346
#define _m347
#define _m348
#define _m349
#define _m350
#define _m351
#define _m352
#define _m353
#define _m354
#define _m355
#define _m356
#define _m357
#define _m358
#define _m359
#define _m360
#define _m361
#define _m362
#define _m363
#define _m364
#define _m365
#define _m366
#define _m367
#define _m368
#define _m369
#define _m370
#define _m371
#define _m372
#define _m373
#define _o88
#define _o89
#define _o90
#define _o91
#define _o92
#define _o93
#define _o94
#define _o95
#define _o96
#define _o97
#define _o98
#define _o99
#define _p00
#endif