#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgmms2
{
    // [DxgkrnlContextHandleCompareFunction]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3deec, 0x20ba bytes
    //
    _m00(sdk::unknown_ptr) dxgkrnl_context_handle_compare_function;
    
    // [EventBoostUnboostRefreshRate]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4bb58, 0x20ba bytes
    //
    _m01(sdk::unknown_ptr) event_boost_unboost_refresh_rate;
    
    // [EventCancelPresentAtFlips]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4efe0, 0x20ba bytes
    //
    _m02(sdk::unknown_ptr) event_cancel_present_at_flips;
    
    // [EventFlipManagerIFlipPresentCancel]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4bd68, 0x20ba bytes
    //
    _m03(sdk::unknown_ptr) event_flip_manager_i_flip_present_cancel;
    
    // [EventPresentQueueComplete]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4f0c0, 0x20ba bytes
    //
    _m04(sdk::unknown_ptr) event_present_queue_complete;
    
    // [EventPresentQueueSubmit]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4f370, 0x20ba bytes
    //
    _m05(sdk::unknown_ptr) event_present_queue_submit;
    
    // [EventResetSmoother]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4b8a0, 0x20ba bytes
    //
    _m06(sdk::unknown_ptr) event_reset_smoother;
    
    // [EventSelectContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .rdata:0x29fb8, 0x158b bytes
    //
    _m07(sdk::unknown_ptr) event_select_context;
    
    // [EventSetBaseDesktopDuration]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4bd08, 0x20ba bytes
    //
    _m08(sdk::unknown_ptr) event_set_base_desktop_duration;
    
    // [EventSetPresentDurationPlane]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4f230, 0x20ba bytes
    //
    _m09(sdk::unknown_ptr) event_set_present_duration_plane;
    
    // [EventVSyncHwFlipQueueLogUpdate]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4ef70, 0x20ba bytes
    //
    _m10(sdk::unknown_ptr) event_v_sync_hw_flip_queue_log_update;
    
    // [EventVSyncSmoothenedPeriod]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4ba28, 0x20ba bytes
    //
    _m11(sdk::unknown_ptr) event_v_sync_smoothened_period;
    
    // [EventVSyncSmoothenedTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4bd28, 0x20ba bytes
    //
    _m12(sdk::unknown_ptr) event_v_sync_smoothened_time;
    
    // [EventVidSchMarkDeviceAsError]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4f280, 0x20ba bytes
    //
    _m13(sdk::unknown_ptr) event_vid_sch_mark_device_as_error;
    
    // [EventVirtualizeFlipSubmissionRate]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x4ba88, 0x20ba bytes
    //
    _m14(sdk::unknown_ptr) event_virtualize_flip_submission_rate;
    
    // [Feature_DelayedForceEviction_logged_traits]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x491e8, 0x20ba bytes
    //
    _m15(sdk::unknown_ptr) feature_delayed_force_eviction_logged_traits;
    
    // [Feature_DelayedForceEviction__private_reporting]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e8a8, 0x20ba bytes
    //
    _m16(sdk::unknown_ptr) feature_delayed_force_eviction_private_reporting;
    
    // [Feature_Servicing_HandleAdapterInitializationFailure_27185154__private_featureState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004
    // dxgmms2.sys .data:0x51610, 0x1c52 bytes
    //
    _m17(sdk::unknown_ptr) feature_servicing_handle_adapter_initialization_failure_27185154_private_feature_state;
    
    // [Feature_Servicing_HandleAdapterInitializationFailure_27185154__private_IsEnabled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004
    // dxgmms2.sys .text:0x15d38, 0x1c52 bytes
    //
    _m18(sdk::unknown_ptr) feature_servicing_handle_adapter_initialization_failure_27185154_private_is_enabled;
    
    // [Feature_Servicing_HandleAdapterInitializationFailure_27185154__private_reporting]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004
    // dxgmms2.sys .data:0x51608, 0x1c52 bytes
    //
    _m19(sdk::unknown_ptr) feature_servicing_handle_adapter_initialization_failure_27185154_private_reporting;
    
    // [Feature_Servicing_hdcp22_29247049_logged_traits]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42e68, 0x1c52 bytes
    //
    _m20(sdk::unknown_ptr) feature_servicing_hdcp22_29247049_logged_traits;
    
    // [Feature_Servicing_hdcp22_29247049__private_descriptor]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v20H2
    // dxgmms2.sys .rdata:0x50600, 0x1c52 bytes
    //
    _m21(sdk::unknown_ptr) feature_servicing_hdcp22_29247049_private_descriptor;
    
    // [Feature_Servicing_hdcp22_29247049__private_featureState]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v20H2
    // dxgmms2.sys .data:0x51628, 0x1c52 bytes
    //
    _m22(sdk::unknown_ptr) feature_servicing_hdcp22_29247049_private_feature_state;
    
    // [Feature_Servicing_hdcp22_29247049__private_IsEnabled]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v20H2
    // dxgmms2.sys .text:0x16034, 0x1c52 bytes
    //
    _m23(sdk::unknown_ptr) feature_servicing_hdcp22_29247049_private_is_enabled;
    
    // [Feature_Servicing_hdcp22_29247049__private_reporting]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v20H2
    // dxgmms2.sys .data:0x51620, 0x1c52 bytes
    //
    _m24(sdk::unknown_ptr) feature_servicing_hdcp22_29247049_private_reporting;
    
    // [Feature_Wddm30CpuVisible_logged_traits]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .rdata:0x491e8, 0x20ba bytes
    //
    _m25(sdk::unknown_ptr) feature_wddm30_cpu_visible_logged_traits;
    
    // [Feature_Wddm30CpuVisible__private_IsEnabledPreCheck]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x27c4, 0x20ba bytes
    //
    _m26(sdk::unknown_ptr) feature_wddm30_cpu_visible_private_is_enabled_pre_check;
    
    // [Feature_Wddm30CpuVisible__private_reporting]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e670, 0x20ba bytes
    //
    _m27(sdk::unknown_ptr) feature_wddm30_cpu_visible_private_reporting;
    
    // [g_BreakOnHwFlipQueueScheduleErrors]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e940, 0x20ba bytes
    //
    _m28(sdk::unknown_ptr) g_break_on_hw_flip_queue_schedule_errors;
    
    // [g_BreakOnSetInterruptTargetPresentIdErrors]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e941, 0x20ba bytes
    //
    _m29(sdk::unknown_ptr) g_break_on_set_interrupt_target_present_id_errors;
    
    // [g_HwFlipQueueScheduleErrorCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .data:0x6e93c, 0x20ba bytes
    //
    _m30(sdk::unknown_ptr) g_hw_flip_queue_schedule_error_count;
    
    // [GetAllocationPriorityClassFromPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys PAGE:0xe1b84, 0x20ba bytes
    //
    _m31(sdk::unknown_ptr) get_allocation_priority_class_from_priority;
    
    // [GetFlipManagerAuxiliaryPresentInfo]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x33be0, 0x20ba bytes
    //
    _m32(sdk::unknown_ptr) get_flip_manager_auxiliary_present_info;
    
    // [KmdContextHandleCompareFunction]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3df08, 0x20ba bytes
    //
    _m33(sdk::unknown_ptr) kmd_context_handle_compare_function;
    
    // [McTemplateK0pqXR1qqqXR5qQR7t_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x36898, 0x20ba bytes
    //
    _m34(sdk::unknown_ptr) mc_template_k0pq_xr1qqq_xr5q_qr7t_etw_write_transfer;
    
    // [McTemplateK0pqqXR2qqddddddddtqtdqiiq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x36a5c, 0x20ba bytes
    //
    _m35(sdk::unknown_ptr) mc_template_k0pqq_xr2qqddddddddtqtdqiiq_etw_write_transfer;
    
    // [McTemplateK0pqqpqqqxxqqpq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x36d44, 0x20ba bytes
    //
    _m36(sdk::unknown_ptr) mc_template_k0pqqpqqqxxqqpq_etw_write_transfer;
    
    // [McTemplateK0ptq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x44068, 0x20ba bytes
    //
    _m37(sdk::unknown_ptr) mc_template_k0ptq_etw_write_transfer;
    
    // [McTemplateK0qqqqXR3XR3_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x37ca8, 0x20ba bytes
    //
    _m38(sdk::unknown_ptr) mc_template_k0qqqq_xr3xr3_etw_write_transfer;
    
    // [McTemplateK0qqxxqxqqqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 11
    // dxgmms2.sys .text:0x3c038, 0x20ba bytes
    //
    _m39(sdk::unknown_ptr) mc_template_k0qqxxqxqqqq_etw_write_transfer;
    
    // [Template_dp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x221c4, 0x158b bytes
    //
    _m40(sdk::unknown_ptr) template_dp;
    
    // [Template_iq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1e2f8, 0x158b bytes
    //
    _m41(sdk::unknown_ptr) template_iq;
    
    // [Template_pcc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1dc4c, 0x158b bytes
    //
    _m42(sdk::unknown_ptr) template_pcc;
    
    // [Template_piiqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x222c4, 0x158b bytes
    //
    _m43(sdk::unknown_ptr) template_piiqq;
    
    // [Template_pppppppppppp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1dcc8, 0x158b bytes
    //
    _m44(sdk::unknown_ptr) template_pppppppppppp;
    
    // [Template_pppppppqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f6b8, 0x158b bytes
    //
    _m45(sdk::unknown_ptr) template_pppppppqq;
    
    // [Template_pppqxqqqqqqqpppqqqqqqqqqqtph]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13628, 0x158b bytes
    //
    _m46(sdk::unknown_ptr) template_pppqxqqqqqqqpppqqqqqqqqqqtph;
    
    // [Template_pppttxqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1fd60, 0x158b bytes
    //
    _m47(sdk::unknown_ptr) template_pppttxqx;
    
    // [Template_pppxqpq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f300, 0x158b bytes
    //
    _m48(sdk::unknown_ptr) template_pppxqpq;
    
    // [Template_pppxqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f3cc, 0x158b bytes
    //
    _m49(sdk::unknown_ptr) template_pppxqq;
    
    // [Template_pppxxq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1ddec, 0x158b bytes
    //
    _m50(sdk::unknown_ptr) template_pppxxq;
    
    // [Template_pppxxxp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f0fc, 0x158b bytes
    //
    _m51(sdk::unknown_ptr) template_pppxxxp;
    
    // [Template_ppqPR2TR2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1df24, 0x158b bytes
    //
    _m52(sdk::unknown_ptr) template_ppq_pr2tr2;
    
    // [Template_ppqqxqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1eee8, 0x158b bytes
    //
    _m53(sdk::unknown_ptr) template_ppqqxqq;
    
    // [Template_ppqqxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22568, 0x158b bytes
    //
    _m54(sdk::unknown_ptr) template_ppqqxx;
    
    // [Template_ppqxqpq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22624, 0x158b bytes
    //
    _m55(sdk::unknown_ptr) template_ppqxqpq;
    
    // [Template_pptpqqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1393c, 0x158b bytes
    //
    _m56(sdk::unknown_ptr) template_pptpqqx;
    
    // [Template_pptpqxpx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13a08, 0x158b bytes
    //
    _m57(sdk::unknown_ptr) template_pptpqxpx;
    
    // [Template_pptpqxpxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13acc, 0x158b bytes
    //
    _m58(sdk::unknown_ptr) template_pptpqxpxx;
    
    // [Template_pptpqxq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13bbc, 0x158b bytes
    //
    _m59(sdk::unknown_ptr) template_pptpqxq;
    
    // [Template_pptpqxqqppqqxxpqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13c88, 0x158b bytes
    //
    _m60(sdk::unknown_ptr) template_pptpqxqqppqqxxpqx;
    
    // [Template_pptpqxqxqxq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13e30, 0x158b bytes
    //
    _m61(sdk::unknown_ptr) template_pptpqxqxqxq;
    
    // [Template_pptpqxqxqxqqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x13f44, 0x158b bytes
    //
    _m62(sdk::unknown_ptr) template_pptpqxqxqxqqq;
    
    // [Template_pptpqxxqt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x14088, 0x158b bytes
    //
    _m63(sdk::unknown_ptr) template_pptpqxxqt;
    
    // [Template_pptpqxxt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x14178, 0x158b bytes
    //
    _m64(sdk::unknown_ptr) template_pptpqxxt;
    
    // [Template_pptpxqqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x14240, 0x158b bytes
    //
    _m65(sdk::unknown_ptr) template_pptpxqqx;
    
    // [Template_pptpxxpq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x14308, 0x158b bytes
    //
    _m66(sdk::unknown_ptr) template_pptpxxpq;
    
    // [Template_pptpxxqqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x143cc, 0x158b bytes
    //
    _m67(sdk::unknown_ptr) template_pptpxxqqx;
    
    // [Template_pptpxxqqxxxqqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x144bc, 0x158b bytes
    //
    _m68(sdk::unknown_ptr) template_pptpxxqqxxxqqx;
    
    // [Template_pptqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x14618, 0x158b bytes
    //
    _m69(sdk::unknown_ptr) template_pptqx;
    
    // [Template_ppx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1e3f0, 0x158b bytes
    //
    _m70(sdk::unknown_ptr) template_ppx;
    
    // [Template_ppxt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1fafc, 0x158b bytes
    //
    _m71(sdk::unknown_ptr) template_ppxt;
    
    // [Template_ppxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1e474, 0x158b bytes
    //
    _m72(sdk::unknown_ptr) template_ppxx;
    
    // [Template_ppxxxxxqxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f504, 0x158b bytes
    //
    _m73(sdk::unknown_ptr) template_ppxxxxxqxx;
    
    // [Template_pqIR1]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x226f0, 0x158b bytes
    //
    _m74(sdk::unknown_ptr) template_pq_ir1;
    
    // [Template_pqXR1PR1q]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22778, 0x158b bytes
    //
    _m75(sdk::unknown_ptr) template_pq_xr1pr1q;
    
    // [Template_pqXR1qqqXR5]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x2282c, 0x158b bytes
    //
    _m76(sdk::unknown_ptr) template_pq_xr1qqq_xr5;
    
    // [Template_pqqPR2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22900, 0x158b bytes
    //
    _m77(sdk::unknown_ptr) template_pqq_pr2;
    
    // [Template_pqqpqqqxxqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22998, 0x158b bytes
    //
    _m78(sdk::unknown_ptr) template_pqqpqqqxxqq;
    
    // [Template_pqqpx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22aac, 0x158b bytes
    //
    _m79(sdk::unknown_ptr) template_pqqpx;
    
    // [Template_pqqpxqqqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22b58, 0x158b bytes
    //
    _m80(sdk::unknown_ptr) template_pqqpxqqqq;
    
    // [Template_pqqqPR3XR3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22c48, 0x158b bytes
    //
    _m81(sdk::unknown_ptr) template_pqqq_pr3xr3;
    
    // [Template_pqqqqCR4]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22d08, 0x158b bytes
    //
    _m82(sdk::unknown_ptr) template_pqqqq_cr4;
    
    // [Template_pqqt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1e0e0, 0x158b bytes
    //
    _m83(sdk::unknown_ptr) template_pqqt;
    
    // [Template_pqqtt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22dc4, 0x158b bytes
    //
    _m84(sdk::unknown_ptr) template_pqqtt;
    
    // [Template_pqqxpxqqqdddddddddddd]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x22e74, 0x158b bytes
    //
    _m85(sdk::unknown_ptr) template_pqqxpxqqqdddddddddddd;
    
    // [Template_pqqxqqtp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x23074, 0x158b bytes
    //
    _m86(sdk::unknown_ptr) template_pqqxqqtp;
    
    // [Template_pqtt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1e1ec, 0x158b bytes
    //
    _m87(sdk::unknown_ptr) template_pqtt;
    
    // [Template_pqxq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x23144, 0x158b bytes
    //
    _m88(sdk::unknown_ptr) template_pqxq;
    
    // [Template_pqxqqqxqp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x232c8, 0x158b bytes
    //
    _m89(sdk::unknown_ptr) template_pqxqqqxqp;
    
    // [Template_pqxqt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x233b8, 0x158b bytes
    //
    _m90(sdk::unknown_ptr) template_pqxqt;
    
    // [Template_pqxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f600, 0x158b bytes
    //
    _m91(sdk::unknown_ptr) template_pqxx;
    
    // [Template_pqxxxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x23464, 0x158b bytes
    //
    _m92(sdk::unknown_ptr) template_pqxxxx;
    
    // [Template_pxqPR2XR2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x25c40, 0x158b bytes
    //
    _m93(sdk::unknown_ptr) template_pxq_pr2xr2;
    
    // [Template_pxqqpqx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x23598, 0x158b bytes
    //
    _m94(sdk::unknown_ptr) template_pxqqpqx;
    
    // [Template_pxqqt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f824, 0x158b bytes
    //
    _m95(sdk::unknown_ptr) template_pxqqt;
    
    // [Template_qpxp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f8c8, 0x158b bytes
    //
    _m96(sdk::unknown_ptr) template_qpxp;
    
    // [Template_qpxxtqqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1fe28, 0x158b bytes
    //
    _m97(sdk::unknown_ptr) template_qpxxtqqq;
    
    // [Template_qpxxxqqxpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1ff0c, 0x158b bytes
    //
    _m98(sdk::unknown_ptr) template_qpxxxqqxpc;
    
    // [Template_qqqxx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1fc54, 0x158b bytes
    //
    _m99(sdk::unknown_ptr) template_qqqxx;
    
    // [Template_qqtqttp]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1e508, 0x158b bytes
    //
    _n00(sdk::unknown_ptr) template_qqtqttp;
    
    // [Template_tqq]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1efc4, 0x158b bytes
    //
    _n01(sdk::unknown_ptr) template_tqq;
    
    // [Template_txqqqtxtx]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x25cf0, 0x158b bytes
    //
    _n02(sdk::unknown_ptr) template_txqqqtxtx;
    
    // [Template_xxpqhc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x1f048, 0x158b bytes
    //
    _n03(sdk::unknown_ptr) template_xxpqhc;
    
    // [Template_xxpqhccccc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x20130, 0x158b bytes
    //
    _n04(sdk::unknown_ptr) template_xxpqhccccc;
    
    // [Template_xxqXR2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607
    // dxgmms2.sys .text:0x20080, 0x158b bytes
    //
    _n05(sdk::unknown_ptr) template_xxq_xr2;
    
    // [Feature_VidMMVerifyIntegrity_logged_traits]
    // Ldr = [dxgmms2.sys]
    // => Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x4f500, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44970, 0x1c52 bytes
    //
    _n06(sdk::unknown_ptr) feature_vid_mm_verify_integrity_logged_traits;
    
    // [McTemplateK0pppppppppppp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x242f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x24274, 0x1c52 bytes
    //
    _n07(sdk::unknown_ptr) mc_template_k0pppppppppppp_etw_write_transfer;
    
    // [McTemplateK0pqXR1qqqXR5qQR7_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d8c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d848, 0x1c52 bytes
    //
    _n08(sdk::unknown_ptr) mc_template_k0pq_xr1qqq_xr5q_qr7_etw_write_transfer;
    
    // [McTemplateK0pqqXR2qqddddddddtqtd_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x2da7c, 0x1c52 bytes
    // dxgmms2.sys .text:0x2d9fc, 0x1c52 bytes
    //
    _n09(sdk::unknown_ptr) mc_template_k0pqq_xr2qqddddddddtqtd_etw_write_transfer;
    
    // [McTemplateK0pqqpqqqxxqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgmms2.sys .text:0x2dd04, 0x1c52 bytes
    // dxgmms2.sys .text:0x2dc84, 0x1c52 bytes
    //
    _n10(sdk::unknown_ptr) mc_template_k0pqqpqqqxxqq_etw_write_transfer;
    
    // [CheckContiguousSysMem]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xbd93c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe25fc, 0x20ba bytes
    // dxgmms2.sys PAGE:0xbdf0c, 0x1c52 bytes
    //
    _n11(sdk::unknown_ptr) check_contiguous_sys_mem;
    
    // [CompareVidMmPartitionById]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x14128, 0x1c52 bytes
    // dxgmms2.sys .text:0x18420, 0x20ba bytes
    // dxgmms2.sys .text:0x14128, 0x1c52 bytes
    //
    _n12(sdk::unknown_ptr) compare_vid_mm_partition_by_id;
    
    // [DecrementRequestVSyncCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1285c, 0x1c52 bytes
    // dxgmms2.sys .text:0x186a8, 0x20ba bytes
    // dxgmms2.sys .text:0x1285c, 0x1c52 bytes
    //
    _n13(sdk::unknown_ptr) decrement_request_v_sync_count;
    
    // [DeferredSetVprCompletionCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc5ad0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8e50, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc60a0, 0x1c52 bytes
    //
    _n14(sdk::unknown_ptr) deferred_set_vpr_completion_callback;
    
    // [DerementRequestVSyncReasonAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12878, 0x1c52 bytes
    // dxgmms2.sys .text:0x186c4, 0x20ba bytes
    // dxgmms2.sys .text:0x12878, 0x1c52 bytes
    //
    _n15(sdk::unknown_ptr) derement_request_v_sync_reason_adapter;
    
    // [DerementRequestVSyncReasonDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x32c24, 0x1c52 bytes
    // dxgmms2.sys .text:0x1b3a8, 0x20ba bytes
    // dxgmms2.sys .text:0x32ba4, 0x1c52 bytes
    //
    _n16(sdk::unknown_ptr) derement_request_v_sync_reason_device;
    
    // [EndGpuVirtualAddressRangeMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44890, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f430, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44890, 0x1c52 bytes
    //
    _n17(sdk::unknown_ptr) end_gpu_virtual_address_range_mapping;
    
    // [EventContextHasNegativeQuantum]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44700, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f270, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44700, 0x1c52 bytes
    //
    _n18(sdk::unknown_ptr) event_context_has_negative_quantum;
    
    // [EventCreatePeriodicFrameNotification]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x446f0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f260, 0x20ba bytes
    // dxgmms2.sys .rdata:0x446f0, 0x1c52 bytes
    //
    _n19(sdk::unknown_ptr) event_create_periodic_frame_notification;
    
    // [EventCreatePeriodicMonitoredFence]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x447d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f350, 0x20ba bytes
    // dxgmms2.sys .rdata:0x447d0, 0x1c52 bytes
    //
    _n20(sdk::unknown_ptr) event_create_periodic_monitored_fence;
    
    // [EventDestroyPeriodicFrameNotification]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x444d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f000, 0x20ba bytes
    // dxgmms2.sys .rdata:0x444d0, 0x1c52 bytes
    //
    _n21(sdk::unknown_ptr) event_destroy_periodic_frame_notification;
    
    // [EventDestroyPeriodicMonitoredFence]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44630, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f190, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44630, 0x1c52 bytes
    //
    _n22(sdk::unknown_ptr) event_destroy_periodic_monitored_fence;
    
    // [EventDmaCompleteByGpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44810, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f3b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44810, 0x1c52 bytes
    //
    _n23(sdk::unknown_ptr) event_dma_complete_by_gpu;
    
    // [EventDmaReleaseToGpu]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x445b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f110, 0x20ba bytes
    // dxgmms2.sys .rdata:0x445b0, 0x1c52 bytes
    //
    _n24(sdk::unknown_ptr) event_dma_release_to_gpu;
    
    // [EventHSyncDPCMultiPlane]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42830, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b7f0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x426f0, 0x1c52 bytes
    //
    _n25(sdk::unknown_ptr) event_h_sync_dpc_multi_plane;
    
    // [EventHSyncInterrupt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42b50, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bb18, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a10, 0x1c52 bytes
    //
    _n26(sdk::unknown_ptr) event_h_sync_interrupt;
    
    // [EventPagingOpSignalMonitoredFence]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44930, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f4c0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44930, 0x1c52 bytes
    //
    _n27(sdk::unknown_ptr) event_paging_op_signal_monitored_fence;
    
    // [EventPeriodicFrameNotificationDpc]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x447b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f330, 0x20ba bytes
    // dxgmms2.sys .rdata:0x447b0, 0x1c52 bytes
    //
    _n28(sdk::unknown_ptr) event_periodic_frame_notification_dpc;
    
    // [EventPeriodicFrameNotificationInterrupt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x446a0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f200, 0x20ba bytes
    // dxgmms2.sys .rdata:0x446a0, 0x1c52 bytes
    //
    _n29(sdk::unknown_ptr) event_periodic_frame_notification_interrupt;
    
    // [EventPeriodicFrameNotificationTimer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x443e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef00, 0x20ba bytes
    // dxgmms2.sys .rdata:0x443e0, 0x1c52 bytes
    //
    _n30(sdk::unknown_ptr) event_periodic_frame_notification_timer;
    
    // [EventReportMarkedGlobalAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44490, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4efb0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44490, 0x1c52 bytes
    //
    _n31(sdk::unknown_ptr) event_report_marked_global_allocation;
    
    // [EventSchedulingLog]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x445e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f140, 0x20ba bytes
    // dxgmms2.sys .rdata:0x445e0, 0x1c52 bytes
    //
    _n32(sdk::unknown_ptr) event_scheduling_log;
    
    // [EventSelectContext2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x427f0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b7b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x426b0, 0x1c52 bytes
    //
    _n33(sdk::unknown_ptr) event_select_context2;
    
    // [EventSelectingContextWithNegativeQuantum]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x447a0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f320, 0x20ba bytes
    // dxgmms2.sys .rdata:0x447a0, 0x1c52 bytes
    //
    _n34(sdk::unknown_ptr) event_selecting_context_with_negative_quantum;
    
    // [EventTransferAllocationOwnership]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42a70, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ba18, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42930, 0x1c52 bytes
    //
    _n35(sdk::unknown_ptr) event_transfer_allocation_ownership;
    
    // [EventVidMmEndDefragment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44760, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f2e0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44760, 0x1c52 bytes
    //
    _n36(sdk::unknown_ptr) event_vid_mm_end_defragment;
    
    // [EventVidMmReportAllocationResidency]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x447c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f340, 0x20ba bytes
    // dxgmms2.sys .rdata:0x447c0, 0x1c52 bytes
    //
    _n37(sdk::unknown_ptr) event_vid_mm_report_allocation_residency;
    
    // [EventVidMmRestoreResource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x446e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f250, 0x20ba bytes
    // dxgmms2.sys .rdata:0x446e0, 0x1c52 bytes
    //
    _n38(sdk::unknown_ptr) event_vid_mm_restore_resource;
    
    // [EventVidMmSaveResource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44480, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4efa0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44480, 0x1c52 bytes
    //
    _n39(sdk::unknown_ptr) event_vid_mm_save_resource;
    
    // [EventVidMmStartDefragment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x44750, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f2d0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44750, 0x1c52 bytes
    //
    _n40(sdk::unknown_ptr) event_vid_mm_start_defragment;
    
    // [EventVidMmVprDefragmentCheck]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42a40, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b9e8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42900, 0x1c52 bytes
    //
    _n41(sdk::unknown_ptr) event_vid_mm_vpr_defragment_check;
    
    // [EventVidMmVprDefragmentLowCommit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42800, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b7c0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x426c0, 0x1c52 bytes
    //
    _n42(sdk::unknown_ptr) event_vid_mm_vpr_defragment_low_commit;
    
    // [Feature_VidMMVerifyIntegrity__private_reporting]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x51860, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e920, 0x20ba bytes
    // dxgmms2.sys .data:0x51860, 0x1c52 bytes
    //
    _n43(sdk::unknown_ptr) feature_vid_mm_verify_integrity_private_reporting;
    
    // [g_bInjectRotateFailure]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x51880, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e908, 0x20ba bytes
    // dxgmms2.sys .data:0x51880, 0x1c52 bytes
    //
    _n44(sdk::unknown_ptr) g_b_inject_rotate_failure;
    
    // [GpuPerformanceCounterSetAdapterMemory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x515f0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e690, 0x20ba bytes
    // dxgmms2.sys .data:0x515f0, 0x1c52 bytes
    //
    _n45(sdk::unknown_ptr) gpu_performance_counter_set_adapter_memory;
    
    // [GpuPerformanceCounterSetEngine]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x515f8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e698, 0x20ba bytes
    // dxgmms2.sys .data:0x515f8, 0x1c52 bytes
    //
    _n46(sdk::unknown_ptr) gpu_performance_counter_set_engine;
    
    // [GpuPerformanceCounterSetLocalAdapterMemory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x515e8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e688, 0x20ba bytes
    // dxgmms2.sys .data:0x515e8, 0x1c52 bytes
    //
    _n47(sdk::unknown_ptr) gpu_performance_counter_set_local_adapter_memory;
    
    // [GpuPerformanceCounterSetNonLocalAdapterMemory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x515e0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e680, 0x20ba bytes
    // dxgmms2.sys .data:0x515e0, 0x1c52 bytes
    //
    _n48(sdk::unknown_ptr) gpu_performance_counter_set_non_local_adapter_memory;
    
    // [GpuPerformanceCounterSetProcessMemory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x51600, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6a0, 0x20ba bytes
    // dxgmms2.sys .data:0x51600, 0x1c52 bytes
    //
    _n49(sdk::unknown_ptr) gpu_performance_counter_set_process_memory;
    
    // [IncrementNumberOfQueuedFlipPerSource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x13e38, 0x1c52 bytes
    // dxgmms2.sys .text:0x17bc0, 0x20ba bytes
    // dxgmms2.sys .text:0x13e38, 0x1c52 bytes
    //
    _n50(sdk::unknown_ptr) increment_number_of_queued_flip_per_source;
    
    // [IncrementRequestVSyncCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x126b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x18664, 0x20ba bytes
    // dxgmms2.sys .text:0x126b4, 0x1c52 bytes
    //
    _n51(sdk::unknown_ptr) increment_request_v_sync_count;
    
    // [IncrementRequestVSyncReasonAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12688, 0x1c52 bytes
    // dxgmms2.sys .text:0x18680, 0x20ba bytes
    // dxgmms2.sys .text:0x12688, 0x1c52 bytes
    //
    _n52(sdk::unknown_ptr) increment_request_v_sync_reason_adapter;
    
    // [IncrementRequestVSyncReasonDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x126d0, 0x1c52 bytes
    // dxgmms2.sys .text:0x18638, 0x20ba bytes
    // dxgmms2.sys .text:0x126d0, 0x1c52 bytes
    //
    _n53(sdk::unknown_ptr) increment_request_v_sync_reason_device;
    
    // [LockParavirtualizedAllocationOnHost]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb1fd4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd824c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb259c, 0x1c52 bytes
    //
    _n54(sdk::unknown_ptr) lock_paravirtualized_allocation_on_host;
    
    // [McTemplateK0dp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d174, 0x1c52 bytes
    // dxgmms2.sys .text:0x361b8, 0x20ba bytes
    // dxgmms2.sys .text:0x2d0f4, 0x1c52 bytes
    //
    _n55(sdk::unknown_ptr) mc_template_k0dp_etw_write_transfer;
    
    // [McTemplateK0iq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24f38, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ebf0, 0x20ba bytes
    // dxgmms2.sys .text:0x24eb8, 0x1c52 bytes
    //
    _n56(sdk::unknown_ptr) mc_template_k0iq_etw_write_transfer;
    
    // [McTemplateK0phhhqqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x28650, 0x1c52 bytes
    // dxgmms2.sys .text:0x327e0, 0x20ba bytes
    // dxgmms2.sys .text:0x285d0, 0x1c52 bytes
    //
    _n57(sdk::unknown_ptr) mc_template_k0phhhqqx_etw_write_transfer;
    
    // [McTemplateK0phhhxxqqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2871c, 0x1c52 bytes
    // dxgmms2.sys .text:0x328ac, 0x20ba bytes
    // dxgmms2.sys .text:0x2869c, 0x1c52 bytes
    //
    _n58(sdk::unknown_ptr) mc_template_k0phhhxxqqx_etw_write_transfer;
    
    // [McTemplateK0piixqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d278, 0x1c52 bytes
    // dxgmms2.sys .text:0x362bc, 0x20ba bytes
    // dxgmms2.sys .text:0x2d1f8, 0x1c52 bytes
    //
    _n59(sdk::unknown_ptr) mc_template_k0piixqq_etw_write_transfer;
    
    // [McTemplateK0pppppppqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27ee8, 0x1c52 bytes
    // dxgmms2.sys .text:0x32050, 0x20ba bytes
    // dxgmms2.sys .text:0x27e68, 0x1c52 bytes
    //
    _n60(sdk::unknown_ptr) mc_template_k0pppppppqq_etw_write_transfer;
    
    // [McTemplateK0pppttxqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x28818, 0x1c52 bytes
    // dxgmms2.sys .text:0x329a8, 0x20ba bytes
    // dxgmms2.sys .text:0x28798, 0x1c52 bytes
    //
    _n61(sdk::unknown_ptr) mc_template_k0pppttxqx_etw_write_transfer;
    
    // [McTemplateK0pppxqpq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25ec8, 0x1c52 bytes
    // dxgmms2.sys .text:0x2fbd0, 0x20ba bytes
    // dxgmms2.sys .text:0x25e48, 0x1c52 bytes
    //
    _n62(sdk::unknown_ptr) mc_template_k0pppxqpq_etw_write_transfer;
    
    // [McTemplateK0pppxqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25f84, 0x1c52 bytes
    // dxgmms2.sys .text:0x2fc8c, 0x20ba bytes
    // dxgmms2.sys .text:0x25f04, 0x1c52 bytes
    //
    _n63(sdk::unknown_ptr) mc_template_k0pppxqq_etw_write_transfer;
    
    // [McTemplateK0pppxxq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24420, 0x1c52 bytes
    // dxgmms2.sys .text:0x2e144, 0x20ba bytes
    // dxgmms2.sys .text:0x243a0, 0x1c52 bytes
    //
    _n64(sdk::unknown_ptr) mc_template_k0pppxxq_etw_write_transfer;
    
    // [McTemplateK0pppxxxp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25e14, 0x1c52 bytes
    // dxgmms2.sys .text:0x2fb1c, 0x20ba bytes
    // dxgmms2.sys .text:0x25d94, 0x1c52 bytes
    //
    _n65(sdk::unknown_ptr) mc_template_k0pppxxxp_etw_write_transfer;
    
    // [McTemplateK0ppqPR2TR2_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x244e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x2e204, 0x20ba bytes
    // dxgmms2.sys .text:0x24460, 0x1c52 bytes
    //
    _n66(sdk::unknown_ptr) mc_template_k0ppq_pr2tr2_etw_write_transfer;
    
    // [McTemplateK0ppqqqPR4PR4_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d46c, 0x1c52 bytes
    // dxgmms2.sys .text:0x363f0, 0x20ba bytes
    // dxgmms2.sys .text:0x2d3ec, 0x1c52 bytes
    //
    _n67(sdk::unknown_ptr) mc_template_k0ppqqq_pr4pr4_etw_write_transfer;
    
    // [McTemplateK0ppqqxqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25c10, 0x1c52 bytes
    // dxgmms2.sys .text:0x2f918, 0x20ba bytes
    // dxgmms2.sys .text:0x25b90, 0x1c52 bytes
    //
    _n68(sdk::unknown_ptr) mc_template_k0ppqqxqq_etw_write_transfer;
    
    // [McTemplateK0ppqxqpq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d5f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x365c0, 0x20ba bytes
    // dxgmms2.sys .text:0x2d574, 0x1c52 bytes
    //
    _n69(sdk::unknown_ptr) mc_template_k0ppqxqpq_etw_write_transfer;
    
    // [McTemplateK0pptpqqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26e70, 0x1c52 bytes
    // dxgmms2.sys .text:0x30fa8, 0x20ba bytes
    // dxgmms2.sys .text:0x26df0, 0x1c52 bytes
    //
    _n70(sdk::unknown_ptr) mc_template_k0pptpqqx_etw_write_transfer;
    
    // [McTemplateK0pptpqxpx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26f30, 0x1c52 bytes
    // dxgmms2.sys .text:0x31068, 0x20ba bytes
    // dxgmms2.sys .text:0x26eb0, 0x1c52 bytes
    //
    _n71(sdk::unknown_ptr) mc_template_k0pptpqxpx_etw_write_transfer;
    
    // [McTemplateK0pptpqxpxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27010, 0x1c52 bytes
    // dxgmms2.sys .text:0x31148, 0x20ba bytes
    // dxgmms2.sys .text:0x26f90, 0x1c52 bytes
    //
    _n72(sdk::unknown_ptr) mc_template_k0pptpqxpxx_etw_write_transfer;
    
    // [McTemplateK0pptpqxq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27104, 0x1c52 bytes
    // dxgmms2.sys .text:0x3123c, 0x20ba bytes
    // dxgmms2.sys .text:0x27084, 0x1c52 bytes
    //
    _n73(sdk::unknown_ptr) mc_template_k0pptpqxq_etw_write_transfer;
    
    // [McTemplateK0pptpqxqqppqqxxpqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x271c4, 0x1c52 bytes
    // dxgmms2.sys .text:0x312fc, 0x20ba bytes
    // dxgmms2.sys .text:0x27144, 0x1c52 bytes
    //
    _n74(sdk::unknown_ptr) mc_template_k0pptpqxqqppqqxxpqx_etw_write_transfer;
    
    // [McTemplateK0pptpqxqxqxq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27370, 0x1c52 bytes
    // dxgmms2.sys .text:0x314a8, 0x20ba bytes
    // dxgmms2.sys .text:0x272f0, 0x1c52 bytes
    //
    _n75(sdk::unknown_ptr) mc_template_k0pptpqxqxqxq_etw_write_transfer;
    
    // [McTemplateK0pptpqxqxqxqqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27488, 0x1c52 bytes
    // dxgmms2.sys .text:0x315c0, 0x20ba bytes
    // dxgmms2.sys .text:0x27408, 0x1c52 bytes
    //
    _n76(sdk::unknown_ptr) mc_template_k0pptpqxqxqxqqq_etw_write_transfer;
    
    // [McTemplateK0pptpqxxqt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x275d4, 0x1c52 bytes
    // dxgmms2.sys .text:0x3170c, 0x20ba bytes
    // dxgmms2.sys .text:0x27554, 0x1c52 bytes
    //
    _n77(sdk::unknown_ptr) mc_template_k0pptpqxxqt_etw_write_transfer;
    
    // [McTemplateK0pptpqxxt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x276c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x31800, 0x20ba bytes
    // dxgmms2.sys .text:0x27648, 0x1c52 bytes
    //
    _n78(sdk::unknown_ptr) mc_template_k0pptpqxxt_etw_write_transfer;
    
    // [McTemplateK0pptpxqqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x277a8, 0x1c52 bytes
    // dxgmms2.sys .text:0x318e0, 0x20ba bytes
    // dxgmms2.sys .text:0x27728, 0x1c52 bytes
    //
    _n79(sdk::unknown_ptr) mc_template_k0pptpxqqx_etw_write_transfer;
    
    // [McTemplateK0pptpxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27888, 0x1c52 bytes
    // dxgmms2.sys .text:0x319c0, 0x20ba bytes
    // dxgmms2.sys .text:0x27808, 0x1c52 bytes
    //
    _n80(sdk::unknown_ptr) mc_template_k0pptpxx_etw_write_transfer;
    
    // [McTemplateK0pptpxxpq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27948, 0x1c52 bytes
    // dxgmms2.sys .text:0x31a80, 0x20ba bytes
    // dxgmms2.sys .text:0x278c8, 0x1c52 bytes
    //
    _n81(sdk::unknown_ptr) mc_template_k0pptpxxpq_etw_write_transfer;
    
    // [McTemplateK0pptpxxqqxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27a28, 0x1c52 bytes
    // dxgmms2.sys .text:0x31b60, 0x20ba bytes
    // dxgmms2.sys .text:0x279a8, 0x1c52 bytes
    //
    _n82(sdk::unknown_ptr) mc_template_k0pptpxxqqxx_etw_write_transfer;
    
    // [McTemplateK0pptpxxqqxxxqqxxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27b2c, 0x1c52 bytes
    // dxgmms2.sys .text:0x31c64, 0x20ba bytes
    // dxgmms2.sys .text:0x27aac, 0x1c52 bytes
    //
    _n83(sdk::unknown_ptr) mc_template_k0pptpxxqqxxxqqxxx_etw_write_transfer;
    
    // [McTemplateK0pptqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27cc0, 0x1c52 bytes
    // dxgmms2.sys .text:0x31df8, 0x20ba bytes
    // dxgmms2.sys .text:0x27c40, 0x1c52 bytes
    //
    _n84(sdk::unknown_ptr) mc_template_k0pptqx_etw_write_transfer;
    
    // [McTemplateK0ppxt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x28310, 0x1c52 bytes
    // dxgmms2.sys .text:0x324e0, 0x20ba bytes
    // dxgmms2.sys .text:0x28290, 0x1c52 bytes
    //
    _n85(sdk::unknown_ptr) mc_template_k0ppxt_etw_write_transfer;
    
    // [McTemplateK0ppxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x250cc, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ed84, 0x20ba bytes
    // dxgmms2.sys .text:0x2504c, 0x1c52 bytes
    //
    _n86(sdk::unknown_ptr) mc_template_k0ppxx_etw_write_transfer;
    
    // [McTemplateK0ppxxxxxqxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26148, 0x1c52 bytes
    // dxgmms2.sys .text:0x2fd90, 0x20ba bytes
    // dxgmms2.sys .text:0x260c8, 0x1c52 bytes
    //
    _n87(sdk::unknown_ptr) mc_template_k0ppxxxxxqxx_etw_write_transfer;
    
    // [McTemplateK0pqIR1_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d6b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x36680, 0x20ba bytes
    // dxgmms2.sys .text:0x2d634, 0x1c52 bytes
    //
    _n88(sdk::unknown_ptr) mc_template_k0pq_ir1_etw_write_transfer;
    
    // [McTemplateK0pqXR1PR1q_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d740, 0x1c52 bytes
    // dxgmms2.sys .text:0x3670c, 0x20ba bytes
    // dxgmms2.sys .text:0x2d6c0, 0x1c52 bytes
    //
    _n89(sdk::unknown_ptr) mc_template_k0pq_xr1pr1q_etw_write_transfer;
    
    // [McTemplateK0pqXR1qqqXR5_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d7f4, 0x1c52 bytes
    // dxgmms2.sys .text:0x367c4, 0x20ba bytes
    // dxgmms2.sys .text:0x2d774, 0x1c52 bytes
    //
    _n90(sdk::unknown_ptr) mc_template_k0pq_xr1qqq_xr5_etw_write_transfer;
    
    // [McTemplateK0pqqPR2p_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2d9c8, 0x1c52 bytes
    // dxgmms2.sys .text:0x369a8, 0x20ba bytes
    // dxgmms2.sys .text:0x2d948, 0x1c52 bytes
    //
    _n91(sdk::unknown_ptr) mc_template_k0pqq_pr2p_etw_write_transfer;
    
    // [McTemplateK0pqqiix_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2dc44, 0x1c52 bytes
    // dxgmms2.sys .text:0x36c84, 0x20ba bytes
    // dxgmms2.sys .text:0x2dbc4, 0x1c52 bytes
    //
    _n92(sdk::unknown_ptr) mc_template_k0pqqiix_etw_write_transfer;
    
    // [McTemplateK0pqqpxp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2de1c, 0x1c52 bytes
    // dxgmms2.sys .text:0x36e90, 0x20ba bytes
    // dxgmms2.sys .text:0x2dd9c, 0x1c52 bytes
    //
    _n93(sdk::unknown_ptr) mc_template_k0pqqpxp_etw_write_transfer;
    
    // [McTemplateK0pqqpxqqqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2dedc, 0x1c52 bytes
    // dxgmms2.sys .text:0x36f50, 0x20ba bytes
    // dxgmms2.sys .text:0x2de5c, 0x1c52 bytes
    //
    _n94(sdk::unknown_ptr) mc_template_k0pqqpxqqqq_etw_write_transfer;
    
    // [McTemplateK0pqqqPR3XR3p_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2dfd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x37044, 0x20ba bytes
    // dxgmms2.sys .text:0x2df50, 0x1c52 bytes
    //
    _n95(sdk::unknown_ptr) mc_template_k0pqqq_pr3xr3p_etw_write_transfer;
    
    // [McTemplateK0pqqqqUR4_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e09c, 0x1c52 bytes
    // dxgmms2.sys .text:0x37114, 0x20ba bytes
    // dxgmms2.sys .text:0x2e01c, 0x1c52 bytes
    //
    _n96(sdk::unknown_ptr) mc_template_k0pqqqq_ur4_etw_write_transfer;
    
    // [McTemplateK0pqqt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24ab8, 0x1c52 bytes
    // dxgmms2.sys .text:0x2e7e0, 0x20ba bytes
    // dxgmms2.sys .text:0x24a38, 0x1c52 bytes
    //
    _n97(sdk::unknown_ptr) mc_template_k0pqqt_etw_write_transfer;
    
    // [McTemplateK0pqqttp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e158, 0x1c52 bytes
    // dxgmms2.sys .text:0x371d0, 0x20ba bytes
    // dxgmms2.sys .text:0x2e0d8, 0x1c52 bytes
    //
    _n98(sdk::unknown_ptr) mc_template_k0pqqttp_etw_write_transfer;
    
    // [McTemplateK0pqqxqqtppx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e4a0, 0x1c52 bytes
    // dxgmms2.sys .text:0x37518, 0x20ba bytes
    // dxgmms2.sys .text:0x2e420, 0x1c52 bytes
    //
    _n99(sdk::unknown_ptr) mc_template_k0pqqxqqtppx_etw_write_transfer;
    
    // [McTemplateK0pqqxxxxqbr7_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x39a5c, 0x1c52 bytes
    // dxgmms2.sys .text:0x41264, 0x20ba bytes
    // dxgmms2.sys .text:0x399dc, 0x1c52 bytes
    //
    _o00(sdk::unknown_ptr) mc_template_k0pqqxxxxqbr7_etw_write_transfer;
    
    // [McTemplateK0pqtt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24bd4, 0x1c52 bytes
    // dxgmms2.sys .text:0x2e8fc, 0x20ba bytes
    // dxgmms2.sys .text:0x24b54, 0x1c52 bytes
    //
    _o01(sdk::unknown_ptr) mc_template_k0pqtt_etw_write_transfer;
    
    // [McTemplateK0pqxq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e5a4, 0x1c52 bytes
    // dxgmms2.sys .text:0x3761c, 0x20ba bytes
    // dxgmms2.sys .text:0x2e524, 0x1c52 bytes
    //
    _o02(sdk::unknown_ptr) mc_template_k0pqxq_etw_write_transfer;
    
    // [McTemplateK0pqxqqqxqp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e738, 0x1c52 bytes
    // dxgmms2.sys .text:0x377b0, 0x20ba bytes
    // dxgmms2.sys .text:0x2e6b8, 0x1c52 bytes
    //
    _o03(sdk::unknown_ptr) mc_template_k0pqxqqqxqp_etw_write_transfer;
    
    // [McTemplateK0pqxqt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e82c, 0x1c52 bytes
    // dxgmms2.sys .text:0x378a4, 0x20ba bytes
    // dxgmms2.sys .text:0x2e7ac, 0x1c52 bytes
    //
    _o04(sdk::unknown_ptr) mc_template_k0pqxqt_etw_write_transfer;
    
    // [McTemplateK0pqxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x26248, 0x1c52 bytes
    // dxgmms2.sys .text:0x2fe90, 0x20ba bytes
    // dxgmms2.sys .text:0x261c8, 0x1c52 bytes
    //
    _o05(sdk::unknown_ptr) mc_template_k0pqxx_etw_write_transfer;
    
    // [McTemplateK0pqxxqpp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x3382c, 0x1c52 bytes
    // dxgmms2.sys .text:0x3bed0, 0x20ba bytes
    // dxgmms2.sys .text:0x337ac, 0x1c52 bytes
    //
    _o06(sdk::unknown_ptr) mc_template_k0pqxxqpp_etw_write_transfer;
    
    // [McTemplateK0pqxxxx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e8dc, 0x1c52 bytes
    // dxgmms2.sys .text:0x37954, 0x20ba bytes
    // dxgmms2.sys .text:0x2e85c, 0x1c52 bytes
    //
    _o07(sdk::unknown_ptr) mc_template_k0pqxxxx_etw_write_transfer;
    
    // [McTemplateK0puu_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x24d78, 0x1c52 bytes
    // dxgmms2.sys .text:0x2eaa0, 0x20ba bytes
    // dxgmms2.sys .text:0x24cf8, 0x1c52 bytes
    //
    _o08(sdk::unknown_ptr) mc_template_k0puu_etw_write_transfer;
    
    // [McTemplateK0pxpqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x39b50, 0x1c52 bytes
    // dxgmms2.sys .text:0x41358, 0x20ba bytes
    // dxgmms2.sys .text:0x39ad0, 0x1c52 bytes
    //
    _o09(sdk::unknown_ptr) mc_template_k0pxpqq_etw_write_transfer;
    
    // [McTemplateK0pxqPR2XR2_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x338e0, 0x1c52 bytes
    // dxgmms2.sys .text:0x3bf84, 0x20ba bytes
    // dxgmms2.sys .text:0x33860, 0x1c52 bytes
    //
    _o10(sdk::unknown_ptr) mc_template_k0pxq_pr2xr2_etw_write_transfer;
    
    // [McTemplateK0pxqqpqx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2e99c, 0x1c52 bytes
    // dxgmms2.sys .text:0x37a14, 0x20ba bytes
    // dxgmms2.sys .text:0x2e91c, 0x1c52 bytes
    //
    _o11(sdk::unknown_ptr) mc_template_k0pxqqpqx_etw_write_transfer;
    
    // [McTemplateK0pxqqt_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x27fdc, 0x1c52 bytes
    // dxgmms2.sys .text:0x32144, 0x20ba bytes
    // dxgmms2.sys .text:0x27f5c, 0x1c52 bytes
    //
    _o12(sdk::unknown_ptr) mc_template_k0pxqqt_etw_write_transfer;
    
    // [McTemplateK0qpiixi_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2ea5c, 0x1c52 bytes
    // dxgmms2.sys .text:0x37ad4, 0x20ba bytes
    // dxgmms2.sys .text:0x2e9dc, 0x1c52 bytes
    //
    _o13(sdk::unknown_ptr) mc_template_k0qpiixi_etw_write_transfer;
    
    // [McTemplateK0qpxp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x28084, 0x1c52 bytes
    // dxgmms2.sys .text:0x321ec, 0x20ba bytes
    // dxgmms2.sys .text:0x28004, 0x1c52 bytes
    //
    _o14(sdk::unknown_ptr) mc_template_k0qpxp_etw_write_transfer;
    
    // [McTemplateK0qpxxtqqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x288f8, 0x1c52 bytes
    // dxgmms2.sys .text:0x32a88, 0x20ba bytes
    // dxgmms2.sys .text:0x28878, 0x1c52 bytes
    //
    _o15(sdk::unknown_ptr) mc_template_k0qpxxtqqq_etw_write_transfer;
    
    // [McTemplateK0qpxxxqqxpu_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x289f0, 0x1c52 bytes
    // dxgmms2.sys .text:0x32b80, 0x20ba bytes
    // dxgmms2.sys .text:0x28970, 0x1c52 bytes
    //
    _o16(sdk::unknown_ptr) mc_template_k0qpxxxqqxpu_etw_write_transfer;
    
    // [McTemplateK0qqix_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2eb98, 0x1c52 bytes
    // dxgmms2.sys .text:0x37c08, 0x20ba bytes
    // dxgmms2.sys .text:0x2eb18, 0x1c52 bytes
    //
    _o17(sdk::unknown_ptr) mc_template_k0qqix_etw_write_transfer;
    
    // [McTemplateK0qqqxxp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x284b4, 0x1c52 bytes
    // dxgmms2.sys .text:0x32680, 0x20ba bytes
    // dxgmms2.sys .text:0x28434, 0x1c52 bytes
    //
    _o18(sdk::unknown_ptr) mc_template_k0qqqxxp_etw_write_transfer;
    
    // [McTemplateK0qqtqttp_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25164, 0x1c52 bytes
    // dxgmms2.sys .text:0x2ee1c, 0x20ba bytes
    // dxgmms2.sys .text:0x250e4, 0x1c52 bytes
    //
    _o19(sdk::unknown_ptr) mc_template_k0qqtqttp_etw_write_transfer;
    
    // [McTemplateK0qtpiixi_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2ecd8, 0x1c52 bytes
    // dxgmms2.sys .text:0x37eac, 0x20ba bytes
    // dxgmms2.sys .text:0x2ec58, 0x1c52 bytes
    //
    _o20(sdk::unknown_ptr) mc_template_k0qtpiixi_etw_write_transfer;
    
    // [McTemplateK0tqDR1DR1DR1DR1_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x2ed94, 0x1c52 bytes
    // dxgmms2.sys .text:0x38018, 0x20ba bytes
    // dxgmms2.sys .text:0x2ed14, 0x1c52 bytes
    //
    _o21(sdk::unknown_ptr) mc_template_k0tq_dr1dr1dr1dr1_etw_write_transfer;
    
    // [McTemplateK0tqq_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25cdc, 0x1c52 bytes
    // dxgmms2.sys .text:0x2f9e4, 0x20ba bytes
    // dxgmms2.sys .text:0x25c5c, 0x1c52 bytes
    //
    _o22(sdk::unknown_ptr) mc_template_k0tqq_etw_write_transfer;
    
    // [McTemplateK0txqqqtxtx_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x33990, 0x1c52 bytes
    // dxgmms2.sys .text:0x3c13c, 0x20ba bytes
    // dxgmms2.sys .text:0x33910, 0x1c52 bytes
    //
    _o23(sdk::unknown_ptr) mc_template_k0txqqqtxtx_etw_write_transfer;
    
    // [McTemplateK0xxpqhu_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x25d5c, 0x1c52 bytes
    // dxgmms2.sys .text:0x2fa64, 0x20ba bytes
    // dxgmms2.sys .text:0x25cdc, 0x1c52 bytes
    //
    _o24(sdk::unknown_ptr) mc_template_k0xxpqhu_etw_write_transfer;
    
    // [McTemplateK0xxpqhuuuuu_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x29774, 0x1c52 bytes
    // dxgmms2.sys .text:0x32fac, 0x20ba bytes
    // dxgmms2.sys .text:0x296f4, 0x1c52 bytes
    //
    _o25(sdk::unknown_ptr) mc_template_k0xxpqhuuuuu_etw_write_transfer;
    
    // [McTemplateK0xxqXR2_EtwWriteTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x28b68, 0x1c52 bytes
    // dxgmms2.sys .text:0x32cf8, 0x20ba bytes
    // dxgmms2.sys .text:0x28ae8, 0x1c52 bytes
    //
    _o26(sdk::unknown_ptr) mc_template_k0xxq_xr2_etw_write_transfer;
    
    // [MMIOFlipMultiPlaneOverlay3]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x42dc0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bdc8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c80, 0x1c52 bytes
    //
    _o27(sdk::unknown_ptr) mmio_flip_multi_plane_overlay3;
    
    // [MMIOFlipMultiPlaneOverlayDirtyRect]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x428f0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b8b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x427b0, 0x1c52 bytes
    //
    _o28(sdk::unknown_ptr) mmio_flip_multi_plane_overlay_dirty_rect;
    
    // [ReclaimAllocationForVPRCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xc9970, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xec66c, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc9f40, 0x1c52 bytes
    //
    _o29(sdk::unknown_ptr) reclaim_allocation_for_vpr_callback;
    
    // [SendWnfNotificationToVmProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x22858, 0x1c52 bytes
    // dxgmms2.sys .text:0x2cae4, 0x20ba bytes
    // dxgmms2.sys .text:0x227d8, 0x1c52 bytes
    //
    _o30(sdk::unknown_ptr) send_wnf_notification_to_vm_process;
    
    // [SubmitPagingToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x35c90, 0x1c52 bytes
    // dxgmms2.sys .text:0x3df24, 0x20ba bytes
    // dxgmms2.sys .text:0x35c10, 0x1c52 bytes
    //
    _o31(sdk::unknown_ptr) submit_paging_to_hw_queue;
    
    // [SubmitRenderToHwQueue]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x35f28, 0x1c52 bytes
    // dxgmms2.sys .text:0x3e1b0, 0x20ba bytes
    // dxgmms2.sys .text:0x35ea8, 0x1c52 bytes
    //
    _o32(sdk::unknown_ptr) submit_render_to_hw_queue;
    
    // [UncommitParavirtualizedAllocationOnHost]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb53cc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda860, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb599c, 0x1c52 bytes
    //
    _o33(sdk::unknown_ptr) uncommit_paravirtualized_allocation_on_host;
    
    // [UnlockParavirtualizedAllocationOnHost]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0xb5418, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xda8ac, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb59e8, 0x1c52 bytes
    //
    _o34(sdk::unknown_ptr) unlock_paravirtualized_allocation_on_host;
    
    // [AbortQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a088, 0x158b bytes
    // dxgmms2.sys .rdata:0x42ac0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ba78, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42980, 0x1c52 bytes
    //
    _o35(sdk::unknown_ptr) abort_queue_packet;
    
    // [ApertureCheckPattern]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x360f0, 0x158b bytes
    // dxgmms2.sys .data:0x510e8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e118, 0x20ba bytes
    // dxgmms2.sys .data:0x510e0, 0x1c52 bytes
    //
    _o36(sdk::unknown_ptr) aperture_check_pattern;
    
    // [BeginVidMmDereferenceObjectAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b540, 0x158b bytes
    // dxgmms2.sys .rdata:0x44600, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f160, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44600, 0x1c52 bytes
    //
    _o37(sdk::unknown_ptr) begin_vid_mm_dereference_object_async;
    
    // [BeginVidMmUnmapViewAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b590, 0x158b bytes
    // dxgmms2.sys .rdata:0x44680, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f1e0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44680, 0x1c52 bytes
    //
    _o38(sdk::unknown_ptr) begin_vid_mm_unmap_view_async;
    
    // [CheckUniqueGpuVaMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4d78c, 0x158b bytes
    // dxgmms2.sys PAGE:0x843ac, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9ffa0, 0x20ba bytes
    // dxgmms2.sys PAGE:0x8499c, 0x1c52 bytes
    //
    _o39(sdk::unknown_ptr) check_unique_gpu_va_mapping;
    
    // [CommitVirtualAddressEnd]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a008, 0x158b bytes
    // dxgmms2.sys .rdata:0x42a20, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b9c8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x428e0, 0x1c52 bytes
    //
    _o40(sdk::unknown_ptr) commit_virtual_address_end;
    
    // [CommitVirtualAddressStart]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a188, 0x158b bytes
    // dxgmms2.sys .rdata:0x42bf0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bbc8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ab0, 0x1c52 bytes
    //
    _o41(sdk::unknown_ptr) commit_virtual_address_start;
    
    // [CompareVadAddressInsideAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x658a8, 0x158b bytes
    // dxgmms2.sys PAGE:0x85b98, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa36bc, 0x20ba bytes
    // dxgmms2.sys PAGE:0x86188, 0x1c52 bytes
    //
    _o42(sdk::unknown_ptr) compare_vad_address_inside_avl;
    
    // [CompareVadByStartAddressAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65848, 0x158b bytes
    // dxgmms2.sys PAGE:0x850f4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa361c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x856e4, 0x1c52 bytes
    //
    _o43(sdk::unknown_ptr) compare_vad_by_start_address_avl;
    
    // [CompareVadRangeAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x50490, 0x158b bytes
    // dxgmms2.sys PAGE:0x841fc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fb98, 0x20ba bytes
    // dxgmms2.sys PAGE:0x847ec, 0x1c52 bytes
    //
    _o44(sdk::unknown_ptr) compare_vad_range_avl;
    
    // [CompareVadSizeAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x504c4, 0x158b bytes
    // dxgmms2.sys PAGE:0x84238, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x9fcb4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x84828, 0x1c52 bytes
    //
    _o45(sdk::unknown_ptr) compare_vad_size_avl;
    
    // [CompareVadSizeGreaterOrEqualAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x4e408, 0x158b bytes
    // dxgmms2.sys PAGE:0x84d74, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa1cb4, 0x20ba bytes
    // dxgmms2.sys PAGE:0x85364, 0x1c52 bytes
    //
    _o46(sdk::unknown_ptr) compare_vad_size_greater_or_equal_avl;
    
    // [CompareVadSizeLessOrEqualAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65468, 0x158b bytes
    // dxgmms2.sys PAGE:0x84ad8, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa2224, 0x20ba bytes
    // dxgmms2.sys PAGE:0x850c8, 0x1c52 bytes
    //
    _o47(sdk::unknown_ptr) compare_vad_size_less_or_equal_avl;
    
    // [CopyNodeStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x9f63c, 0x158b bytes
    // dxgmms2.sys PAGE:0xd20d4, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4180, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd2874, 0x1c52 bytes
    //
    _o48(sdk::unknown_ptr) copy_node_statistics;
    
    // [CopyVidPnSourceStatistics]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x71864, 0x158b bytes
    // dxgmms2.sys PAGE:0xd2158, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xf4204, 0x20ba bytes
    // dxgmms2.sys PAGE:0xd28f8, 0x1c52 bytes
    //
    _o49(sdk::unknown_ptr) copy_vid_pn_source_statistics;
    
    // [CreateGpuVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b6f0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44910, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f4a0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44910, 0x1c52 bytes
    //
    _o50(sdk::unknown_ptr) create_gpu_virtual_address_allocator;
    
    // [CreateGpuVirtualAddressRange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29e08, 0x158b bytes
    // dxgmms2.sys .rdata:0x44430, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b7a0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44430, 0x1c52 bytes
    //
    _o51(sdk::unknown_ptr) create_gpu_virtual_address_range;
    
    // [CreatePageDirectory]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65794, 0x158b bytes
    // dxgmms2.sys PAGE:0x81dec, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x99430, 0x20ba bytes
    // dxgmms2.sys PAGE:0x823dc, 0x1c52 bytes
    //
    _o52(sdk::unknown_ptr) create_page_directory;
    
    // [CreatePageTable]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x65624, 0x158b bytes
    // dxgmms2.sys PAGE:0x82500, 0x1c52 bytes
    // dxgmms2.sys PAGE:0x98cb8, 0x20ba bytes
    // dxgmms2.sys PAGE:0x82af0, 0x1c52 bytes
    //
    _o53(sdk::unknown_ptr) create_page_table;
    
    // [DeferredSetVprCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x968d0, 0x158b bytes
    // dxgmms2.sys PAGE:0xc5910, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe8ca0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc5ee0, 0x1c52 bytes
    //
    _o54(sdk::unknown_ptr) deferred_set_vpr_callback;
    
    // [DestroyGpuVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b740, 0x158b bytes
    // dxgmms2.sys .rdata:0x44990, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f528, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44998, 0x1c52 bytes
    //
    _o55(sdk::unknown_ptr) destroy_gpu_virtual_address_allocator;
    
    // [DestroyGpuVirtualAddressRange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a338, 0x158b bytes
    // dxgmms2.sys .rdata:0x448d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bdb8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x448d0, 0x1c52 bytes
    //
    _o56(sdk::unknown_ptr) destroy_gpu_virtual_address_range;
    
    // [EndVidMmDereferenceObjectAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b420, 0x158b bytes
    // dxgmms2.sys .rdata:0x444a0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4efc0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x444a0, 0x1c52 bytes
    //
    _o57(sdk::unknown_ptr) end_vid_mm_dereference_object_async;
    
    // [EndVidMmUnmapViewAsync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b730, 0x158b bytes
    // dxgmms2.sys .rdata:0x44970, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f508, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44978, 0x1c52 bytes
    //
    _o58(sdk::unknown_ptr) end_vid_mm_unmap_view_async;
    
    // [EventAddDmaBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a0f8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b40, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bb08, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a00, 0x1c52 bytes
    //
    _o59(sdk::unknown_ptr) event_add_dma_buffer;
    
    // [EventAllocationFault]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a3a8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42e20, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4be28, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ce0, 0x1c52 bytes
    //
    _o60(sdk::unknown_ptr) event_allocation_fault;
    
    // [EventApertureMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a278, 0x158b bytes
    // dxgmms2.sys .rdata:0x42cf0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bcc8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42bb0, 0x1c52 bytes
    //
    _o61(sdk::unknown_ptr) event_aperture_mapping;
    
    // [EventApertureUnmapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f48, 0x158b bytes
    // dxgmms2.sys .rdata:0x42960, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b918, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42820, 0x1c52 bytes
    //
    _o62(sdk::unknown_ptr) event_aperture_unmapping;
    
    // [EventAttemptPreemption]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a158, 0x158b bytes
    // dxgmms2.sys .rdata:0x42bc0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bb98, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a80, 0x1c52 bytes
    //
    _o63(sdk::unknown_ptr) event_attempt_preemption;
    
    // [EventBlockGpuAccess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29dc8, 0x158b bytes
    // dxgmms2.sys .rdata:0x427b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b760, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42670, 0x1c52 bytes
    //
    _o64(sdk::unknown_ptr) event_block_gpu_access;
    
    // [EventCancelFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a1f8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c70, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc48, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b30, 0x1c52 bytes
    //
    _o65(sdk::unknown_ptr) event_cancel_flip;
    
    // [EventChangeInProcessPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f88, 0x158b bytes
    // dxgmms2.sys .rdata:0x429a0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b958, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42860, 0x1c52 bytes
    //
    _o66(sdk::unknown_ptr) event_change_in_process_priority;
    
    // [EventChangePriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a2e8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d60, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd58, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c20, 0x1c52 bytes
    //
    _o67(sdk::unknown_ptr) event_change_priority;
    
    // [EventClearFlipDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b580, 0x158b bytes
    // dxgmms2.sys .rdata:0x44670, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f1d0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44670, 0x1c52 bytes
    //
    _o68(sdk::unknown_ptr) event_clear_flip_device;
    
    // [EventCompleteAllocationMigration]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29ea8, 0x158b bytes
    // dxgmms2.sys .rdata:0x428b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b860, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42770, 0x1c52 bytes
    //
    _o69(sdk::unknown_ptr) event_complete_allocation_migration;
    
    // [EventCompleteOfferAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a268, 0x158b bytes
    // dxgmms2.sys .rdata:0x42ce0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bcb8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ba0, 0x1c52 bytes
    //
    _o70(sdk::unknown_ptr) event_complete_offer_allocation;
    
    // [EventCreateProcessAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a3c8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42e40, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4be48, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42d00, 0x1c52 bytes
    //
    _o71(sdk::unknown_ptr) event_create_process_allocation;
    
    // [EventCreateProcessAllocationDetails]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f58, 0x158b bytes
    // dxgmms2.sys .rdata:0x42970, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b928, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42830, 0x1c52 bytes
    //
    _o72(sdk::unknown_ptr) event_create_process_allocation_details;
    
    // [EventCreateSyncPoint]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a238, 0x158b bytes
    // dxgmms2.sys .rdata:0x42cb0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc88, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b70, 0x1c52 bytes
    //
    _o73(sdk::unknown_ptr) event_create_sync_point;
    
    // [EventDelayContextScheduling]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a318, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d90, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd98, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c50, 0x1c52 bytes
    //
    _o74(sdk::unknown_ptr) event_delay_context_scheduling;
    
    // [EventDestroyProcessAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a2d8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d50, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd48, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c10, 0x1c52 bytes
    //
    _o75(sdk::unknown_ptr) event_destroy_process_allocation;
    
    // [EventDestroyProcessAllocationDetails]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29e58, 0x158b bytes
    // dxgmms2.sys .rdata:0x42850, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b810, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42710, 0x1c52 bytes
    //
    _o76(sdk::unknown_ptr) event_destroy_process_allocation_details;
    
    // [EventDisableVSync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a0e8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b30, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4baf8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x429f0, 0x1c52 bytes
    //
    _o77(sdk::unknown_ptr) event_disable_v_sync;
    
    // [EventDiscardAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f38, 0x158b bytes
    // dxgmms2.sys .rdata:0x42950, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b908, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42810, 0x1c52 bytes
    //
    _o78(sdk::unknown_ptr) event_discard_allocation;
    
    // [EventDmaDpcComplete]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a298, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d10, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bce8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42bd0, 0x1c52 bytes
    //
    _o79(sdk::unknown_ptr) event_dma_dpc_complete;
    
    // [EventDmaIsrComplete]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b4f0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44590, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f0f0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44590, 0x1c52 bytes
    //
    _o80(sdk::unknown_ptr) event_dma_isr_complete;
    
    // [EventDmaPoolTrimmingPolicy]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a288, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d00, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bcd8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42bc0, 0x1c52 bytes
    //
    _o81(sdk::unknown_ptr) event_dma_pool_trimming_policy;
    
    // [EventDmaSubmit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a358, 0x158b bytes
    // dxgmms2.sys .rdata:0x42de0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bde8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ca0, 0x1c52 bytes
    //
    _o82(sdk::unknown_ptr) event_dma_submit;
    
    // [EventEnableVSync]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a1c8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c40, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc18, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b00, 0x1c52 bytes
    //
    _o83(sdk::unknown_ptr) event_enable_v_sync;
    
    // [EventEndReserveResource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a258, 0x158b bytes
    // dxgmms2.sys .rdata:0x42cd0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bca8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b90, 0x1c52 bytes
    //
    _o84(sdk::unknown_ptr) event_end_reserve_resource;
    
    // [EventEnterWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29e88, 0x158b bytes
    // dxgmms2.sys .rdata:0x42890, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b840, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42750, 0x1c52 bytes
    //
    _o85(sdk::unknown_ptr) event_enter_worker_thread;
    
    // [EventEvictAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29fe8, 0x158b bytes
    // dxgmms2.sys .rdata:0x429f0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b9a8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x428b0, 0x1c52 bytes
    //
    _o86(sdk::unknown_ptr) event_evict_allocation;
    
    // [EventExitWorkerThread]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f98, 0x158b bytes
    // dxgmms2.sys .rdata:0x429b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b968, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42870, 0x1c52 bytes
    //
    _o87(sdk::unknown_ptr) event_exit_worker_thread;
    
    // [EventHistoryBuffer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b700, 0x158b bytes
    // dxgmms2.sys .rdata:0x44920, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f4b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44920, 0x1c52 bytes
    //
    _o88(sdk::unknown_ptr) event_history_buffer;
    
    // [EventIndependentFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a0a8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42af0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bab8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x429b0, 0x1c52 bytes
    //
    _o89(sdk::unknown_ptr) event_independent_flip;
    
    // [EventIndependentFlipTransition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a1e8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c60, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc38, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b20, 0x1c52 bytes
    //
    _o90(sdk::unknown_ptr) event_independent_flip_transition;
    
    // [EventLock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a198, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c00, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bbd8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ac0, 0x1c52 bytes
    //
    _o91(sdk::unknown_ptr) event_lock;
    
    // [EventLock2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b400, 0x158b bytes
    // dxgmms2.sys .rdata:0x44460, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef80, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44460, 0x1c52 bytes
    //
    _o92(sdk::unknown_ptr) event_lock2;
    
    // [EventLockAllocationBackingStore]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b720, 0x158b bytes
    // dxgmms2.sys .rdata:0x44960, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f4f0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44960, 0x1c52 bytes
    //
    _o93(sdk::unknown_ptr) event_lock_allocation_backing_store;
    
    // [EventMarkAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29ff8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42a00, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b9b8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x428c0, 0x1c52 bytes
    //
    _o94(sdk::unknown_ptr) event_mark_allocation;
    
    // [EventMemoryTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a228, 0x158b bytes
    // dxgmms2.sys .rdata:0x42ca0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc78, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b60, 0x1c52 bytes
    //
    _o95(sdk::unknown_ptr) event_memory_transfer;
    
    // [EventMigrateAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a208, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c80, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc58, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b40, 0x1c52 bytes
    //
    _o96(sdk::unknown_ptr) event_migrate_allocation;
    
    // [EventMMIOFlip]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a348, 0x158b bytes
    // dxgmms2.sys .rdata:0x42dd0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bdd8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c90, 0x1c52 bytes
    //
    _o97(sdk::unknown_ptr) event_mmio_flip;
    
    // [EventOfferAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29fc8, 0x158b bytes
    // dxgmms2.sys .rdata:0x429d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b988, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42890, 0x1c52 bytes
    //
    _o98(sdk::unknown_ptr) event_offer_allocation;
    
    // [EventPageInAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a0d8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b20, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bae8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x429e0, 0x1c52 bytes
    //
    _o99(sdk::unknown_ptr) event_page_in_allocation;
    
    // [EventPagingEndPreparation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a128, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b90, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bb68, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a50, 0x1c52 bytes
    //
    _p00(sdk::unknown_ptr) event_paging_end_preparation;
    
    // [EventPagingOpDiscard]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b3f0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44440, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef50, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44440, 0x1c52 bytes
    //
    _p01(sdk::unknown_ptr) event_paging_op_discard;
    
    // [EventPagingOpFill]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b4d0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44570, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f0d0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44570, 0x1c52 bytes
    //
    _p02(sdk::unknown_ptr) event_paging_op_fill;
    
    // [EventPagingOpFlushTlb]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b550, 0x158b bytes
    // dxgmms2.sys .rdata:0x44620, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f180, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44620, 0x1c52 bytes
    //
    _p03(sdk::unknown_ptr) event_paging_op_flush_tlb;
    
    // [EventPagingOpInitContextResource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b440, 0x158b bytes
    // dxgmms2.sys .rdata:0x444c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4eff0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x444c0, 0x1c52 bytes
    //
    _p04(sdk::unknown_ptr) event_paging_op_init_context_resource;
    
    // [EventPagingOpMapApertureSegment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b6b0, 0x158b bytes
    // dxgmms2.sys .rdata:0x448b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f450, 0x20ba bytes
    // dxgmms2.sys .rdata:0x448b0, 0x1c52 bytes
    //
    _p05(sdk::unknown_ptr) event_paging_op_map_aperture_segment;
    
    // [EventPagingOpNotifyResidency]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b620, 0x158b bytes
    // dxgmms2.sys .rdata:0x447e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f380, 0x20ba bytes
    // dxgmms2.sys .rdata:0x447e0, 0x1c52 bytes
    //
    _p06(sdk::unknown_ptr) event_paging_op_notify_residency;
    
    // [EventPagingOpReadPhysical]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b660, 0x158b bytes
    // dxgmms2.sys .rdata:0x44850, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f3f0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44850, 0x1c52 bytes
    //
    _p07(sdk::unknown_ptr) event_paging_op_read_physical;
    
    // [EventPagingOpSpecialLockTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b5b0, 0x158b bytes
    // dxgmms2.sys .rdata:0x446c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f220, 0x20ba bytes
    // dxgmms2.sys .rdata:0x446c0, 0x1c52 bytes
    //
    _p08(sdk::unknown_ptr) event_paging_op_special_lock_transfer;
    
    // [EventPagingOpSysmemCommit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b410, 0x158b bytes
    // dxgmms2.sys .rdata:0x44470, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef90, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44470, 0x1c52 bytes
    //
    _p09(sdk::unknown_ptr) event_paging_op_sysmem_commit;
    
    // [EventPagingOpSysmemUncommit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b460, 0x158b bytes
    // dxgmms2.sys .rdata:0x444e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f020, 0x20ba bytes
    // dxgmms2.sys .rdata:0x444e0, 0x1c52 bytes
    //
    _p10(sdk::unknown_ptr) event_paging_op_sysmem_uncommit;
    
    // [EventPagingOpTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b6c0, 0x158b bytes
    // dxgmms2.sys .rdata:0x448c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f460, 0x20ba bytes
    // dxgmms2.sys .rdata:0x448c0, 0x1c52 bytes
    //
    _p11(sdk::unknown_ptr) event_paging_op_transfer;
    
    // [EventPagingOpUnmapApertureSegment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b680, 0x158b bytes
    // dxgmms2.sys .rdata:0x44870, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f410, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44870, 0x1c52 bytes
    //
    _p12(sdk::unknown_ptr) event_paging_op_unmap_aperture_segment;
    
    // [EventPagingOpUpdateContextAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b3e0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44420, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef40, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44420, 0x1c52 bytes
    //
    _p13(sdk::unknown_ptr) event_paging_op_update_context_allocation;
    
    // [EventPagingOpUpdatePageTable]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b6d0, 0x158b bytes
    // dxgmms2.sys .rdata:0x448e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f470, 0x20ba bytes
    // dxgmms2.sys .rdata:0x448e0, 0x1c52 bytes
    //
    _p14(sdk::unknown_ptr) event_paging_op_update_page_table;
    
    // [EventPagingOpVirtualFill]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b560, 0x158b bytes
    // dxgmms2.sys .rdata:0x44650, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f1b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44650, 0x1c52 bytes
    //
    _p15(sdk::unknown_ptr) event_paging_op_virtual_fill;
    
    // [EventPagingOpVirtualTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b4a0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44540, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f090, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44540, 0x1c52 bytes
    //
    _p16(sdk::unknown_ptr) event_paging_op_virtual_transfer;
    
    // [EventPagingOpWritePhysical]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b710, 0x158b bytes
    // dxgmms2.sys .rdata:0x44940, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f4d0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44940, 0x1c52 bytes
    //
    _p17(sdk::unknown_ptr) event_paging_op_write_physical;
    
    // [EventPagingQueueComplete]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a378, 0x158b bytes
    // dxgmms2.sys .rdata:0x42e00, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4be08, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42cc0, 0x1c52 bytes
    //
    _p18(sdk::unknown_ptr) event_paging_queue_complete;
    
    // [EventPagingQueueSelect]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a308, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d80, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd88, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c40, 0x1c52 bytes
    //
    _p19(sdk::unknown_ptr) event_paging_queue_select;
    
    // [EventPagingQueueSubmit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b630, 0x158b bytes
    // dxgmms2.sys .rdata:0x447f0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f390, 0x20ba bytes
    // dxgmms2.sys .rdata:0x447f0, 0x1c52 bytes
    //
    _p20(sdk::unknown_ptr) event_paging_queue_submit;
    
    // [EventPagingQueueSubmitSystem]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b670, 0x158b bytes
    // dxgmms2.sys .rdata:0x44860, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f400, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44860, 0x1c52 bytes
    //
    _p21(sdk::unknown_ptr) event_paging_queue_submit_system;
    
    // [EventPagingStartPreparation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f28, 0x158b bytes
    // dxgmms2.sys .rdata:0x42940, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b8f8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42800, 0x1c52 bytes
    //
    _p22(sdk::unknown_ptr) event_paging_start_preparation;
    
    // [EventProcessOfferAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29e48, 0x158b bytes
    // dxgmms2.sys .rdata:0x42840, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b800, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42700, 0x1c52 bytes
    //
    _p23(sdk::unknown_ptr) event_process_offer_allocation;
    
    // [EventProcessPolicyChange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a0c8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b10, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bad8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x429d0, 0x1c52 bytes
    //
    _p24(sdk::unknown_ptr) event_process_policy_change;
    
    // [EventQueueComplete]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a2a8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d20, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bcf8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42be0, 0x1c52 bytes
    //
    _p25(sdk::unknown_ptr) event_queue_complete;
    
    // [EventQueueSelect]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29de8, 0x158b bytes
    // dxgmms2.sys .rdata:0x427d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b780, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42690, 0x1c52 bytes
    //
    _p26(sdk::unknown_ptr) event_queue_select;
    
    // [EventQueueSubmit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29db8, 0x158b bytes
    // dxgmms2.sys .rdata:0x427a0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b750, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42660, 0x1c52 bytes
    //
    _p27(sdk::unknown_ptr) event_queue_submit;
    
    // [EventReclaimAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a1b8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c20, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bbf8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ae0, 0x1c52 bytes
    //
    _p28(sdk::unknown_ptr) event_reclaim_allocation;
    
    // [EventRecordGpuWork]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a1d8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c50, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc28, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b10, 0x1c52 bytes
    //
    _p29(sdk::unknown_ptr) event_record_gpu_work;
    
    // [EventRecycleRangeCreate]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b5c0, 0x158b bytes
    // dxgmms2.sys .rdata:0x446d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f240, 0x20ba bytes
    // dxgmms2.sys .rdata:0x446d0, 0x1c52 bytes
    //
    _p30(sdk::unknown_ptr) event_recycle_range_create;
    
    // [EventRecycleRangeDestroy]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29df8, 0x158b bytes
    // dxgmms2.sys .rdata:0x427e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b790, 0x20ba bytes
    // dxgmms2.sys .rdata:0x426a0, 0x1c52 bytes
    //
    _p31(sdk::unknown_ptr) event_recycle_range_destroy;
    
    // [EventRecycleRangeTransition]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b520, 0x158b bytes
    // dxgmms2.sys .rdata:0x42a10, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f130, 0x20ba bytes
    // dxgmms2.sys .rdata:0x428d0, 0x1c52 bytes
    //
    _p32(sdk::unknown_ptr) event_recycle_range_transition;
    
    // [EventReferenceAllocations]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29ec8, 0x158b bytes
    // dxgmms2.sys .rdata:0x428d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b880, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42790, 0x1c52 bytes
    //
    _p33(sdk::unknown_ptr) event_reference_allocations;
    
    // [EventReferenceWrittenPrimaries]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b5d0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44710, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f290, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44710, 0x1c52 bytes
    //
    _p34(sdk::unknown_ptr) event_reference_written_primaries;
    
    // [EventReportCommittedAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f78, 0x158b bytes
    // dxgmms2.sys .rdata:0x42990, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b948, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42850, 0x1c52 bytes
    //
    _p35(sdk::unknown_ptr) event_report_committed_allocation;
    
    // [EventReportCommittedGlobalAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a1a8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c10, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bbe8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42ad0, 0x1c52 bytes
    //
    _p36(sdk::unknown_ptr) event_report_committed_global_allocation;
    
    // [EventReportOfferAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a2c8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d40, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd38, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c00, 0x1c52 bytes
    //
    _p37(sdk::unknown_ptr) event_report_offer_allocation;
    
    // [EventReportSegment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f08, 0x158b bytes
    // dxgmms2.sys .rdata:0x42920, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b8e8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x427e0, 0x1c52 bytes
    //
    _p38(sdk::unknown_ptr) event_report_segment;
    
    // [EventResetBackingStore]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29ee8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42900, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b8c8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x427c0, 0x1c52 bytes
    //
    _p39(sdk::unknown_ptr) event_reset_backing_store;
    
    // [EventRetireSyncPoint]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a2b8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d30, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd18, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42bf0, 0x1c52 bytes
    //
    _p40(sdk::unknown_ptr) event_retire_sync_point;
    
    // [EventSetAllocationPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a398, 0x158b bytes
    // dxgmms2.sys .rdata:0x42e10, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4be18, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42cd0, 0x1c52 bytes
    //
    _p41(sdk::unknown_ptr) event_set_allocation_priority;
    
    // [EventSetProcessWorkingSet]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a028, 0x158b bytes
    // dxgmms2.sys .rdata:0x42a50, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b9f8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42910, 0x1c52 bytes
    //
    _p42(sdk::unknown_ptr) event_set_process_working_set;
    
    // [EventSignalQueueSubmit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a2f8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42d70, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bd78, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42c30, 0x1c52 bytes
    //
    _p43(sdk::unknown_ptr) event_signal_queue_submit;
    
    // [EventStartReserveResource]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a038, 0x158b bytes
    // dxgmms2.sys .rdata:0x42a60, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ba08, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42920, 0x1c52 bytes
    //
    _p44(sdk::unknown_ptr) event_start_reserve_resource;
    
    // [EventTerminateAllocation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29dd8, 0x158b bytes
    // dxgmms2.sys .rdata:0x427c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b770, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42680, 0x1c52 bytes
    //
    _p45(sdk::unknown_ptr) event_terminate_allocation;
    
    // [EventUnlock]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a218, 0x158b bytes
    // dxgmms2.sys .rdata:0x42c90, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bc68, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42b50, 0x1c52 bytes
    //
    _p46(sdk::unknown_ptr) event_unlock;
    
    // [EventUnlock2]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29f18, 0x158b bytes
    // dxgmms2.sys .rdata:0x42930, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f060, 0x20ba bytes
    // dxgmms2.sys .rdata:0x427f0, 0x1c52 bytes
    //
    _p47(sdk::unknown_ptr) event_unlock2;
    
    // [EventUnlockAllocationBackingStore]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b5e0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44740, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f2c0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44740, 0x1c52 bytes
    //
    _p48(sdk::unknown_ptr) event_unlock_allocation_backing_store;
    
    // [EventUnreset]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29e28, 0x158b bytes
    // dxgmms2.sys .rdata:0x42810, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b7d0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x426d0, 0x1c52 bytes
    //
    _p49(sdk::unknown_ptr) event_unreset;
    
    // [EventUnwaitCpuWaiter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29eb8, 0x158b bytes
    // dxgmms2.sys .rdata:0x428c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b870, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42780, 0x1c52 bytes
    //
    _p50(sdk::unknown_ptr) event_unwait_cpu_waiter;
    
    // [EventUnwaitQueuePacket]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a108, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b60, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bb28, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a20, 0x1c52 bytes
    //
    _p51(sdk::unknown_ptr) event_unwait_queue_packet;
    
    // [EventUpdateContextRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29ed8, 0x158b bytes
    // dxgmms2.sys .rdata:0x428e0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b890, 0x20ba bytes
    // dxgmms2.sys .rdata:0x427a0, 0x1c52 bytes
    //
    _p52(sdk::unknown_ptr) event_update_context_running_time;
    
    // [EventUpdateContextStatus]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a3d8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42e50, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4be58, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42d10, 0x1c52 bytes
    //
    _p53(sdk::unknown_ptr) event_update_context_status;
    
    // [EventUpdateVPR]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29fa8, 0x158b bytes
    // dxgmms2.sys .rdata:0x429c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4b978, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42880, 0x1c52 bytes
    //
    _p54(sdk::unknown_ptr) event_update_vpr;
    
    // [EventVSyncDPCMultiPlane]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a3b8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42e30, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4be38, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42cf0, 0x1c52 bytes
    //
    _p55(sdk::unknown_ptr) event_v_sync_dpc_multi_plane;
    
    // [EventVSyncInterrupt]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a048, 0x158b bytes
    // dxgmms2.sys .rdata:0x42a80, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ba38, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42940, 0x1c52 bytes
    //
    _p56(sdk::unknown_ptr) event_v_sync_interrupt;
    
    // [EventVidMmEvict]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b5f0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44770, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f2f0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44770, 0x1c52 bytes
    //
    _p57(sdk::unknown_ptr) event_vid_mm_evict;
    
    // [EventVidMmMakeResident]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b530, 0x158b bytes
    // dxgmms2.sys .rdata:0x445f0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f150, 0x20ba bytes
    // dxgmms2.sys .rdata:0x445f0, 0x1c52 bytes
    //
    _p58(sdk::unknown_ptr) event_vid_mm_make_resident;
    
    // [EventVidMmProcessBudgetChange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b4c0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44560, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f0b0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44560, 0x1c52 bytes
    //
    _p59(sdk::unknown_ptr) event_vid_mm_process_budget_change;
    
    // [EventVidMmProcessCommitmentChange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b570, 0x158b bytes
    // dxgmms2.sys .rdata:0x44660, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f1c0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44660, 0x1c52 bytes
    //
    _p60(sdk::unknown_ptr) event_vid_mm_process_commitment_change;
    
    // [EventVidMmProcessDemotedCommitmentChange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b610, 0x158b bytes
    // dxgmms2.sys .rdata:0x44790, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f310, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44790, 0x1c52 bytes
    //
    _p61(sdk::unknown_ptr) event_vid_mm_process_demoted_commitment_change;
    
    // [EventVidMmProcessUsageChange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b450, 0x158b bytes
    // dxgmms2.sys .rdata:0x42880, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f010, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42740, 0x1c52 bytes
    //
    _p62(sdk::unknown_ptr) event_vid_mm_process_usage_change;
    
    // [EventVidMmProfilerEnter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a098, 0x158b bytes
    // dxgmms2.sys .rdata:0x42ae0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4baa8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x429a0, 0x1c52 bytes
    //
    _p63(sdk::unknown_ptr) event_vid_mm_profiler_enter;
    
    // [EventVidMmProfilerExit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a0b8, 0x158b bytes
    // dxgmms2.sys .rdata:0x42b00, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bac8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x429c0, 0x1c52 bytes
    //
    _p64(sdk::unknown_ptr) event_vid_mm_profiler_exit;
    
    // [EventVidMmResumeDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b4e0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44580, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f0e0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44580, 0x1c52 bytes
    //
    _p65(sdk::unknown_ptr) event_vid_mm_resume_device;
    
    // [EventVidMmSelectOperation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b490, 0x158b bytes
    // dxgmms2.sys .rdata:0x44520, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f070, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44520, 0x1c52 bytes
    //
    _p66(sdk::unknown_ptr) event_vid_mm_select_operation;
    
    // [EventVidMmSuspendDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a388, 0x158b bytes
    // dxgmms2.sys .rdata:0x44950, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f4e0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44950, 0x1c52 bytes
    //
    _p67(sdk::unknown_ptr) event_vid_mm_suspend_device;
    
    // [EventVidMmTryOperation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b600, 0x158b bytes
    // dxgmms2.sys .rdata:0x44780, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f300, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44780, 0x1c52 bytes
    //
    _p68(sdk::unknown_ptr) event_vid_mm_try_operation;
    
    // [EventVidMmYieldDevice]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b5a0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44690, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f1f0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44690, 0x1c52 bytes
    //
    _p69(sdk::unknown_ptr) event_vid_mm_yield_device;
    
    // [EventWaitQueueSubmit]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a168, 0x158b bytes
    // dxgmms2.sys .rdata:0x42bd0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bba8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a90, 0x1c52 bytes
    //
    _p70(sdk::unknown_ptr) event_wait_queue_submit;
    
    // [EventYieldAccumulateRunningTime]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a178, 0x158b bytes
    // dxgmms2.sys .rdata:0x42be0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bbb8, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42aa0, 0x1c52 bytes
    //
    _p71(sdk::unknown_ptr) event_yield_accumulate_running_time;
    
    // [EventYieldCancelExpirationTimer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29d78, 0x158b bytes
    // dxgmms2.sys .rdata:0x44840, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f3e0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44840, 0x1c52 bytes
    //
    _p72(sdk::unknown_ptr) event_yield_cancel_expiration_timer;
    
    // [EventYieldConditionEvaluation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x29e18, 0x158b bytes
    // dxgmms2.sys .rdata:0x44450, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ef60, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44450, 0x1c52 bytes
    //
    _p73(sdk::unknown_ptr) event_yield_condition_evaluation;
    
    // [EventYieldSetExpirationTimer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b690, 0x158b bytes
    // dxgmms2.sys .rdata:0x44880, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f420, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44880, 0x1c52 bytes
    //
    _p74(sdk::unknown_ptr) event_yield_set_expiration_timer;
    
    // [EventYieldStartAdapter]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b6e0, 0x158b bytes
    // dxgmms2.sys .rdata:0x44900, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f490, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44900, 0x1c52 bytes
    //
    _p75(sdk::unknown_ptr) event_yield_start_adapter;
    
    // [EventYieldStartNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b650, 0x158b bytes
    // dxgmms2.sys .rdata:0x44830, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f3d0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44830, 0x1c52 bytes
    //
    _p76(sdk::unknown_ptr) event_yield_start_node;
    
    // [EventYieldStopNode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b430, 0x158b bytes
    // dxgmms2.sys .rdata:0x444b0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4efd0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x444b0, 0x1c52 bytes
    //
    _p77(sdk::unknown_ptr) event_yield_stop_node;
    
    // [EvictAllocationCallback]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x975ac, 0x158b bytes
    // dxgmms2.sys PAGE:0xc7bbc, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xea9b8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc818c, 0x1c52 bytes
    //
    _p78(sdk::unknown_ptr) evict_allocation_callback;
    
    // [FreeVadAvl]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x659a8, 0x158b bytes
    // dxgmms2.sys PAGE:0x85d0c, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa3b7c, 0x20ba bytes
    // dxgmms2.sys PAGE:0x862fc, 0x1c52 bytes
    //
    _p79(sdk::unknown_ptr) free_vad_avl;
    
    // [g_DemotedHighPriAllocDebugMode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x360e8, 0x158b bytes
    // dxgmms2.sys .data:0x510e0, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e110, 0x20ba bytes
    // dxgmms2.sys .data:0x510d8, 0x1c52 bytes
    //
    _p80(sdk::unknown_ptr) g_demoted_high_pri_alloc_debug_mode;
    
    // [g_ErrorDeviceDebugMode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36100, 0x158b bytes
    // dxgmms2.sys .data:0x510f8, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e128, 0x20ba bytes
    // dxgmms2.sys .data:0x510f0, 0x1c52 bytes
    //
    _p81(sdk::unknown_ptr) g_error_device_debug_mode;
    
    // [g_pVidMmSystemProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36108, 0x158b bytes
    // dxgmms2.sys .data:0x51180, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e1c0, 0x20ba bytes
    // dxgmms2.sys .data:0x51180, 0x1c52 bytes
    //
    _p82(sdk::unknown_ptr) g_p_vid_mm_system_process;
    
    // [g_pVidSchSystemProcess]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36110, 0x158b bytes
    // dxgmms2.sys .data:0x51188, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e1c8, 0x20ba bytes
    // dxgmms2.sys .data:0x51188, 0x1c52 bytes
    //
    _p83(sdk::unknown_ptr) g_p_vid_sch_system_process;
    
    // [g_PageFaultDebugMode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x366cc, 0x158b bytes
    // dxgmms2.sys .data:0x51550, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e5d0, 0x20ba bytes
    // dxgmms2.sys .data:0x51550, 0x1c52 bytes
    //
    _p84(sdk::unknown_ptr) g_page_fault_debug_mode;
    
    // [g_UnrecoverablePagingFailureDebugMode]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x366c8, 0x158b bytes
    // dxgmms2.sys .data:0x51878, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e930, 0x20ba bytes
    // dxgmms2.sys .data:0x51878, 0x1c52 bytes
    //
    _p85(sdk::unknown_ptr) g_unrecoverable_paging_failure_debug_mode;
    
    // [g_VidMmAsyncOpPendingCount]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x364f0, 0x158b bytes
    // dxgmms2.sys .data:0x51794, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6a8, 0x20ba bytes
    // dxgmms2.sys .data:0x51608, 0x1c52 bytes
    //
    _p86(sdk::unknown_ptr) g_vid_mm_async_op_pending_count;
    
    // [gVidMmLowResourceAccumulated]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x36540, 0x158b bytes
    // dxgmms2.sys .data:0x51620, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6f0, 0x20ba bytes
    // dxgmms2.sys .data:0x51640, 0x1c52 bytes
    //
    _p87(sdk::unknown_ptr) g_vid_mm_low_resource_accumulated;
    
    // [GetVidMmAllocFromOwner]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x1f04, 0x158b bytes
    // dxgmms2.sys .text:0x13b0c, 0x1c52 bytes
    // dxgmms2.sys .text:0x24d8, 0x20ba bytes
    // dxgmms2.sys .text:0x13b0c, 0x1c52 bytes
    //
    _p88(sdk::unknown_ptr) get_vid_mm_alloc_from_owner;
    
    // [GetVidMmGlobalAllocFromOwner]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x12ba4, 0x158b bytes
    // dxgmms2.sys .text:0x13ae0, 0x1c52 bytes
    // dxgmms2.sys .text:0x1dd1a, 0x20ba bytes
    // dxgmms2.sys .text:0x13ae0, 0x1c52 bytes
    //
    _p89(sdk::unknown_ptr) get_vid_mm_global_alloc_from_owner;
    
    // [gs_PhysicalAddressZero]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a890, 0x158b bytes
    // dxgmms2.sys .rdata:0x43490, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4d110, 0x20ba bytes
    // dxgmms2.sys .rdata:0x43490, 0x1c52 bytes
    //
    _p90(sdk::unknown_ptr) gs_physical_address_zero;
    
    // [gulPreemptionQuantumMultiplierTableByPriorityClass]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a898, 0x158b bytes
    // dxgmms2.sys .rdata:0x43510, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4d118, 0x20ba bytes
    // dxgmms2.sys .rdata:0x43510, 0x1c52 bytes
    //
    _p91(sdk::unknown_ptr) gul_preemption_quantum_multiplier_table_by_priority_class;
    
    // [gulPriorityMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a4c0, 0x158b bytes
    // dxgmms2.sys .rdata:0x43020, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4cbc0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x43020, 0x1c52 bytes
    //
    _p92(sdk::unknown_ptr) gul_priority_mapping;
    
    // [gulPriorityToPriorityClass]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a630, 0x158b bytes
    // dxgmms2.sys .rdata:0x43250, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4cdf0, 0x20ba bytes
    // dxgmms2.sys .rdata:0x43250, 0x1c52 bytes
    //
    _p93(sdk::unknown_ptr) gul_priority_to_priority_class;
    
    // [gulPriorityToYieldPriorityBand]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a440, 0x158b bytes
    // dxgmms2.sys .rdata:0x42fa0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4cb40, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42fa0, 0x1c52 bytes
    //
    _p94(sdk::unknown_ptr) gul_priority_to_yield_priority_band;
    
    // [gulPublicPriorityToSchedulingPriority]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a6b0, 0x158b bytes
    // dxgmms2.sys .rdata:0x432d0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4ce70, 0x20ba bytes
    // dxgmms2.sys .rdata:0x432d0, 0x1c52 bytes
    //
    _p95(sdk::unknown_ptr) gul_public_priority_to_scheduling_priority;
    
    // [gulQuantumMultiplierTableByPriorityClass]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a8b0, 0x158b bytes
    // dxgmms2.sys .rdata:0x43528, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4d130, 0x20ba bytes
    // dxgmms2.sys .rdata:0x43528, 0x1c52 bytes
    //
    _p96(sdk::unknown_ptr) gul_quantum_multiplier_table_by_priority_class;
    
    // [gulSyncObjTimeouted]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .data:0x366d8, 0x158b bytes
    // dxgmms2.sys .data:0x51888, 0x1c52 bytes
    // dxgmms2.sys .data:0x6e6c0, 0x20ba bytes
    // dxgmms2.sys .data:0x51888, 0x1c52 bytes
    //
    _p97(sdk::unknown_ptr) gul_sync_obj_timeouted;
    
    // [IsAllocationOffered]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x49540, 0x158b bytes
    // dxgmms2.sys PAGE:0xc84b0, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xa39a0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc8a80, 0x1c52 bytes
    //
    _p98(sdk::unknown_ptr) is_allocation_offered;
    
    // [IsRangeValid]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x89e0c, 0x158b bytes
    // dxgmms2.sys PAGE:0xb1c94, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd7ed8, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb225c, 0x1c52 bytes
    //
    _p99(sdk::unknown_ptr) is_range_valid;
    
    // [LogPageFaultInformation]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x21fac, 0x158b bytes
    // dxgmms2.sys .text:0x2cfc0, 0x1c52 bytes
    // dxgmms2.sys .text:0x36010, 0x20ba bytes
    // dxgmms2.sys .text:0x2cf40, 0x1c52 bytes
    //
    _q00(sdk::unknown_ptr) log_page_fault_information;
    
    // [NotifyAllocationReclaimed]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x669e0, 0x158b bytes
    // dxgmms2.sys PAGE:0xb2c70, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xd8bd0, 0x20ba bytes
    // dxgmms2.sys PAGE:0xb3240, 0x1c52 bytes
    //
    _q01(sdk::unknown_ptr) notify_allocation_reclaimed;
    
    // [ReportGpuVirtualAddressAllocator]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b510, 0x158b bytes
    // dxgmms2.sys .rdata:0x445c0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f120, 0x20ba bytes
    // dxgmms2.sys .rdata:0x445c0, 0x1c52 bytes
    //
    _q02(sdk::unknown_ptr) report_gpu_virtual_address_allocator;
    
    // [ReportGpuVirtualAddressRange]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b6a0, 0x158b bytes
    // dxgmms2.sys .rdata:0x448a0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f440, 0x20ba bytes
    // dxgmms2.sys .rdata:0x448a0, 0x1c52 bytes
    //
    _q03(sdk::unknown_ptr) report_gpu_virtual_address_range;
    
    // [ReportGpuVirtualAddressRangeMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b480, 0x158b bytes
    // dxgmms2.sys .rdata:0x44510, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f050, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44510, 0x1c52 bytes
    //
    _q04(sdk::unknown_ptr) report_gpu_virtual_address_range_mapping;
    
    // [TotalBytesResidentInSegment]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2a148, 0x158b bytes
    // dxgmms2.sys .rdata:0x42bb0, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4bb88, 0x20ba bytes
    // dxgmms2.sys .rdata:0x42a70, 0x1c52 bytes
    //
    _q05(sdk::unknown_ptr) total_bytes_resident_in_segment;
    
    // [UpdateGpuVirtualAddressRangeMapping]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .rdata:0x2b470, 0x158b bytes
    // dxgmms2.sys .rdata:0x44500, 0x1c52 bytes
    // dxgmms2.sys .rdata:0x4f040, 0x20ba bytes
    // dxgmms2.sys .rdata:0x44500, 0x1c52 bytes
    //
    _q06(sdk::unknown_ptr) update_gpu_virtual_address_range_mapping;
    
    // [Use64KbPagesForTransfer]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys PAGE:0x96de4, 0x158b bytes
    // dxgmms2.sys PAGE:0xc6d48, 0x1c52 bytes
    // dxgmms2.sys PAGE:0xe9b70, 0x20ba bytes
    // dxgmms2.sys PAGE:0xc7318, 0x1c52 bytes
    //
    _q07(sdk::unknown_ptr) use64_kb_pages_for_transfer;
    
    // [VidschiUnselectContext]
    // Ldr = [dxgmms2.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgmms2.sys .text:0x10a20, 0x158b bytes
    // dxgmms2.sys .text:0x12cd0, 0x1c52 bytes
    // dxgmms2.sys .text:0x15fd0, 0x20ba bytes
    // dxgmms2.sys .text:0x12cd0, 0x1c52 bytes
    //
    _q08(sdk::unknown_ptr) vidschi_unselect_context;
};
#include "magic/api.end.hpp"
