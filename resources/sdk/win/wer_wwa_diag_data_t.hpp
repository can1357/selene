#pragma once
#include <sdkgen/support_library.hpp>
#include "filetime_t.hpp"
#include "wer_javascript_gc_state_t.hpp"

#include "magic/wer_wwa_diag_data_t.start.hpp"
namespace win
{
    // [struct _WER_WWA_DIAG_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wer_wwa_diag_data_t                                                                              
    {                                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
        //                                                                                                  
        _m00 struct win::filetime_t                main_web_instance_initialize_time;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MainWebInstanceInitializeTime
        _m01 uint32_t                              app_activated_deferral_count;                              //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .AppActivatedDeferralCount
        _m02 struct win::filetime_t                app_activate_handler_invoked;                              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .AppActivateHandlerInvoked
        _m03 struct win::filetime_t                app_activate_handler_completed;                            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .AppActivateHandlerCompleted
        _m04 struct win::filetime_t                app_dom_content_loaded_completed;                          //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .AppDomContentLoadedCompleted
        _m05 struct win::filetime_t                web_platform_paint_now_started;                            //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .WebPlatformPaintNowStarted
        _m06 struct win::filetime_t                web_platform_paint_now_completed;                          //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .WebPlatformPaintNowCompleted
        _m07 uint32_t                              app_suspend_deferral_count;                                //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .AppSuspendDeferralCount
        _m08 struct win::filetime_t                app_suspend_handler_invoked;                               //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .AppSuspendHandlerInvoked
        _m09 struct win::filetime_t                app_suspend_handler_completed;                             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AppSuspendHandlerCompleted
        _m10 int32_t                               web_platform_suspend_download_pending;                     //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .WebPlatformSuspendDownloadPending
        _m11 uint32_t                              web_platform_suspend_download_count;                       //{ +0x004c    +0x004c    +0x004c    +0x004c    } | .WebPlatformSuspendDownloadCount
        _m12 struct win::filetime_t                web_platform_suspend_download_wait_start;                  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .WebPlatformSuspendDownloadWaitStart
        _m13 struct win::filetime_t                web_platform_suspend_download_wait_end;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .WebPlatformSuspendDownloadWaitEnd
        _m14 int32_t                               web_platform_cleanup_pending;                              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .WebPlatformCleanupPending
        _m15 struct win::filetime_t                web_platform_cleanup_start;                                //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .WebPlatformCleanupStart
        _m16 struct win::filetime_t                web_platform_cleanup_end;                                  //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .WebPlatformCleanupEnd
        _m17 int32_t                               javascript_exception_wer_report_during_suspend;            //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .JavascriptExceptionWerReportDuringSuspend
        _m18 int32_t                               unhandled_javascript_exception_from_app;                   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .UnhandledJavascriptExceptionFromApp
        _m19 int32_t                               request_suspend_timeout_failed_with_illegal_state_change;  //{ +0x007c    +0x007c    +0x007c    +0x007c    } | .RequestSuspendTimeoutFailedWithIllegalStateChange
        _m20 struct win::wer_javascript_gc_state_t javascript_gc_state;                                       //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .JavascriptGCState
        _m21 int32_t                               ms_app_priority;                                           //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .MSAppPriority
                                                                                                            
        SDK_MAGIC_PROPERTIES( "_WER_WWA_DIAG_DATA.$", 0x108, true, 0xf7ac87eeeb44f059 );                                                         
        SDK_FIXED_SIZE( wer_wwa_diag_data_t, 0x108 );                                                         
    };                                                                                                      
};
#include "magic/wer_wwa_diag_data_t.end.hpp"
SDK_VERIFY( struct win::wer_wwa_diag_data_t, 0x108 );
