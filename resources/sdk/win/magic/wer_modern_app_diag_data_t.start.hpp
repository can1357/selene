#if !IN_PARSER
#define _m000 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wer_extended_diag_data_header_t), "_WER_MODERN_APP_DIAG_DATA.Header", header, 0x0, 0x40, true, 0xa50de58d740319b8)
#define _m001 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.UIThread", ui_thread, 0x40, 0x20, true, 0x9729d08d402c1a79)
#define _m002 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectRunStartTime", app_object_run_start_time, 0x60, 0x40, true, 0xfff560c832bbddf)
#define _m003 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectMainViewInitializeStartTime", app_object_main_view_initialize_start_time, 0xa0, 0x40, true, 0x2812f1c9940ddf3f)
#define _m004 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectMainViewInitializeEndTime", app_object_main_view_initialize_end_time, 0xe0, 0x40, true, 0x6eb9615dd5f79e1b)
#define _m005 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectPrelaunchActivationStartTime", app_object_prelaunch_activation_start_time, 0x120, 0x40, true, 0x6d4ea6b67fbb6944)
#define _m006 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectFirstActivationStartTime", app_object_first_activation_start_time, 0x160, 0x40, true, 0x35bc585508a02ee3)
#define _m007 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectActivationEventFiredTime", app_object_activation_event_fired_time, 0x1a0, 0x40, true, 0xab0ddd615716358b)
#define _m008 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectActivationWasThrottled", app_object_activation_was_throttled, 0x1e0, 0x20, true, 0x7f295583f25bf225)
#define _m009 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastSuspendStartTime", app_object_last_suspend_start_time, 0x200, 0x40, true, 0x3e0675910c84f3ac)
#define _m010 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectSuspendWasThrottled", app_object_suspend_was_throttled, 0x240, 0x20, true, 0xf527055cf2521d67)
#define _m011 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectActivationsInProgress", app_object_activations_in_progress, 0x260, 0x20, true, 0x54f8215d925ae6d0)
#define _m012 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectMainASTASuspendDefferalCount", app_object_main_asta_suspend_defferal_count, 0x280, 0x20, true, 0xdd21ec2dd650072a)
#define _m013 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectMTASuspendDefferalCount", app_object_mta_suspend_defferal_count, 0x2a0, 0x20, true, 0x5d1614a41b50af2e)
#define _m014 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastResumeStartTime", app_object_last_resume_start_time, 0x2c0, 0x40, true, 0x9a1a7744f1bd1d2c)
#define _m015 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_MODERN_APP_DIAG_DATA.CoreWindowMainWindowActivated", core_window_main_window_activated, 0x300, 0x20, true, 0x9bbf7bee9ab98656)
#define _m016 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.CoreWindowMainWindowActivatedTime", core_window_main_window_activated_time, 0x320, 0x40, true, 0x51e18eeace1908b)
#define _m017 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_MODERN_APP_DIAG_DATA.CoreWindowLastVisibilityChangedVisibleStatus", core_window_last_visibility_changed_visible_status, 0x360, 0x20, true, 0x9602940485663dd7)
#define _m018 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.CoreWindowLastVisibilityChangedNotificationTime", core_window_last_visibility_changed_notification_time, 0x380, 0x40, true, 0x395c9109bda22aae)
#define _m019 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wer_wwa_diag_data_t), "_WER_MODERN_APP_DIAG_DATA.WwaFramework", wwa_framework, 0x3c0, 0x40, true, 0xfb517f0b2c092726)
#define _m020 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectSuspending", app_object_suspending, 0xc00, 0x20, true, 0xaf34d18f40d342a8)
#define _m021 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint64_t), "_WER_MODERN_APP_DIAG_DATA.LastAsyncOperationId", last_async_operation_id, 0xc40, 0x40, true, 0xce2ca73d07136bd7)
#define _m022 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(sdk::array<wchar_t, 256>), "_WER_MODERN_APP_DIAG_DATA.LastAsyncOperationName", last_async_operation_name, 0xc80, 0x0, true, 0xf477e62b8b2849f9)
#define _m023 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.LastAsyncOperationStartTime", last_async_operation_start_time, 0x1c80, 0x40, true, 0x1fa075798f9e10cf)
#define _m024 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wer_plm_modern_app_diag_data_t), "_WER_MODERN_APP_DIAG_DATA.PlmAppDiagData", plm_app_diag_data, 0x1cc0, 0x40, true, 0x564401a356103990)
#define _m025 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wer_bi_task_diag_data_t), "_WER_MODERN_APP_DIAG_DATA.BiTaskDiagData", bi_task_diag_data, 0x1cc0, 0x40, true, 0x7f4b0fa6aa8a83)
#define _m026 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectNonMainASTASuspendDefferalCount", app_object_non_main_asta_suspend_defferal_count, 0x2300, 0x20, true, 0x2adaf7f9be0e5640)
#define _m027 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectBackgroundTransitionStartTime", app_object_background_transition_start_time, 0x2320, 0x40, true, 0x88bfb26c346aff28)
#define _m028 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectBackgroundTransitionDispatchStartTime", app_object_background_transition_dispatch_start_time, 0x2360, 0x40, true, 0x5d7f8ea9f2fcc5be)
#define _m029 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectVisibleViewCount", app_object_visible_view_count, 0x23a0, 0x20, true, 0x7ac4a80072d5f527)
#define _m030 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastLifecycleAction", app_object_last_lifecycle_action, 0x23c0, 0x20, true, 0x65056f82e8e6bc5e)
#define _m031 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastLifecycleActionStartTime", app_object_last_lifecycle_action_start_time, 0x23e0, 0x40, true, 0xc0b7357b56a6cfc6)
#define _m032 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastGetWindowFactoryStartTime", app_object_last_get_window_factory_start_time, 0x2420, 0x40, true, 0x3a6a029084cad2b5)
#define _m033 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastForegroundActivationStartTime", app_object_last_foreground_activation_start_time, 0x2460, 0x40, true, 0xd1320b5f2a6be6e3)
#define _m034 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_MODERN_APP_DIAG_DATA.AppObjectLastForegroundActivationThread", app_object_last_foreground_activation_thread, 0x24a0, 0x20, true, 0x43f82ed6f4c06ccf)
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
#endif