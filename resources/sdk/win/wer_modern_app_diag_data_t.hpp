#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "wer_wwa_diag_data_t.hpp"
#include "wer_bi_task_diag_data_t.hpp"
#include "wer_plm_modern_app_diag_data_t.hpp"
#include "wer_extended_diag_data_header_t.hpp"

#include "magic/wer_modern_app_diag_data_t.start.hpp"
namespace win
{
    // [struct _WER_MODERN_APP_DIAG_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_modern_app_diag_data_t                                                                           
    {                                                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                      
        _m000 struct win::wer_extended_diag_data_header_t header;                                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m001 uint32_t                                    ui_thread;                                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .UIThread
        _m002 struct win::filetime_t                      app_object_run_start_time;                              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AppObjectRunStartTime
        _m003 struct win::filetime_t                      app_object_main_view_initialize_start_time;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AppObjectMainViewInitializeStartTime
        _m004 struct win::filetime_t                      app_object_main_view_initialize_end_time;               //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AppObjectMainViewInitializeEndTime
        _m005 struct win::filetime_t                      app_object_prelaunch_activation_start_time;             //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .AppObjectPrelaunchActivationStartTime
        _m006 struct win::filetime_t                      app_object_first_activation_start_time;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .AppObjectFirstActivationStartTime
        _m007 struct win::filetime_t                      app_object_activation_event_fired_time;                 //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .AppObjectActivationEventFiredTime
        _m008 int32_t                                     app_object_activation_was_throttled;                    //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .AppObjectActivationWasThrottled
        _m009 struct win::filetime_t                      app_object_last_suspend_start_time;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AppObjectLastSuspendStartTime
        _m010 int32_t                                     app_object_suspend_was_throttled;                       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AppObjectSuspendWasThrottled
        _m011 uint32_t                                    app_object_activations_in_progress;                     //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .AppObjectActivationsInProgress
        _m012 uint32_t                                    app_object_main_asta_suspend_defferal_count;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .AppObjectMainASTASuspendDefferalCount
        _m013 uint32_t                                    app_object_mta_suspend_defferal_count;                  //{ +0x0054    +0x0054    +0x0054    +0x0054    } | .AppObjectMTASuspendDefferalCount
        _m014 struct win::filetime_t                      app_object_last_resume_start_time;                      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .AppObjectLastResumeStartTime
        _m015 int32_t                                     core_window_main_window_activated;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .CoreWindowMainWindowActivated
        _m016 struct win::filetime_t                      core_window_main_window_activated_time;                 //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .CoreWindowMainWindowActivatedTime
        _m017 int32_t                                     core_window_last_visibility_changed_visible_status;     //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .CoreWindowLastVisibilityChangedVisibleStatus
        _m018 struct win::filetime_t                      core_window_last_visibility_changed_notification_time;  //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CoreWindowLastVisibilityChangedNotificationTime
        _m019 struct win::wer_wwa_diag_data_t             wwa_framework;                                          //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .WwaFramework
        _m020 uint32_t                                    app_object_suspending;                                  //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .AppObjectSuspending
        _m021 uint64_t                                    last_async_operation_id;                                //{ +0x0188    +0x0188    +0x0188    +0x0188    } | .LastAsyncOperationId
        _m022 sdk::array<wchar_t, 256>                    last_async_operation_name;                              //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .LastAsyncOperationName
        _m023 struct win::filetime_t                      last_async_operation_start_time;                        //{ +0x0390    +0x0390    +0x0390    +0x0390    } | .LastAsyncOperationStartTime
        _m024 struct win::wer_plm_modern_app_diag_data_t  plm_app_diag_data;                                      //{ +0x0398    +0x0398    +0x0398    +0x0398    } | .PlmAppDiagData
        _m025 struct win::wer_bi_task_diag_data_t         bi_task_diag_data;                                      //{ +0x0398    +0x0398    +0x0398    +0x0398    } | .BiTaskDiagData
        _m026 uint32_t                                    app_object_non_main_asta_suspend_defferal_count;        //{ +0x0460    +0x0460    +0x0460    +0x0460    } | .AppObjectNonMainASTASuspendDefferalCount
                                                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                       
        //                                                                                                      
        _m027 struct win::filetime_t                      app_object_background_transition_start_time;            //{ +0x0464    +0x0464    +0x0464    } | .AppObjectBackgroundTransitionStartTime
        _m028 struct win::filetime_t                      app_object_background_transition_dispatch_start_time;   //{ +0x046c    +0x046c    +0x046c    } | .AppObjectBackgroundTransitionDispatchStartTime
        _m029 int32_t                                     app_object_visible_view_count;                          //{ +0x0474    +0x0474    +0x0474    } | .AppObjectVisibleViewCount
        _m030 int32_t                                     app_object_last_lifecycle_action;                       //{ +0x0478    +0x0478    +0x0478    } | .AppObjectLastLifecycleAction
        _m031 struct win::filetime_t                      app_object_last_lifecycle_action_start_time;            //{ +0x047c    +0x047c    +0x047c    } | .AppObjectLastLifecycleActionStartTime
        _m032 struct win::filetime_t                      app_object_last_get_window_factory_start_time;          //{ +0x0484    +0x0484    +0x0484    } | .AppObjectLastGetWindowFactoryStartTime
        _m033 struct win::filetime_t                      app_object_last_foreground_activation_start_time;       //{ +0x048c    +0x048c    +0x048c    } | .AppObjectLastForegroundActivationStartTime
        _m034 uint32_t                                    app_object_last_foreground_activation_thread;           //{ +0x0494    +0x0494    +0x0494    } | .AppObjectLastForegroundActivationThread
                                                                                                                
        SDK_MAGIC_PROPERTIES( "_WER_MODERN_APP_DIAG_DATA.$", 0x498, true, 0x1755005d3b429e3a );                                                      
        SDK_DYNAMIC_SIZE( wer_modern_app_diag_data_t );                                                         
    };                                                                                                          
};
#include "magic/wer_modern_app_diag_data_t.end.hpp"
