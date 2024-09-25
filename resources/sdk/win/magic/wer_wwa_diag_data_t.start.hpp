#if !IN_PARSER
#define _m00 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.MainWebInstanceInitializeTime", main_web_instance_initialize_time, 0x0, 0x40, true, 0xd0d53c2daf8ff064)
#define _m01 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_WWA_DIAG_DATA.AppActivatedDeferralCount", app_activated_deferral_count, 0x40, 0x20, true, 0x3782a03addf77911)
#define _m02 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.AppActivateHandlerInvoked", app_activate_handler_invoked, 0x60, 0x40, true, 0x37867fd70814e020)
#define _m03 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.AppActivateHandlerCompleted", app_activate_handler_completed, 0xa0, 0x40, true, 0xbf04d5af17552a34)
#define _m04 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.AppDomContentLoadedCompleted", app_dom_content_loaded_completed, 0xe0, 0x40, true, 0x146928701b16de25)
#define _m05 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.WebPlatformPaintNowStarted", web_platform_paint_now_started, 0x120, 0x40, true, 0xc94fd852a04e4e19)
#define _m06 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.WebPlatformPaintNowCompleted", web_platform_paint_now_completed, 0x160, 0x40, true, 0xad1cbeed952ffdb3)
#define _m07 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_WWA_DIAG_DATA.AppSuspendDeferralCount", app_suspend_deferral_count, 0x1a0, 0x20, true, 0x79e53c877540eab6)
#define _m08 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.AppSuspendHandlerInvoked", app_suspend_handler_invoked, 0x1c0, 0x40, true, 0x9c2ebdf0105e2eaa)
#define _m09 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.AppSuspendHandlerCompleted", app_suspend_handler_completed, 0x200, 0x40, true, 0x3c5fdaaa19d999ae)
#define _m10 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_WWA_DIAG_DATA.WebPlatformSuspendDownloadPending", web_platform_suspend_download_pending, 0x240, 0x20, true, 0x8ec8558878470094)
#define _m11 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(uint32_t), "_WER_WWA_DIAG_DATA.WebPlatformSuspendDownloadCount", web_platform_suspend_download_count, 0x260, 0x20, true, 0xa3dd1fdd5d5605d)
#define _m12 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.WebPlatformSuspendDownloadWaitStart", web_platform_suspend_download_wait_start, 0x280, 0x40, true, 0x197bbfb778db9078)
#define _m13 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.WebPlatformSuspendDownloadWaitEnd", web_platform_suspend_download_wait_end, 0x2c0, 0x40, true, 0x302257f5183fe266)
#define _m14 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_WWA_DIAG_DATA.WebPlatformCleanupPending", web_platform_cleanup_pending, 0x300, 0x20, true, 0x454c7bf7b33e02f1)
#define _m15 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.WebPlatformCleanupStart", web_platform_cleanup_start, 0x320, 0x40, true, 0x4733afa9444c623e)
#define _m16 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::filetime_t), "_WER_WWA_DIAG_DATA.WebPlatformCleanupEnd", web_platform_cleanup_end, 0x360, 0x40, true, 0x70f8de557e779312)
#define _m17 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_WWA_DIAG_DATA.JavascriptExceptionWerReportDuringSuspend", javascript_exception_wer_report_during_suspend, 0x3a0, 0x20, true, 0xe2eed04ebb9a8bb2)
#define _m18 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_WWA_DIAG_DATA.UnhandledJavascriptExceptionFromApp", unhandled_javascript_exception_from_app, 0x3c0, 0x20, true, 0x9ec48c7b1b38cf63)
#define _m19 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_WWA_DIAG_DATA.RequestSuspendTimeoutFailedWithIllegalStateChange", request_suspend_timeout_failed_with_illegal_state_change, 0x3e0, 0x20, true, 0xc251c5d43b109e6f)
#define _m20 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(struct win::wer_javascript_gc_state_t), "_WER_WWA_DIAG_DATA.JavascriptGCState", javascript_gc_state, 0x400, 0x0, true, 0x6152c4ae276ed684)
#define _m21 _SDK_MAGIC_PROPERTY(_SDK_ESCAPE(int32_t), "_WER_WWA_DIAG_DATA.MSAppPriority", ms_app_priority, 0x800, 0x20, true, 0x4076b4ce622bce6d)
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
#endif