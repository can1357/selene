#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t), "_KTHREAD.Header", header, 0x0, 0xc0, true, 0x536e11d88fe65653)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.SListFaultAddress", s_list_fault_address, 0xc0, 0x40, true, 0x2cfb8ccfef487221)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.QuantumTarget", quantum_target, 0x100, 0x40, true, 0x6d1e5660b55a48f8)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.InitialStack", initial_stack, 0x140, 0x40, true, 0x8ab1c37225cdcafe)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_KTHREAD.StackLimit", stack_limit, 0x180, 0x40, true, 0x10ea3b4a57547d72)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.StackBase", stack_base, 0x1c0, 0x40, true, 0xb124f50d3a112827)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.ThreadLock", thread_lock, 0x200, 0x40, true, 0xd5e793875b6bd9cf)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint64_t), "_KTHREAD.CycleTime", cycle_time, 0x240, 0x40, true, 0x1df02b790901cd20)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.CurrentRunTime", current_run_time, 0x280, 0x20, true, 0x3fef385b9bf0f89c)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.ExpectedRunTime", expected_run_time, 0x2a0, 0x20, true, 0x1697029cdcbe9163)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.KernelStack", kernel_stack, 0x2c0, 0x40, true, 0x210a2ccf5630a78e)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::xsave_format*), "_KTHREAD.StateSaveArea", state_save_area, 0x300, 0x40, true, 0x1c655263af0ebeb3)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscheduling_group_t volatile*), "_KTHREAD.SchedulingGroup", scheduling_group, 0x340, 0x40, true, 0x44e9d4be92e193bd)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kwait_status_register_t), "_KTHREAD.WaitRegister", wait_register, 0x380, 0x8, true, 0x276509c9ee079652)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KTHREAD.Running", running, 0x388, 0x8, true, 0x5e563323d77d0ef0)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 2>), "_KTHREAD.Alerted", alerted, 0x390, 0x10, true, 0xda1ab2167542d15c)
#define _m016 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.AutoBoostActive", auto_boost_active, 0x3a0, 0x1, true, 0x74ba8220f730a0e4, 1, uint32_t)
#define _m017 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ReadyTransition", ready_transition, 0x3a1, 0x1, true, 0xfcbcb80df32a16c8, 1, uint32_t)
#define _m018 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.WaitNext", wait_next, 0x3a2, 0x1, true, 0x294dd201bde6eed7, 1, uint32_t)
#define _m019 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.SystemAffinityActive", system_affinity_active, 0x3a3, 0x1, true, 0x82c7bb6aad325c7d, 1, uint32_t)
#define _m020 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.Alertable", alertable, 0x3a4, 0x1, true, 0x6eda73fe45b13bc2, 1, uint32_t)
#define _m021 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.UserStackWalkActive", user_stack_walk_active, 0x3a5, 0x1, true, 0xc544945a8ec0c0d9, 1, uint32_t)
#define _m022 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ApcInterruptRequest", apc_interrupt_request, 0x3a6, 0x1, true, 0xc15a5545d36d91e7, 1, uint32_t)
#define _m023 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.QuantumEndMigrate", quantum_end_migrate, 0x3a7, 0x1, true, 0x2f5bcf9b1e6f078b, 1, uint32_t)
#define _m024 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.TimerActive", timer_active, 0x3a9, 0x1, true, 0x18d9964941882c9a, 1, uint32_t)
#define _m025 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.SystemThread", system_thread, 0x3aa, 0x1, true, 0x94287f230f0a94c0, 1, uint32_t)
#define _m026 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ProcessDetachActive", process_detach_active, 0x3ab, 0x1, true, 0x13ccbb467b9829fa, 1, uint32_t)
#define _m027 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.CalloutActive", callout_active, 0x3ac, 0x1, true, 0xbccda5182feaf21a, 1, uint32_t)
#define _m028 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ScbReadyQueue", scb_ready_queue, 0x3ad, 0x1, true, 0xf3c739a4ead72566, 1, uint32_t)
#define _m029 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ApcQueueable", apc_queueable, 0x3ae, 0x1, true, 0x39a236b59fda8e99, 1, uint32_t)
#define _m030 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ReservedStackInUse", reserved_stack_in_use, 0x3af, 0x1, true, 0xaad8e3a86db47c38, 1, uint32_t)
#define _m031 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.TimerSuspended", timer_suspended, 0x3b1, 0x1, true, 0x67b2006e811e46b8, 1, uint32_t)
#define _m032 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.SuspendedWaitMode", suspended_wait_mode, 0x3b2, 0x1, true, 0x70b2c02106075216, 1, uint32_t)
#define _m033 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.SuspendSchedulerApcWait", suspend_scheduler_apc_wait, 0x3b3, 0x1, true, 0x42aa36e591db5a88, 1, uint32_t)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KTHREAD.MiscFlags", misc_flags, 0x3a0, 0x20, true, 0x942b7f10509f2b17)
#define _m035 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.AutoAlignment", auto_alignment, 0x3c2, 0x1, true, 0x8077e285ddaa07c6, 1, uint32_t)
#define _m036 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.DisableBoost", disable_boost, 0x3c3, 0x1, true, 0x51b7f1cc9607b800, 1, uint32_t)
#define _m037 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.AlertedByThreadId", alerted_by_thread_id, 0x3c4, 0x1, true, 0xb20cb078c8c29376, 1, uint32_t)
#define _m038 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.QuantumDonation", quantum_donation, 0x3c5, 0x1, true, 0x912440fda88e5d75, 1, uint32_t)
#define _m039 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.EnableStackSwap", enable_stack_swap, 0x3c6, 0x1, true, 0x89bd0ebc866ad6e1, 1, uint32_t)
#define _m040 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.GuiThread", gui_thread, 0x3c7, 0x1, true, 0x447395e7a1441570, 1, uint32_t)
#define _m041 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.DisableQuantum", disable_quantum, 0x3c8, 0x1, true, 0xe53081f7efbf73b4, 1, uint32_t)
#define _m042 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.ChargeOnlySchedulingGroup", charge_only_scheduling_group, 0x3c9, 0x1, true, 0xe46f863bbdb36b4, 1, uint32_t)
#define _m043 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.DeferPreemption", defer_preemption, 0x3ca, 0x1, true, 0xfba8d8b6346674b2, 1, uint32_t)
#define _m044 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.QueueDeferPreemption", queue_defer_preemption, 0x3cb, 0x1, true, 0x7f53278a9b22f4bd, 1, uint32_t)
#define _m045 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.ForceDeferSchedule", force_defer_schedule, 0x3cc, 0x1, true, 0xc326a20d1c24de91, 1, uint32_t)
#define _m046 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.SharedReadyQueueAffinity", shared_ready_queue_affinity, 0x3cd, 0x1, true, 0xf0d3c4b8f14179ed, 1, uint32_t)
#define _m047 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.FreezeCount", freeze_count, 0x3ce, 0x1, true, 0xc6a52e9931cb9a4, 1, uint32_t)
#define _m048 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.TerminationApcRequest", termination_apc_request, 0x3cf, 0x1, true, 0x8e01f58c2661d651, 1, uint32_t)
#define _m049 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.AutoBoostEntriesExhausted", auto_boost_entries_exhausted, 0x3d0, 0x1, true, 0xeb0df774ce23d781, 1, uint32_t)
#define _m050 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.KernelStackResident", kernel_stack_resident, 0x3d1, 0x1, true, 0x7592663b5ea76f25, 1, uint32_t)
#define _m051 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.ProcessStackCountDecremented", process_stack_count_decremented, 0x3d4, 0x1, true, 0x8fbf77fb9b0277c8, 1, uint32_t)
#define _m052 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.RestrictedGuiThread", restricted_gui_thread, 0x3d5, 0x1, true, 0xf81143a1bc01253d, 1, uint32_t)
#define _m053 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint8_t), "_KTHREAD.EtwStackTraceApcInserted", etw_stack_trace_apc_inserted, 0x3d8, 0x8, true, 0xfb5405b70076c393, 8, uint32_t)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KTHREAD.ThreadFlags", thread_flags, 0x3c0, 0x20, true, 0x1c711b9976d014ee)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KTHREAD.Tag", tag, 0x3e0, 0x8, true, 0x52f2d9d93a7b4910)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.SystemHeteroCpuPolicy", system_hetero_cpu_policy, 0x3e8, 0x8, true, 0xc076309c011cde2f)
#define _m057 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_KTHREAD.UserHeteroCpuPolicy", user_hetero_cpu_policy, 0x3f0, 0x7, true, 0xc3081c100bb99391, 7, uint8_t)
#define _m058 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.ExplicitSystemHeteroCpuPolicy", explicit_system_hetero_cpu_policy, 0x3f7, 0x1, true, 0xb927f4e5272ad3e6, 1, uint8_t)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.SystemCallNumber", system_call_number, 0x400, 0x20, true, 0x4201182402c80210)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.FirstArgument", first_argument, 0x440, 0x40, true, 0x229cf8ffdcb2114b)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::trapframe*), "_KTHREAD.TrapFrame", trap_frame, 0x480, 0x40, true, 0xc8dc95d1f84b8b2c)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_state_t), "_KTHREAD.ApcState", apc_state, 0x4c0, 0x80, true, 0x1189baccd762d34)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 43>), "_KTHREAD.ApcStateFill", apc_state_fill, 0x4c0, 0x58, true, 0x84637f92ff48a025)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.Priority", priority, 0x618, 0x8, true, 0x5dc8135ea713d11c)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.UserIdealProcessor", user_ideal_processor, 0x620, 0x20, true, 0xe74adc925af55a2e)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int64_t), "_KTHREAD.WaitStatus", wait_status, 0x640, 0x40, true, 0x129ef5652f8c911a)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kwait_block_t*), "_KTHREAD.WaitBlockList", wait_block_list, 0x680, 0x40, true, 0x811df99481c840f0)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTHREAD.WaitListEntry", wait_list_entry, 0x6c0, 0x80, true, 0x36d94f8c86efe530)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KTHREAD.SwapListEntry", swap_list_entry, 0x6c0, 0x40, true, 0xc96fdf162dbd46d9)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::dispatcher_header_t volatile*), "_KTHREAD.Queue", queue, 0x740, 0x40, true, 0xe51e6b2b3278094f)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.Teb", teb, 0x780, 0x40, true, 0xdc291162a95a3b9c)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.RelativeTimerBias", relative_timer_bias, 0x7c0, 0x40, true, 0x5b6adf8925ff7870)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_KTHREAD.Timer", timer, 0x800, 0x0, true, 0x9b0b4991e606e300)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<struct nt::kwait_block_t, 4>), "_KTHREAD.WaitBlock", wait_block, 0xa00, 0x0, true, 0x9f4ae46087e79111)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 20>), "_KTHREAD.WaitBlockFill4", wait_block_fill4, 0xa00, 0xa0, true, 0x81dc7df7b5b77f11)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.ContextSwitches", context_switches, 0xaa0, 0x20, true, 0x8cb8122c641c426a)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 68>), "_KTHREAD.WaitBlockFill5", wait_block_fill5, 0xa00, 0x20, true, 0x2dd716eef9e0f5af)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint8_t), "_KTHREAD.State", state, 0xc20, 0x8, true, 0x7c204de252cee486)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.WaitIrql", wait_irql, 0xc30, 0x8, true, 0xba5ccd3538cd8aed)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.WaitMode", wait_mode, 0xc38, 0x8, true, 0x99381e525aa7043b)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 116>), "_KTHREAD.WaitBlockFill6", wait_block_fill6, 0xa00, 0xa0, true, 0x8267f3017892ec6f)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.WaitTime", wait_time, 0xda0, 0x20, true, 0x724c4d08fe73e8b1)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 164>), "_KTHREAD.WaitBlockFill7", wait_block_fill7, 0xa00, 0x20, true, 0x69a9f489421ede9c)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KTHREAD.KernelApcDisable", kernel_apc_disable, 0xf20, 0x10, true, 0x6bbbddcd10356403)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int16_t), "_KTHREAD.SpecialApcDisable", special_apc_disable, 0xf30, 0x10, true, 0xd09c62603f25ee5a)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.CombinedApcDisable", combined_apc_disable, 0xf20, 0x20, true, 0x1ccc4b0cce722877)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 40>), "_KTHREAD.WaitBlockFill8", wait_block_fill8, 0xa00, 0x40, true, 0xd7bea97cc2f8f916)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_counters_t*), "_KTHREAD.ThreadCounters", thread_counters, 0xb40, 0x40, true, 0x7d2d7c47ed2a2321)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 88>), "_KTHREAD.WaitBlockFill9", wait_block_fill9, 0xa00, 0xc0, true, 0x61c8cd8804207440)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::xstate_save_t*), "_KTHREAD.XStateSave", x_state_save, 0xcc0, 0x40, true, 0x858882d2af2ecb78)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 136>), "_KTHREAD.WaitBlockFill10", wait_block_fill10, 0xa00, 0x40, true, 0x2a1437904ead0b84)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_KTHREAD.Win32Thread", win32_thread, 0xe40, 0x40, true, 0xe3dc66e4f934d067)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 176>), "_KTHREAD.WaitBlockFill11", wait_block_fill11, 0xa00, 0x80, true, 0xe7132c2f0db8504c)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTHREAD.QueueListEntry", queue_list_entry, 0x1040, 0x80, true, 0x4dd80cf59faee1de)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KTHREAD.NextProcessor", next_processor, 0x10c0, 0x20, true, 0xf0f31027e359afb1)
#define _m096 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint31_t), "_KTHREAD.NextProcessorNumber", next_processor_number, 0x10c0, 0x1f, true, 0x3d035a48c391b044, 31, uint32_t)
#define _m097 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.SharedReadyQueue", shared_ready_queue, 0x10df, 0x1, true, 0x773b3cee404ee379, 1, uint32_t)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KTHREAD.QueuePriority", queue_priority, 0x10e0, 0x20, true, 0xec0cc7008c6a66d6)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprocess_t*), "_KTHREAD.Process", process, 0x1100, 0x40, true, 0xd6d5ac088fc4f1c6)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::group_affinity_t, struct nt::kaffinity_ex_t*>), "_KTHREAD.UserAffinity", user_affinity, 0x1140, 0x80, true, 0xd3a81ede11a572bf)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.PreviousMode", previous_mode, 0x1190, 0x8, true, 0x7bd1465ed2ca0d0f)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.BasePriority", base_priority, 0x1198, 0x8, true, 0xc80d371d1a66eb11)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.PriorityDecrement", priority_decrement, 0x11a0, 0x8, true, 0x31ec2c78c06b333a)
#define _m104 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_KTHREAD.ForegroundBoost", foreground_boost, 0x11a0, 0x4, true, 0xeeb3fc2929db9c2c, 4, uint8_t)
#define _m105 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint4_t), "_KTHREAD.UnusualBoost", unusual_boost, 0x11a4, 0x4, true, 0xcb6759c1c207f68f, 4, uint8_t)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.Preempted", preempted, 0x11a8, 0x8, true, 0x8fb1cb9b41f70bd8)
#define _m107 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.AdjustReason", adjust_reason, 0x11b0, 0x8, true, 0x6e3a4ff6bf5e3e2a)
#define _m108 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.AdjustIncrement", adjust_increment, 0x11b8, 0x8, true, 0xeff6e0c97bf6fa5)
#define _m109 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.AffinityVersion", affinity_version, 0x11c0, 0x40, true, 0xb07b2d824041273a)
#define _m110 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<struct nt::group_affinity_t, struct nt::kaffinity_ex_t*>), "_KTHREAD.Affinity", affinity, 0x1200, 0x80, true, 0x84d01b8fa5b65dd8)
#define _m111 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.ApcStateIndex", apc_state_index, 0x1250, 0x8, true, 0xafe4948a60b23183)
#define _m112 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.WaitBlockCount", wait_block_count, 0x1258, 0x8, true, 0x1802364dd2e72bed)
#define _m113 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.IdealProcessor", ideal_processor, 0x1260, 0x20, true, 0x1b1a0731cd5f7389)
#define _m114 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.NpxState", npx_state, 0x1280, 0x40, true, 0x2fb2220f17ad5e1b)
#define _m115 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_state_t), "_KTHREAD.SavedApcState", saved_apc_state, 0x12c0, 0x80, true, 0x79e270b0fac21e9f)
#define _m116 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 43>), "_KTHREAD.SavedApcStateFill", saved_apc_state_fill, 0x12c0, 0x58, true, 0x4426ab72ce18b8e9)
#define _m117 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.WaitReason", wait_reason, 0x1418, 0x8, true, 0x9f97c85f2127cfa2)
#define _m118 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.SuspendCount", suspend_count, 0x1420, 0x8, true, 0x7511b71d51f4e2fd)
#define _m119 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.Saturation", saturation, 0x1428, 0x8, true, 0x45d7449b33ff7a79)
#define _m120 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTHREAD.SListFaultCount", s_list_fault_count, 0x1430, 0x10, true, 0xb0c3ac00e889b312)
#define _m121 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kapc_t), "_KTHREAD.SchedulerApc", scheduler_apc, 0x1440, 0xc0, true, 0x42d8acd7f59fef66)
#define _m122 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.ResourceIndex", resource_index, 0x1448, 0x8, true, 0xfa6735b6544132b0)
#define _m123 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 3>), "_KTHREAD.SchedulerApcFill1", scheduler_apc_fill1, 0x1440, 0x18, true, 0xf9e71cd09ccdcc09)
#define _m124 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.QuantumReset", quantum_reset, 0x1458, 0x8, true, 0x7b4949f4432c47cb)
#define _m125 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 4>), "_KTHREAD.SchedulerApcFill2", scheduler_apc_fill2, 0x1440, 0x20, true, 0x4956fa8bc04ffde2)
#define _m126 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.KernelTime", kernel_time, 0x1460, 0x20, true, 0x1b93a0074f205366)
#define _m127 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 64>), "_KTHREAD.SchedulerApcFill3", scheduler_apc_fill3, 0x1440, 0x0, true, 0x1a380aae028c29b8)
#define _m128 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kprcb_t volatile*), "_KTHREAD.WaitPrcb", wait_prcb, 0x1640, 0x40, true, 0xb03ff5fb20a02af9)
#define _m129 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 72>), "_KTHREAD.SchedulerApcFill4", scheduler_apc_fill4, 0x1440, 0x40, true, 0x9bbca71c8e60c62e)
#define _m130 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.LegoData", lego_data, 0x1680, 0x40, true, 0xfdcd10b30301bf34)
#define _m131 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 83>), "_KTHREAD.SchedulerApcFill5", scheduler_apc_fill5, 0x1440, 0x98, true, 0xb7aa4b0e2ff43ba6)
#define _m132 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.CallbackNestingLevel", callback_nesting_level, 0x16d8, 0x8, true, 0xe2404731355b1bb1)
#define _m133 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.UserTime", user_time, 0x16e0, 0x20, true, 0x279b039c3a58ce46)
#define _m134 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_KTHREAD.SuspendEvent", suspend_event, 0x1700, 0xc0, true, 0x4b3d25431d288dce)
#define _m135 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTHREAD.ThreadListEntry", thread_list_entry, 0x17c0, 0x80, true, 0x5a629c2a273e1eef)
#define _m136 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTHREAD.MutantListHead", mutant_list_head, 0x1840, 0x80, true, 0x9c3d4d05c0ad03eb)
#define _m137 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.AbEntrySummary", ab_entry_summary, 0x18c0, 0x8, true, 0x12ece6ac930afcc6)
#define _m138 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.AbWaitEntryCount", ab_wait_entry_count, 0x18c8, 0x8, true, 0xea428cc891001e94)
#define _m139 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.SecureThreadCookie", secure_thread_cookie, 0x18e0, 0x20, true, 0xfa3ac9c449733d17)
#define _m140 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KTHREAD.PropagateBoostsEntry", propagate_boosts_entry, 0x1940, 0x40, true, 0x23f06f11a7888db9)
#define _m141 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KTHREAD.IoSelfBoostsEntry", io_self_boosts_entry, 0x1980, 0x40, true, 0x2bb6c3e38def5aad)
#define _m142 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_KTHREAD.PriorityFloorCounts", priority_floor_counts, 0x19c0, 0x80, true, 0x768e35a9a4b89cca)
#define _m143 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.PriorityFloorSummary", priority_floor_summary, 0x1ac0, 0x20, true, 0x946679829a1fa276)
#define _m144 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KTHREAD.AbCompletedIoBoostCount", ab_completed_io_boost_count, 0x1ae0, 0x20, true, 0x1deed74a448adf3f)
#define _m145 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KTHREAD.AbCompletedIoQoSBoostCount", ab_completed_io_qo_s_boost_count, 0x1b00, 0x20, true, 0x1a26cc60428a0353)
#define _m146 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int16_t), "_KTHREAD.KeReferenceCount", ke_reference_count, 0x1b20, 0x10, true, 0xc59931295202fe5c)
#define _m147 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.AbOrphanedEntrySummary", ab_orphaned_entry_summary, 0x1b30, 0x8, true, 0xfe4294621ed5654c)
#define _m148 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.AbOwnedEntryCount", ab_owned_entry_count, 0x1b38, 0x8, true, 0x6420585289509185)
#define _m149 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.ForegroundLossTime", foreground_loss_time, 0x1b40, 0x20, true, 0x163cd68834134f25)
#define _m150 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTHREAD.GlobalForegroundListEntry", global_foreground_list_entry, 0x1b80, 0x80, true, 0x8ff6f6f4c90e3a68)
#define _m151 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KTHREAD.ForegroundDpcStackListEntry", foreground_dpc_stack_list_entry, 0x1b80, 0x40, true, 0x1ca2f5c832f37b23)
#define _m152 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.InGlobalForegroundList", in_global_foreground_list, 0x1bc0, 0x40, true, 0x26164c01ab9ffd68)
#define _m153 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTHREAD.ReadOperationCount", read_operation_count, 0x1c00, 0x40, true, 0xdbf14d38bdd7926b)
#define _m154 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTHREAD.WriteOperationCount", write_operation_count, 0x1c40, 0x40, true, 0x8fc8b691226d7307)
#define _m155 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTHREAD.OtherOperationCount", other_operation_count, 0x1c80, 0x40, true, 0x59ea273e8755aff8)
#define _m156 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTHREAD.ReadTransferCount", read_transfer_count, 0x1cc0, 0x40, true, 0x9f738a068e2a8294)
#define _m157 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTHREAD.WriteTransferCount", write_transfer_count, 0x1d00, 0x40, true, 0x9d3014730d423f68)
#define _m158 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_KTHREAD.OtherTransferCount", other_transfer_count, 0x1d40, 0x40, true, 0x59e902fc3cfb0fd4)
#define _m159 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kscb_t*), "_KTHREAD.QueuedScb", queued_scb, 0x1d80, 0x40, true, 0x262f56b90a875b91)
#define _m160 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.CetUserShadowStack", cet_user_shadow_stack, 0x3b4, 0x1, true, 0xd153cdd3f43fe73, 1, uint32_t)
#define _m161 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.BypassProcessFreeze", bypass_process_freeze, 0x3b5, 0x1, true, 0x7fcd36c299ffdc4a, 1, uint32_t)
#define _m162 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint2_t), "_KTHREAD.TerminateRequestReason", terminate_request_reason, 0x3d2, 0x2, true, 0x9fe5812550ef9676, 2, uint32_t)
#define _m163 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.VpBackingThread", vp_backing_thread, 0x3d6, 0x1, true, 0x867694cb370311eb, 1, uint32_t)
#define _m164 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.RunningNonRetpolineCode", running_non_retpoline_code, 0x3f8, 0x1, true, 0x89b57b0a2e4fec6, 1, uint8_t)
#define _m165 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint7_t), "_KTHREAD.SpecCtrlSpare", spec_ctrl_spare, 0x3f9, 0x7, true, 0x61b38b5c5e75103c, 7, uint8_t)
#define _m166 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.SpecCtrl", spec_ctrl, 0x3f8, 0x8, true, 0xf41a581a5d48037b)
#define _m167 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.ReadyTime", ready_time, 0x420, 0x20, true, 0xa726260d7461ad2)
#define _m168 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KTHREAD.ThreadFlags2", thread_flags2, 0x1000, 0x20, true, 0x14a18dc8366096bc)
#define _m169 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint8_t), "_KTHREAD.BamQosLevel", bam_qos_level, 0x1000, 0x8, true, 0x9062612c461deb41, 8, uint32_t)
#define _m170 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint24_t), "_KTHREAD.ThreadFlags2Reserved", thread_flags2_reserved, 0x1008, 0x18, true, 0xcea5edf901a75f7b, 24, uint32_t)
#define _m171 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(char), "_KTHREAD.SystemPriority", system_priority, 0x18d8, 0x8, true, 0xe6b9506c360e1a4f)
#define _m172 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile uint32_t), "_KTHREAD.ThreadTimerDelay", thread_timer_delay, 0x1dc0, 0x20, true, 0x17b8360a909c78e4)
#define _m173 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_KTHREAD.ThreadFlags3", thread_flags3, 0x1de0, 0x20, true, 0x8d4870d0660f5f89)
#define _m174 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint8_t), "_KTHREAD.ThreadFlags3Reserved", thread_flags3_reserved, 0x1de0, 0x8, true, 0xd3d5f1aa39fd3e0a, 8, uint32_t)
#define _m175 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint3_t), "_KTHREAD.PpmPolicy", ppm_policy, 0x1de8, 0x2, true, 0x494f82ae2ed408b6, 0, uint32_t)
#define _m176 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint22_t), "_KTHREAD.ThreadFlags3Reserved2", thread_flags3_reserved2, 0x1dea, 0x16, true, 0x5f9790ae24746cf1, 0, uint32_t)
#define _m177 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 1>), "_KTHREAD.TracingPrivate", tracing_private, 0x1e00, 0x40, true, 0xd144012b3fdb1ff1)
#define _m178 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.SchedulerAssist", scheduler_assist, 0x1e40, 0x40, true, 0xe55e6b46155bb848)
#define _m179 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void volatile*), "_KTHREAD.AbWaitObject", ab_wait_object, 0x1e80, 0x40, true, 0x894e94e95b2a4a49)
#define _m180 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.ReservedPreviousReadyTimeValue", reserved_previous_ready_time_value, 0x1ec0, 0x20, true, 0xa3ae1c0a2fe15bec)
#define _m181 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.KernelWaitTime", kernel_wait_time, 0x1f00, 0x40, true, 0x9eed0cdb67df69ab)
#define _m182 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.UserWaitTime", user_wait_time, 0x1f40, 0x40, true, 0x87e257a76fc0e2ff)
#define _m183 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_KTHREAD.GlobalUpdateVpThreadPriorityListEntry", global_update_vp_thread_priority_list_entry, 0x1f80, 0x80, true, 0x1858b63380253d46)
#define _m184 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KTHREAD.UpdateVpThreadPriorityDpcStackListEntry", update_vp_thread_priority_dpc_stack_list_entry, 0x1f80, 0x40, true, 0x293a92d9e6f83256)
#define _m185 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.InGlobalUpdateVpThreadPriorityList", in_global_update_vp_thread_priority_list, 0x1fc0, 0x40, true, 0x94e58903c32f66ee)
#define _m186 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KTHREAD.SchedulerAssistPriorityFloor", scheduler_assist_priority_floor, 0x2000, 0x20, true, 0xdf4dea6596109303)
#define _m187 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint64_t, 5>), "_KTHREAD.EndPadding", end_padding, 0x2040, 0x40, true, 0x5e673b08dd002a84)
#define _m188 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.UmsDirectedSwitchEnable", ums_directed_switch_enable, 0x3a8, 0x1, true, 0x6371662436368027, 1, uint32_t)
#define _m189 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.UmsPerformingSyscall", ums_performing_syscall, 0x3b0, 0x1, true, 0x20c3c1676b63984c, 1, uint32_t)
#define _m190 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint4_t), "_KTHREAD.ThreadFlagsSpare", thread_flags_spare, 0x3c0, 0x2, true, 0xa930da8c74caa369, 0, uint32_t)
#define _m191 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ums_control_block_t*), "_KTHREAD.Ucb", ucb, 0xf80, 0x40, true, 0xd42b1afa35734871)
#define _m192 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kums_context_header_t volatile*), "_KTHREAD.Uch", uch, 0xfc0, 0x40, true, 0x1a47c61255f71eeb)
#define _m193 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 10>), "_KTHREAD.UserAffinityFill", user_affinity_fill, 0x1140, 0x50, true, 0xe36231776d819fa7)
#define _m194 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 10>), "_KTHREAD.AffinityFill", affinity_fill, 0x1200, 0x50, true, 0xfa21c6fd233da267)
#define _m195 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 1>), "_KTHREAD.SchedulerApcFill0", scheduler_apc_fill0, 0x1440, 0x8, true, 0xa6fbb282bb8c7fd)
#define _m196 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::variant<sdk::array<struct nt::klock_entry_t, 6>, struct nt::klock_entry_t*>), "_KTHREAD.LockEntries", lock_entries, 0x1900, 0x40, true, 0xaeaede2eaec39a87)
#define _m197 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.ThreadFlagsSpare2", thread_flags_spare2, 0x3d7, 0x1, true, 0xfc443d13e730d0a5, 1, uint32_t)
#define _m198 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.AbAllocationRegionCount", ab_allocation_region_count, 0x18d0, 0x8, true, 0x6e43df69b421f3ae)
#define _m199 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<uint8_t, 16>), "_KTHREAD.PriorityFloorCountsReserved", priority_floor_counts_reserved, 0x1a40, 0x80, true, 0xce9bef1c64ff64a6)
#define _m200 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.ThreadFlagsSpare0", thread_flags_spare0, 0x0, 0x0, false, 0x1a5480b595ea9c39, 1, uint32_t)
#define _m201 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.CommitFailTerminateRequest", commit_fail_terminate_request, 0x0, 0x0, false, 0xbc0134ee8b7d560, 1, uint32_t)
#define _m202 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.TebMappedLowVa", teb_mapped_low_va, 0x0, 0x0, false, 0x5e81ee8495b68a07)
#define _m203 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.SecureThread", secure_thread, 0x0, 0x0, false, 0x9c10efab4bb5f695, 1, uint32_t)
#define _m204 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.CetKernelShadowStack", cet_kernel_shadow_stack, 0x0, 0x0, false, 0xddcd43e235981e29, 1, uint32_t)
#define _m205 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.StateSaveAreaDecoupled", state_save_area_decoupled, 0x0, 0x0, false, 0x7ec26e4e1e752453, 1, uint32_t)
#define _m206 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.UserIdealProcessorFixed", user_ideal_processor_fixed, 0x0, 0x0, false, 0x6cb49381a814f0e9, 1, uint32_t)
#define _m207 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.IsolationWidth", isolation_width, 0x0, 0x0, false, 0x55a42a4a22357613, 1, uint32_t)
#define _m208 _SDK_MAGIC_BITFIELD(add_v_t, _SDK_ESCAPE(volatile uint1_t), "_KTHREAD.EtwStackTraceCrimsonApcDisabled", etw_stack_trace_crimson_apc_disabled, 0x0, 0x0, false, 0xd1b3cd26186195fe, 1, uint32_t)
#define _m209 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.HgsFeedbackClass", hgs_feedback_class, 0x0, 0x0, false, 0xfa471f427bca79c2)
#define _m210 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTHREAD.UserAffinityPrimaryGroup", user_affinity_primary_group, 0x0, 0x0, false, 0x711e9786f1ddf78b)
#define _m211 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint16_t), "_KTHREAD.AffinityPrimaryGroup", affinity_primary_group, 0x0, 0x0, false, 0x1fe0b7ce5eb46d2)
#define _m212 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.FreezeFlags", freeze_flags, 0x0, 0x0, false, 0x7fd5240244b8383e)
#define _m213 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.FreezeCount2", freeze_count2, 0x0, 0x0, false, 0x583a5ca8bd71a9a5, 1, uint8_t)
#define _m214 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.FreezeNormal", freeze_normal, 0x0, 0x0, false, 0xae71153c62a56cf7, 1, uint8_t)
#define _m215 _SDK_MAGIC_BITFIELD(nop_t, _SDK_ESCAPE(uint1_t), "_KTHREAD.FreezeDeep", freeze_deep, 0x0, 0x0, false, 0x16b5733a55ef351a, 1, uint8_t)
#define _m216 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_KTHREAD.RealtimePriorityFloor", realtime_priority_floor, 0x0, 0x0, false, 0x64221ae5e16da962)
#define _m217 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.KernelShadowStack", kernel_shadow_stack, 0x0, 0x0, false, 0x213b6307aec36483)
#define _m218 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.KernelShadowStackInitial", kernel_shadow_stack_initial, 0x0, 0x0, false, 0xb666f3ca6f9249c7)
#define _m219 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.KernelShadowStackBase", kernel_shadow_stack_base, 0x0, 0x0, false, 0x33fb3c930dd1e199)
#define _m220 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union nt::kernel_shadow_stack_limit_t), "_KTHREAD.KernelShadowStackLimit", kernel_shadow_stack_limit, 0x0, 0x0, false, 0xf3f6be79554e2214)
#define _m221 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.ExtendedFeatureDisableMask", extended_feature_disable_mask, 0x0, 0x0, false, 0x814403557d1aeeb0)
#define _m222 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.HgsFeedbackStartTime", hgs_feedback_start_time, 0x0, 0x0, false, 0xf703b95e994ae201)
#define _m223 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_KTHREAD.HgsFeedbackCycles", hgs_feedback_cycles, 0x0, 0x0, false, 0x1665a4d3667b62a4)
#define _m224 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.HgsInvalidFeedbackCount", hgs_invalid_feedback_count, 0x0, 0x0, false, 0x7a0c80068b919a97)
#define _m225 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.HgsLowerPerfClassFeedbackCount", hgs_lower_perf_class_feedback_count, 0x0, 0x0, false, 0x94750ce61b1847fe)
#define _m226 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_KTHREAD.HgsHigherPerfClassFeedbackCount", hgs_higher_perf_class_feedback_count, 0x0, 0x0, false, 0x312f9f7f70e1556b)
#define _m227 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::single_list_entry_t), "_KTHREAD.SystemAffinityTokenListHead", system_affinity_token_list_head, 0x0, 0x0, false, 0xc1b123e38ac0177e)
#define _m228 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_KTHREAD.IptSaveArea", ipt_save_area, 0x0, 0x0, false, 0x584bf4dce49bf505)
#define _m229 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.CoreIsolationReasons", core_isolation_reasons, 0x0, 0x0, false, 0x4f748b804b3b5cb2)
#define _m230 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_KTHREAD.BamQosLevelFromAssistPage", bam_qos_level_from_assist_page, 0x0, 0x0, false, 0xcf4cf75669f6e0dc)
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
#endif