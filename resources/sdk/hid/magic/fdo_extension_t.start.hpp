#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_object_t*), "_FDO_EXTENSION.fdo", fdo, 0x0, 0x40, true, 0x6f662a226fffbeed)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::hidclass_driver_extension_t*), "_FDO_EXTENSION.driverExt", driver_ext, 0x40, 0x40, true, 0x575fc5c339d1b7b7)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::descriptor_t), "_FDO_EXTENSION.hidDescriptor", hid_descriptor, 0x2e0, 0x48, true, 0x204d016f0f458ce3)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::device_attributes_t), "_FDO_EXTENSION.hidDeviceAttributes", hid_device_attributes, 0x340, 0x0, true, 0x6b672ca40c2fe884)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t*), "_FDO_EXTENSION.rawReportDescription", raw_report_description, 0x440, 0x40, true, 0xee5964db61773540)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.rawReportDescriptionLength", raw_report_description_length, 0x480, 0x20, true, 0x406c54338fc780e3)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::hidclass_collection_t*), "_FDO_EXTENSION.classCollectionArray", class_collection_array, 0x4c0, 0x40, true, 0x12a8800e680fae77)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hidp::device_desc_t), "_FDO_EXTENSION.deviceDesc", device_desc, 0x500, 0x0, true, 0x1c2ee9312615bdf5)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.devDescInitialized", dev_desc_initialized, 0x700, 0x8, true, 0x69283c5cd02dc23f)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.maxReportSize", max_report_size, 0x720, 0x20, true, 0xfcdf9ee1cb909343)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.numPingPongs", num_ping_pongs, 0x740, 0x20, true, 0x87557f113741df83)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::hidclass_pingpong_t*), "_FDO_EXTENSION.pingPongs", ping_pongs, 0x780, 0x40, true, 0x32c99201d9e1ad5f)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.openCount", open_count, 0x7c0, 0x20, true, 0x6748f0d58b5f635f)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::unicode_view), "_FDO_EXTENSION.name", name, 0x800, 0x80, true, 0xb3fda4f3ecaeb152)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_relations_t*), "_FDO_EXTENSION.deviceRelations", device_relations, 0x880, 0x40, true, 0xbdddf3803d3c49fe)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::ping_pong_state_t), "_FDO_EXTENSION.pingPongState", ping_pong_state, 0x8c0, 0x20, true, 0x786463d74f0924e5)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::hidclass_device_extension_t**), "_FDO_EXTENSION.collectionPdoExtensions", collection_pdo_extensions, 0x900, 0x40, true, 0x9a081b16a35c2857)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::device_capabilities_t), "_FDO_EXTENSION.deviceCapabilities", device_capabilities, 0x940, 0x0, true, 0xdcc06cedfe790751)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::system_power_state_t), "_FDO_EXTENSION.systemPowerState", system_power_state, 0xb40, 0x20, true, 0xb6aae94cc565469a)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_FDO_EXTENSION.devicePowerState", device_power_state, 0xb60, 0x20, true, 0x7ac51f38f711b8bb)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FDO_EXTENSION.waitWakeIrp", wait_wake_irp, 0xb80, 0x40, true, 0x71478ba88b1fa255)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::wakestate_t), "_FDO_EXTENSION.WakeState", wake_state, 0xbc0, 0x20, true, 0x5ea5f06a9eb92e37)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.systemWakeSource", system_wake_source, 0xbe0, 0x8, true, 0x1f216a754f6f8824)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.collectionPowerDelayedIrpQueueSpinLock", collection_power_delayed_irp_queue_spin_lock, 0xc00, 0x40, true, 0xd056c99caffbbbc3)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FDO_EXTENSION.collectionPowerDelayedIrpQueue", collection_power_delayed_irp_queue, 0xc40, 0x80, true, 0x13a23fa872d6d6ef)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.numPendingPowerDelayedIrps", num_pending_power_delayed_irps, 0xcc0, 0x20, true, 0x4f000f34748439e2)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.isOutputOnlyDevice", is_output_only_device, 0xce0, 0x8, true, 0x2349b89f9acb43fc)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::submit_idle_notification_callback_info_t), "_FDO_EXTENSION.idleCallbackInfo", idle_callback_info, 0xd00, 0x80, true, 0x270192822602e0cc)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FDO_EXTENSION.idleNotificationRequest", idle_notification_request, 0xd80, 0x40, true, 0x7be237a0f5adaa06)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FDO_EXTENSION.idleDoneEvent", idle_done_event, 0xdc0, 0xc0, true, 0x6ba1ca4a39168643)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FDO_EXTENSION.numIdlePdos", num_idle_pdos, 0xe80, 0x20, true, 0xa20ddcceb0568113)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FDO_EXTENSION.collectionWaitWakeIrpQueue", collection_wait_wake_irp_queue, 0xec0, 0x80, true, 0x305b82a9e40da2e9)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.collectionWaitWakeIrpQueueSpinLock", collection_wait_wake_irp_queue_spin_lock, 0xf40, 0x40, true, 0xaa822f10d73c74eb)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::fdo_extension_t*), "_FDO_EXTENSION.nextFdoExt", next_fdo_ext, 0xf80, 0x40, true, 0xee3fd84001dbc9e2)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::irp_t*), "_FDO_EXTENSION.currentSystemStateIrp", current_system_state_irp, 0xfc0, 0x40, true, 0xccb5ed01fd7b709c)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.BusNumber", bus_number, 0x1000, 0x20, true, 0x51b65a3a069733d8)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::wmilib_context_t), "_FDO_EXTENSION.WmiLibInfo", wmi_lib_info, 0x1040, 0x0, true, 0x78364c36285ab8c7)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.isPresent", is_present, 0x1240, 0x20, true, 0xf7ce78c2d893679b)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.presentReported", present_reported, 0x1260, 0x8, true, 0x80d0d2dfdcd39c3d)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.retainWWIrpWhenDeviceAbsent", retain_ww_irp_when_device_absent, 0x1268, 0x8, true, 0xa712d344a7374588)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FDO_EXTENSION.powerDownCompleteEvent", power_down_complete_event, 0x1280, 0xc0, true, 0x5e2688e95a181661)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct io::remove_lock_t), "_FDO_EXTENSION.hidFdoRemoveLock", hid_fdo_remove_lock, 0x1400, 0x0, true, 0x11c7f91fe8c4ee3f)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::recorder_log_t*), "_FDO_EXTENSION.recorderLog", recorder_log, 0x1500, 0x40, true, 0x37fc62df858b6125)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::pohandle_t*), "_FDO_EXTENSION.poHandle", po_handle, 0x15c0, 0x40, true, 0xc1c6664491ca0)
#define _m044 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct sm::context_t), "_FDO_EXTENSION.SmContext", sm_context, 0x1600, 0xc0, true, 0x94ed8673a71c12cd)
#define _m045 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum io::gate_state_t), "_FDO_EXTENSION.IoGateState", io_gate_state, 0x35c0, 0x20, true, 0x61d12041ddac596)
#define _m046 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.SmWaitingForIoCompletion", sm_waiting_for_io_completion, 0x35e0, 0x8, true, 0xae579d971cd940a2)
#define _m047 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::rt_power_data_t), "_FDO_EXTENSION.rtPowerData", rt_power_data, 0x3600, 0x40, true, 0x7e301c3be5416514)
#define _m048 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::rt_power_state_t), "_FDO_EXTENSION.rtPowerState", rt_power_state, 0x3740, 0x40, true, 0xda9ab817d300a2be)
#define _m049 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::rt_power_engine_t), "_FDO_EXTENSION.rtPowerEngine", rt_power_engine, 0x3780, 0x80, true, 0xff4f7be8c01a77eb)
#define _m050 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kevent_t), "_FDO_EXTENSION.pnpEvent", pnp_event, 0x38c0, 0xc0, true, 0x878ab7577adec04f)
#define _m051 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FDO_EXTENSION.pnpStatus", pnp_status, 0x3980, 0x20, true, 0xb666db82038f4063)
#define _m052 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FDO_EXTENSION.InFlightIoCount", in_flight_io_count, 0x39a0, 0x20, true, 0x9b7575656541cfba)
#define _m053 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum nt::device_power_state_t), "_FDO_EXTENSION.TargetDxState", target_dx_state, 0x39c0, 0x20, true, 0x6f49bfafeac4f3fb)
#define _m054 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::pofx_ref_tracker_t), "_FDO_EXTENSION.PoFxRefTracker", po_fx_ref_tracker, 0x39e0, 0x80, true, 0x61e6a835707ea044)
#define _m055 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::devicereset_t), "_FDO_EXTENSION.DeviceReset", device_reset, 0x3a80, 0x80, true, 0xe544af3ba54d2387)
#define _m056 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.LastTraceLoggingTime", last_trace_logging_time, 0x3d40, 0x40, true, 0xefb9033f68e80c70)
#define _m057 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.IsOnUSB", is_on_usb, 0x3d80, 0x8, true, 0xf7968c9341124a75)
#define _m058 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_FDO_EXTENSION.DeviceInstancePath", device_instance_path, 0x80, 0x40, true, 0x316d805d3eb337b2)
#define _m059 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.DeviceInstancePathSize", device_instance_path_size, 0xc0, 0x20, true, 0x25d693e4d6a64646)
#define _m060 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_FDO_EXTENSION.DeviceDescription", device_description, 0x100, 0x40, true, 0x623251fd28bf9938)
#define _m061 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.DeviceDescriptionSize", device_description_size, 0x140, 0x20, true, 0xb959bd90368de453)
#define _m062 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_FDO_EXTENSION.DeviceServiceName", device_service_name, 0x180, 0x40, true, 0x5f9985575e276ce3)
#define _m063 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.DeviceServiceNameSize", device_service_name_size, 0x1c0, 0x20, true, 0x8c91605d71ec3515)
#define _m064 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_FDO_EXTENSION.DeviceUpperFilters", device_upper_filters, 0x200, 0x40, true, 0x1bf48276c6981b25)
#define _m065 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.DeviceUpperFiltersSize", device_upper_filters_size, 0x240, 0x20, true, 0x24a9d1b71adcda93)
#define _m066 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(wchar_t*), "_FDO_EXTENSION.DeviceLowerFilters", device_lower_filters, 0x280, 0x40, true, 0x56a0b9f9cfb8e0e8)
#define _m067 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.DeviceLowerFiltersSize", device_lower_filters_size, 0x2c0, 0x20, true, 0xacfa6395d4cc8d24)
#define _m068 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::recorder_log_t*), "_FDO_EXTENSION.recorderLogDeviceInfo", recorder_log_device_info, 0x1540, 0x40, true, 0xfb6fece10bcac578)
#define _m069 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct pci::recorder_log_t*), "_FDO_EXTENSION.recorderLogIntReports", recorder_log_int_reports, 0x1580, 0x40, true, 0xf84f501b6e014712)
#define _m070 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(enum hid::power_policy_t), "_FDO_EXTENSION.CurrentPowerPolicy", current_power_policy, 0x3800, 0x20, true, 0xedd2a5eeae6f8183)
#define _m071 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.SuppressInputEntryTime", suppress_input_entry_time, 0x3840, 0x40, true, 0x45d2ad0844861f4b)
#define _m072 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.PoScenarioInstanceId", po_scenario_instance_id, 0x3880, 0x40, true, 0x3a84c15696244e6f)
#define _m073 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::devicepresence_t), "_FDO_EXTENSION.DevicePresence", device_presence, 0x3c00, 0x0, true, 0xb65fe5661cd53070)
#define _m074 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.WriteReportExSupported", write_report_ex_supported, 0x3d00, 0x8, true, 0x2820aeb64516cb21)
#define _m075 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.ComboHardwareIdV2Enabled", combo_hardware_id_v2_enabled, 0x3d08, 0x8, true, 0xa6c9b67d0c71dac5)
#define _m076 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.NumReadReports", num_read_reports, 0x3dc0, 0x40, true, 0x753051b15eff1530)
#define _m077 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.NumReadReportsSinceStart", num_read_reports_since_start, 0x3e00, 0x40, true, 0xc0d8ccd2b660f22c)
#define _m078 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.NumReadReportsSincePresence", num_read_reports_since_presence, 0x3e40, 0x40, true, 0xa7f7abf5ebaf4e9)
#define _m079 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.NumReadReportsSinceD0", num_read_reports_since_d0, 0x3e80, 0x40, true, 0xa1307ec5ccd2b339)
#define _m080 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FDO_EXTENSION.NumReadReportsSinceCaptureState", num_read_reports_since_capture_state, 0x3ec0, 0x40, true, 0xe0212c59fc872626)
#define _m081 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.LastReadReportSuccessTime", last_read_report_success_time, 0x3f00, 0x40, true, 0xe7ddb2d14db065c4)
#define _m082 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.LastIntReadCompletionTime", last_int_read_completion_time, 0x3f00, 0x40, true, 0x22219a2b5cbec543)
#define _m083 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FDO_EXTENSION.LastReadReportStatus", last_read_report_status, 0x3f40, 0x20, true, 0x1e6dc4981cb720fd)
#define _m084 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FDO_EXTENSION.LastIntReadCompletionStatus", last_int_read_completion_status, 0x3f40, 0x20, true, 0xf21a1ed8a6193331)
#define _m085 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.LastStopIdleForIoTime", last_stop_idle_for_io_time, 0x3f80, 0x40, true, 0x5dcab9457f691b2e)
#define _m086 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.DebugBreakOnIntReadCompletion", debug_break_on_int_read_completion, 0x3fc0, 0x8, true, 0xe4c74c387239fad3)
#define _m087 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::ss_component_t*), "_FDO_EXTENSION.SleepstudyUnstablePdo", sleepstudy_unstable_pdo, 0x4000, 0x40, true, 0xc302c66894cd9434)
#define _m088 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::ss_component_t*), "_FDO_EXTENSION.SleepstudyHardwareIo", sleepstudy_hardware_io, 0x4040, 0x40, true, 0x45a42b6952ad3a8c)
#define _m089 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::ss_component_t*), "_FDO_EXTENSION.SleepstudySoftwareIo", sleepstudy_software_io, 0x4080, 0x40, true, 0x1650f72efcf4fe3d)
#define _m090 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::ss_component_t*), "_FDO_EXTENSION.SleepstudyStateMachine", sleepstudy_state_machine, 0x40c0, 0x40, true, 0x1d08b7fc8f20c298)
#define _m091 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct hid::ss_component_t*), "_FDO_EXTENSION.SleepstudyNoEpm", sleepstudy_no_epm, 0x4100, 0x40, true, 0x4027b7f5e9b70ec5)
#define _m092 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.PendingPoFxPowerNotRequired", pending_po_fx_power_not_required, 0x4140, 0x20, true, 0x5fec0a89feb8182f)
#define _m093 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.IdleIrpFailedBeforeDxCompletion", idle_irp_failed_before_dx_completion, 0x4160, 0x8, true, 0xddd262b8a41f86ba)
#define _m094 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.WaitingForRequiredCallback_Dx_NoWake_EntryTime", waiting_for_required_callback_dx_no_wake_entry_time, 0x4180, 0x40, true, 0x88cf7a7e39d5adf7)
#define _m095 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.WaitingForRequiredCallback_Dx_NoWake_ExitTime", waiting_for_required_callback_dx_no_wake_exit_time, 0x41c0, 0x40, true, 0x83e02727bd2ec807)
#define _m096 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.Dx_NoWake_EntryTime", dx_no_wake_entry_time, 0x4200, 0x40, true, 0xb03b0dcd6142adb9)
#define _m097 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int64_t), "_FDO_EXTENSION.Dx_NoWake_ExitTime", dx_no_wake_exit_time, 0x4240, 0x40, true, 0xbe93f74e476f4a85)
#define _m098 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FDO_EXTENSION.csHandle", cs_handle, 0x1340, 0x40, true, 0xa641c57593d817ec)
#define _m099 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.csState", cs_state, 0x1380, 0x20, true, 0xcb53877afcdc0699)
#define _m100 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::wnf_subscription_t*), "_FDO_EXTENSION.wnfSubscriptionSuppressInput", wnf_subscription_suppress_input, 0x13c0, 0x40, true, 0x5293174d5ac87620)
#define _m101 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FDO_EXTENSION.PowerSettingCallbackHandle", power_setting_callback_handle, 0x0, 0x0, false, 0x56bb9128c5093ccf)
#define _m102 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.PowerSettingCallbackState", power_setting_callback_state, 0x0, 0x0, false, 0xf261b98b00fff855)
#define _m103 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct ex::wnf_subscription_t*), "_FDO_EXTENSION.wnfSubscriptionSystemInputSuppression", wnf_subscription_system_input_suppression, 0x0, 0x0, false, 0x360e34fe9d9b12f2)
#define _m104 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FDO_EXTENSION.PdoReenumerateSelfInterfaceEnabled", pdo_reenumerate_self_interface_enabled, 0x0, 0x0, false, 0x1f0936adbb60b9bc)
#define _m105 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::fast_mutex_t), "_FDO_EXTENSION.CollectionPdoReenumerateMutex", collection_pdo_reenumerate_mutex, 0x0, 0x0, false, 0x66c376d38fb72151)
#define _m106 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FDO_EXTENSION.HasDumpedToWpp", has_dumped_to_wpp, 0x0, 0x0, false, 0x8308446c98c3b18d)
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
#endif