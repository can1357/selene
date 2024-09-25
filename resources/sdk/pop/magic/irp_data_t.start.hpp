#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_POP_IRP_DATA.Link", link, 0x0, 0x80, true, 0x2511cfdffcfb6c2f)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_POP_IRP_DATA.Irp", irp, 0x80, 0x40, true, 0x7d137e2ba88e829c)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_IRP_DATA.Pdo", pdo, 0xc0, 0x40, true, 0xacd3a9c1e7969ac4)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_IRP_DATA.TargetDevice", target_device, 0x100, 0x40, true, 0x4e57d0244ee47f55)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_IRP_DATA.CurrentDevice", current_device, 0x140, 0x40, true, 0x8171b494cd74423)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IRP_DATA.WatchdogStart", watchdog_start, 0x180, 0x40, true, 0x563efbc8f1ed13fd)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::ktimer_t), "_POP_IRP_DATA.WatchdogTimer", watchdog_timer, 0x1c0, 0x0, true, 0xbb71838610813ef6)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kdpc_t), "_POP_IRP_DATA.WatchdogDpc", watchdog_dpc, 0x3c0, 0x0, true, 0x4a7cae95c2111417)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_DATA.MinorFunction", minor_function, 0x5c0, 0x8, true, 0x46b5493768598a7d)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum power::state_type_t), "_POP_IRP_DATA.PowerStateType", power_state_type, 0x5e0, 0x20, true, 0xe821889f2df502a)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(union power::state_t), "_POP_IRP_DATA.PowerState", power_state, 0x600, 0x20, true, 0xab6996afa1d6417)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pop::fx_device_t*), "_POP_IRP_DATA.FxDevice", fx_device, 0x640, 0x40, true, 0x92f260e56b60c726)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_DATA.SystemTransition", system_transition, 0x680, 0x8, true, 0xbccd84c094567152)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_DATA.NotifyPEP", notify_pep, 0x688, 0x8, true, 0x7a4103509ba1131f)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::function<void(struct nt::device_object_t*, uint8_t, union power::state_t, void*, struct io::status_block_t*)>*), "_POP_IRP_DATA.Device.CallerCompletion", caller_completion, 0x0, 0x40, true, 0x9172b75ccf97d5d0)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_POP_IRP_DATA.Device.CallerContext", caller_context, 0x40, 0x40, true, 0x6121528dfef0ae31)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_POP_IRP_DATA.Device.CallerDevice", caller_device, 0x80, 0x40, true, 0x1f2e2a1888404193)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_DATA.Device.SystemWake", system_wake, 0xc0, 0x8, true, 0x45c47e21cce1923f)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::work_queue_item_t), "_POP_IRP_DATA.Device.PassiveCompletionWorkItem", passive_completion_work_item, 0x0, 0x0, false, 0xda181b02163ecf23)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u0_device_t), "_POP_IRP_DATA.Device", device, 0x6c0, 0x0, true, 0xe4b266dac2611c4c)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct po::device_notify_t*), "_POP_IRP_DATA.System.NotifyDevice", notify_device, 0x0, 0x40, true, 0x99a0abf2e62d492d)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_DATA.System.FxDeviceActivated", fx_device_activated, 0x40, 0x8, true, 0xa1714339372afe85)
#define _m22 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(u4_system_t), "_POP_IRP_DATA.System", system, 0x6c0, 0x80, true, 0x94dbee21407b58c7)
#define _m23 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_POP_IRP_DATA.IrpSequenceID", irp_sequence_id, 0x6a0, 0x20, true, 0xa039e91284ef48d2)
#define _m24 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pop::pep_notify_device_dstate_reason_t), "_POP_IRP_DATA.DStateReason", d_state_reason, 0x7c0, 0x20, true, 0x2f1d63723b69cd8d)
#define _m25 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_POP_IRP_DATA.WatchdogEnabled", watchdog_enabled, 0x620, 0x8, true, 0xf1b7d876ce7f4e19)
#define _m26 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IRP_DATA.WatchdogLock", watchdog_lock, 0x0, 0x0, false, 0x621948623b887bce)
#define _m27 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum pop::irp_watchdog_state_t), "_POP_IRP_DATA.WatchdogState", watchdog_state, 0x0, 0x0, false, 0x21fa9f0fd94ee7fa)
#define _m28 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_POP_IRP_DATA.BlackboxWatchdogStartTime", blackbox_watchdog_start_time, 0x0, 0x0, false, 0xf79ac8b77ab97766)
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
#define _m20
#define _m21
#define _m22
#define _m23
#define _m24
#define _m25
#define _m26
#define _m27
#define _m28
#endif