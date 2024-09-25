#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t), "_FX_DRIVER_GLOBALS.Linkage", linkage, 0x0, 0x80, true, 0xd580aa942bc187a)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FX_DRIVER_GLOBALS.Refcnt", refcnt, 0x80, 0x20, true, 0xc470419a760c7f75)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::event_t), "_FX_DRIVER_GLOBALS.DestroyEvent", destroy_event, 0xc0, 0x0, true, 0xda1c9b96b52e5d0)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_FX_DRIVER_GLOBALS.WdfHandleMask", wdf_handle_mask, 0x1c0, 0x40, true, 0x35071c628ff52520)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_FX_DRIVER_GLOBALS.WdfVerifierAllocateFailCount", wdf_verifier_allocate_fail_count, 0x200, 0x20, true, 0x54efc1be8dfd0c4e)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.Tag", tag, 0x220, 0x20, true, 0x6aa6c149d287ab19)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class fx::driver_t*), "_FX_DRIVER_GLOBALS.Driver", driver, 0x240, 0x40, true, 0x75635c79f522ed11)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::driver_globals_debug_extension_t*), "_FX_DRIVER_GLOBALS.DebugExtension", debug_extension, 0x280, 0x40, true, 0x8433188d3cb9203d)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::library_globals_type_t*), "_FX_DRIVER_GLOBALS.LibraryGlobals", library_globals, 0x2c0, 0x40, true, 0xb3b726fcb98de173)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FX_DRIVER_GLOBALS.WdfLogHeader", wdf_log_header, 0x300, 0x40, true, 0x3ed30ef3081cf84d)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::pool_t), "_FX_DRIVER_GLOBALS.FxPoolFrameworks", fx_pool_frameworks, 0x340, 0x0, true, 0xc1ce00993d223dd)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxPoolTrackingOn", fx_pool_tracking_on, 0x840, 0x8, true, 0xd541254c645f27f0)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::lock_t), "_FX_DRIVER_GLOBALS.ThreadTableLock", thread_table_lock, 0x880, 0x80, true, 0x320ee6f52f4a8bc9)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(nt::list_entry_t*), "_FX_DRIVER_GLOBALS.ThreadTable", thread_table, 0x900, 0x40, true, 0x43051e7dd4877117)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::bind_info_t*), "_FX_DRIVER_GLOBALS.WdfBindInfo", wdf_bind_info, 0x940, 0x40, true, 0xe3d3609d1659431f)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(void*), "_FX_DRIVER_GLOBALS.ImageAddress", image_address, 0x980, 0x40, true, 0x33db2f9bc4a388e4)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.ImageSize", image_size, 0x9c0, 0x20, true, 0x4d1402b3494dcc98)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifierOn", fx_verifier_on, 0x9e0, 0x8, true, 0x8268d47e1f985968)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifyDownlevel", fx_verify_downlevel, 0x9e8, 0x8, true, 0x836e160f6a87a443)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifierDbgBreakOnError", fx_verifier_dbg_break_on_error, 0x9f0, 0x8, true, 0x5a777477dfe7e45e)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifierDbgBreakOnDeviceStateError", fx_verifier_dbg_break_on_device_state_error, 0x9f8, 0x8, true, 0xc2504a14733859e)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifierHandle", fx_verifier_handle, 0xa00, 0x8, true, 0x8957af7f2a1ecb89)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifierIO", fx_verifier_io, 0xa08, 0x8, true, 0xaffd9c64ac81b313)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifierLock", fx_verifier_lock, 0xa10, 0x8, true, 0x823a3714a48fdb83)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifyOn", fx_verify_on, 0xa18, 0x8, true, 0x7491a9f1ac5982e5)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerboseOn", fx_verbose_on, 0xa20, 0x8, true, 0x765b215333dea4a8)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxRequestParentOptimizationOn", fx_request_parent_optimization_on, 0xa88, 0x8, true, 0xaeb738e5c8ad59c3)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxDsfOn", fx_dsf_on, 0xa90, 0x8, true, 0x4f6ef8fa7c9f265f)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxForceLogsInMiniDump", fx_force_logs_in_mini_dump, 0xa98, 0x8, true, 0x68cdc24b69be0b12)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxTrackDriverForMiniDumpLog", fx_track_driver_for_mini_dump_log, 0xaa0, 0x8, true, 0xa4fd22b603fb82a4)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.IsUserModeDriver", is_user_mode_driver, 0xaa8, 0x8, true, 0x16f5077d5f5195a3)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.RemoveLockOptionFlags", remove_lock_option_flags, 0xac0, 0x20, true, 0xa7c545ceb7f0363d)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.BugCheckDriverInfoIndex", bug_check_driver_info_index, 0xae0, 0x20, true, 0xf2db432f89bc9776)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct nt::kbugcheck_reason_callback_record_t), "_FX_DRIVER_GLOBALS.BugCheckCallbackRecord", bug_check_callback_record, 0xb00, 0x80, true, 0x6fa49e4123756cbd)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(volatile int32_t), "_FX_DRIVER_GLOBALS.WdfLogHeaderRefCount", wdf_log_header_ref_count, 0xc80, 0x20, true, 0xe2ae4cf577d25878)
#define _m035 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.FxEnhancedVerifierOptions", fx_enhanced_verifier_options, 0xca0, 0x20, true, 0x857e16e4e6e25458)
#define _m036 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.FxVerifierDbgWaitForSignalTimeoutInSec", fx_verifier_dbg_wait_for_signal_timeout_in_sec, 0xcc0, 0x20, true, 0x3ad95e430b8558e3)
#define _m037 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_FX_DRIVER_GLOBALS.DbgWaitForWakeInterruptIsrTimeoutInSec", dbg_wait_for_wake_interrupt_isr_timeout_in_sec, 0xce0, 0x20, true, 0xdc02dac2dcd97c54)
#define _m038 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::telemetry_context_t*), "_FX_DRIVER_GLOBALS.TelemetryContext", telemetry_context, 0xd00, 0x40, true, 0x3a3803e83d2fbf87)
#define _m039 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct wdf::driver_globals_t), "_FX_DRIVER_GLOBALS.Public", _public, 0xd80, 0xc0, true, 0x4a68089de8a745f4)
#define _m040 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct fx::object_debug_leak_detection_t*), "_FX_DRIVER_GLOBALS.FxVerifyLeakDetection", fx_verify_leak_detection, 0xa40, 0x40, true, 0x627f4ac04559d031)
#define _m041 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.FxVerifyTagTrackingEnabled", fx_verify_tag_tracking_enabled, 0xa80, 0x8, true, 0x791688f2930734c2)
#define _m042 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint8_t), "_FX_DRIVER_GLOBALS.IsDriverCompanion", is_driver_companion, 0xd40, 0x8, true, 0xca9884313b9d53ac)
#define _m043 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(class mx::driver_object_t), "_FX_DRIVER_GLOBALS.DriverObject", driver_object, 0x0, 0x0, false, 0x60a1460aa96fc4)
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
#endif