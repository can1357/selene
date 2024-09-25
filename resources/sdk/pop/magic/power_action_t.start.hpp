#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.Updates", updates, 0x0, 0x8, true, 0x58ba1f9fc9423c66)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.State", state, 0x8, 0x8, true, 0x4b28a52c40a20f8c)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.Shutdown", shutdown, 0x10, 0x8, true, 0x8c3958dc94d65d46)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::action_t), "_POP_POWER_ACTION.Action", action, 0x20, 0x20, true, 0x7307767a51080d82)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POP_POWER_ACTION.LightestState", lightest_state, 0x40, 0x20, true, 0xb829c058e07e93ad)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_ACTION.Flags", flags, 0x60, 0x20, true, 0xf86345257cf83c0f)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_POWER_ACTION.Status", status, 0x80, 0x20, true, 0x44e4dbb786849748)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::policy_device_type_t), "_POP_POWER_ACTION.DeviceType", device_type, 0xa0, 0x20, true, 0x7379ffce45b0ee9d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_ACTION.DeviceTypeFlags", device_type_flags, 0xc0, 0x20, true, 0x850dab736c6b0218)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.IrpMinor", irp_minor, 0xe0, 0x8, true, 0xa1204a0e8295becf)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.Waking", waking, 0xe8, 0x8, true, 0x8d1b9fed6a4f88bd)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POP_POWER_ACTION.SystemState", system_state, 0x100, 0x20, true, 0xb0a885436955d82f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POP_POWER_ACTION.NextSystemState", next_system_state, 0x120, 0x20, true, 0x5a25dbfcadfdcc9)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POP_POWER_ACTION.EffectiveSystemState", effective_system_state, 0x140, 0x20, true, 0xcbc21717a8020415)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_POP_POWER_ACTION.CurrentSystemState", current_system_state, 0x160, 0x20, true, 0xb4d6f2a2424c54f8)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::shutdown_bug_check_t*), "_POP_POWER_ACTION.ShutdownBugCode", shutdown_bug_code, 0x180, 0x40, true, 0x8bd47c11af2c0f40)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::device_sys_state_t*), "_POP_POWER_ACTION.DevState", dev_state, 0x1c0, 0x40, true, 0xa076099cbb74dd93)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::hiber_context_t*), "_POP_POWER_ACTION.HiberContext", hiber_context, 0x200, 0x40, true, 0x12efd8e75c56924e)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WakeTime", wake_time, 0x240, 0x40, true, 0x2c80cafa054c89f4)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.SleepTime", sleep_time, 0x280, 0x40, true, 0xd0cc49216008210b)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WakeFirstUnattendedTime", wake_first_unattended_time, 0x2c0, 0x40, true, 0x80ba8bdc1cc74fe4)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_condition_t), "_POP_POWER_ACTION.WakeAlarmSignaled", wake_alarm_signaled, 0x300, 0x20, true, 0x7938df1709af31b5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<u0_wake_alarm_t, 3>), "_POP_POWER_ACTION.WakeAlarm", wake_alarm, 0x340, 0x40, true, 0xd5a3d63d1993c131)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.WakeAlarmPaused", wake_alarm_paused, 0x580, 0x8, true, 0xe92d77fb6bccd8b2)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WakeAlarmLastTime", wake_alarm_last_time, 0x5c0, 0x40, true, 0x9c8dd366441b257b)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::system_power_capabilities_t), "_POP_POWER_ACTION.FilteredCapabilities", filtered_capabilities, 0x640, 0x60, true, 0x1b12ae9649f5aaa3)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.DozeDeferralStartTime", doze_deferral_start_time, 0x600, 0x40, true, 0x687922c63541ef5e)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WatchdogLock", watchdog_lock, 0x8c0, 0x40, true, 0x6ddfbf697c13309)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_POP_POWER_ACTION.WatchdogDpc", watchdog_dpc, 0x900, 0x0, true, 0x2074f37aa73c88bc)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_POP_POWER_ACTION.WatchdogTimer", watchdog_timer, 0xb00, 0x0, true, 0xbc9ee03ff5d140b7)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_POWER_ACTION.WatchdogInitialized", watchdog_initialized, 0xd00, 0x8, true, 0xe0a6b3accf8ece74)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pop::power_action_watchdog_state_t), "_POP_POWER_ACTION.WatchdogState", watchdog_state, 0xd20, 0x20, true, 0x5766ad2365f52edc)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WatchdogStartTime", watchdog_start_time, 0xd40, 0x40, true, 0x2ffe436f9a4508e9)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_POWER_ACTION.ActionWorkerThread", action_worker_thread, 0xd80, 0x40, true, 0xe982885b348ec17c)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_POWER_ACTION.PromoteActionWorkerThread", promote_action_worker_thread, 0xdc0, 0x40, true, 0xa823268b59774bb0)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kthread_t*), "_POP_POWER_ACTION.UnlockAfterSleepWorkerThread", unlock_after_sleep_worker_thread, 0xe00, 0x40, true, 0x272bc449327cdf8f)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_POP_POWER_ACTION.WatchdogTimeout", watchdog_timeout, 0x0, 0x0, false, 0xd56eea1fa07bd8eb)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WakeAlarm.RequestedTime", requested_time, 0x0, 0x40, true, 0xff8db22d34a41dbf)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_POWER_ACTION.WakeAlarm.ProgrammedTime", programmed_time, 0x40, 0x40, true, 0x3fe68949c0494a01)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::diagnostic_buffer_t*), "_POP_POWER_ACTION.WakeAlarm.TimerInfo", timer_info, 0x80, 0x40, true, 0xd1a86ccaadce0994)
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
#define _m22
#define _m23
#define _m24
#endif