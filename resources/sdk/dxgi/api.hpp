#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "../win/hinstance_t.hpp"
#include "../wil/wnf_type_id_t.hpp"
#include "../image/thunk_data64_t.hpp"
#include "../wil/wnf_state_name_t.hpp"
#include "../win/delayload_info_t.hpp"
#include "../nt/event_descriptor_t.hpp"
#include "../nt/exception_record_t.hpp"
#include "../nt/exception_pointers_t.hpp"
#include "../nt/feature_change_time_t.hpp"
#include "../nt/mcgen_trace_context_t.hpp"
#include "../win/dispatcher_context_t.hpp"
#include "../nt/event_data_descriptor_t.hpp"
#include "../nt/exception_disposition_t.hpp"
#include "../nt/feature_enabled_state_t.hpp"
#include "../rtl/feature_usage_report_t.hpp"
#include "../rtl/feature_configuration_t.hpp"
#include "../image/delayload_descriptor_t.hpp"
#include "../nt/event_filter_descriptor_t.hpp"
#include "../rtl/feature_configuration_type_t.hpp"
#include "../nt/feature_state_change_subscription_t.hpp"

namespace wil { struct wnf_user_subscription_t; }

#include "magic/api.start.hpp"
namespace dxgi
{
    // [__C_specific_handler_noexcept]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2e60c, 0x18b10 bytes
    //
    _m00(sdk::unknown_ptr) c_specific_handler_noexcept;
    
    // [CheckDirectFlipSupportOnSpecifiedDevice]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x6cf0, 0x18b10 bytes
    //
    _m01(sdk::unknown_ptr) check_direct_flip_support_on_specified_device;
    
    // [CreateHDRConverter]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8c854, 0x18b10 bytes
    //
    _m02(sdk::unknown_ptr) create_hdr_converter;
    
    // [CreateRootSignatureHelper]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8e7a8, 0x18b10 bytes
    //
    _m03(sdk::unknown_ptr) create_root_signature_helper;
    
    // [__CxxFrameHandler4]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2bc74, 0x18b10 bytes
    //
    _m04(sdk::function<enum nt::exception_disposition_t(struct nt::exception_record_t*, void*, nt::context*, struct win::dispatcher_context_t*)>*) cxx_frame_handler4;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xc6188, 0x18b10 bytes
    //
    _m05(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_dx_d3dkmt_l1_1_7_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_service_management_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xc61c8, 0x18b10 bytes
    //
    _m06(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_service_management_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_service_winsvc_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xc61e8, 0x18b10 bytes
    //
    _m07(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_service_winsvc_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dx_dxdbhelper_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xc6368, 0x18b10 bytes
    //
    _m08(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_dx_dxdbhelper_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dx_dxdbhelper_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xc6388, 0x18b10 bytes
    //
    _m09(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_dx_dxdbhelper_l1_1_1_dll;
    
    // [g_header_init_StagingEventsInitialize]
    // Ldr = [dxgi.dll]
    // => Windows 10 v20H2
    // dxgi.dll .data:0xcc4b0, 0x17e70 bytes
    //
    _m10(uint8_t*) g_header_init_staging_events_initialize;
    
    // [__GSHandlerCheck_EH4]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2e644, 0x18b10 bytes
    //
    _m11(sdk::function<enum nt::exception_disposition_t(struct nt::exception_record_t*, void*, nt::context*, struct win::dispatcher_context_t*)>*) gs_handler_check_eh4;
    
    // [_GUID_765a30f3_f624_4c6f_a828_ace948622445]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb1bf0, 0x18b10 bytes
    //
    _m12(sdk::unknown_ptr) guid_765a30f3_f624_4c6f_a828_ace948622445;
    
    // [_GUID_8efb471d_616c_4f49_90f7_127bb763fa51]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb1be0, 0x18b10 bytes
    //
    _m13(sdk::unknown_ptr) guid_8efb471d_616c_4f49_90f7_127bb763fa51;
    
    // [_GUID_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb38d0, 0x18b10 bytes
    //
    _m14(sdk::unknown_ptr) guid_a04bfb29_08ef_43d6_a49c_a9bdbdcbe686;
    
    // [_GUID_a737fca6_9e73_48f0_a04d_6075c44d6ef4]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb0400, 0x18b10 bytes
    //
    _m15(sdk::unknown_ptr) guid_a737fca6_9e73_48f0_a04d_6075c44d6ef4;
    
    // [_GUID_bb2c6faa_b5fb_4082_8e6b_388b8cfa90e1]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb38c0, 0x18b10 bytes
    //
    _m16(sdk::unknown_ptr) guid_bb2c6faa_b5fb_4082_8e6b_388b8cfa90e1;
    
    // [_GUID_c54a6b66_72df_4ee8_8be5_a946a1429214]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb1c00, 0x18b10 bytes
    //
    _m17(sdk::unknown_ptr) guid_c54a6b66_72df_4ee8_8be5_a946a1429214;
    
    // [_GUID_dc8e63f3_d12b_4952_b47b_5e45026a862d]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb38b0, 0x18b10 bytes
    //
    _m18(sdk::unknown_ptr) guid_dc8e63f3_d12b_4952_b47b_5e45026a862d;
    
    // [_GUID_e865df17_a9ee_46f9_a463_3098315aa2e5]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xb1bd0, 0x18b10 bytes
    //
    _m19(sdk::unknown_ptr) guid_e865df17_a9ee_46f9_a463_3098315aa2e5;
    
    // [HasAnyHdrOutputPaths]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2ec08, 0x18b10 bytes
    //
    _m20(sdk::unknown_ptr) has_any_hdr_output_paths;
    
    // [__hmod__api_ms_win_dx_d3dkmt_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcad58, 0x18b10 bytes
    //
    _m21(sdk::unknown_ptr) hmod_api_ms_win_dx_d3dkmt_l1_1_7_dll;
    
    // [__hmod__api_ms_win_service_management_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcad68, 0x18b10 bytes
    //
    _m22(sdk::unknown_ptr) hmod_api_ms_win_service_management_l1_1_0_dll;
    
    // [__hmod__api_ms_win_service_winsvc_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcad70, 0x18b10 bytes
    //
    _m23(sdk::unknown_ptr) hmod_api_ms_win_service_winsvc_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_dx_dxdbhelper_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcadd8, 0x18b10 bytes
    //
    _m24(sdk::unknown_ptr) hmod_ext_ms_win_dx_dxdbhelper_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_dx_dxdbhelper_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .data:0xcade0, 0x18b10 bytes
    //
    _m25(sdk::unknown_ptr) hmod_ext_ms_win_dx_dxdbhelper_l1_1_1_dll;
    
    // [IsWarpForced]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x16a38, 0x18b10 bytes
    //
    _m26(sdk::unknown_ptr) is_warp_forced;
    
    // [MaximizedWindowedSwapEffectTransitionEnabled]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x1d7b0, 0x18b10 bytes
    //
    _m27(sdk::unknown_ptr) maximized_windowed_swap_effect_transition_enabled;
    
    // [McTemplateU0ppppuuPR5ppqqqqqqqqqqptqqtxxPR5PR5pxuquqtqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x67f60, 0x18b10 bytes
    //
    _m28(sdk::unknown_ptr) mc_template_u0ppppuu_pr5ppqqqqqqqqqqptqqtxx_pr5pr5pxuquqtqq_etw_event_write_transfer;
    
    // [McTemplateU0pquuPR3ppqqqqtxPR3pxuuqtqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x79c44, 0x18b10 bytes
    //
    _m29(sdk::unknown_ptr) mc_template_u0pquu_pr3ppqqqqtx_pr3pxuuqtqq_etw_event_write_transfer;
    
    // [McTemplateU0puuPR2ppqqqqtxPR2pxuuqtqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x7a02c, 0x18b10 bytes
    //
    _m30(sdk::unknown_ptr) mc_template_u0puu_pr2ppqqqqtx_pr2pxuuqtqq_etw_event_write_transfer;
    
    // [McTemplateU0qdqs_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x35752, 0x18b10 bytes
    //
    _m31(sdk::unknown_ptr) mc_template_u0qdqs_etw_event_write_transfer;
    
    // [MicrosoftTelemetryAssertTriggeredNoArgs]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x8b644, 0x18b10 bytes
    //
    _m32(sdk::function<void()>*) microsoft_telemetry_assert_triggered_no_args;
    
    // [StringCchVPrintfW]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x51050, 0x18b10 bytes
    //
    _m33(sdk::function<sdk::hresult(wchar_t*, uint64_t, const wchar_t*, char*)>*) string_cch_v_printf_w;
    
    // [__sz_api_ms_win_dx_d3dkmt_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xa6880, 0x18b10 bytes
    //
    _m34(sdk::unknown_ptr) sz_api_ms_win_dx_d3dkmt_l1_1_7_dll;
    
    // [__sz_api_ms_win_service_management_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xa68c0, 0x18b10 bytes
    //
    _m35(sdk::unknown_ptr) sz_api_ms_win_service_management_l1_1_0_dll;
    
    // [__sz_api_ms_win_service_winsvc_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xa68f0, 0x18b10 bytes
    //
    _m36(sdk::unknown_ptr) sz_api_ms_win_service_winsvc_l1_1_0_dll;
    
    // [__sz_ext_ms_win_dx_dxdbhelper_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xa6b40, 0x18b10 bytes
    //
    _m37(sdk::unknown_ptr) sz_ext_ms_win_dx_dxdbhelper_l1_1_0_dll;
    
    // [__sz_ext_ms_win_dx_dxdbhelper_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xa6b70, 0x18b10 bytes
    //
    _m38(sdk::unknown_ptr) sz_ext_ms_win_dx_dxdbhelper_l1_1_1_dll;
    
    // [__tailMerge_api_ms_win_dx_d3dkmt_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2d9c9, 0x18b10 bytes
    //
    _m39(sdk::unknown_ptr) tail_merge_api_ms_win_dx_d3dkmt_l1_1_7_dll;
    
    // [__tailMerge_api_ms_win_service_management_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2db15, 0x18b10 bytes
    //
    _m40(sdk::unknown_ptr) tail_merge_api_ms_win_service_management_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_service_winsvc_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2dba0, 0x18b10 bytes
    //
    _m41(sdk::unknown_ptr) tail_merge_api_ms_win_service_winsvc_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_dx_dxdbhelper_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2e346, 0x18b10 bytes
    //
    _m42(sdk::unknown_ptr) tail_merge_ext_ms_win_dx_dxdbhelper_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_dx_dxdbhelper_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .text:0x2e419, 0x18b10 bytes
    //
    _m43(sdk::unknown_ptr) tail_merge_ext_ms_win_dx_dxdbhelper_l1_1_1_dll;
    
    // [WdDiagEtwControlGuid]
    // Ldr = [dxgi.dll]
    // => Windows 11
    // dxgi.dll .rdata:0xadaa0, 0x18b10 bytes
    //
    _m44(sdk::unknown_ptr) wd_diag_etw_control_guid;
    
    // [CheckIsMSIXPackageImpl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x28b78, 0x17e70 bytes
    // dxgi.dll .text:0x29ff8, 0x17e70 bytes
    //
    _m45(sdk::unknown_ptr) check_is_msix_package_impl;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_appmodel_runtime_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .rdata:0xc66d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6958, 0x17e70 bytes
    // dxgi.dll .rdata:0xc7c40, 0x17e70 bytes
    //
    _m46(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_appmodel_runtime_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_shell32_shellfolders_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .rdata:0xc66b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6938, 0x17e70 bytes
    // dxgi.dll .rdata:0xc7c20, 0x17e70 bytes
    //
    _m47(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_shell32_shellfolders_l1_1_0_dll;
    
    // [FindClose]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x26ecf, 0x17e70 bytes
    // dxgi.dll .text:0x271e1, 0x17e70 bytes
    // dxgi.dll .text:0x28001, 0x17e70 bytes
    //
    _m48(sdk::unknown_ptr) find_close;
    
    // [FindFirstFileW]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x26eb7, 0x17e70 bytes
    // dxgi.dll .text:0x271c9, 0x17e70 bytes
    // dxgi.dll .text:0x27fe9, 0x17e70 bytes
    //
    _m49(sdk::unknown_ptr) find_first_file_w;
    
    // [FindNextFileW]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x26ec3, 0x17e70 bytes
    // dxgi.dll .text:0x271d5, 0x17e70 bytes
    // dxgi.dll .text:0x27ff5, 0x17e70 bytes
    //
    _m50(sdk::unknown_ptr) find_next_file_w;
    
    // [FindSubstring]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7dfd0, 0x17e70 bytes
    // dxgi.dll .text:0x7e150, 0x17e70 bytes
    // dxgi.dll .text:0x7eb14, 0x17e70 bytes
    //
    _m51(sdk::unknown_ptr) find_substring;
    
    // [FOLDERID_Windows]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .rdata:0xa4318, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4648, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5658, 0x17e70 bytes
    //
    _m52(sdk::unknown_ptr) folderid_windows;
    
    // [g_DirectXSdb]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xce970, 0x17e70 bytes
    // dxgi.dll .data:0xce970, 0x17e70 bytes
    // dxgi.dll .data:0xcf9c0, 0x17e70 bytes
    //
    _m53(sdk::unknown_ptr) g_direct_x_sdb;
    
    // [g_pfnThrowPlatformException]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcf3c0, 0x17e70 bytes
    // dxgi.dll .data:0xcf3c0, 0x17e70 bytes
    // dxgi.dll .data:0xd0420, 0x17e70 bytes
    //
    _m54(sdk::unknown/*none*/*) g_pfn_throw_platform_exception;
    
    // [g_UserSettings]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xce950, 0x17e70 bytes
    // dxgi.dll .data:0xce950, 0x17e70 bytes
    // dxgi.dll .data:0xcf9a0, 0x17e70 bytes
    //
    _m55(sdk::unknown_ptr) g_user_settings;
    
    // [g_wil_details_pfnRtlSubscribeWnfStateChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcbe70, 0x17e70 bytes
    // dxgi.dll .data:0xcbe70, 0x17e70 bytes
    // dxgi.dll .data:0xccee0, 0x17e70 bytes
    //
    _m56(sdk::function<int32_t(struct wil::wnf_user_subscription_t**, struct wil::wnf_state_name_t, uint32_t, sdk::function<int32_t(struct wil::wnf_state_name_t, uint32_t, struct wil::wnf_type_id_t*, void*, const void*, uint32_t)>*, void*, struct wil::wnf_type_id_t*, uint32_t, uint32_t)>**) g_wil_details_pfn_rtl_subscribe_wnf_state_change_notification;
    
    // [g_wil_details_pfnRtlUnsubscribeWnfNotificationWaitForCompletion]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcbe90, 0x17e70 bytes
    // dxgi.dll .data:0xcbe90, 0x17e70 bytes
    // dxgi.dll .data:0xcce60, 0x17e70 bytes
    //
    _m57(sdk::function<int32_t(struct wil::wnf_user_subscription_t*)>**) g_wil_details_pfn_rtl_unsubscribe_wnf_notification_wait_for_completion;
    
    // [GetCoinVelocityExperimentConfig]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x27778, 0x17e70 bytes
    // dxgi.dll .text:0x27a88, 0x17e70 bytes
    // dxgi.dll .text:0x28f08, 0x17e70 bytes
    //
    _m58(sdk::unknown_ptr) get_coin_velocity_experiment_config;
    
    // [GetCurrentExeFullPath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x28868, 0x17e70 bytes
    // dxgi.dll .text:0x28ba4, 0x17e70 bytes
    // dxgi.dll .text:0x2a024, 0x17e70 bytes
    //
    _m59(sdk::unknown_ptr) get_current_exe_full_path;
    
    // [GetKernelCachedGpuPreference]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x9c24, 0x17e70 bytes
    // dxgi.dll .text:0x9c24, 0x17e70 bytes
    // dxgi.dll .text:0x1e434, 0x17e70 bytes
    //
    _m60(sdk::unknown_ptr) get_kernel_cached_gpu_preference;
    
    // [GetLastError]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x262cc, 0x17e70 bytes
    // dxgi.dll .text:0x265cc, 0x17e70 bytes
    // dxgi.dll .text:0x273ec, 0x17e70 bytes
    //
    _m61(sdk::function<uint32_t()>*) get_last_error;
    
    // [GetParentExeFullPath]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x28c10, 0x17e70 bytes
    // dxgi.dll .text:0x2904c, 0x17e70 bytes
    // dxgi.dll .text:0x2a4cc, 0x17e70 bytes
    //
    _m62(sdk::unknown_ptr) get_parent_exe_full_path;
    
    // [GetValidGPUPreference]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7d314, 0x17e70 bytes
    // dxgi.dll .text:0x7d494, 0x17e70 bytes
    // dxgi.dll .text:0x7df08, 0x17e70 bytes
    //
    _m63(sdk::unknown_ptr) get_valid_gpu_preference;
    
    // [__GSHandlerCheck_EH]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x27328, 0x17e70 bytes
    // dxgi.dll .text:0x27638, 0x17e70 bytes
    // dxgi.dll .text:0x28abc, 0x17e70 bytes
    //
    _m64(sdk::unknown_ptr) gs_handler_check_eh;
    
    // [HDRMetaDataTypeToDDI]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x68394, 0x17e70 bytes
    // dxgi.dll .text:0x684a4, 0x17e70 bytes
    // dxgi.dll .text:0x698d4, 0x17e70 bytes
    //
    _m65(sdk::unknown_ptr) hdr_meta_data_type_to_ddi;
    
    // [__hmod__api_ms_win_appmodel_runtime_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcbd40, 0x17e70 bytes
    // dxgi.dll .data:0xcbd40, 0x17e70 bytes
    // dxgi.dll .data:0xccd80, 0x17e70 bytes
    //
    _m66(sdk::unknown_ptr) hmod_api_ms_win_appmodel_runtime_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_shell32_shellfolders_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .data:0xcbd38, 0x17e70 bytes
    // dxgi.dll .data:0xcbd38, 0x17e70 bytes
    // dxgi.dll .data:0xccd78, 0x17e70 bytes
    //
    _m67(sdk::unknown_ptr) hmod_ext_ms_win_shell32_shellfolders_l1_1_0_dll;
    
    // [IsDeviceApplicableForDxDb]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7c5ac, 0x17e70 bytes
    // dxgi.dll .text:0x7c728, 0x17e70 bytes
    // dxgi.dll .text:0x7d4ac, 0x17e70 bytes
    //
    _m68(sdk::unknown_ptr) is_device_applicable_for_dx_db;
    
    // [KMTGpuPreferenceToDXGIGpuPreference]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x9c8c, 0x17e70 bytes
    // dxgi.dll .text:0x9c8c, 0x17e70 bytes
    // dxgi.dll .text:0x1e49c, 0x17e70 bytes
    //
    _m69(sdk::unknown_ptr) kmt_gpu_preference_to_dxgi_gpu_preference;
    
    // [LogError]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7c7e4, 0x17e70 bytes
    // dxgi.dll .text:0x7c960, 0x17e70 bytes
    // dxgi.dll .text:0x7d6e4, 0x17e70 bytes
    //
    _m70(sdk::unknown_ptr) log_error;
    
    // [McTemplateU0ppppuuPR5ppqqqqqqqqqqptqqtxxPR5PR5pxuqu_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x5c0f8, 0x17e70 bytes
    // dxgi.dll .text:0x5c1e8, 0x17e70 bytes
    // dxgi.dll .text:0x5d6b8, 0x17e70 bytes
    //
    _m71(sdk::unknown_ptr) mc_template_u0ppppuu_pr5ppqqqqqqqqqqptqqtxx_pr5pr5pxuqu_etw_event_write_transfer;
    
    // [McTemplateU0pquuPR3ppqqqqtxPR3pxuu_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x6e078, 0x17e70 bytes
    // dxgi.dll .text:0x6e188, 0x17e70 bytes
    // dxgi.dll .text:0x6f5b8, 0x17e70 bytes
    //
    _m72(sdk::unknown_ptr) mc_template_u0pquu_pr3ppqqqqtx_pr3pxuu_etw_event_write_transfer;
    
    // [McTemplateU0puuPR2ppqqqqtxPR2pxuu_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x6e388, 0x17e70 bytes
    // dxgi.dll .text:0x6e498, 0x17e70 bytes
    // dxgi.dll .text:0x6f8c8, 0x17e70 bytes
    //
    _m73(sdk::unknown_ptr) mc_template_u0puu_pr2ppqqqqtx_pr2pxuu_etw_event_write_transfer;
    
    // [McTemplateU0qdqs64_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x5c430, 0x17e70 bytes
    // dxgi.dll .text:0x5c520, 0x17e70 bytes
    // dxgi.dll .text:0x5d9f0, 0x17e70 bytes
    //
    _m74(sdk::unknown_ptr) mc_template_u0qdqs64_etw_event_write_transfer;
    
    // [QueryDirectXDatabase]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x29510, 0x17e70 bytes
    // dxgi.dll .text:0x2994c, 0x17e70 bytes
    // dxgi.dll .text:0x2adcc, 0x17e70 bytes
    //
    _m75(sdk::unknown_ptr) query_direct_x_database;
    
    // [QueryDirectXDatabaseConfig]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7d368, 0x17e70 bytes
    // dxgi.dll .text:0x7d4e8, 0x17e70 bytes
    // dxgi.dll .text:0x7df5c, 0x17e70 bytes
    //
    _m76(sdk::unknown_ptr) query_direct_x_database_config;
    
    // [QueryDirectXDatabaseImpl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7c884, 0x17e70 bytes
    // dxgi.dll .text:0x7ca04, 0x17e70 bytes
    // dxgi.dll .text:0x7d710, 0x17e70 bytes
    //
    _m77(sdk::unknown_ptr) query_direct_x_database_impl;
    
    // [QueryFinalGPUPreferenceDecision]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x29820, 0x17e70 bytes
    // dxgi.dll .text:0x29c5c, 0x17e70 bytes
    // dxgi.dll .text:0x2b0dc, 0x17e70 bytes
    //
    _m78(sdk::unknown_ptr) query_final_gpu_preference_decision;
    
    // [QueryHybridDiscreteList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x29118, 0x17e70 bytes
    // dxgi.dll .text:0x29554, 0x17e70 bytes
    // dxgi.dll .text:0x2a9d4, 0x17e70 bytes
    //
    _m79(sdk::unknown_ptr) query_hybrid_discrete_list;
    
    // [QueryIHVDListAnswer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x2a090, 0x17e70 bytes
    // dxgi.dll .text:0x2a4cc, 0x17e70 bytes
    // dxgi.dll .text:0x2b94c, 0x17e70 bytes
    //
    _m80(sdk::unknown_ptr) query_ihvd_list_answer;
    
    // [QueryInProcessCache]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x27268, 0x17e70 bytes
    // dxgi.dll .text:0x27578, 0x17e70 bytes
    // dxgi.dll .text:0x289fc, 0x17e70 bytes
    //
    _m81(sdk::unknown_ptr) query_in_process_cache;
    
    // [QueryIsAppRequestingHighPerfGPUByExport]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x2a3a8, 0x17e70 bytes
    // dxgi.dll .text:0x2a7e4, 0x17e70 bytes
    // dxgi.dll .text:0x2bc64, 0x17e70 bytes
    //
    _m82(sdk::unknown_ptr) query_is_app_requesting_high_perf_gpu_by_export;
    
    // [QueryIsPowerSettingsForcingPowerSavingGPUPreference]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x2a508, 0x17e70 bytes
    // dxgi.dll .text:0x2a944, 0x17e70 bytes
    // dxgi.dll .text:0x2bdc4, 0x17e70 bytes
    //
    _m83(sdk::unknown_ptr) query_is_power_settings_forcing_power_saving_gpu_preference;
    
    // [QueryUserGlobalSettings]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x8e84, 0x17e70 bytes
    // dxgi.dll .text:0x8e84, 0x17e70 bytes
    // dxgi.dll .text:0x1d704, 0x17e70 bytes
    //
    _m84(sdk::unknown_ptr) query_user_global_settings;
    
    // [QueryUserGPUPreferenceForCurrentProcess]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x2a620, 0x17e70 bytes
    // dxgi.dll .text:0x2aa5c, 0x17e70 bytes
    // dxgi.dll .text:0x2bedc, 0x17e70 bytes
    //
    _m85(sdk::unknown_ptr) query_user_gpu_preference_for_current_process;
    
    // [QueryUserSettings]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x293c0, 0x17e70 bytes
    // dxgi.dll .text:0x297fc, 0x17e70 bytes
    // dxgi.dll .text:0x2ac7c, 0x17e70 bytes
    //
    _m86(sdk::unknown_ptr) query_user_settings;
    
    // [ReplaceStringStartInPlace]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x7f62c, 0x17e70 bytes
    // dxgi.dll .text:0x7f7ac, 0x17e70 bytes
    // dxgi.dll .text:0x80138, 0x17e70 bytes
    //
    _m87(sdk::unknown_ptr) replace_string_start_in_place;
    
    // [SetKernelCachedGpuPreference]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x9bb4, 0x17e70 bytes
    // dxgi.dll .text:0x9bb4, 0x17e70 bytes
    // dxgi.dll .text:0x1e3c4, 0x17e70 bytes
    //
    _m88(sdk::unknown_ptr) set_kernel_cached_gpu_preference;
    
    // [__sz_api_ms_win_appmodel_runtime_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .rdata:0xa33c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa36e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa46b0, 0x17e70 bytes
    //
    _m89(sdk::unknown_ptr) sz_api_ms_win_appmodel_runtime_l1_1_0_dll;
    
    // [__sz_ext_ms_win_shell32_shellfolders_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3390, 0x17e70 bytes
    // dxgi.dll .rdata:0xa36b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4680, 0x17e70 bytes
    //
    _m90(sdk::unknown_ptr) sz_ext_ms_win_shell32_shellfolders_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_appmodel_runtime_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x26dcc, 0x17e70 bytes
    // dxgi.dll .text:0x270cc, 0x17e70 bytes
    // dxgi.dll .text:0x27eec, 0x17e70 bytes
    //
    _m91(sdk::unknown_ptr) tail_merge_api_ms_win_appmodel_runtime_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_shell32_shellfolders_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgi.dll .text:0x26d1d, 0x17e70 bytes
    // dxgi.dll .text:0x2701d, 0x17e70 bytes
    // dxgi.dll .text:0x27e3d, 0x17e70 bytes
    //
    _m92(sdk::unknown_ptr) tail_merge_ext_ms_win_shell32_shellfolders_l1_1_0_dll;
    
    // [AdapterEnumWnfCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xbe30, 0x17e70 bytes
    // dxgi.dll .text:0xbe60, 0x17e70 bytes
    // dxgi.dll .text:0x1e800, 0x18b10 bytes
    // dxgi.dll .text:0x7040, 0x17e70 bytes
    //
    _m93(sdk::unknown_ptr) adapter_enum_wnf_callback;
    
    // [AddAppCompatHighDPIAwareRegKey]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x64194, 0x17e70 bytes
    // dxgi.dll .text:0x64284, 0x17e70 bytes
    // dxgi.dll .text:0x7022c, 0x18b10 bytes
    // dxgi.dll .text:0x656b4, 0x17e70 bytes
    //
    _m94(sdk::unknown_ptr) add_app_compat_high_dpi_aware_reg_key;
    
    // [AddAppCompatPolicy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x641c8, 0x17e70 bytes
    // dxgi.dll .text:0x642b8, 0x17e70 bytes
    // dxgi.dll .text:0x70260, 0x18b10 bytes
    // dxgi.dll .text:0x656e8, 0x17e70 bytes
    //
    _m95(sdk::unknown_ptr) add_app_compat_policy;
    
    // [_amsg_exit]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24cd5, 0x17e70 bytes
    // dxgi.dll .text:0x24fd5, 0x17e70 bytes
    // dxgi.dll .text:0x2c20f, 0x18b10 bytes
    // dxgi.dll .text:0x25df5, 0x17e70 bytes
    //
    _m96(sdk::function<void()>*) amsg_exit;
    
    // [ApiSetQueryApiSetPresence]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26a90, 0x17e70 bytes
    // dxgi.dll .text:0x26d90, 0x17e70 bytes
    // dxgi.dll .text:0x2e1b0, 0x18b10 bytes
    // dxgi.dll .text:0x27bb0, 0x17e70 bytes
    //
    _m97(sdk::function<int32_t(const nt::unicode_view*, uint8_t*)>*) api_set_query_api_set_presence;
    
    // [ApplyCompatResolutionQuirking]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x77d0, 0x17e70 bytes
    // dxgi.dll .text:0x77d0, 0x17e70 bytes
    // dxgi.dll .text:0x633f0, 0x18b10 bytes
    // dxgi.dll .text:0x1c380, 0x17e70 bytes
    //
    _m98(sdk::unknown_ptr) apply_compat_resolution_quirking;
    
    // [ApplyHighDPIAwareShim]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21e20, 0x17e70 bytes
    // dxgi.dll .text:0x22100, 0x17e70 bytes
    // dxgi.dll .text:0x2a02c, 0x18b10 bytes
    // dxgi.dll .text:0x22da0, 0x17e70 bytes
    //
    _m99(sdk::unknown_ptr) apply_high_dpi_aware_shim;
    
    // [__ArrayUnwind]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x249d4, 0x17e70 bytes
    // dxgi.dll .text:0x24cd4, 0x17e70 bytes
    // dxgi.dll .text:0x2beec, 0x18b10 bytes
    // dxgi.dll .text:0x25af4, 0x17e70 bytes
    //
    _n00(sdk::unknown_ptr) array_unwind;
    
    // [atexit]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24ac0, 0x17e70 bytes
    // dxgi.dll .text:0x24dc0, 0x17e70 bytes
    // dxgi.dll .text:0x2bff0, 0x18b10 bytes
    // dxgi.dll .text:0x25be0, 0x17e70 bytes
    //
    _n01(sdk::function<int32_t(sdk::function<void()>*)>*) atexit;
    
    // [ceilf]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27446, 0x17e70 bytes
    // dxgi.dll .text:0x27756, 0x17e70 bytes
    // dxgi.dll .text:0x2e772, 0x18b10 bytes
    // dxgi.dll .text:0x28bd6, 0x17e70 bytes
    //
    _n02(sdk::unknown_ptr) ceilf;
    
    // [CheckDxgiDebugDll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x583e0, 0x17e70 bytes
    // dxgi.dll .text:0x584d0, 0x17e70 bytes
    // dxgi.dll .text:0x63798, 0x18b10 bytes
    // dxgi.dll .text:0x59974, 0x17e70 bytes
    //
    _n03(sdk::unknown_ptr) check_dxgi_debug_dll;
    
    // [CLSID_ImmersiveShell]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xb4be0, 0x17e70 bytes
    // dxgi.dll .rdata:0xb4ef0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6bc8, 0x18b10 bytes
    // dxgi.dll .rdata:0xb61d0, 0x17e70 bytes
    //
    _n04(sdk::unknown_ptr) clsid_immersive_shell;
    
    // [CompatString]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xf9b0, 0x17e70 bytes
    // dxgi.dll .text:0xf9e0, 0x17e70 bytes
    // dxgi.dll .text:0x14c90, 0x18b10 bytes
    // dxgi.dll .text:0xae90, 0x17e70 bytes
    //
    _n05(sdk::unknown_ptr) compat_string;
    
    // [CompatValue]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xf5d0, 0x17e70 bytes
    // dxgi.dll .text:0xf600, 0x17e70 bytes
    // dxgi.dll .text:0x14850, 0x18b10 bytes
    // dxgi.dll .text:0xaab0, 0x17e70 bytes
    //
    _n06(sdk::unknown_ptr) compat_value;
    
    // [CompatValueImpl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xeb4c, 0x17e70 bytes
    // dxgi.dll .text:0xeb7c, 0x17e70 bytes
    // dxgi.dll .text:0x1444c, 0x18b10 bytes
    // dxgi.dll .text:0xa02c, 0x17e70 bytes
    //
    _n07(sdk::unknown_ptr) compat_value_impl;
    
    // [ConvertComputePreemptionEnum]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d80, 0x17e70 bytes
    // dxgi.dll .text:0x1d80, 0x17e70 bytes
    // dxgi.dll .text:0x3800, 0x18b10 bytes
    // dxgi.dll .text:0x3c00, 0x17e70 bytes
    //
    _n08(sdk::unknown_ptr) convert_compute_preemption_enum;
    
    // [ConvertGraphicsPreemptionEnum]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1db0, 0x17e70 bytes
    // dxgi.dll .text:0x1db0, 0x17e70 bytes
    // dxgi.dll .text:0x3830, 0x18b10 bytes
    // dxgi.dll .text:0x3c30, 0x17e70 bytes
    //
    _n09(sdk::unknown_ptr) convert_graphics_preemption_enum;
    
    // [ConvertingRotatingStretchBlt]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50c1c, 0x17e70 bytes
    // dxgi.dll .text:0x50d0c, 0x17e70 bytes
    // dxgi.dll .text:0x5bc3c, 0x18b10 bytes
    // dxgi.dll .text:0x5219c, 0x17e70 bytes
    //
    _n10(sdk::unknown_ptr) converting_rotating_stretch_blt;
    
    // [ConvertingRotatingStretchBltImpl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x50db4, 0x17e70 bytes
    // dxgi.dll .text:0x50ea4, 0x17e70 bytes
    // dxgi.dll .text:0x5be10, 0x18b10 bytes
    // dxgi.dll .text:0x52334, 0x17e70 bytes
    //
    _n11(sdk::unknown_ptr) converting_rotating_stretch_blt_impl;
    
    // [CopySrcToStagingSurface]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5264c, 0x17e70 bytes
    // dxgi.dll .text:0x5273c, 0x17e70 bytes
    // dxgi.dll .text:0x5d6d8, 0x18b10 bytes
    // dxgi.dll .text:0x53bcc, 0x17e70 bytes
    //
    _n12(sdk::unknown_ptr) copy_src_to_staging_surface;
    
    // [CreateDXGIFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9350, 0x17e70 bytes
    // dxgi.dll .text:0x9350, 0x17e70 bytes
    // dxgi.dll .text:0x22f50, 0x18b10 bytes
    // dxgi.dll .text:0x1dbd0, 0x17e70 bytes
    //
    _n13(sdk::unknown_ptr) create_dxgi_factory;
    
    // [CreateDXGIFactory1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x94f0, 0x17e70 bytes
    // dxgi.dll .text:0x94f0, 0x17e70 bytes
    // dxgi.dll .text:0x23140, 0x18b10 bytes
    // dxgi.dll .text:0x1dd70, 0x17e70 bytes
    //
    _n14(sdk::unknown_ptr) create_dxgi_factory1;
    
    // [CreateDXGIFactory1_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf50, 0x17e70 bytes
    // dxgi.dll .rdata:0xac290, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e30, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb30, 0x17e70 bytes
    //
    _n15(sdk::unknown_ptr) create_dxgi_factory1_start;
    
    // [CreateDXGIFactory1_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3720, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a50, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6fb8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4758, 0x17e70 bytes
    //
    _n16(sdk::unknown_ptr) create_dxgi_factory1_stop;
    
    // [CreateDXGIFactory2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x93f0, 0x17e70 bytes
    // dxgi.dll .text:0x93f0, 0x17e70 bytes
    // dxgi.dll .text:0x23030, 0x18b10 bytes
    // dxgi.dll .text:0x1dc70, 0x17e70 bytes
    //
    _n17(sdk::unknown_ptr) create_dxgi_factory2;
    
    // [CreateDXGIFactoryActualImpl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xcf40, 0x17e70 bytes
    // dxgi.dll .text:0xcf70, 0x17e70 bytes
    // dxgi.dll .text:0x185d0, 0x18b10 bytes
    // dxgi.dll .text:0x8150, 0x17e70 bytes
    //
    _n18(sdk::unknown_ptr) create_dxgi_factory_actual_impl;
    
    // [CreateDXGIFactoryActualImpl1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xea70, 0x17e70 bytes
    // dxgi.dll .text:0xeaa0, 0x17e70 bytes
    // dxgi.dll .text:0x15a00, 0x18b10 bytes
    // dxgi.dll .text:0x9f50, 0x17e70 bytes
    //
    _n19(sdk::unknown_ptr) create_dxgi_factory_actual_impl1;
    
    // [CreateDXGIFactoryActualImpl2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd090, 0x17e70 bytes
    // dxgi.dll .text:0xd0c0, 0x17e70 bytes
    // dxgi.dll .text:0x17cf0, 0x18b10 bytes
    // dxgi.dll .text:0x82a0, 0x17e70 bytes
    //
    _n20(sdk::unknown_ptr) create_dxgi_factory_actual_impl2;
    
    // [CreateDXGIFactoryImpl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xeeac, 0x17e70 bytes
    // dxgi.dll .text:0xeedc, 0x17e70 bytes
    // dxgi.dll .text:0x15428, 0x18b10 bytes
    // dxgi.dll .text:0xa38c, 0x17e70 bytes
    //
    _n21(sdk::unknown_ptr) create_dxgi_factory_impl;
    
    // [CreateDXGIFactory_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac680, 0x17e70 bytes
    // dxgi.dll .rdata:0xac9b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb80, 0x18b10 bytes
    // dxgi.dll .rdata:0xad858, 0x17e70 bytes
    //
    _n22(sdk::unknown_ptr) create_dxgi_factory_start;
    
    // [CreateDXGIFactory_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac060, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab5d8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc40, 0x17e70 bytes
    //
    _n23(sdk::unknown_ptr) create_dxgi_factory_stop;
    
    // [DXGICreateLightweightDeviceForAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x71888, 0x17e70 bytes
    // dxgi.dll .text:0x71998, 0x17e70 bytes
    // dxgi.dll .text:0x7ceec, 0x18b10 bytes
    // dxgi.dll .text:0x72dc8, 0x17e70 bytes
    //
    _n24(sdk::unknown_ptr) create_lightweight_device_for_adapter;
    
    // [CreatePresentLimitSemaphore]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x39b0, 0x17e70 bytes
    // dxgi.dll .text:0x39b0, 0x17e70 bytes
    // dxgi.dll .text:0x86a4, 0x18b10 bytes
    // dxgi.dll .text:0x5830, 0x17e70 bytes
    //
    _n25(sdk::unknown_ptr) create_present_limit_semaphore;
    
    // [CreateSwapChain_SDK_MSG]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x234dc, 0x17e70 bytes
    // dxgi.dll .text:0x237dc, 0x17e70 bytes
    // dxgi.dll .text:0x2a6d0, 0x18b10 bytes
    // dxgi.dll .text:0x245dc, 0x17e70 bytes
    //
    _n26(sdk::unknown_ptr) create_swap_chain_sdk_msg;
    
    // [_CRT_INIT]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2428c, 0x17e70 bytes
    // dxgi.dll .text:0x2458c, 0x17e70 bytes
    // dxgi.dll .text:0x2b75c, 0x18b10 bytes
    // dxgi.dll .text:0x253ac, 0x17e70 bytes
    //
    _n27(sdk::function<int32_t(struct win::hinstance_t const*, const uint32_t, void const*)>*) crt_init;
    
    // [_CTA1J]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6168, 0x17e70 bytes
    // dxgi.dll .rdata:0xc63f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5de0, 0x18b10 bytes
    // dxgi.dll .rdata:0xc76d8, 0x17e70 bytes
    //
    _n28(sdk::unknown_ptr) cta1j;
    
    // [__CxxFrameHandler3]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24766, 0x17e70 bytes
    // dxgi.dll .text:0x24a66, 0x17e70 bytes
    // dxgi.dll .text:0x2c1df, 0x18b10 bytes
    // dxgi.dll .text:0x25886, 0x17e70 bytes
    //
    _n29(sdk::unknown_ptr) cxx_frame_handler3;
    
    // [_CxxThrowException]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24c95, 0x17e70 bytes
    // dxgi.dll .text:0x24f95, 0x17e70 bytes
    // dxgi.dll .text:0x2c1d3, 0x18b10 bytes
    // dxgi.dll .text:0x25db5, 0x17e70 bytes
    //
    _n30(sdk::unknown_ptr) cxx_throw_exception;
    
    // [DXGI_D3D_Equivalencies]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa8b40, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8e80, 0x17e70 bytes
    // dxgi.dll .rdata:0xa82b0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa9f90, 0x17e70 bytes
    //
    _n31(sdk::unknown_ptr) d3d_equivalencies;
    
    // [D3DFMT_To_DXGIFMT]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2488, 0x17e70 bytes
    // dxgi.dll .text:0x2488, 0x17e70 bytes
    // dxgi.dll .text:0x60a0, 0x18b10 bytes
    // dxgi.dll .text:0x4308, 0x17e70 bytes
    //
    _n32(sdk::unknown_ptr) d3dfmt_to_dxgifmt;
    
    // [DXGI_DEBUG_DXGI]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac420, 0x17e70 bytes
    // dxgi.dll .rdata:0xac760, 0x17e70 bytes
    // dxgi.dll .rdata:0xab940, 0x18b10 bytes
    // dxgi.dll .rdata:0xad608, 0x17e70 bytes
    //
    _n33(sdk::unknown_ptr) debug_dxgi;
    
    // [DXGIDeclareAdapterRemovalSupport]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xceb0, 0x17e70 bytes
    // dxgi.dll .text:0xcee0, 0x17e70 bytes
    // dxgi.dll .text:0x1e190, 0x18b10 bytes
    // dxgi.dll .text:0x80c0, 0x17e70 bytes
    //
    _n34(sdk::unknown_ptr) declare_adapter_removal_support;
    
    // [__DefaultResolveDelayLoadedAPIFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xb4bd0, 0x17e70 bytes
    // dxgi.dll .rdata:0xb4ee0, 0x17e70 bytes
    // dxgi.dll .rdata:0xb5530, 0x18b10 bytes
    // dxgi.dll .rdata:0xb61c0, 0x17e70 bytes
    //
    _n35(const uint32_t*) default_resolve_delay_loaded_api_flags;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc65f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6878, 0x17e70 bytes
    // dxgi.dll .rdata:0xc62c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7b60, 0x17e70 bytes
    //
    _n36(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_core_com_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_error_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc65b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6838, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6288, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7b20, 0x17e70 bytes
    //
    _n37(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_core_winrt_error_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_error_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc65d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6858, 0x17e70 bytes
    // dxgi.dll .rdata:0xc62a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7b40, 0x17e70 bytes
    //
    _n38(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_core_winrt_error_l1_1_1_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6550, 0x17e70 bytes
    // dxgi.dll .rdata:0xc67d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6228, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7ac0, 0x17e70 bytes
    //
    _n39(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_core_winrt_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_winrt_string_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6590, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6818, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6268, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7b00, 0x17e70 bytes
    //
    _n40(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_core_winrt_string_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc64d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6758, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6148, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7a40, 0x17e70 bytes
    //
    _n41(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_dx_d3dkmt_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc64f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6778, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6168, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7a60, 0x17e70 bytes
    //
    _n42(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_dx_d3dkmt_l1_1_1_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_3_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6510, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6798, 0x17e70 bytes
    // dxgi.dll .rdata:0xc61a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7a80, 0x17e70 bytes
    //
    _n43(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_dx_d3dkmt_l1_1_3_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_dx_d3dkmt_l1_1_4_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6570, 0x17e70 bytes
    // dxgi.dll .rdata:0xc67f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6248, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7ae0, 0x17e70 bytes
    //
    _n44(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_dx_d3dkmt_l1_1_4_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_gdi_dpiinfo_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6610, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6898, 0x17e70 bytes
    // dxgi.dll .rdata:0xc62e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7b80, 0x17e70 bytes
    //
    _n45(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_gdi_dpiinfo_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_private_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6530, 0x17e70 bytes
    // dxgi.dll .rdata:0xc67b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6208, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7aa0, 0x17e70 bytes
    //
    _n46(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_rtcore_ntuser_private_l1_1_7_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc64b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6738, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6128, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7a20, 0x17e70 bytes
    //
    _n47(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_api_ms_win_security_sddl_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6630, 0x17e70 bytes
    // dxgi.dll .rdata:0xc68b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6308, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7ba0, 0x17e70 bytes
    //
    _n48(sdk::unknown_ptr) delay_import_descriptor_api_ms_win_security_sddl_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_dcomp_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6670, 0x17e70 bytes
    // dxgi.dll .rdata:0xc68f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6348, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7be0, 0x17e70 bytes
    //
    _n49(sdk::unknown_ptr) delay_import_descriptor_dcomp_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_mf_pal_l2_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6650, 0x17e70 bytes
    // dxgi.dll .rdata:0xc68d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6328, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7bc0, 0x17e70 bytes
    //
    _n50(sdk::unknown_ptr) delay_import_descriptor_ext_ms_mf_pal_l2_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_onecore_dcomp_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc61f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6478, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5e68, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7760, 0x17e70 bytes
    //
    _n51(sdk::unknown_ptr) delay_import_descriptor_ext_ms_onecore_dcomp_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc61d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6458, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5e48, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7740, 0x17e70 bytes
    //
    _n52(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6690, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6918, 0x17e70 bytes
    // dxgi.dll .rdata:0xc63a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7c00, 0x17e70 bytes
    //
    _n53(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_dc_create_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6270, 0x17e70 bytes
    // dxgi.dll .rdata:0xc64f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5ee8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc77e0, 0x17e70 bytes
    //
    _n54(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_gdi_dc_create_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_dc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6290, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6518, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5f08, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7800, 0x17e70 bytes
    //
    _n55(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_gdi_dc_l1_2_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_draw_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc62d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6558, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5f48, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7840, 0x17e70 bytes
    //
    _n56(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_gdi_draw_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_gdi_draw_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc62f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6578, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5f68, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7860, 0x17e70 bytes
    //
    _n57(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_gdi_draw_l1_1_1_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_gui_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6450, 0x17e70 bytes
    // dxgi.dll .rdata:0xc66d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc60c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc79c0, 0x17e70 bytes
    //
    _n58(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_gui_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_keyboard_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6430, 0x17e70 bytes
    // dxgi.dll .rdata:0xc66b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc60a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc79a0, 0x17e70 bytes
    //
    _n59(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_keyboard_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_message_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6370, 0x17e70 bytes
    // dxgi.dll .rdata:0xc65f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5fe8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc78e0, 0x17e70 bytes
    //
    _n60(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_message_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_misc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6410, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6698, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6088, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7980, 0x17e70 bytes
    //
    _n61(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_misc_l1_2_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_private_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6470, 0x17e70 bytes
    // dxgi.dll .rdata:0xc66f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc60e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc79e0, 0x17e70 bytes
    //
    _n62(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_private_l1_1_1_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6210, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6498, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5e88, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7780, 0x17e70 bytes
    //
    _n63(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6250, 0x17e70 bytes
    // dxgi.dll .rdata:0xc64d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5ec8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc77c0, 0x17e70 bytes
    //
    _n64(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc63b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6638, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6028, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7920, 0x17e70 bytes
    //
    _n65(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_window_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_window_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc63d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6658, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6048, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7940, 0x17e70 bytes
    //
    _n66(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_window_l1_1_1_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_windowclass_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc63f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6678, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6068, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7960, 0x17e70 bytes
    //
    _n67(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_ntuser_windowclass_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc62b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6538, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5f28, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7820, 0x17e70 bytes
    //
    _n68(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_object_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6310, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6598, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5f88, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7880, 0x17e70 bytes
    //
    _n69(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_gdi_object_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6330, 0x17e70 bytes
    // dxgi.dll .rdata:0xc65b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5fa8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc78a0, 0x17e70 bytes
    //
    _n70(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6390, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6618, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6008, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7900, 0x17e70 bytes
    //
    _n71(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6350, 0x17e70 bytes
    // dxgi.dll .rdata:0xc65d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5fc8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc78c0, 0x17e70 bytes
    //
    _n72(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6490, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6718, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6108, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7a00, 0x17e70 bytes
    //
    _n73(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll;
    
    // [__DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc6230, 0x17e70 bytes
    // dxgi.dll .rdata:0xc64b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5ea8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc77a0, 0x17e70 bytes
    //
    _n74(sdk::unknown_ptr) delay_import_descriptor_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll;
    
    // [__delayLoadHelper2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa3a0, 0x17e70 bytes
    // dxgi.dll .text:0xa3a0, 0x17e70 bytes
    // dxgi.dll .text:0x24170, 0x18b10 bytes
    // dxgi.dll .text:0x1ebb0, 0x17e70 bytes
    //
    _n75(sdk::function<void*(const struct image::delayload_descriptor_t*, struct image::thunk_data64_t*)>*) delay_load_helper2;
    
    // [DllMain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26f0c, 0x17e70 bytes
    // dxgi.dll .text:0x2721c, 0x17e70 bytes
    // dxgi.dll .text:0x2e5d8, 0x18b10 bytes
    // dxgi.dll .text:0x286a0, 0x17e70 bytes
    //
    _n76(sdk::function<int32_t(struct win::hinstance_t*, uint32_t, void*)>*) dll_main;
    
    // [_DllMainCRTStartup]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x244d0, 0x17e70 bytes
    // dxgi.dll .text:0x247d0, 0x17e70 bytes
    // dxgi.dll .text:0x2b9c0, 0x18b10 bytes
    // dxgi.dll .text:0x255f0, 0x17e70 bytes
    //
    _n77(sdk::function<int32_t(struct win::hinstance_t const*, const uint32_t, void const*)>*) dll_main_crt_startup;
    
    // [__dllonexit]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24ed2, 0x17e70 bytes
    // dxgi.dll .text:0x251d2, 0x17e70 bytes
    // dxgi.dll .text:0x2c402, 0x18b10 bytes
    // dxgi.dll .text:0x25ff2, 0x17e70 bytes
    //
    _n78(sdk::unknown_ptr) dllonexit;
    
    // [DoesProcessHaveAnyAdapterBlockList]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xdaa0, 0x17e70 bytes
    // dxgi.dll .text:0xdad0, 0x17e70 bytes
    // dxgi.dll .text:0x16b00, 0x18b10 bytes
    // dxgi.dll .text:0x8f88, 0x17e70 bytes
    //
    _n79(sdk::unknown_ptr) does_process_have_any_adapter_block_list;
    
    // [DXGIDumpJournal]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x586d0, 0x17e70 bytes
    // dxgi.dll .text:0x587c0, 0x17e70 bytes
    // dxgi.dll .text:0x63a80, 0x18b10 bytes
    // dxgi.dll .text:0x59c70, 0x17e70 bytes
    //
    _n80(sdk::unknown_ptr) dump_journal;
    
    // [DuplicateHandleSameAccess]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x3ce4, 0x17e70 bytes
    // dxgi.dll .text:0x3ce4, 0x17e70 bytes
    // dxgi.dll .text:0x8814, 0x18b10 bytes
    // dxgi.dll .text:0x5b64, 0x17e70 bytes
    //
    _n81(sdk::unknown_ptr) duplicate_handle_same_access;
    
    // [DxSecurityAttributesCreate]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x491ec, 0x17e70 bytes
    // dxgi.dll .text:0x492dc, 0x17e70 bytes
    // dxgi.dll .text:0x5447c, 0x18b10 bytes
    // dxgi.dll .text:0x4a76c, 0x17e70 bytes
    //
    _n82(sdk::unknown_ptr) dx_security_attributes_create;
    
    // [DxSecurityAttributesRelease]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x493ac, 0x17e70 bytes
    // dxgi.dll .text:0x4949c, 0x17e70 bytes
    // dxgi.dll .text:0x5463c, 0x18b10 bytes
    // dxgi.dll .text:0x4a92c, 0x17e70 bytes
    //
    _n83(sdk::unknown_ptr) dx_security_attributes_release;
    
    // [DXGID3D10CreateDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x67d80, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _n84(sdk::unknown_ptr) dxgid3d10_create_device;
    
    // [DXGID3D10CreateLayeredDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x67d90, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _n85(sdk::unknown_ptr) dxgid3d10_create_layered_device;
    
    // [DXGID3D10GetLayeredDeviceSize]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ec40, 0x17e70 bytes
    // dxgi.dll .text:0x1ef50, 0x17e70 bytes
    // dxgi.dll .text:0x67da0, 0x18b10 bytes
    // dxgi.dll .text:0x1fd40, 0x17e70 bytes
    //
    _n86(sdk::unknown_ptr) dxgid3d10_get_layered_device_size;
    
    // [DXGID3D10RegisterLayers]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1ea90, 0x17e70 bytes
    // dxgi.dll .text:0x1eda0, 0x17e70 bytes
    // dxgi.dll .text:0x67db0, 0x18b10 bytes
    // dxgi.dll .text:0x1fb90, 0x17e70 bytes
    //
    _n87(sdk::unknown_ptr) dxgid3d10_register_layers;
    
    // [__dyn_tls_init_callback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd68, 0x17e70 bytes
    // dxgi.dll .data:0xcbd68, 0x17e70 bytes
    // dxgi.dll .data:0xcae10, 0x18b10 bytes
    // dxgi.dll .data:0xccda8, 0x17e70 bytes
    //
    _n88(sdk::function<void(void*, uint32_t, void*)> const**) dyn_tls_init_callback;
    
    // [EnsureRemoteCachedResultIsUptodate]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e870, 0x17e70 bytes
    // dxgi.dll .text:0x1eb80, 0x17e70 bytes
    // dxgi.dll .text:0x238cc, 0x18b10 bytes
    // dxgi.dll .text:0x1a13c, 0x17e70 bytes
    //
    _n89(sdk::unknown_ptr) ensure_remote_cached_result_is_uptodate;
    
    // [EscapeCB]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x606c0, 0x17e70 bytes
    // dxgi.dll .text:0x607b0, 0x17e70 bytes
    // dxgi.dll .text:0x6c1f0, 0x18b10 bytes
    // dxgi.dll .text:0x61be0, 0x17e70 bytes
    //
    _n90(sdk::unknown_ptr) escape_cb;
    
    // [DXGIEtwProviderGuid]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa0f60, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1280, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a88, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2d78, 0x17e70 bytes
    //
    _n91(sdk::unknown_ptr) etw_provider_guid;
    
    // [DXGIEtwProviderGuid_Context]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb000, 0x17e70 bytes
    // dxgi.dll .data:0xcb000, 0x17e70 bytes
    // dxgi.dll .data:0xca000, 0x18b10 bytes
    // dxgi.dll .data:0xcc040, 0x17e70 bytes
    //
    _n92(sdk::unknown_ptr) etw_provider_guid_context;
    
    // [EvaluatePathCandidate]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a95c, 0x17e70 bytes
    // dxgi.dll .text:0x7aa8c, 0x17e70 bytes
    // dxgi.dll .text:0x85fe8, 0x18b10 bytes
    // dxgi.dll .text:0x7bebc, 0x17e70 bytes
    //
    _n93(sdk::unknown_ptr) evaluate_path_candidate;
    
    // [EventCheckMultiplaneOverlaySupportFail]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac3b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac6f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab8d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad598, 0x17e70 bytes
    //
    _n94(sdk::unknown_ptr) event_check_multiplane_overlay_support_fail;
    
    // [EventCheckMultiplaneOverlaySupportPlane]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac3d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac710, 0x17e70 bytes
    // dxgi.dll .rdata:0xab8f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad5b8, 0x17e70 bytes
    //
    _n95(sdk::unknown_ptr) event_check_multiplane_overlay_support_plane;
    
    // [EventCheckMultiplaneOverlaySupportStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac050, 0x17e70 bytes
    // dxgi.dll .rdata:0xac390, 0x17e70 bytes
    // dxgi.dll .rdata:0xab5c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc30, 0x17e70 bytes
    //
    _n96(sdk::unknown_ptr) event_check_multiplane_overlay_support_start;
    
    // [EventCheckMultiplaneOverlaySupportStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac190, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab6f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd70, 0x17e70 bytes
    //
    _n97(sdk::unknown_ptr) event_check_multiplane_overlay_support_stop;
    
    // [EventCheckOverlayColorSpaceSupport]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac6c8, 0x17e70 bytes
    // dxgi.dll .rdata:0xac9f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xabbc0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad8a0, 0x17e70 bytes
    //
    _n98(sdk::unknown_ptr) event_check_overlay_color_space_support;
    
    // [EventCreateDirectFlipResource]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac5f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac920, 0x17e70 bytes
    // dxgi.dll .rdata:0xabae8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad7c8, 0x17e70 bytes
    //
    _n99(sdk::unknown_ptr) event_create_direct_flip_resource;
    
    // [EventCreateFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac6b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xac9e8, 0x17e70 bytes
    // dxgi.dll .rdata:0xabbb0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad890, 0x17e70 bytes
    //
    _o00(sdk::unknown_ptr) event_create_factory;
    
    // [EventCreateOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac090, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab608, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc70, 0x17e70 bytes
    //
    _o01(sdk::unknown_ptr) event_create_output;
    
    // [EventCreateSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac5e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac910, 0x17e70 bytes
    // dxgi.dll .rdata:0xabad8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad7b8, 0x17e70 bytes
    //
    _o02(sdk::unknown_ptr) event_create_swap_chain;
    
    // [EventDestroyFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac440, 0x17e70 bytes
    // dxgi.dll .rdata:0xac780, 0x17e70 bytes
    // dxgi.dll .rdata:0xab950, 0x18b10 bytes
    // dxgi.dll .rdata:0xad628, 0x17e70 bytes
    //
    _o03(sdk::unknown_ptr) event_destroy_factory;
    
    // [EventDestroyOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe20, 0x17e70 bytes
    // dxgi.dll .rdata:0xac160, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6de0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada00, 0x17e70 bytes
    //
    _o04(sdk::unknown_ptr) event_destroy_output;
    
    // [EventDestroySwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac010, 0x17e70 bytes
    // dxgi.dll .rdata:0xac350, 0x17e70 bytes
    // dxgi.dll .rdata:0xab588, 0x18b10 bytes
    // dxgi.dll .rdata:0xadbf0, 0x17e70 bytes
    //
    _o05(sdk::unknown_ptr) event_destroy_swap_chain;
    
    // [EventDWMRedirectionChange]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3638, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3958, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e60, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a40, 0x17e70 bytes
    //
    _o06(sdk::unknown_ptr) event_dwm_redirection_change;
    
    // [EventDXGIAdapterOutputReparenting]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac490, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a00, 0x17e70 bytes
    // dxgi.dll .rdata:0xab980, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4708, 0x17e70 bytes
    //
    _o07(sdk::unknown_ptr) event_dxgi_adapter_output_reparenting;
    
    // [EventDXGIBindBackBuffersToDwm]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac610, 0x17e70 bytes
    // dxgi.dll .rdata:0xac940, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb08, 0x18b10 bytes
    // dxgi.dll .rdata:0xad7e8, 0x17e70 bytes
    //
    _o08(sdk::unknown_ptr) event_dxgi_bind_back_buffers_to_dwm;
    
    // [EventDXGIJournalEntry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac5c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac8f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xabab8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad798, 0x17e70 bytes
    //
    _o09(sdk::unknown_ptr) event_dxgi_journal_entry;
    
    // [EventDXGIUnBindBackBuffersFromDwm]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac5b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac8e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xabaa8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad788, 0x17e70 bytes
    //
    _o10(sdk::unknown_ptr) event_dxgi_un_bind_back_buffers_from_dwm;
    
    // [EventFindClosestMatchingModeStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac630, 0x17e70 bytes
    // dxgi.dll .rdata:0xac960, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb28, 0x18b10 bytes
    // dxgi.dll .rdata:0xad808, 0x17e70 bytes
    //
    _o11(sdk::unknown_ptr) event_find_closest_matching_mode_start;
    
    // [EventFindClosestMatchingModeStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac0d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac410, 0x17e70 bytes
    // dxgi.dll .rdata:0xab648, 0x18b10 bytes
    // dxgi.dll .rdata:0xadcb0, 0x17e70 bytes
    //
    _o12(sdk::unknown_ptr) event_find_closest_matching_mode_stop;
    
    // [EventGetFrameStatistics]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3648, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3968, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e70, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a50, 0x17e70 bytes
    //
    _o13(sdk::unknown_ptr) event_get_frame_statistics;
    
    // [EventGetMultiplaneOverlayCaps]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe10, 0x17e70 bytes
    // dxgi.dll .rdata:0xac150, 0x17e70 bytes
    // dxgi.dll .rdata:0xab390, 0x18b10 bytes
    // dxgi.dll .rdata:0xad9f0, 0x17e70 bytes
    //
    _o14(sdk::unknown_ptr) event_get_multiplane_overlay_caps;
    
    // [EventOverrideSyncInterval]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3690, 0x17e70 bytes
    // dxgi.dll .rdata:0xa39b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6ee8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a98, 0x17e70 bytes
    //
    _o15(sdk::unknown_ptr) event_override_sync_interval;
    
    // [EventPresentMultiplaneOverlayChange]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac120, 0x17e70 bytes
    // dxgi.dll .rdata:0xac460, 0x17e70 bytes
    // dxgi.dll .rdata:0xab698, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd00, 0x17e70 bytes
    //
    _o16(sdk::unknown_ptr) event_present_multiplane_overlay_change;
    
    // [EventPresentMultiplaneOverlayStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac250, 0x17e70 bytes
    // dxgi.dll .rdata:0xac590, 0x17e70 bytes
    // dxgi.dll .rdata:0xab798, 0x18b10 bytes
    // dxgi.dll .rdata:0xade30, 0x17e70 bytes
    //
    _o17(sdk::unknown_ptr) event_present_multiplane_overlay_start;
    
    // [EventPresentMultiplaneOverlayStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabdc0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac100, 0x17e70 bytes
    // dxgi.dll .rdata:0xab350, 0x18b10 bytes
    // dxgi.dll .rdata:0xad9a0, 0x17e70 bytes
    //
    _o18(sdk::unknown_ptr) event_present_multiplane_overlay_stop;
    
    // [EventPresentStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac260, 0x17e70 bytes
    // dxgi.dll .rdata:0xac5a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab7a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade40, 0x17e70 bytes
    //
    _o19(sdk::unknown_ptr) event_present_start;
    
    // [EventPresentStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf70, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab4e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb50, 0x17e70 bytes
    //
    _o20(sdk::unknown_ptr) event_present_stop;
    
    // [EventProfileStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabdf0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac130, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6dd0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad9d0, 0x17e70 bytes
    //
    _o21(sdk::unknown_ptr) event_profile_start;
    
    // [EventProfileStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac1a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6ea0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd80, 0x17e70 bytes
    //
    _o22(sdk::unknown_ptr) event_profile_stop;
    
    // [EventReCreateSwapChainBufferForHardwareProtection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa36b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa39d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f18, 0x18b10 bytes
    // dxgi.dll .rdata:0xa46d8, 0x17e70 bytes
    //
    _o23(sdk::unknown_ptr) event_re_create_swap_chain_buffer_for_hardware_protection;
    
    // [EventReportFactory]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac290, 0x17e70 bytes
    // dxgi.dll .rdata:0xac5d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab7d8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade70, 0x17e70 bytes
    //
    _o24(sdk::unknown_ptr) event_report_factory;
    
    // [EventReportOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac510, 0x17e70 bytes
    // dxgi.dll .rdata:0xac840, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba00, 0x18b10 bytes
    // dxgi.dll .rdata:0xad6e8, 0x17e70 bytes
    //
    _o25(sdk::unknown_ptr) event_report_output;
    
    // [EventReportSwapChain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac210, 0x17e70 bytes
    // dxgi.dll .rdata:0xac550, 0x17e70 bytes
    // dxgi.dll .rdata:0xab768, 0x18b10 bytes
    // dxgi.dll .rdata:0xaddf0, 0x17e70 bytes
    //
    _o26(sdk::unknown_ptr) event_report_swap_chain;
    
    // [EventResizeBuffersStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac4a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac7d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab990, 0x18b10 bytes
    // dxgi.dll .rdata:0xad678, 0x17e70 bytes
    //
    _o27(sdk::unknown_ptr) event_resize_buffers_start;
    
    // [EventResizeBuffersStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf20, 0x17e70 bytes
    // dxgi.dll .rdata:0xac260, 0x17e70 bytes
    // dxgi.dll .rdata:0xab4a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb00, 0x17e70 bytes
    //
    _o28(sdk::unknown_ptr) event_resize_buffers_stop;
    
    // [EventResizeTargetStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac000, 0x17e70 bytes
    // dxgi.dll .rdata:0xac340, 0x17e70 bytes
    // dxgi.dll .rdata:0xab578, 0x18b10 bytes
    // dxgi.dll .rdata:0xadbe0, 0x17e70 bytes
    //
    _o29(sdk::unknown_ptr) event_resize_target_start;
    
    // [EventResizeTargetStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac0e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac420, 0x17e70 bytes
    // dxgi.dll .rdata:0xab658, 0x18b10 bytes
    // dxgi.dll .rdata:0xadcc0, 0x17e70 bytes
    //
    _o30(sdk::unknown_ptr) event_resize_target_stop;
    
    // [EventSetColorSpace1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac270, 0x17e70 bytes
    // dxgi.dll .rdata:0xac5b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab7b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade50, 0x17e70 bytes
    //
    _o31(sdk::unknown_ptr) event_set_color_space1;
    
    // [EventSetFullscreenStateStart]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac160, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab6c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd40, 0x17e70 bytes
    //
    _o32(sdk::unknown_ptr) event_set_fullscreen_state_start;
    
    // [EventSetFullscreenStateStop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac540, 0x17e70 bytes
    // dxgi.dll .rdata:0xac870, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba30, 0x18b10 bytes
    // dxgi.dll .rdata:0xad718, 0x17e70 bytes
    //
    _o33(sdk::unknown_ptr) event_set_fullscreen_state_stop;
    
    // [EventSetHardwareProtection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac1e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac520, 0x17e70 bytes
    // dxgi.dll .rdata:0xab738, 0x18b10 bytes
    // dxgi.dll .rdata:0xaddc0, 0x17e70 bytes
    //
    _o34(sdk::unknown_ptr) event_set_hardware_protection;
    
    // [EventSetHardwareProtectionFailure]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3600, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3920, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e20, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a08, 0x17e70 bytes
    //
    _o35(sdk::unknown_ptr) event_set_hardware_protection_failure;
    
    // [EventSetHardwareProtectionOnSwapChainBuffer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3658, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3978, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e80, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a60, 0x17e70 bytes
    //
    _o36(sdk::unknown_ptr) event_set_hardware_protection_on_swap_chain_buffer;
    
    // [FindAppRegKey]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd490, 0x17e70 bytes
    // dxgi.dll .text:0xd4c0, 0x17e70 bytes
    // dxgi.dll .text:0x17138, 0x18b10 bytes
    // dxgi.dll .text:0x86a0, 0x17e70 bytes
    //
    _o37(sdk::unknown_ptr) find_app_reg_key;
    
    // [FindGameConfigFromStoreAndFeatures]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2766c, 0x17e70 bytes
    // dxgi.dll .text:0x2797c, 0x17e70 bytes
    // dxgi.dll .text:0x2eae0, 0x18b10 bytes
    // dxgi.dll .text:0x28dfc, 0x17e70 bytes
    //
    _o38(sdk::unknown_ptr) find_game_config_from_store_and_features;
    
    // [FindOutputCounts]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc450, 0x17e70 bytes
    // dxgi.dll .text:0xc480, 0x17e70 bytes
    // dxgi.dll .text:0x1dea4, 0x18b10 bytes
    // dxgi.dll .text:0x7660, 0x17e70 bytes
    //
    _o39(sdk::unknown_ptr) find_output_counts;
    
    // [_FindPESection]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24cf0, 0x17e70 bytes
    // dxgi.dll .text:0x24ff0, 0x17e70 bytes
    // dxgi.dll .text:0x2c220, 0x18b10 bytes
    // dxgi.dll .text:0x25e10, 0x17e70 bytes
    //
    _o40(sdk::unknown_ptr) find_pe_section;
    
    // [FLOAT_to_SRGB]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x668e4, 0x17e70 bytes
    // dxgi.dll .text:0x669d4, 0x17e70 bytes
    // dxgi.dll .text:0x729c4, 0x18b10 bytes
    // dxgi.dll .text:0x67e04, 0x17e70 bytes
    //
    _o41(sdk::unknown_ptr) float_to_srgb;
    
    // [g_aNULLs]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf200, 0x17e70 bytes
    // dxgi.dll .data:0xcf200, 0x17e70 bytes
    // dxgi.dll .data:0xcd190, 0x18b10 bytes
    // dxgi.dll .data:0xd0270, 0x17e70 bytes
    //
    _o42(sdk::unknown_ptr) g_a_nul_ls;
    
    // [g_AttemptReadString]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbebc, 0x17e70 bytes
    // dxgi.dll .data:0xcbebc, 0x17e70 bytes
    // dxgi.dll .data:0xcaf4c, 0x18b10 bytes
    // dxgi.dll .data:0xccf08, 0x17e70 bytes
    //
    _o43(sdk::unknown_ptr) g_attempt_read_string;
    
    // [g_bAttemptedDXGIDebugDLLLoad]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf491, 0x17e70 bytes
    // dxgi.dll .data:0xcf491, 0x17e70 bytes
    // dxgi.dll .data:0xcd649, 0x18b10 bytes
    // dxgi.dll .data:0xd04c9, 0x17e70 bytes
    //
    _o44(sdk::unknown_ptr) g_b_attempted_dxgi_debug_dll_load;
    
    // [g_bCompatStringExists]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf308, 0x17e70 bytes
    // dxgi.dll .data:0xcf308, 0x17e70 bytes
    // dxgi.dll .data:0xcd4c0, 0x18b10 bytes
    // dxgi.dll .data:0xd0378, 0x17e70 bytes
    //
    _o45(sdk::unknown_ptr) g_b_compat_string_exists;
    
    // [g_bSuccessfullyLoadedDLL]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf490, 0x17e70 bytes
    // dxgi.dll .data:0xcf490, 0x17e70 bytes
    // dxgi.dll .data:0xcd648, 0x18b10 bytes
    // dxgi.dll .data:0xd04c8, 0x17e70 bytes
    //
    _o46(sdk::unknown_ptr) g_b_successfully_loaded_dll;
    
    // [g_CompatStringCache]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb480, 0x17e70 bytes
    // dxgi.dll .data:0xcb480, 0x17e70 bytes
    // dxgi.dll .data:0xca510, 0x18b10 bytes
    // dxgi.dll .data:0xcc4c0, 0x17e70 bytes
    //
    _o47(sdk::unknown_ptr) g_compat_string_cache;
    
    // [g_DXGKernel]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xce958, 0x17e70 bytes
    // dxgi.dll .data:0xce958, 0x17e70 bytes
    // dxgi.dll .data:0xcd218, 0x18b10 bytes
    // dxgi.dll .data:0xcf9a8, 0x17e70 bytes
    //
    _o48(sdk::unknown_ptr) g_dxg_kernel;
    
    // [g_header_init_InitializeResultExceptions]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb474, 0x17e70 bytes
    // dxgi.dll .data:0xcb474, 0x17e70 bytes
    // dxgi.dll .data:0xca4b4, 0x18b10 bytes
    // dxgi.dll .data:0xcc4b5, 0x17e70 bytes
    //
    _o49(uint8_t*) g_header_init_initialize_result_exceptions;
    
    // [g_header_init_InitializeResultHeader]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb471, 0x17e70 bytes
    // dxgi.dll .data:0xcb471, 0x17e70 bytes
    // dxgi.dll .data:0xca4b1, 0x18b10 bytes
    // dxgi.dll .data:0xcc4b2, 0x17e70 bytes
    //
    _o50(uint8_t*) g_header_init_initialize_result_header;
    
    // [g_header_init_InitializeStagingHeaderInternalApi]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb472, 0x17e70 bytes
    // dxgi.dll .data:0xcb472, 0x17e70 bytes
    // dxgi.dll .data:0xca4b2, 0x18b10 bytes
    // dxgi.dll .data:0xcc4b3, 0x17e70 bytes
    //
    _o51(uint8_t*) g_header_init_initialize_staging_header_internal_api;
    
    // [g_header_init_InitializeStagingSRUMFeatureReporting]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb470, 0x17e70 bytes
    // dxgi.dll .data:0xcb470, 0x17e70 bytes
    // dxgi.dll .data:0xca4b0, 0x18b10 bytes
    // dxgi.dll .data:0xcc4b1, 0x17e70 bytes
    //
    _o52(uint8_t*) g_header_init_initialize_staging_srum_feature_reporting;
    
    // [g_header_init_WilInitialize_ResultMacros_DesktopOrSystem]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb473, 0x17e70 bytes
    // dxgi.dll .data:0xcb473, 0x17e70 bytes
    // dxgi.dll .data:0xca4b3, 0x18b10 bytes
    // dxgi.dll .data:0xcc4b4, 0x17e70 bytes
    //
    _o53(uint8_t*) g_header_init_wil_initialize_result_macros_desktop_or_system;
    
    // [g_IsRemoteCachedResult]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xce0d8, 0x17e70 bytes
    // dxgi.dll .data:0xce0d8, 0x17e70 bytes
    // dxgi.dll .data:0xcd180, 0x18b10 bytes
    // dxgi.dll .data:0xcf128, 0x17e70 bytes
    //
    _o54(sdk::unknown_ptr) g_is_remote_cached_result;
    
    // [g_Module]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcdd90, 0x17e70 bytes
    // dxgi.dll .data:0xcdd90, 0x17e70 bytes
    // dxgi.dll .data:0xcce20, 0x18b10 bytes
    // dxgi.dll .data:0xcede0, 0x17e70 bytes
    //
    _o55(sdk::unknown_ptr) g_module;
    
    // [g_pDebugPrivate]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2f8, 0x17e70 bytes
    // dxgi.dll .data:0xcf2f8, 0x17e70 bytes
    // dxgi.dll .data:0xcd4b0, 0x18b10 bytes
    // dxgi.dll .data:0xd0368, 0x17e70 bytes
    //
    _o56(sdk::unknown_ptr) g_p_debug_private;
    
    // [g_pDXGIMessage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf498, 0x17e70 bytes
    // dxgi.dll .data:0xcf498, 0x17e70 bytes
    // dxgi.dll .data:0xcd650, 0x18b10 bytes
    // dxgi.dll .data:0xd04d0, 0x17e70 bytes
    //
    _o57(sdk::unknown_ptr) g_p_dxgi_message;
    
    // [g_pfnResultLoggingCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3a0, 0x17e70 bytes
    // dxgi.dll .data:0xcf3a0, 0x17e70 bytes
    // dxgi.dll .data:0xcd560, 0x18b10 bytes
    // dxgi.dll .data:0xd0400, 0x17e70 bytes
    //
    _o58(sdk::unknown/*none*/*) g_pfn_result_logging_callback;
    
    // [g_ShimmedAppCompatString]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf4a8, 0x17e70 bytes
    // dxgi.dll .data:0xcf4a8, 0x17e70 bytes
    // dxgi.dll .data:0xcd660, 0x18b10 bytes
    // dxgi.dll .data:0xd04e0, 0x17e70 bytes
    //
    _o59(sdk::unknown_ptr) g_shimmed_app_compat_string;
    
    // [g_ShimmedAppCompatStringBufferLength]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf300, 0x17e70 bytes
    // dxgi.dll .data:0xcf300, 0x17e70 bytes
    // dxgi.dll .data:0xcd4b8, 0x18b10 bytes
    // dxgi.dll .data:0xd0370, 0x17e70 bytes
    //
    _o60(sdk::unknown_ptr) g_shimmed_app_compat_string_buffer_length;
    
    // [g_Telemetry]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcdd40, 0x17e70 bytes
    // dxgi.dll .data:0xcdd40, 0x17e70 bytes
    // dxgi.dll .data:0xccdd0, 0x18b10 bytes
    // dxgi.dll .data:0xced90, 0x17e70 bytes
    //
    _o61(sdk::unknown_ptr) g_telemetry;
    
    // [g_wil_details_apiGetFeatureEnabledState]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf458, 0x17e70 bytes
    // dxgi.dll .data:0xcf458, 0x17e70 bytes
    // dxgi.dll .data:0xcd610, 0x18b10 bytes
    // dxgi.dll .data:0xd03d0, 0x17e70 bytes
    //
    _o62(sdk::function<enum nt::feature_enabled_state_t(uint32_t, enum nt::feature_change_time_t, int32_t*)>**) g_wil_details_api_get_feature_enabled_state;
    
    // [g_wil_details_apiGetFeatureVariant]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf440, 0x17e70 bytes
    // dxgi.dll .data:0xcf440, 0x17e70 bytes
    // dxgi.dll .data:0xcd600, 0x18b10 bytes
    // dxgi.dll .data:0xd04a0, 0x17e70 bytes
    //
    _o63(sdk::unknown_ptr) g_wil_details_api_get_feature_variant;
    
    // [g_wil_details_apiRecordFeatureUsage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf3f0, 0x17e70 bytes
    // dxgi.dll .data:0xcf3f0, 0x17e70 bytes
    // dxgi.dll .data:0xcd5b0, 0x18b10 bytes
    // dxgi.dll .data:0xd0450, 0x17e70 bytes
    //
    _o64(sdk::function<void(uint32_t, uint32_t, uint32_t, const char*)>**) g_wil_details_api_record_feature_usage;
    
    // [g_wil_details_apiSubscribeFeatureStateChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf448, 0x17e70 bytes
    // dxgi.dll .data:0xcf448, 0x17e70 bytes
    // dxgi.dll .data:0xcd608, 0x18b10 bytes
    // dxgi.dll .data:0xd04a8, 0x17e70 bytes
    //
    _o65(sdk::function<void(struct nt::feature_state_change_subscription_t**, sdk::function<void(void*)>*, void*)>**) g_wil_details_api_subscribe_feature_state_change_notification;
    
    // [g_wil_details_apiUnsubscribeFeatureStateChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf468, 0x17e70 bytes
    // dxgi.dll .data:0xcf468, 0x17e70 bytes
    // dxgi.dll .data:0xcd620, 0x18b10 bytes
    // dxgi.dll .data:0xd03e0, 0x17e70 bytes
    //
    _o66(sdk::function<void(struct nt::feature_state_change_subscription_t*)>**) g_wil_details_api_unsubscribe_feature_state_change_notification;
    
    // [g_wil_details_internalGetFeatureEnabledState]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2e8, 0x17e70 bytes
    // dxgi.dll .data:0xcf2e8, 0x17e70 bytes
    // dxgi.dll .data:0xcd508, 0x18b10 bytes
    // dxgi.dll .data:0xd0308, 0x17e70 bytes
    //
    _o67(sdk::function<enum nt::feature_enabled_state_t(uint32_t, enum nt::feature_change_time_t, int32_t*)>**) g_wil_details_internal_get_feature_enabled_state;
    
    // [g_wil_details_internalGetFeatureVariant]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2e0, 0x17e70 bytes
    // dxgi.dll .data:0xcf2e0, 0x17e70 bytes
    // dxgi.dll .data:0xcd498, 0x18b10 bytes
    // dxgi.dll .data:0xd0360, 0x17e70 bytes
    //
    _o68(sdk::unknown_ptr) g_wil_details_internal_get_feature_variant;
    
    // [g_wil_details_internalRecordFeatureUsage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2c8, 0x17e70 bytes
    // dxgi.dll .data:0xcf2c8, 0x17e70 bytes
    // dxgi.dll .data:0xcd480, 0x18b10 bytes
    // dxgi.dll .data:0xd0348, 0x17e70 bytes
    //
    _o69(sdk::function<void(uint32_t, uint32_t, uint32_t, const char*)>**) g_wil_details_internal_record_feature_usage;
    
    // [g_wil_details_internalSubscribeFeatureStateChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2d8, 0x17e70 bytes
    // dxgi.dll .data:0xcf2d8, 0x17e70 bytes
    // dxgi.dll .data:0xcd490, 0x18b10 bytes
    // dxgi.dll .data:0xd0358, 0x17e70 bytes
    //
    _o70(sdk::function<void(struct nt::feature_state_change_subscription_t**, sdk::function<void(void*)>*, void*)>**) g_wil_details_internal_subscribe_feature_state_change_notification;
    
    // [g_wil_details_internalUnsubscribeFeatureStateChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2f0, 0x17e70 bytes
    // dxgi.dll .data:0xcf2f0, 0x17e70 bytes
    // dxgi.dll .data:0xcd4a8, 0x18b10 bytes
    // dxgi.dll .data:0xd0310, 0x17e70 bytes
    //
    _o71(sdk::function<void(struct nt::feature_state_change_subscription_t*)>**) g_wil_details_internal_unsubscribe_feature_state_change_notification;
    
    // [g_wil_details_ntdllModuleHandle]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe88, 0x17e70 bytes
    // dxgi.dll .data:0xcbe88, 0x17e70 bytes
    // dxgi.dll .data:0xcaf10, 0x18b10 bytes
    // dxgi.dll .data:0xccef8, 0x17e70 bytes
    //
    _o72(struct win::hinstance_t**) g_wil_details_ntdll_module_handle;
    
    // [g_wil_details_pfnNtQueryWnfStateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe78, 0x17e70 bytes
    // dxgi.dll .data:0xcbe78, 0x17e70 bytes
    // dxgi.dll .data:0xcaf08, 0x18b10 bytes
    // dxgi.dll .data:0xccee8, 0x17e70 bytes
    //
    _o73(sdk::function<int32_t(const struct wil::wnf_state_name_t*, const struct wil::wnf_type_id_t*, const void*, uint32_t*, void*, uint32_t*)>**) g_wil_details_pfn_nt_query_wnf_state_data;
    
    // [g_wil_details_pfnNtUpdateWnfStateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe98, 0x17e70 bytes
    // dxgi.dll .data:0xcbe98, 0x17e70 bytes
    // dxgi.dll .data:0xcaf18, 0x18b10 bytes
    // dxgi.dll .data:0xcce68, 0x17e70 bytes
    //
    _o74(sdk::function<int32_t(const struct wil::wnf_state_name_t*, const void*, uint32_t, const struct wil::wnf_type_id_t*, const void*, uint32_t, uint32_t)>**) g_wil_details_pfn_nt_update_wnf_state_data;
    
    // [g_wil_details_pfnRtlNotifyFeatureUsage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf388, 0x17e70 bytes
    // dxgi.dll .data:0xcf388, 0x17e70 bytes
    // dxgi.dll .data:0xcd548, 0x18b10 bytes
    // dxgi.dll .data:0xd03e8, 0x17e70 bytes
    //
    _o75(sdk::function<int32_t(struct rtl::feature_usage_report_t*)>**) g_wil_details_pfn_rtl_notify_feature_usage;
    
    // [g_wil_details_pfnRtlQueryFeatureConfiguration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe20, 0x17e70 bytes
    // dxgi.dll .data:0xcbe20, 0x17e70 bytes
    // dxgi.dll .data:0xcaec0, 0x18b10 bytes
    // dxgi.dll .data:0xcce90, 0x17e70 bytes
    //
    _o76(sdk::function<int32_t(uint32_t, enum rtl::feature_configuration_type_t, uint64_t*, struct rtl::feature_configuration_t*)>**) g_wil_details_pfn_rtl_query_feature_configuration;
    
    // [g_wil_details_pfnRtlRegisterFeatureConfigurationChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe28, 0x17e70 bytes
    // dxgi.dll .data:0xcbe28, 0x17e70 bytes
    // dxgi.dll .data:0xcaec8, 0x18b10 bytes
    // dxgi.dll .data:0xcce98, 0x17e70 bytes
    //
    _o77(sdk::function<int32_t(sdk::function<void(void*)>*, void*, uint64_t*, void**)>**) g_wil_details_pfn_rtl_register_feature_configuration_change_notification;
    
    // [g_wil_details_pfnRtlUnregisterFeatureConfigurationChangeNotification]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbe30, 0x17e70 bytes
    // dxgi.dll .data:0xcbe30, 0x17e70 bytes
    // dxgi.dll .data:0xcaed0, 0x18b10 bytes
    // dxgi.dll .data:0xccea0, 0x17e70 bytes
    //
    _o78(sdk::function<void(void*)>**) g_wil_details_pfn_rtl_unregister_feature_configuration_change_notification;
    
    // [g_wil_details_RecordSRUMFeatureUsage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf2d0, 0x17e70 bytes
    // dxgi.dll .data:0xcf2d0, 0x17e70 bytes
    // dxgi.dll .data:0xcd488, 0x18b10 bytes
    // dxgi.dll .data:0xd0350, 0x17e70 bytes
    //
    _o79(sdk::function<void(uint32_t, uint32_t, uint32_t)>**) g_wil_details_record_srum_feature_usage;
    
    // [gammaToLinear]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56dac, 0x17e70 bytes
    // dxgi.dll .text:0x56e9c, 0x17e70 bytes
    // dxgi.dll .text:0x61f84, 0x18b10 bytes
    // dxgi.dll .text:0x5832c, 0x17e70 bytes
    //
    _o80(sdk::unknown_ptr) gamma_to_linear;
    
    // [GetAdapterAndSourceInfo]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x16820, 0x17e70 bytes
    // dxgi.dll .text:0x16a80, 0x17e70 bytes
    // dxgi.dll .text:0x200c4, 0x18b10 bytes
    // dxgi.dll .text:0x11f90, 0x17e70 bytes
    //
    _o81(sdk::unknown_ptr) get_adapter_and_source_info;
    
    // [GetAppCompatString]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xfa60, 0x17e70 bytes
    // dxgi.dll .text:0xfa90, 0x17e70 bytes
    // dxgi.dll .text:0x14d40, 0x18b10 bytes
    // dxgi.dll .text:0xaf40, 0x17e70 bytes
    //
    _o82(sdk::unknown_ptr) get_app_compat_string;
    
    // [GetConfigValueFromBuffer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc28c, 0x17e70 bytes
    // dxgi.dll .text:0xc2bc, 0x17e70 bytes
    // dxgi.dll .text:0x1e79c, 0x18b10 bytes
    // dxgi.dll .text:0x749c, 0x17e70 bytes
    //
    _o83(sdk::unknown_ptr) get_config_value_from_buffer;
    
    // [GetContainedOutputHwnd]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x670e4, 0x17e70 bytes
    // dxgi.dll .text:0x671d4, 0x17e70 bytes
    // dxgi.dll .text:0x73584, 0x18b10 bytes
    // dxgi.dll .text:0x68604, 0x17e70 bytes
    //
    _o84(sdk::unknown_ptr) get_contained_output_hwnd;
    
    // [DXGIGetDebugInterface1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5bf70, 0x17e70 bytes
    // dxgi.dll .text:0x5c060, 0x17e70 bytes
    // dxgi.dll .text:0x67dc0, 0x18b10 bytes
    // dxgi.dll .text:0x5d530, 0x17e70 bytes
    //
    _o85(sdk::unknown_ptr) get_debug_interface1;
    
    // [DXGIGetDebugInterface1Impl]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58750, 0x17e70 bytes
    // dxgi.dll .text:0x58840, 0x17e70 bytes
    // dxgi.dll .text:0x63b00, 0x18b10 bytes
    // dxgi.dll .text:0x59cf0, 0x17e70 bytes
    //
    _o86(sdk::unknown_ptr) get_debug_interface1_impl;
    
    // [GetModuleInfo]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd5ac, 0x17e70 bytes
    // dxgi.dll .text:0xd5dc, 0x17e70 bytes
    // dxgi.dll .text:0x17254, 0x18b10 bytes
    // dxgi.dll .text:0x87bc, 0x17e70 bytes
    //
    _o87(sdk::unknown_ptr) get_module_info;
    
    // [GetStereoConfigDefaultValue]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc2a8, 0x17e70 bytes
    // dxgi.dll .text:0xc2d8, 0x17e70 bytes
    // dxgi.dll .text:0x1e7b8, 0x18b10 bytes
    // dxgi.dll .text:0x74b8, 0x17e70 bytes
    //
    _o88(sdk::unknown_ptr) get_stereo_config_default_value;
    
    // [GetUnderlyingHwnd]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7a8f4, 0x17e70 bytes
    // dxgi.dll .text:0x7aa24, 0x17e70 bytes
    // dxgi.dll .text:0x85f64, 0x18b10 bytes
    // dxgi.dll .text:0x7be54, 0x17e70 bytes
    //
    _o89(sdk::unknown_ptr) get_underlying_hwnd;
    
    // [_GUID_00000000_0000_0000_c000_000000000046]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa12b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa15d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa41d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa16d0, 0x17e70 bytes
    //
    _o90(sdk::unknown_ptr) guid_00000000_0000_0000_c000_000000000046;
    
    // [_GUID_00000003_0000_0000_c000_000000000046]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xacd28, 0x17e70 bytes
    // dxgi.dll .rdata:0xad058, 0x17e70 bytes
    // dxgi.dll .rdata:0xac238, 0x18b10 bytes
    // dxgi.dll .rdata:0xae4f8, 0x17e70 bytes
    //
    _o91(sdk::unknown_ptr) guid_00000003_0000_0000_c000_000000000046;
    
    // [_GUID_00000035_0000_0000_c000_000000000046]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xace30, 0x17e70 bytes
    // dxgi.dll .rdata:0xad160, 0x17e70 bytes
    // dxgi.dll .rdata:0xac338, 0x18b10 bytes
    // dxgi.dll .rdata:0xae5f8, 0x17e70 bytes
    //
    _o92(sdk::unknown_ptr) guid_00000035_0000_0000_c000_000000000046;
    
    // [_GUID_00cddea8_939b_4b83_a340_a685226666cc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa92c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9600, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8708, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa6f0, 0x17e70 bytes
    //
    _o93(sdk::unknown_ptr) guid_00cddea8_939b_4b83_a340_a685226666cc;
    
    // [_GUID_035f3ab4_482e_4e50_b41f_8a7f8bd8960b]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa37b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3ae8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa7058, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4ab8, 0x17e70 bytes
    //
    _o94(sdk::unknown_ptr) guid_035f3ab4_482e_4e50_b41f_8a7f8bd8960b;
    
    // [_GUID_05008617_fbfd_4051_a790_144884b4f6a9]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac730, 0x17e70 bytes
    // dxgi.dll .rdata:0xaca60, 0x17e70 bytes
    // dxgi.dll .rdata:0xabc28, 0x18b10 bytes
    // dxgi.dll .rdata:0xadf08, 0x17e70 bytes
    //
    _o95(sdk::unknown_ptr) guid_05008617_fbfd_4051_a790_144884b4f6a9;
    
    // [_GUID_068346e8_aaec_4b84_add7_137f513f77a1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9310, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9650, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8758, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa740, 0x17e70 bytes
    //
    _o96(sdk::unknown_ptr) guid_068346e8_aaec_4b84_add7_137f513f77a1;
    
    // [_GUID_0a753dcf_c4d8_4b91_adf6_be5a60d95a76]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae500, 0x17e70 bytes
    // dxgi.dll .rdata:0xae830, 0x17e70 bytes
    // dxgi.dll .rdata:0xadfd0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafcd0, 0x17e70 bytes
    //
    _o97(sdk::unknown_ptr) guid_0a753dcf_c4d8_4b91_adf6_be5a60d95a76;
    
    // [_GUID_0aa1ae0a_fa0e_4b84_8644_e05ff8e5acb5]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac7a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xacad8, 0x17e70 bytes
    // dxgi.dll .rdata:0xabe40, 0x18b10 bytes
    // dxgi.dll .rdata:0xae120, 0x17e70 bytes
    //
    _o98(sdk::unknown_ptr) guid_0aa1ae0a_fa0e_4b84_8644_e05ff8e5acb5;
    
    // [_GUID_0adf7d52_929c_4e61_addb_ffed30de66ef]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3d78, 0x17e70 bytes
    // dxgi.dll .rdata:0xa40a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa78a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa50b8, 0x17e70 bytes
    //
    _o99(sdk::unknown_ptr) guid_0adf7d52_929c_4e61_addb_ffed30de66ef;
    
    // [_GUID_0ec870a6_5d7e_4c22_8cfc_5baae07616ed]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3aa8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3dd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa73a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4dc8, 0x17e70 bytes
    //
    _p00(sdk::unknown_ptr) guid_0ec870a6_5d7e_4c22_8cfc_5baae07616ed;
    
    // [_GUID_117e202d_a859_4c89_873b_c2aa566788e3]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac588, 0x17e70 bytes
    // dxgi.dll .rdata:0xac8b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba80, 0x18b10 bytes
    // dxgi.dll .rdata:0xad760, 0x17e70 bytes
    //
    _p01(sdk::unknown_ptr) guid_117e202d_a859_4c89_873b_c2aa566788e3;
    
    // [_GUID_167c3e80_87d1_4ddd_92ba_dc5394456fe5]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xacdd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xad108, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xae5a8, 0x17e70 bytes
    //
    _p02(sdk::unknown_ptr) guid_167c3e80_87d1_4ddd_92ba_dc5394456fe5;
    
    // [_GUID_17426d54_b74a_425d_ac5e_220c7b9e4079]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad2b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xad5e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea80, 0x17e70 bytes
    //
    _p03(sdk::unknown_ptr) guid_17426d54_b74a_425d_ac5e_220c7b9e4079;
    
    // [_GUID_189819f1_1db6_4b57_be54_1821339b85f7]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c18, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f38, 0x17e70 bytes
    // dxgi.dll .rdata:0xa42f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1690, 0x17e70 bytes
    //
    _p04(sdk::unknown_ptr) guid_189819f1_1db6_4b57_be54_1821339b85f7;
    
    // [_GUID_191cfac3_a341_470d_b26e_a864f428319c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xaca50, 0x17e70 bytes
    // dxgi.dll .rdata:0xacd80, 0x17e70 bytes
    // dxgi.dll .rdata:0xabf48, 0x18b10 bytes
    // dxgi.dll .rdata:0xae228, 0x17e70 bytes
    //
    _p05(sdk::unknown_ptr) guid_191cfac3_a341_470d_b26e_a864f428319c;
    
    // [_GUID_1ae27891_516c_4b9e_8018_b5f8d846685e]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac3a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac6e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab8c0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad588, 0x17e70 bytes
    //
    _p06(sdk::unknown_ptr) guid_1ae27891_516c_4b9e_8018_b5f8d846685e;
    
    // [_GUID_1ae9fb77_7181_4326_8c90_8ebc69f0aef8]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac7f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xacb28, 0x17e70 bytes
    // dxgi.dll .rdata:0xabe90, 0x18b10 bytes
    // dxgi.dll .rdata:0xae170, 0x17e70 bytes
    //
    _p07(sdk::unknown_ptr) guid_1ae9fb77_7181_4326_8c90_8ebc69f0aef8;
    
    // [_GUID_1bc6ea02_ef36_464f_bf0c_21ca39e5168a]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad220, 0x17e70 bytes
    // dxgi.dll .rdata:0xad550, 0x17e70 bytes
    // dxgi.dll .rdata:0xac410, 0x18b10 bytes
    // dxgi.dll .rdata:0xae9f0, 0x17e70 bytes
    //
    _p08(sdk::unknown_ptr) guid_1bc6ea02_ef36_464f_bf0c_21ca39e5168a;
    
    // [_GUID_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad270, 0x17e70 bytes
    // dxgi.dll .rdata:0xad5a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac460, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea40, 0x17e70 bytes
    //
    _p09(sdk::unknown_ptr) guid_1ddd77aa_9a4a_4cc8_9e55_98c196bafc8f;
    
    // [_GUID_2411e7e1_12ac_4ccf_bd14_9798e8534dc0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1280, 0x17e70 bytes
    // dxgi.dll .rdata:0xa15a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4288, 0x18b10 bytes
    // dxgi.dll .rdata:0xa16a0, 0x17e70 bytes
    //
    _p10(sdk::unknown_ptr) guid_2411e7e1_12ac_4ccf_bd14_9798e8534dc0;
    
    // [_GUID_25297d5c_3ad4_4c9c_b5cf_e36a38512330]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xacdc8, 0x17e70 bytes
    // dxgi.dll .rdata:0xad0f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2d8, 0x18b10 bytes
    // dxgi.dll .rdata:0xae598, 0x17e70 bytes
    //
    _p11(sdk::unknown_ptr) guid_25297d5c_3ad4_4c9c_b5cf_e36a38512330;
    
    // [_GUID_25483823_cd46_4c7d_86ca_47aa95b837bd]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad230, 0x17e70 bytes
    // dxgi.dll .rdata:0xad560, 0x17e70 bytes
    // dxgi.dll .rdata:0xac420, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea00, 0x17e70 bytes
    //
    _p12(sdk::unknown_ptr) guid_25483823_cd46_4c7d_86ca_47aa95b837bd;
    
    // [_GUID_2633066b_4514_4c7a_8fd8_12ea98059d18]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9448, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9788, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8878, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa878, 0x17e70 bytes
    //
    _p13(sdk::unknown_ptr) guid_2633066b_4514_4c7a_8fd8_12ea98059d18;
    
    // [_GUID_28d6ad3d_ee2a_4bcd_9419_7d54800435b1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xacda8, 0x17e70 bytes
    // dxgi.dll .rdata:0xad0d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xae578, 0x17e70 bytes
    //
    _p14(sdk::unknown_ptr) guid_28d6ad3d_ee2a_4bcd_9419_7d54800435b1;
    
    // [_GUID_29038f61_3839_4626_91fd_086879011a05]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa15b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa18d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3ae8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa19d0, 0x17e70 bytes
    //
    _p15(sdk::unknown_ptr) guid_29038f61_3839_4626_91fd_086879011a05;
    
    // [_GUID_29e691fa_4567_4dca_b319_d0f207eb6807]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xacdb8, 0x17e70 bytes
    // dxgi.dll .rdata:0xad0e8, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xae588, 0x17e70 bytes
    //
    _p16(sdk::unknown_ptr) guid_29e691fa_4567_4dca_b319_d0f207eb6807;
    
    // [_GUID_2c4eef28_1bc0_4736_b7dd_b62692f9bd67]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xace00, 0x17e70 bytes
    // dxgi.dll .rdata:0xad130, 0x17e70 bytes
    // dxgi.dll .rdata:0xac308, 0x18b10 bytes
    // dxgi.dll .rdata:0xae5c8, 0x17e70 bytes
    //
    _p17(sdk::unknown_ptr) guid_2c4eef28_1bc0_4736_b7dd_b62692f9bd67;
    
    // [_GUID_2d75f35a_70a7_4395_ba2d_cef0b18399f9]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac520, 0x17e70 bytes
    // dxgi.dll .rdata:0xac850, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba10, 0x18b10 bytes
    // dxgi.dll .rdata:0xad6f8, 0x17e70 bytes
    //
    _p18(sdk::unknown_ptr) guid_2d75f35a_70a7_4395_ba2d_cef0b18399f9;
    
    // [_GUID_3052b611_56c3_4c3e_8bf3_f6e1ad473f06]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac2b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac5f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab7f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade90, 0x17e70 bytes
    //
    _p19(sdk::unknown_ptr) guid_3052b611_56c3_4c3e_8bf3_f6e1ad473f06;
    
    // [_GUID_30961379_4609_4a41_998e_54fe567ee0c1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac700, 0x17e70 bytes
    // dxgi.dll .rdata:0xaca30, 0x17e70 bytes
    // dxgi.dll .rdata:0xabbf8, 0x18b10 bytes
    // dxgi.dll .rdata:0xaded8, 0x17e70 bytes
    //
    _p20(sdk::unknown_ptr) guid_30961379_4609_4a41_998e_54fe567ee0c1;
    
    // [_GUID_30d5a829_7fa4_4026_83bb_d75bae4ea99e]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf00, 0x17e70 bytes
    // dxgi.dll .rdata:0xac240, 0x17e70 bytes
    // dxgi.dll .rdata:0xab480, 0x18b10 bytes
    // dxgi.dll .rdata:0xadae0, 0x17e70 bytes
    //
    _p21(sdk::unknown_ptr) guid_30d5a829_7fa4_4026_83bb_d75bae4ea99e;
    
    // [_GUID_310d36a0_d2e7_4c0a_aa04_6a9d23b8886a]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1290, 0x17e70 bytes
    // dxgi.dll .rdata:0xa15b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4300, 0x18b10 bytes
    // dxgi.dll .rdata:0xa16b0, 0x17e70 bytes
    //
    _p22(sdk::unknown_ptr) guid_310d36a0_d2e7_4c0a_aa04_6a9d23b8886a;
    
    // [_GUID_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac7c8, 0x17e70 bytes
    // dxgi.dll .rdata:0xacaf8, 0x17e70 bytes
    // dxgi.dll .rdata:0xabe60, 0x18b10 bytes
    // dxgi.dll .rdata:0xae140, 0x17e70 bytes
    //
    _p23(sdk::unknown_ptr) guid_3c8d99d1_4fbf_4181_a82c_af66bf7bd24e;
    
    // [_GUID_3d3e0379_f9de_4d58_bb6c_18d62992f1a6]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9418, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9758, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8858, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa848, 0x17e70 bytes
    //
    _p24(sdk::unknown_ptr) guid_3d3e0379_f9de_4d58_bb6c_18d62992f1a6;
    
    // [_GUID_3d585d5a_bd4a_489e_b1f4_3dbcb6452ffb]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa93b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa96f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa87f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa7e8, 0x17e70 bytes
    //
    _p25(sdk::unknown_ptr) guid_3d585d5a_bd4a_489e_b1f4_3dbcb6452ffb;
    
    // [_GUID_3fd03d36_4eb1_424a_a582_494ecb8ba813]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae530, 0x17e70 bytes
    // dxgi.dll .rdata:0xae860, 0x17e70 bytes
    // dxgi.dll .rdata:0xae000, 0x18b10 bytes
    // dxgi.dll .rdata:0xafd00, 0x17e70 bytes
    //
    _p26(sdk::unknown_ptr) guid_3fd03d36_4eb1_424a_a582_494ecb8ba813;
    
    // [_GUID_41e7d1f2_a591_4f7b_a2e5_fa9c843e1c12]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad250, 0x17e70 bytes
    // dxgi.dll .rdata:0xad580, 0x17e70 bytes
    // dxgi.dll .rdata:0xac440, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea20, 0x17e70 bytes
    //
    _p27(sdk::unknown_ptr) guid_41e7d1f2_a591_4f7b_a2e5_fa9c843e1c12;
    
    // [_GUID_45d64a29_a63e_4cb6_b498_5781d298cb4f]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae560, 0x17e70 bytes
    // dxgi.dll .rdata:0xae890, 0x17e70 bytes
    // dxgi.dll .rdata:0xae030, 0x18b10 bytes
    // dxgi.dll .rdata:0xafd30, 0x17e70 bytes
    //
    _p28(sdk::unknown_ptr) guid_45d64a29_a63e_4cb6_b498_5781d298cb4f;
    
    // [_GUID_490f8bc0_1a7a_44bc_9d02_4b720b751194]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad2c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xad5f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4b0, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea90, 0x17e70 bytes
    //
    _p29(sdk::unknown_ptr) guid_490f8bc0_1a7a_44bc_9d02_4b720b751194;
    
    // [_GUID_50c7f8e9_a63f_4035_9801_b96e733347de]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa12c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa15e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa41c0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa16e0, 0x17e70 bytes
    //
    _p30(sdk::unknown_ptr) guid_50c7f8e9_a63f_4035_9801_b96e733347de;
    
    // [_GUID_50c83a1c_e072_4c48_87b0_3630fa36a6d0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad240, 0x17e70 bytes
    // dxgi.dll .rdata:0xad570, 0x17e70 bytes
    // dxgi.dll .rdata:0xac430, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea10, 0x17e70 bytes
    //
    _p31(sdk::unknown_ptr) guid_50c83a1c_e072_4c48_87b0_3630fa36a6d0;
    
    // [_GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa19c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1ce0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa42e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1de0, 0x17e70 bytes
    //
    _p32(sdk::unknown_ptr) guid_54ec77fa_1377_44e6_8c32_88fd5f44c84c;
    
    // [_GUID_595e39d1_2724_4663_99b1_da969de28364]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa92d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9610, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8718, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa700, 0x17e70 bytes
    //
    _p33(sdk::unknown_ptr) guid_595e39d1_2724_4663_99b1_da969de28364;
    
    // [_GUID_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae4e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xae810, 0x17e70 bytes
    // dxgi.dll .rdata:0xadfb0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafcb0, 0x17e70 bytes
    //
    _p34(sdk::unknown_ptr) guid_5b160d0f_ac1b_4185_8ba8_b3ae42a5a455;
    
    // [_GUID_5c4feebc_cd7d_4938_bc9d_d99064d06442]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3db8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa40e8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa78e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa50f8, 0x17e70 bytes
    //
    _p35(sdk::unknown_ptr) guid_5c4feebc_cd7d_4938_bc9d_d99064d06442;
    
    // [_GUID_6007896c_3244_4afd_bf18_a6d3beda5023]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae320, 0x17e70 bytes
    // dxgi.dll .rdata:0xae650, 0x17e70 bytes
    // dxgi.dll .rdata:0xaddd0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafaf0, 0x17e70 bytes
    //
    _p36(sdk::unknown_ptr) guid_6007896c_3244_4afd_bf18_a6d3beda5023;
    
    // [_GUID_6102dee4_af59_4b09_b999_b44d73f09b24]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae4f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xae820, 0x17e70 bytes
    // dxgi.dll .rdata:0xadfc0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafcc0, 0x17e70 bytes
    //
    _p37(sdk::unknown_ptr) guid_6102dee4_af59_4b09_b999_b44d73f09b24;
    
    // [_GUID_610ee586_4318_4ce1_be1d_b27903eef753]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad1e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xad510, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xae9b0, 0x17e70 bytes
    //
    _p38(sdk::unknown_ptr) guid_610ee586_4318_4ce1_be1d_b27903eef753;
    
    // [_GUID_645967a4_1392_4310_a798_8053ce3e93fd]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac7b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xacae8, 0x17e70 bytes
    // dxgi.dll .rdata:0xabe50, 0x18b10 bytes
    // dxgi.dll .rdata:0xae130, 0x17e70 bytes
    //
    _p39(sdk::unknown_ptr) guid_645967a4_1392_4310_a798_8053ce3e93fd;
    
    // [_GUID_696442be_a72e_4059_bc79_5b5c98040fad]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3dd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4108, 0x17e70 bytes
    // dxgi.dll .rdata:0xa7908, 0x18b10 bytes
    // dxgi.dll .rdata:0xa5118, 0x17e70 bytes
    //
    _p40(sdk::unknown_ptr) guid_696442be_a72e_4059_bc79_5b5c98040fad;
    
    // [_GUID_6d5140c1_7436_11ce_8034_00aa006009fa]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae660, 0x17e70 bytes
    // dxgi.dll .rdata:0xae990, 0x17e70 bytes
    // dxgi.dll .rdata:0xae130, 0x18b10 bytes
    // dxgi.dll .rdata:0xafe30, 0x17e70 bytes
    //
    _p41(sdk::unknown_ptr) guid_6d5140c1_7436_11ce_8034_00aa006009fa;
    
    // [_GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad2d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xad600, 0x17e70 bytes
    // dxgi.dll .rdata:0xa73b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xaeaa0, 0x17e70 bytes
    //
    _p42(sdk::unknown_ptr) guid_6f15aaf2_d208_4e89_9ab4_489535d34f9c;
    
    // [_GUID_6f66a9a0_bece_4ee8_b11b_990eb38ed976]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa92b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa95f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa86f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa6e0, 0x17e70 bytes
    //
    _p43(sdk::unknown_ptr) guid_6f66a9a0_bece_4ee8_b11b_990eb38ed976;
    
    // [_GUID_712bd56d_86ff_4b71_91e1_c13b274ff2a2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac7d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xacb08, 0x17e70 bytes
    // dxgi.dll .rdata:0xabe70, 0x18b10 bytes
    // dxgi.dll .rdata:0xae150, 0x17e70 bytes
    //
    _p44(sdk::unknown_ptr) guid_712bd56d_86ff_4b71_91e1_c13b274ff2a2;
    
    // [_GUID_713f394e_92ca_47e7_ab81_1159c2791e54]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad280, 0x17e70 bytes
    // dxgi.dll .rdata:0xad5b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac470, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea50, 0x17e70 bytes
    //
    _p45(sdk::unknown_ptr) guid_713f394e_92ca_47e7_ab81_1159c2791e54;
    
    // [_GUID_7632e1f5_ee65_4dca_87fd_84cd75f8838d]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad210, 0x17e70 bytes
    // dxgi.dll .rdata:0xad540, 0x17e70 bytes
    // dxgi.dll .rdata:0xac400, 0x18b10 bytes
    // dxgi.dll .rdata:0xae9e0, 0x17e70 bytes
    //
    _p46(sdk::unknown_ptr) guid_7632e1f5_ee65_4dca_87fd_84cd75f8838d;
    
    // [_GUID_7652c85a_0df5_4567_bcdd_8176a332b99b]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa93f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9738, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8838, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa828, 0x17e70 bytes
    //
    _p47(sdk::unknown_ptr) guid_7652c85a_0df5_4567_bcdd_8176a332b99b;
    
    // [_GUID_770aae78_f26f_4dba_a829_253c83d1b387]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1af8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1e18, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4298, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1f18, 0x17e70 bytes
    //
    _p48(sdk::unknown_ptr) guid_770aae78_f26f_4dba_a829_253c83d1b387;
    
    // [_GUID_7778752f_5de8_4589_9b5f_cabad2b25b95]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1bd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1ef8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa41e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1ff8, 0x17e70 bytes
    //
    _p49(sdk::unknown_ptr) guid_7778752f_5de8_4589_9b5f_cabad2b25b95;
    
    // [_GUID_77db970f_6276_48ba_ba28_070143b4392c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae330, 0x17e70 bytes
    // dxgi.dll .rdata:0xae660, 0x17e70 bytes
    // dxgi.dll .rdata:0xadde0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafb00, 0x17e70 bytes
    //
    _p50(sdk::unknown_ptr) guid_77db970f_6276_48ba_ba28_070143b4392c;
    
    // [_GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa03b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa06d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4390, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2178, 0x17e70 bytes
    //
    _p51(sdk::unknown_ptr) guid_790a45f7_0d42_4876_983a_0a55cfe6f4aa;
    
    // [_GUID_79b9d5f2_879e_4b89_b798_79e47598030c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac1c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac500, 0x17e70 bytes
    // dxgi.dll .rdata:0xab718, 0x18b10 bytes
    // dxgi.dll .rdata:0xadda0, 0x17e70 bytes
    //
    _p52(sdk::unknown_ptr) guid_79b9d5f2_879e_4b89_b798_79e47598030c;
    
    // [_GUID_79cf2233_7536_4948_9d36_1e4692dc5760]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c48, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f68, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4340, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4e48, 0x17e70 bytes
    //
    _p53(sdk::unknown_ptr) guid_79cf2233_7536_4948_9d36_1e4692dc5760;
    
    // [_GUID_79d2046c_22ef_451b_9e74_2245d9c760ea]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1968, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1c88, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3ac0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1d88, 0x17e70 bytes
    //
    _p54(sdk::unknown_ptr) guid_79d2046c_22ef_451b_9e74_2245d9c760ea;
    
    // [_GUID_7abb6563_02bc_47c4_8ef9_acc4795edbcf]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c38, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f58, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4330, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4b68, 0x17e70 bytes
    //
    _p55(sdk::unknown_ptr) guid_7abb6563_02bc_47c4_8ef9_acc4795edbcf;
    
    // [_GUID_7b7166ec_21c7_44ae_b21a_c9ae321ae369]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1988, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1ca8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4360, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1da8, 0x17e70 bytes
    //
    _p56(sdk::unknown_ptr) guid_7b7166ec_21c7_44ae_b21a_c9ae321ae369;
    
    // [_GUID_80a07424_ab52_42eb_833c_0c42fd282d98]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9300, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9640, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8748, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa730, 0x17e70 bytes
    //
    _p57(sdk::unknown_ptr) guid_80a07424_ab52_42eb_833c_0c42fd282d98;
    
    // [_GUID_8346a835_a87d_42de_80d3_404471a7989c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae340, 0x17e70 bytes
    // dxgi.dll .rdata:0xae670, 0x17e70 bytes
    // dxgi.dll .rdata:0xaddf0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafb10, 0x17e70 bytes
    //
    _p58(sdk::unknown_ptr) guid_8346a835_a87d_42de_80d3_404471a7989c;
    
    // [_GUID_85611e73_70a9_490e_9614_a9e302777904]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c08, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f28, 0x17e70 bytes
    // dxgi.dll .rdata:0xa46d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2028, 0x17e70 bytes
    //
    _p59(sdk::unknown_ptr) guid_85611e73_70a9_490e_9614_a9e302777904;
    
    // [_GUID_8a6bb301_7e7e_41f4_a8e0_5b32f7f99b18]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa92e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9620, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8728, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa710, 0x17e70 bytes
    //
    _p60(sdk::unknown_ptr) guid_8a6bb301_7e7e_41f4_a8e0_5b32f7f99b18;
    
    // [_GUID_8b4f173b_2fea_4b80_8f58_4307191ab95d]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3dc8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa40f8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa78f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa5108, 0x17e70 bytes
    //
    _p61(sdk::unknown_ptr) guid_8b4f173b_2fea_4b80_8f58_4307191ab95d;
    
    // [_GUID_8c803e30_9e41_4ddf_b206_46f28e90e405]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9438, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9778, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8888, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa868, 0x17e70 bytes
    //
    _p62(sdk::unknown_ptr) guid_8c803e30_9e41_4ddf_b206_46f28e90e405;
    
    // [_GUID_8f1c0e3c_fae3_4a82_b098_bfe1708207ff]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae4a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xae7d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xadf78, 0x18b10 bytes
    // dxgi.dll .rdata:0xafc78, 0x17e70 bytes
    //
    _p63(sdk::unknown_ptr) guid_8f1c0e3c_fae3_4a82_b098_bfe1708207ff;
    
    // [_GUID_8ffde202_a0e7_45df_9e01_e837801b5ea0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3b30, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3e60, 0x17e70 bytes
    // dxgi.dll .rdata:0xade10, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4e70, 0x17e70 bytes
    //
    _p64(sdk::unknown_ptr) guid_8ffde202_a0e7_45df_9e01_e837801b5ea0;
    
    // [_GUID_905db94b_a00c_4140_9df5_2b64ca9ea357]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae520, 0x17e70 bytes
    // dxgi.dll .rdata:0xae850, 0x17e70 bytes
    // dxgi.dll .rdata:0xadff0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafcf0, 0x17e70 bytes
    //
    _p65(sdk::unknown_ptr) guid_905db94b_a00c_4140_9df5_2b64ca9ea357;
    
    // [_GUID_917600da_f58c_4c33_98d8_3e15b390fa24]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3b40, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3e70, 0x17e70 bytes
    // dxgi.dll .rdata:0xade00, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4e80, 0x17e70 bytes
    //
    _p66(sdk::unknown_ptr) guid_917600da_f58c_4c33_98d8_3e15b390fa24;
    
    // [_GUID_9264d6b2_8b0b_4595_a5c4_4eebfbd3b69d]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1958, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1c78, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3ab0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1d78, 0x17e70 bytes
    //
    _p67(sdk::unknown_ptr) guid_9264d6b2_8b0b_4595_a5c4_4eebfbd3b69d;
    
    // [_GUID_94d99bdb_f1f8_4ab0_b236_7da0170edab1]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa93c8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9708, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8808, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa7f8, 0x17e70 bytes
    //
    _p68(sdk::unknown_ptr) guid_94d99bdb_f1f8_4ab0_b236_7da0170edab1;
    
    // [_GUID_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa39a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3cd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xac228, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4cb8, 0x17e70 bytes
    //
    _p69(sdk::unknown_ptr) guid_94ea2b94_e9cc_49e0_c0ff_ee64ca8f5b90;
    
    // [_GUID_9b7e4a00_342c_4106_a19f_4f2704f689f0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c68, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f88, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4370, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2038, 0x17e70 bytes
    //
    _p70(sdk::unknown_ptr) guid_9b7e4a00_342c_4106_a19f_4f2704f689f0;
    
    // [_GUID_9b7e4a01_342c_4106_a19f_4f2704f689f0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1220, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1540, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4408, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1630, 0x17e70 bytes
    //
    _p71(sdk::unknown_ptr) guid_9b7e4a01_342c_4106_a19f_4f2704f689f0;
    
    // [_GUID_9b7e4a04_342c_4106_a19f_4f2704f689f0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c98, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1fb8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5308, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2058, 0x17e70 bytes
    //
    _p72(sdk::unknown_ptr) guid_9b7e4a04_342c_4106_a19f_4f2704f689f0;
    
    // [_GUID_9b7e4c0f_342c_4106_a19f_4f2704f689f0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1998, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1cb8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa42a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1db8, 0x17e70 bytes
    //
    _p73(sdk::unknown_ptr) guid_9b7e4c0f_342c_4106_a19f_4f2704f689f0;
    
    // [_GUID_9b7e4c8f_342c_4106_a19f_4f2704f689f0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa19a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1cc8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa42b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1dc8, 0x17e70 bytes
    //
    _p74(sdk::unknown_ptr) guid_9b7e4c8f_342c_4106_a19f_4f2704f689f0;
    
    // [_GUID_9d8e1289_d7b3_465f_8126_250e349af85d]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac710, 0x17e70 bytes
    // dxgi.dll .rdata:0xaca40, 0x17e70 bytes
    // dxgi.dll .rdata:0xabc08, 0x18b10 bytes
    // dxgi.dll .rdata:0xadee8, 0x17e70 bytes
    //
    _p75(sdk::unknown_ptr) guid_9d8e1289_d7b3_465f_8126_250e349af85d;
    
    // [_GUID_a06eb39a_50da_425b_8c31_4eecd6c270f3]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa93a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa96e8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa87e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa7d8, 0x17e70 bytes
    //
    _p76(sdk::unknown_ptr) guid_a06eb39a_50da_425b_8c31_4eecd6c270f3;
    
    // [_GUID_a1bea8ba_d726_4663_8129_6b5e7927ffa6]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac0c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac400, 0x17e70 bytes
    // dxgi.dll .rdata:0xab638, 0x18b10 bytes
    // dxgi.dll .rdata:0xadca0, 0x17e70 bytes
    //
    _p77(sdk::unknown_ptr) guid_a1bea8ba_d726_4663_8129_6b5e7927ffa6;
    
    // [_GUID_a2a9f815_4778_40d1_b179_d5d3a1a5f1bc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c58, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f78, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4350, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4dd8, 0x17e70 bytes
    //
    _p78(sdk::unknown_ptr) guid_a2a9f815_4778_40d1_b179_d5d3a1a5f1bc;
    
    // [_GUID_a4966eed_76db_44da_84c1_ee9a7afb20a8]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad1f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xad520, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xae9c0, 0x17e70 bytes
    //
    _p79(sdk::unknown_ptr) guid_a4966eed_76db_44da_84c1_ee9a7afb20a8;
    
    // [_GUID_a6d2316f_af6f_49f0_a8a8_a0c474f10236]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa92a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa95e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa86e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa6d0, 0x17e70 bytes
    //
    _p80(sdk::unknown_ptr) guid_a6d2316f_af6f_49f0_a8a8_a0c474f10236;
    
    // [_GUID_a8be2ac4_199f_4946_b331_79599fb98de7]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa93d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9718, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8818, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa808, 0x17e70 bytes
    //
    _p81(sdk::unknown_ptr) guid_a8be2ac4_199f_4946_b331_79599fb98de7;
    
    // [_GUID_ab0d7608_30c0_40e9_b568_b60a6bd1fb46]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac150, 0x17e70 bytes
    // dxgi.dll .rdata:0xac490, 0x17e70 bytes
    // dxgi.dll .rdata:0xab6b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd30, 0x17e70 bytes
    //
    _p82(sdk::unknown_ptr) guid_ab0d7608_30c0_40e9_b568_b60a6bd1fb46;
    
    // [_GUID_aba496dd_b617_4cb8_a866_bc44d7eb1fa2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xaca60, 0x17e70 bytes
    // dxgi.dll .rdata:0xacd90, 0x17e70 bytes
    // dxgi.dll .rdata:0xabf58, 0x18b10 bytes
    // dxgi.dll .rdata:0xae238, 0x17e70 bytes
    //
    _p83(sdk::unknown_ptr) guid_aba496dd_b617_4cb8_a866_bc44d7eb1fa2;
    
    // [_GUID_ae02eedb_c735_4690_8d52_5a8dc20213aa]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1b30, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1e50, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5328, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1f50, 0x17e70 bytes
    //
    _p84(sdk::unknown_ptr) guid_ae02eedb_c735_4690_8d52_5a8dc20213aa;
    
    // [_GUID_aec22fb8_76f3_4639_9be0_28eb43a67a2e]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1bf8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f18, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5298, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2018, 0x17e70 bytes
    //
    _p85(sdk::unknown_ptr) guid_aec22fb8_76f3_4639_9be0_28eb43a67a2e;
    
    // [_GUID_affde9d1_1df7_4bb7_8a34_0f46251dab80]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae050, 0x17e70 bytes
    // dxgi.dll .rdata:0xae380, 0x17e70 bytes
    // dxgi.dll .rdata:0xa75a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xaf820, 0x17e70 bytes
    //
    _p86(sdk::unknown_ptr) guid_affde9d1_1df7_4bb7_8a34_0f46251dab80;
    
    // [GUID_ATLVer70]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1488, 0x17e70 bytes
    // dxgi.dll .rdata:0xa17a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4038, 0x18b10 bytes
    // dxgi.dll .rdata:0xa18a8, 0x17e70 bytes
    //
    _p87(sdk::unknown_ptr) guid_atl_ver70;
    
    // [_GUID_b02d7a1a_05e0_4a71_8ef4_5c5bbf475086]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9408, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9748, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8848, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa838, 0x17e70 bytes
    //
    _p88(sdk::unknown_ptr) guid_b02d7a1a_05e0_4a71_8ef4_5c5bbf475086;
    
    // [_GUID_b0b9e70e_59ce_4415_8116_c8c826b1e599]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3d98, 0x17e70 bytes
    // dxgi.dll .rdata:0xa40c8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa78c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa50d8, 0x17e70 bytes
    //
    _p89(sdk::unknown_ptr) guid_b0b9e70e_59ce_4415_8116_c8c826b1e599;
    
    // [_GUID_b14887d9_f537_4af5_b379_7d33031be773]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad2a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xad5d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac490, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea70, 0x17e70 bytes
    //
    _p90(sdk::unknown_ptr) guid_b14887d9_f537_4af5_b379_7d33031be773;
    
    // [_GUID_b898d4fd_b5b3_4ffc_8694_0259864ffcf8]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1b20, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1e40, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4278, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1f40, 0x17e70 bytes
    //
    _p91(sdk::unknown_ptr) guid_b898d4fd_b5b3_4ffc_8694_0259864ffcf8;
    
    // [_GUID_bbfeb1e3_6f00_4ad0_a003_dc3c98c415e8]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac7e8, 0x17e70 bytes
    // dxgi.dll .rdata:0xacb18, 0x17e70 bytes
    // dxgi.dll .rdata:0xabe80, 0x18b10 bytes
    // dxgi.dll .rdata:0xae160, 0x17e70 bytes
    //
    _p92(sdk::unknown_ptr) guid_bbfeb1e3_6f00_4ad0_a003_dc3c98c415e8;
    
    // [_GUID_bdd61328_14f8_4dff_8b7b_92be622ae360]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae628, 0x17e70 bytes
    // dxgi.dll .rdata:0xae958, 0x17e70 bytes
    // dxgi.dll .rdata:0xae0f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xafdf8, 0x17e70 bytes
    //
    _p93(sdk::unknown_ptr) guid_bdd61328_14f8_4dff_8b7b_92be622ae360;
    
    // [_GUID_c1b6694f_ff09_44a9_b03c_77900a0a1d17]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad200, 0x17e70 bytes
    // dxgi.dll .rdata:0xad530, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xae9d0, 0x17e70 bytes
    //
    _p94(sdk::unknown_ptr) guid_c1b6694f_ff09_44a9_b03c_77900a0a1d17;
    
    // [_GUID_c2c09af9_15ce_4c87_bb98_44323032fa7f]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3d88, 0x17e70 bytes
    // dxgi.dll .rdata:0xa40b8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa78b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa50c8, 0x17e70 bytes
    //
    _p95(sdk::unknown_ptr) guid_c2c09af9_15ce_4c87_bb98_44323032fa7f;
    
    // [_GUID_c37ea93a_e7aa_450d_b16f_9746cb0407f3]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xace20, 0x17e70 bytes
    // dxgi.dll .rdata:0xad150, 0x17e70 bytes
    // dxgi.dll .rdata:0xac328, 0x18b10 bytes
    // dxgi.dll .rdata:0xae5e8, 0x17e70 bytes
    //
    _p96(sdk::unknown_ptr) guid_c37ea93a_e7aa_450d_b16f_9746cb0407f3;
    
    // [_GUID_c4fec28f_7966_4e95_9f94_f431cb56c3b8]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3898, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3bc8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa7158, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4ba8, 0x17e70 bytes
    //
    _p97(sdk::unknown_ptr) guid_c4fec28f_7966_4e95_9f94_f431cb56c3b8;
    
    // [_GUID_cafcb56c_6ac3_4889_bf47_9e23bbd260ec]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac6d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xaca08, 0x17e70 bytes
    // dxgi.dll .rdata:0xabbd0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadeb0, 0x17e70 bytes
    //
    _p98(sdk::unknown_ptr) guid_cafcb56c_6ac3_4889_bf47_9e23bbd260ec;
    
    // [_GUID_cbe8c719_71a3_40ed_a3ad_a05161dcb833]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c28, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f48, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4320, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4db8, 0x17e70 bytes
    //
    _p99(sdk::unknown_ptr) guid_cbe8c719_71a3_40ed_a3ad_a05161dcb833;
    
    // [_GUID_d1ed7b7c_f03c_4b2a_bbeb_6415dbe54938]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad260, 0x17e70 bytes
    // dxgi.dll .rdata:0xad590, 0x17e70 bytes
    // dxgi.dll .rdata:0xac450, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea30, 0x17e70 bytes
    //
    _q00(sdk::unknown_ptr) guid_d1ed7b7c_f03c_4b2a_bbeb_6415dbe54938;
    
    // [_GUID_d75fab3e_73b6_4fdf_a47e_f35ca18a7dbf]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9428, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9768, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8868, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa858, 0x17e70 bytes
    //
    _q01(sdk::unknown_ptr) guid_d75fab3e_73b6_4fdf_a47e_f35ca18a7dbf;
    
    // [_GUID_d7bb651f_832f_41cb_8bb5_1180ccc21d6a]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xace10, 0x17e70 bytes
    // dxgi.dll .rdata:0xad140, 0x17e70 bytes
    // dxgi.dll .rdata:0xac318, 0x18b10 bytes
    // dxgi.dll .rdata:0xae5d8, 0x17e70 bytes
    //
    _q02(sdk::unknown_ptr) guid_d7bb651f_832f_41cb_8bb5_1180ccc21d6a;
    
    // [_GUID_db6f6ddb_ac77_4e88_8253_819df9bbf140]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c88, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1fa8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4380, 0x18b10 bytes
    // dxgi.dll .rdata:0xa1620, 0x17e70 bytes
    //
    _q03(sdk::unknown_ptr) guid_db6f6ddb_ac77_4e88_8253_819df9bbf140;
    
    // [_GUID_dc7dca35_2196_414d_9f53_617884032a60]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa92f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9630, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8738, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa720, 0x17e70 bytes
    //
    _q04(sdk::unknown_ptr) guid_dc7dca35_2196_414d_9f53_617884032a60;
    
    // [_GUID_dd95b90b_f05f_4f6a_bd65_25bfb264bd84]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa93e8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9728, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8828, 0x18b10 bytes
    // dxgi.dll .rdata:0xaa818, 0x17e70 bytes
    //
    _q05(sdk::unknown_ptr) guid_dd95b90b_f05f_4f6a_bd65_25bfb264bd84;
    
    // [_GUID_de18ef3a_2089_4936_a3f3_ec787ac6a40d]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3da8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa40d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa78d8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa50e8, 0x17e70 bytes
    //
    _q06(sdk::unknown_ptr) guid_de18ef3a_2089_4936_a3f3_ec787ac6a40d;
    
    // [_GUID_e60c8424_3154_566e_9aa2_eec49fce004a]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xacd38, 0x17e70 bytes
    // dxgi.dll .rdata:0xad068, 0x17e70 bytes
    // dxgi.dll .rdata:0xac248, 0x18b10 bytes
    // dxgi.dll .rdata:0xae508, 0x17e70 bytes
    //
    _q07(sdk::unknown_ptr) guid_e60c8424_3154_566e_9aa2_eec49fce004a;
    
    // [_GUID_ea828e37_ef99_4da2_88cd_ce3bcaffa576]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae510, 0x17e70 bytes
    // dxgi.dll .rdata:0xae840, 0x17e70 bytes
    // dxgi.dll .rdata:0xadfe0, 0x18b10 bytes
    // dxgi.dll .rdata:0xafce0, 0x17e70 bytes
    //
    _q08(sdk::unknown_ptr) guid_ea828e37_ef99_4da2_88cd_ce3bcaffa576;
    
    // [_GUID_ea9dbf1a_c88e_4486_854a_98aa0138f30c]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xad290, 0x17e70 bytes
    // dxgi.dll .rdata:0xad5c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac480, 0x18b10 bytes
    // dxgi.dll .rdata:0xaea60, 0x17e70 bytes
    //
    _q09(sdk::unknown_ptr) guid_ea9dbf1a_c88e_4486_854a_98aa0138f30c;
    
    // [_GUID_f13ebcd1_672c_4f8b_a631_9539ca748d71]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac720, 0x17e70 bytes
    // dxgi.dll .rdata:0xaca50, 0x17e70 bytes
    // dxgi.dll .rdata:0xabc18, 0x18b10 bytes
    // dxgi.dll .rdata:0xadef8, 0x17e70 bytes
    //
    _q10(sdk::unknown_ptr) guid_f13ebcd1_672c_4f8b_a631_9539ca748d71;
    
    // [_GUID_f1df64b6_57fd_49cd_8807_c0eb88b45c8f]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xae040, 0x17e70 bytes
    // dxgi.dll .rdata:0xae370, 0x17e70 bytes
    // dxgi.dll .rdata:0xadad0, 0x18b10 bytes
    // dxgi.dll .rdata:0xaf810, 0x17e70 bytes
    //
    _q11(sdk::unknown_ptr) guid_f1df64b6_57fd_49cd_8807_c0eb88b45c8f;
    
    // [_GUID_f69f223b_45d3_4aa0_98c8_c40c2b231029]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1c78, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f98, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4418, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2048, 0x17e70 bytes
    //
    _q12(sdk::unknown_ptr) guid_f69f223b_45d3_4aa0_98c8_c40c2b231029;
    
    // [_GUID_fc4f7700_8c88_43fb_aa4f_44c4a584dc19]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1ca8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1fc8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5318, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2068, 0x17e70 bytes
    //
    _q13(sdk::unknown_ptr) guid_fc4f7700_8c88_43fb_aa4f_44c4a584dc19;
    
    // [_GUID_ffffffff_1bbe_4d12_afbf_8fdf7e0a87c7]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa12a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa15c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa4310, 0x18b10 bytes
    // dxgi.dll .rdata:0xa16c0, 0x17e70 bytes
    //
    _q14(sdk::unknown_ptr) guid_ffffffff_1bbe_4d12_afbf_8fdf7e0a87c7;
    
    // [GUID_KMT_HANDLE]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa1be8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa1f08, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5288, 0x18b10 bytes
    // dxgi.dll .rdata:0xa2008, 0x17e70 bytes
    //
    _q15(sdk::unknown_ptr) guid_kmt_handle;
    
    // [HardwareContentProtectionTeardownCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f7d0, 0x17e70 bytes
    // dxgi.dll .text:0x6f8e0, 0x17e70 bytes
    // dxgi.dll .text:0x7afe0, 0x18b10 bytes
    // dxgi.dll .text:0x70d10, 0x17e70 bytes
    //
    _q16(sdk::unknown_ptr) hardware_content_protection_teardown_callback;
    
    // [HasTransparency]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x23fe4, 0x17e70 bytes
    // dxgi.dll .text:0x242e4, 0x17e70 bytes
    // dxgi.dll .text:0x2b45c, 0x18b10 bytes
    // dxgi.dll .text:0x25104, 0x17e70 bytes
    //
    _q17(sdk::unknown_ptr) has_transparency;
    
    // [__hmod__api_ms_win_core_com_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd00, 0x17e70 bytes
    // dxgi.dll .data:0xcbd00, 0x17e70 bytes
    // dxgi.dll .data:0xcada8, 0x18b10 bytes
    // dxgi.dll .data:0xccd40, 0x17e70 bytes
    //
    _q18(sdk::unknown_ptr) hmod_api_ms_win_core_com_l1_1_0_dll;
    
    // [__hmod__api_ms_win_core_winrt_error_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcf0, 0x17e70 bytes
    // dxgi.dll .data:0xcbcf0, 0x17e70 bytes
    // dxgi.dll .data:0xcad98, 0x18b10 bytes
    // dxgi.dll .data:0xccd30, 0x17e70 bytes
    //
    _q19(sdk::unknown_ptr) hmod_api_ms_win_core_winrt_error_l1_1_0_dll;
    
    // [__hmod__api_ms_win_core_winrt_error_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcf8, 0x17e70 bytes
    // dxgi.dll .data:0xcbcf8, 0x17e70 bytes
    // dxgi.dll .data:0xcada0, 0x18b10 bytes
    // dxgi.dll .data:0xccd38, 0x17e70 bytes
    //
    _q20(sdk::unknown_ptr) hmod_api_ms_win_core_winrt_error_l1_1_1_dll;
    
    // [__hmod__api_ms_win_core_winrt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcd8, 0x17e70 bytes
    // dxgi.dll .data:0xcbcd8, 0x17e70 bytes
    // dxgi.dll .data:0xcad80, 0x18b10 bytes
    // dxgi.dll .data:0xccd18, 0x17e70 bytes
    //
    _q21(sdk::unknown_ptr) hmod_api_ms_win_core_winrt_l1_1_0_dll;
    
    // [__hmod__api_ms_win_core_winrt_string_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbce8, 0x17e70 bytes
    // dxgi.dll .data:0xcbce8, 0x17e70 bytes
    // dxgi.dll .data:0xcad90, 0x18b10 bytes
    // dxgi.dll .data:0xccd28, 0x17e70 bytes
    //
    _q22(sdk::unknown_ptr) hmod_api_ms_win_core_winrt_string_l1_1_0_dll;
    
    // [__hmod__api_ms_win_dx_d3dkmt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcb8, 0x17e70 bytes
    // dxgi.dll .data:0xcbcb8, 0x17e70 bytes
    // dxgi.dll .data:0xcad48, 0x18b10 bytes
    // dxgi.dll .data:0xcccf8, 0x17e70 bytes
    //
    _q23(sdk::unknown_ptr) hmod_api_ms_win_dx_d3dkmt_l1_1_0_dll;
    
    // [__hmod__api_ms_win_dx_d3dkmt_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcc0, 0x17e70 bytes
    // dxgi.dll .data:0xcbcc0, 0x17e70 bytes
    // dxgi.dll .data:0xcad50, 0x18b10 bytes
    // dxgi.dll .data:0xccd00, 0x17e70 bytes
    //
    _q24(sdk::unknown_ptr) hmod_api_ms_win_dx_d3dkmt_l1_1_1_dll;
    
    // [__hmod__api_ms_win_dx_d3dkmt_l1_1_3_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcc8, 0x17e70 bytes
    // dxgi.dll .data:0xcbcc8, 0x17e70 bytes
    // dxgi.dll .data:0xcad60, 0x18b10 bytes
    // dxgi.dll .data:0xccd08, 0x17e70 bytes
    //
    _q25(sdk::unknown_ptr) hmod_api_ms_win_dx_d3dkmt_l1_1_3_dll;
    
    // [__hmod__api_ms_win_dx_d3dkmt_l1_1_4_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbce0, 0x17e70 bytes
    // dxgi.dll .data:0xcbce0, 0x17e70 bytes
    // dxgi.dll .data:0xcad88, 0x18b10 bytes
    // dxgi.dll .data:0xccd20, 0x17e70 bytes
    //
    _q26(sdk::unknown_ptr) hmod_api_ms_win_dx_d3dkmt_l1_1_4_dll;
    
    // [__hmod__api_ms_win_gdi_dpiinfo_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd08, 0x17e70 bytes
    // dxgi.dll .data:0xcbd08, 0x17e70 bytes
    // dxgi.dll .data:0xcadb0, 0x18b10 bytes
    // dxgi.dll .data:0xccd48, 0x17e70 bytes
    //
    _q27(sdk::unknown_ptr) hmod_api_ms_win_gdi_dpiinfo_l1_1_0_dll;
    
    // [__hmod__api_ms_win_rtcore_ntuser_private_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcd0, 0x17e70 bytes
    // dxgi.dll .data:0xcbcd0, 0x17e70 bytes
    // dxgi.dll .data:0xcad78, 0x18b10 bytes
    // dxgi.dll .data:0xccd10, 0x17e70 bytes
    //
    _q28(sdk::unknown_ptr) hmod_api_ms_win_rtcore_ntuser_private_l1_1_7_dll;
    
    // [__hmod__api_ms_win_rtcore_ntuser_synch_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbcb0, 0x17e70 bytes
    // dxgi.dll .data:0xcbcb0, 0x17e70 bytes
    // dxgi.dll .data:0xcad40, 0x18b10 bytes
    // dxgi.dll .data:0xcccf0, 0x17e70 bytes
    //
    _q29(sdk::unknown_ptr) hmod_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll;
    
    // [__hmod__api_ms_win_security_sddl_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd10, 0x17e70 bytes
    // dxgi.dll .data:0xcbd10, 0x17e70 bytes
    // dxgi.dll .data:0xcadb8, 0x18b10 bytes
    // dxgi.dll .data:0xccd50, 0x17e70 bytes
    //
    _q30(sdk::unknown_ptr) hmod_api_ms_win_security_sddl_l1_1_0_dll;
    
    // [__hmod__dcomp_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd28, 0x17e70 bytes
    // dxgi.dll .data:0xcbd28, 0x17e70 bytes
    // dxgi.dll .data:0xcadd0, 0x18b10 bytes
    // dxgi.dll .data:0xccd68, 0x17e70 bytes
    //
    _q31(sdk::unknown_ptr) hmod_dcomp_dll;
    
    // [__hmod__ext_ms_mf_pal_l2_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd20, 0x17e70 bytes
    // dxgi.dll .data:0xcbd20, 0x17e70 bytes
    // dxgi.dll .data:0xcadc8, 0x18b10 bytes
    // dxgi.dll .data:0xccd60, 0x17e70 bytes
    //
    _q32(sdk::unknown_ptr) hmod_ext_ms_mf_pal_l2_1_0_dll;
    
    // [__hmod__ext_ms_onecore_dcomp_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbb0, 0x17e70 bytes
    // dxgi.dll .data:0xcbbb0, 0x17e70 bytes
    // dxgi.dll .data:0xcac40, 0x18b10 bytes
    // dxgi.dll .data:0xccbf0, 0x17e70 bytes
    //
    _q33(sdk::unknown_ptr) hmod_ext_ms_onecore_dcomp_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_dwmapidxgi_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbb98, 0x17e70 bytes
    // dxgi.dll .data:0xcbb98, 0x17e70 bytes
    // dxgi.dll .data:0xcac28, 0x18b10 bytes
    // dxgi.dll .data:0xccbd8, 0x17e70 bytes
    //
    _q34(sdk::unknown_ptr) hmod_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_dwmapidxgi_ext_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd30, 0x17e70 bytes
    // dxgi.dll .data:0xcbd30, 0x17e70 bytes
    // dxgi.dll .data:0xcade8, 0x18b10 bytes
    // dxgi.dll .data:0xccd70, 0x17e70 bytes
    //
    _q35(sdk::unknown_ptr) hmod_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll;
    
    // [__hmod__ext_ms_win_gdi_dc_create_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbd8, 0x17e70 bytes
    // dxgi.dll .data:0xcbbd8, 0x17e70 bytes
    // dxgi.dll .data:0xcac68, 0x18b10 bytes
    // dxgi.dll .data:0xccc18, 0x17e70 bytes
    //
    _q36(sdk::unknown_ptr) hmod_ext_ms_win_gdi_dc_create_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_gdi_dc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbf0, 0x17e70 bytes
    // dxgi.dll .data:0xcbbf0, 0x17e70 bytes
    // dxgi.dll .data:0xcac80, 0x18b10 bytes
    // dxgi.dll .data:0xccc30, 0x17e70 bytes
    //
    _q37(sdk::unknown_ptr) hmod_ext_ms_win_gdi_dc_l1_2_0_dll;
    
    // [__hmod__ext_ms_win_gdi_draw_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc00, 0x17e70 bytes
    // dxgi.dll .data:0xcbc00, 0x17e70 bytes
    // dxgi.dll .data:0xcac90, 0x18b10 bytes
    // dxgi.dll .data:0xccc40, 0x17e70 bytes
    //
    _q38(sdk::unknown_ptr) hmod_ext_ms_win_gdi_draw_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_gdi_draw_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc08, 0x17e70 bytes
    // dxgi.dll .data:0xcbc08, 0x17e70 bytes
    // dxgi.dll .data:0xcac98, 0x18b10 bytes
    // dxgi.dll .data:0xccc48, 0x17e70 bytes
    //
    _q39(sdk::unknown_ptr) hmod_ext_ms_win_gdi_draw_l1_1_1_dll;
    
    // [__hmod__ext_ms_win_ntuser_gui_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc88, 0x17e70 bytes
    // dxgi.dll .data:0xcbc88, 0x17e70 bytes
    // dxgi.dll .data:0xcad18, 0x18b10 bytes
    // dxgi.dll .data:0xcccc8, 0x17e70 bytes
    //
    _q40(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_gui_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_keyboard_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc80, 0x17e70 bytes
    // dxgi.dll .data:0xcbc80, 0x17e70 bytes
    // dxgi.dll .data:0xcad10, 0x18b10 bytes
    // dxgi.dll .data:0xcccc0, 0x17e70 bytes
    //
    _q41(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_keyboard_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_message_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc28, 0x17e70 bytes
    // dxgi.dll .data:0xcbc28, 0x17e70 bytes
    // dxgi.dll .data:0xcacb8, 0x18b10 bytes
    // dxgi.dll .data:0xccc68, 0x17e70 bytes
    //
    _q42(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_message_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_misc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc78, 0x17e70 bytes
    // dxgi.dll .data:0xcbc78, 0x17e70 bytes
    // dxgi.dll .data:0xcad08, 0x18b10 bytes
    // dxgi.dll .data:0xcccb8, 0x17e70 bytes
    //
    _q43(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_misc_l1_2_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_private_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc90, 0x17e70 bytes
    // dxgi.dll .data:0xcbc90, 0x17e70 bytes
    // dxgi.dll .data:0xcad20, 0x18b10 bytes
    // dxgi.dll .data:0xcccd0, 0x17e70 bytes
    //
    _q44(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_private_l1_1_1_dll;
    
    // [__hmod__ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbb8, 0x17e70 bytes
    // dxgi.dll .data:0xcbbb8, 0x17e70 bytes
    // dxgi.dll .data:0xcac48, 0x18b10 bytes
    // dxgi.dll .data:0xccbf8, 0x17e70 bytes
    //
    _q45(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbc8, 0x17e70 bytes
    // dxgi.dll .data:0xcbbc8, 0x17e70 bytes
    // dxgi.dll .data:0xcac58, 0x18b10 bytes
    // dxgi.dll .data:0xccc08, 0x17e70 bytes
    //
    _q46(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_window_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc60, 0x17e70 bytes
    // dxgi.dll .data:0xcbc60, 0x17e70 bytes
    // dxgi.dll .data:0xcacf0, 0x18b10 bytes
    // dxgi.dll .data:0xccca0, 0x17e70 bytes
    //
    _q47(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_window_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_ntuser_window_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc68, 0x17e70 bytes
    // dxgi.dll .data:0xcbc68, 0x17e70 bytes
    // dxgi.dll .data:0xcacf8, 0x18b10 bytes
    // dxgi.dll .data:0xccca8, 0x17e70 bytes
    //
    _q48(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_window_l1_1_1_dll;
    
    // [__hmod__ext_ms_win_ntuser_windowclass_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc70, 0x17e70 bytes
    // dxgi.dll .data:0xcbc70, 0x17e70 bytes
    // dxgi.dll .data:0xcad00, 0x18b10 bytes
    // dxgi.dll .data:0xcccb0, 0x17e70 bytes
    //
    _q49(sdk::unknown_ptr) hmod_ext_ms_win_ntuser_windowclass_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbf8, 0x17e70 bytes
    // dxgi.dll .data:0xcbbf8, 0x17e70 bytes
    // dxgi.dll .data:0xcac88, 0x18b10 bytes
    // dxgi.dll .data:0xccc38, 0x17e70 bytes
    //
    _q50(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_gdi_object_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc10, 0x17e70 bytes
    // dxgi.dll .data:0xcbc10, 0x17e70 bytes
    // dxgi.dll .data:0xcaca0, 0x18b10 bytes
    // dxgi.dll .data:0xccc50, 0x17e70 bytes
    //
    _q51(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_gdi_object_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc18, 0x17e70 bytes
    // dxgi.dll .data:0xcbc18, 0x17e70 bytes
    // dxgi.dll .data:0xcaca8, 0x18b10 bytes
    // dxgi.dll .data:0xccc58, 0x17e70 bytes
    //
    _q52(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc40, 0x17e70 bytes
    // dxgi.dll .data:0xcbc40, 0x17e70 bytes
    // dxgi.dll .data:0xcacd0, 0x18b10 bytes
    // dxgi.dll .data:0xccc80, 0x17e70 bytes
    //
    _q53(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc20, 0x17e70 bytes
    // dxgi.dll .data:0xcbc20, 0x17e70 bytes
    // dxgi.dll .data:0xcacb0, 0x18b10 bytes
    // dxgi.dll .data:0xccc60, 0x17e70 bytes
    //
    _q54(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbc98, 0x17e70 bytes
    // dxgi.dll .data:0xcbc98, 0x17e70 bytes
    // dxgi.dll .data:0xcad28, 0x18b10 bytes
    // dxgi.dll .data:0xcccd8, 0x17e70 bytes
    //
    _q55(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll;
    
    // [__hmod__ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbbc0, 0x17e70 bytes
    // dxgi.dll .data:0xcbbc0, 0x17e70 bytes
    // dxgi.dll .data:0xcac50, 0x18b10 bytes
    // dxgi.dll .data:0xccc00, 0x17e70 bytes
    //
    _q56(sdk::unknown_ptr) hmod_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll;
    
    // [HRESULTFromNTSTATUS]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x21b4, 0x17e70 bytes
    // dxgi.dll .text:0x21b4, 0x17e70 bytes
    // dxgi.dll .text:0x7588, 0x18b10 bytes
    // dxgi.dll .text:0x4034, 0x17e70 bytes
    //
    _q57(sdk::unknown_ptr) hresult_from_ntstatus;
    
    // [IDHOT_CTRL_SNAPDESKTOP]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcdfb0, 0x17e70 bytes
    // dxgi.dll .data:0xcdfb0, 0x17e70 bytes
    // dxgi.dll .data:0xcd050, 0x18b10 bytes
    // dxgi.dll .data:0xcf000, 0x17e70 bytes
    //
    _q58(sdk::unknown_ptr) idhot_ctrl_snapdesktop;
    
    // [IDXGIAdapter_CheckInterfaceSupport_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac0a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab618, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc80, 0x17e70 bytes
    //
    _q59(sdk::unknown_ptr) idxgi_adapter_check_interface_support_start;
    
    // [IDXGIAdapter_CheckInterfaceSupport_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac430, 0x17e70 bytes
    // dxgi.dll .rdata:0xac770, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f58, 0x18b10 bytes
    // dxgi.dll .rdata:0xad618, 0x17e70 bytes
    //
    _q60(sdk::unknown_ptr) idxgi_adapter_check_interface_support_stop;
    
    // [IDXGIAdapter_EnumOutputs2_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac450, 0x17e70 bytes
    // dxgi.dll .rdata:0xac790, 0x17e70 bytes
    // dxgi.dll .rdata:0xab960, 0x18b10 bytes
    // dxgi.dll .rdata:0xad638, 0x17e70 bytes
    //
    _q61(sdk::unknown_ptr) idxgi_adapter_enum_outputs2_start;
    
    // [IDXGIAdapter_EnumOutputs2_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac4b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac7e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab9a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad688, 0x17e70 bytes
    //
    _q62(sdk::unknown_ptr) idxgi_adapter_enum_outputs2_stop;
    
    // [IDXGIAdapter_EnumOutputs_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac470, 0x17e70 bytes
    // dxgi.dll .rdata:0xac7b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f78, 0x18b10 bytes
    // dxgi.dll .rdata:0xad658, 0x17e70 bytes
    //
    _q63(sdk::unknown_ptr) idxgi_adapter_enum_outputs_start;
    
    // [IDXGIAdapter_EnumOutputs_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa36a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa39c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6ef8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4aa8, 0x17e70 bytes
    //
    _q64(sdk::unknown_ptr) idxgi_adapter_enum_outputs_stop;
    
    // [IDXGIAdapter_GetDesc_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa35e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3900, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e00, 0x18b10 bytes
    // dxgi.dll .rdata:0xa49e8, 0x17e70 bytes
    //
    _q65(sdk::unknown_ptr) idxgi_adapter_get_desc_start;
    
    // [IDXGIAdapter_GetDesc_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3668, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3988, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6eb0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a70, 0x17e70 bytes
    //
    _q66(sdk::unknown_ptr) idxgi_adapter_get_desc_stop;
    
    // [IDXGIFactory_CreateSoftwareAdapter_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac300, 0x17e70 bytes
    // dxgi.dll .rdata:0xac640, 0x17e70 bytes
    // dxgi.dll .rdata:0xab838, 0x18b10 bytes
    // dxgi.dll .rdata:0xad4e8, 0x17e70 bytes
    //
    _q67(sdk::unknown_ptr) idxgi_factory_create_software_adapter_start;
    
    // [IDXGIFactory_CreateSoftwareAdapter_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabff0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac330, 0x17e70 bytes
    // dxgi.dll .rdata:0xab568, 0x18b10 bytes
    // dxgi.dll .rdata:0xadbd0, 0x17e70 bytes
    //
    _q68(sdk::unknown_ptr) idxgi_factory_create_software_adapter_stop;
    
    // [IDXGIFactory_CreateSwapChain_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe60, 0x17e70 bytes
    // dxgi.dll .rdata:0xac1a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab3d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada40, 0x17e70 bytes
    //
    _q69(sdk::unknown_ptr) idxgi_factory_create_swap_chain_start;
    
    // [IDXGIFactory_CreateSwapChain_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac040, 0x17e70 bytes
    // dxgi.dll .rdata:0xac380, 0x17e70 bytes
    // dxgi.dll .rdata:0xab5b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc20, 0x17e70 bytes
    //
    _q70(sdk::unknown_ptr) idxgi_factory_create_swap_chain_stop;
    
    // [IDXGIFactory_EnumAdapters_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac2c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac600, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f08, 0x18b10 bytes
    // dxgi.dll .rdata:0xadea0, 0x17e70 bytes
    //
    _q71(sdk::unknown_ptr) idxgi_factory_enum_adapters_start;
    
    // [IDXGIFactory_EnumAdapters_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac140, 0x17e70 bytes
    // dxgi.dll .rdata:0xac480, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e90, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd20, 0x17e70 bytes
    //
    _q72(sdk::unknown_ptr) idxgi_factory_enum_adapters_stop;
    
    // [IDXGIFactory_GetWindowAssociation_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac180, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab6e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd60, 0x17e70 bytes
    //
    _q73(sdk::unknown_ptr) idxgi_factory_get_window_association_start;
    
    // [IDXGIFactory_GetWindowAssociation_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabfa0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab518, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb80, 0x17e70 bytes
    //
    _q74(sdk::unknown_ptr) idxgi_factory_get_window_association_stop;
    
    // [IDXGIFactory_MakeWindowAssociation_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac460, 0x17e70 bytes
    // dxgi.dll .rdata:0xac7a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f68, 0x18b10 bytes
    // dxgi.dll .rdata:0xad648, 0x17e70 bytes
    //
    _q75(sdk::unknown_ptr) idxgi_factory_make_window_association_start;
    
    // [IDXGIFactory_MakeWindowAssociation_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac230, 0x17e70 bytes
    // dxgi.dll .rdata:0xac570, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6ec8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade10, 0x17e70 bytes
    //
    _q76(sdk::unknown_ptr) idxgi_factory_make_window_association_stop;
    
    // [IDXGIOutput_FindClosestMatchingMode_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac020, 0x17e70 bytes
    // dxgi.dll .rdata:0xac360, 0x17e70 bytes
    // dxgi.dll .rdata:0xab598, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc00, 0x17e70 bytes
    //
    _q77(sdk::unknown_ptr) idxgi_output_find_closest_matching_mode_start;
    
    // [IDXGIOutput_FindClosestMatchingMode_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac2d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac610, 0x17e70 bytes
    // dxgi.dll .rdata:0xab808, 0x18b10 bytes
    // dxgi.dll .rdata:0xad4b8, 0x17e70 bytes
    //
    _q78(sdk::unknown_ptr) idxgi_output_find_closest_matching_mode_stop;
    
    // [IDXGIOutput_GetDesc_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac6a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac9d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa7048, 0x18b10 bytes
    // dxgi.dll .rdata:0xad878, 0x17e70 bytes
    //
    _q79(sdk::unknown_ptr) idxgi_output_get_desc_start;
    
    // [IDXGIOutput_GetDesc_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa37a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3ad8, 0x17e70 bytes
    // dxgi.dll .rdata:0xa7038, 0x18b10 bytes
    // dxgi.dll .rdata:0xa47d8, 0x17e70 bytes
    //
    _q80(sdk::unknown_ptr) idxgi_output_get_desc_stop;
    
    // [IDXGIOutput_GetDisplayModeList_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac410, 0x17e70 bytes
    // dxgi.dll .rdata:0xac750, 0x17e70 bytes
    // dxgi.dll .rdata:0xab930, 0x18b10 bytes
    // dxgi.dll .rdata:0xad5f8, 0x17e70 bytes
    //
    _q81(sdk::unknown_ptr) idxgi_output_get_display_mode_list_start;
    
    // [IDXGIOutput_GetDisplayModeList_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabde0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac120, 0x17e70 bytes
    // dxgi.dll .rdata:0xab370, 0x18b10 bytes
    // dxgi.dll .rdata:0xad9c0, 0x17e70 bytes
    //
    _q82(sdk::unknown_ptr) idxgi_output_get_display_mode_list_stop;
    
    // [IDXGIOutput_GetDisplaySurfaceData_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac4d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac800, 0x17e70 bytes
    // dxgi.dll .rdata:0xab9c0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad6a8, 0x17e70 bytes
    //
    _q83(sdk::unknown_ptr) idxgi_output_get_display_surface_data_start;
    
    // [IDXGIOutput_GetDisplaySurfaceData_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac660, 0x17e70 bytes
    // dxgi.dll .rdata:0xac990, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb58, 0x18b10 bytes
    // dxgi.dll .rdata:0xad838, 0x17e70 bytes
    //
    _q84(sdk::unknown_ptr) idxgi_output_get_display_surface_data_stop;
    
    // [IDXGIOutput_GetFrameStatistics_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3710, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a40, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba70, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4748, 0x17e70 bytes
    //
    _q85(sdk::unknown_ptr) idxgi_output_get_frame_statistics_start;
    
    // [IDXGIOutput_GetFrameStatistics_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa35d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa38f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab430, 0x18b10 bytes
    // dxgi.dll .rdata:0xa49d8, 0x17e70 bytes
    //
    _q86(sdk::unknown_ptr) idxgi_output_get_frame_statistics_stop;
    
    // [IDXGIOutput_GetGammaControlCapabilities_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabee0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac220, 0x17e70 bytes
    // dxgi.dll .rdata:0xab460, 0x18b10 bytes
    // dxgi.dll .rdata:0xadac0, 0x17e70 bytes
    //
    _q87(sdk::unknown_ptr) idxgi_output_get_gamma_control_capabilities_start;
    
    // [IDXGIOutput_GetGammaControlCapabilities_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac340, 0x17e70 bytes
    // dxgi.dll .rdata:0xac680, 0x17e70 bytes
    // dxgi.dll .rdata:0xab868, 0x18b10 bytes
    // dxgi.dll .rdata:0xad528, 0x17e70 bytes
    //
    _q88(sdk::unknown_ptr) idxgi_output_get_gamma_control_capabilities_stop;
    
    // [IDXGIOutput_GetGammaControl_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabfd0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac310, 0x17e70 bytes
    // dxgi.dll .rdata:0xab548, 0x18b10 bytes
    // dxgi.dll .rdata:0xadbb0, 0x17e70 bytes
    //
    _q89(sdk::unknown_ptr) idxgi_output_get_gamma_control_start;
    
    // [IDXGIOutput_GetGammaControl_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf30, 0x17e70 bytes
    // dxgi.dll .rdata:0xac270, 0x17e70 bytes
    // dxgi.dll .rdata:0xab4b0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb10, 0x17e70 bytes
    //
    _q90(sdk::unknown_ptr) idxgi_output_get_gamma_control_stop;
    
    // [IDXGIOutput_ReleaseOwnership_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe70, 0x17e70 bytes
    // dxgi.dll .rdata:0xac1b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab3e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada50, 0x17e70 bytes
    //
    _q91(sdk::unknown_ptr) idxgi_output_release_ownership_start;
    
    // [IDXGIOutput_ReleaseOwnership_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac080, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab5f8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc60, 0x17e70 bytes
    //
    _q92(sdk::unknown_ptr) idxgi_output_release_ownership_stop;
    
    // [IDXGIOutput_SetDisplaySurface_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe40, 0x17e70 bytes
    // dxgi.dll .rdata:0xac180, 0x17e70 bytes
    // dxgi.dll .rdata:0xab3b0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada20, 0x17e70 bytes
    //
    _q93(sdk::unknown_ptr) idxgi_output_set_display_surface_start;
    
    // [IDXGIOutput_SetDisplaySurface_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf10, 0x17e70 bytes
    // dxgi.dll .rdata:0xac250, 0x17e70 bytes
    // dxgi.dll .rdata:0xab490, 0x18b10 bytes
    // dxgi.dll .rdata:0xadaf0, 0x17e70 bytes
    //
    _q94(sdk::unknown_ptr) idxgi_output_set_display_surface_stop;
    
    // [IDXGIOutput_SetGammaControl_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac670, 0x17e70 bytes
    // dxgi.dll .rdata:0xac9a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb70, 0x18b10 bytes
    // dxgi.dll .rdata:0xad848, 0x17e70 bytes
    //
    _q95(sdk::unknown_ptr) idxgi_output_set_gamma_control_start;
    
    // [IDXGIOutput_SetGammaControl_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabdd0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac110, 0x17e70 bytes
    // dxgi.dll .rdata:0xab360, 0x18b10 bytes
    // dxgi.dll .rdata:0xad9b0, 0x17e70 bytes
    //
    _q96(sdk::unknown_ptr) idxgi_output_set_gamma_control_stop;
    
    // [IDXGIOutput_TakeOwnership_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac4c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac7f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab9b0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad698, 0x17e70 bytes
    //
    _q97(sdk::unknown_ptr) idxgi_output_take_ownership_start;
    
    // [IDXGIOutput_TakeOwnership_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac2f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac630, 0x17e70 bytes
    // dxgi.dll .rdata:0xab828, 0x18b10 bytes
    // dxgi.dll .rdata:0xad4d8, 0x17e70 bytes
    //
    _q98(sdk::unknown_ptr) idxgi_output_take_ownership_stop;
    
    // [IDXGIOutput_WaitForVBlank_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa36c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa39e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f28, 0x18b10 bytes
    // dxgi.dll .rdata:0xa46e8, 0x17e70 bytes
    //
    _q99(sdk::unknown_ptr) idxgi_output_wait_for_v_blank_start;
    
    // [IDXGIOutput_WaitForVBlank_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa36f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a20, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f98, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4728, 0x17e70 bytes
    //
    _r00(sdk::unknown_ptr) idxgi_output_wait_for_v_blank_stop;
    
    // [IDXGISwapChain_GetBuffer_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa35f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3910, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e10, 0x18b10 bytes
    // dxgi.dll .rdata:0xa49f8, 0x17e70 bytes
    //
    _r01(sdk::unknown_ptr) idxgi_swap_chain_get_buffer_start;
    
    // [IDXGISwapChain_GetBuffer_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3628, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3948, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e50, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a30, 0x17e70 bytes
    //
    _r02(sdk::unknown_ptr) idxgi_swap_chain_get_buffer_stop;
    
    // [IDXGISwapChain_GetContainingOutput_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac350, 0x17e70 bytes
    // dxgi.dll .rdata:0xac690, 0x17e70 bytes
    // dxgi.dll .rdata:0xab878, 0x18b10 bytes
    // dxgi.dll .rdata:0xad538, 0x17e70 bytes
    //
    _r03(sdk::unknown_ptr) idxgi_swap_chain_get_containing_output_start;
    
    // [IDXGISwapChain_GetContainingOutput_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac400, 0x17e70 bytes
    // dxgi.dll .rdata:0xac740, 0x17e70 bytes
    // dxgi.dll .rdata:0xab920, 0x18b10 bytes
    // dxgi.dll .rdata:0xad5e8, 0x17e70 bytes
    //
    _r04(sdk::unknown_ptr) idxgi_swap_chain_get_containing_output_stop;
    
    // [IDXGISwapChain_GetDesc_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac240, 0x17e70 bytes
    // dxgi.dll .rdata:0xac580, 0x17e70 bytes
    // dxgi.dll .rdata:0xab788, 0x18b10 bytes
    // dxgi.dll .rdata:0xade20, 0x17e70 bytes
    //
    _r05(sdk::unknown_ptr) idxgi_swap_chain_get_desc_start;
    
    // [IDXGISwapChain_GetDesc_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe00, 0x17e70 bytes
    // dxgi.dll .rdata:0xac140, 0x17e70 bytes
    // dxgi.dll .rdata:0xab380, 0x18b10 bytes
    // dxgi.dll .rdata:0xad9e0, 0x17e70 bytes
    //
    _r06(sdk::unknown_ptr) idxgi_swap_chain_get_desc_stop;
    
    // [IDXGISwapChain_GetFrameLatencyWaitableObject_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac480, 0x17e70 bytes
    // dxgi.dll .rdata:0xac7c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab970, 0x18b10 bytes
    // dxgi.dll .rdata:0xad668, 0x17e70 bytes
    //
    _r07(sdk::unknown_ptr) idxgi_swap_chain_get_frame_latency_waitable_object_start;
    
    // [IDXGISwapChain_GetFrameLatencyWaitableObject_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac568, 0x17e70 bytes
    // dxgi.dll .rdata:0xac898, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba50, 0x18b10 bytes
    // dxgi.dll .rdata:0xad740, 0x17e70 bytes
    //
    _r08(sdk::unknown_ptr) idxgi_swap_chain_get_frame_latency_waitable_object_stop;
    
    // [IDXGISwapChain_GetFrameStatistics_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa36d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa39f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6f48, 0x18b10 bytes
    // dxgi.dll .rdata:0xa46f8, 0x17e70 bytes
    //
    _r09(sdk::unknown_ptr) idxgi_swap_chain_get_frame_statistics_start;
    
    // [IDXGISwapChain_GetFrameStatistics_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3618, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3938, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6e40, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a20, 0x17e70 bytes
    //
    _r10(sdk::unknown_ptr) idxgi_swap_chain_get_frame_statistics_stop;
    
    // [IDXGISwapChain_GetFullscreenState_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac620, 0x17e70 bytes
    // dxgi.dll .rdata:0xac950, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb18, 0x18b10 bytes
    // dxgi.dll .rdata:0xad7f8, 0x17e70 bytes
    //
    _r11(sdk::unknown_ptr) idxgi_swap_chain_get_fullscreen_state_start;
    
    // [IDXGISwapChain_GetFullscreenState_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac1d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac510, 0x17e70 bytes
    // dxgi.dll .rdata:0xab728, 0x18b10 bytes
    // dxgi.dll .rdata:0xaddb0, 0x17e70 bytes
    //
    _r12(sdk::unknown_ptr) idxgi_swap_chain_get_fullscreen_state_stop;
    
    // [IDXGISwapChain_GetLastPresentCount_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac4e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac810, 0x17e70 bytes
    // dxgi.dll .rdata:0xab9d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad6b8, 0x17e70 bytes
    //
    _r13(sdk::unknown_ptr) idxgi_swap_chain_get_last_present_count_start;
    
    // [IDXGISwapChain_GetLastPresentCount_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa35c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa38e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6df0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa49c8, 0x17e70 bytes
    //
    _r14(sdk::unknown_ptr) idxgi_swap_chain_get_last_present_count_stop;
    
    // [IDXGISwapChain_GetMatrixTransform_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac110, 0x17e70 bytes
    // dxgi.dll .rdata:0xac450, 0x17e70 bytes
    // dxgi.dll .rdata:0xab688, 0x18b10 bytes
    // dxgi.dll .rdata:0xadcf0, 0x17e70 bytes
    //
    _r15(sdk::unknown_ptr) idxgi_swap_chain_get_matrix_transform_start;
    
    // [IDXGISwapChain_GetMatrixTransform_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac4f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac820, 0x17e70 bytes
    // dxgi.dll .rdata:0xab9e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad6c8, 0x17e70 bytes
    //
    _r16(sdk::unknown_ptr) idxgi_swap_chain_get_matrix_transform_stop;
    
    // [IDXGISwapChain_GetMaximumFrameLatency_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac170, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab6d8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd50, 0x17e70 bytes
    //
    _r17(sdk::unknown_ptr) idxgi_swap_chain_get_maximum_frame_latency_start;
    
    // [IDXGISwapChain_GetMaximumFrameLatency_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac330, 0x17e70 bytes
    // dxgi.dll .rdata:0xac670, 0x17e70 bytes
    // dxgi.dll .rdata:0xab858, 0x18b10 bytes
    // dxgi.dll .rdata:0xad518, 0x17e70 bytes
    //
    _r18(sdk::unknown_ptr) idxgi_swap_chain_get_maximum_frame_latency_stop;
    
    // [IDXGISwapChain_GetSourceSize_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac030, 0x17e70 bytes
    // dxgi.dll .rdata:0xac370, 0x17e70 bytes
    // dxgi.dll .rdata:0xab5a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc10, 0x17e70 bytes
    //
    _r19(sdk::unknown_ptr) idxgi_swap_chain_get_source_size_start;
    
    // [IDXGISwapChain_GetSourceSize_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac650, 0x17e70 bytes
    // dxgi.dll .rdata:0xac980, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb48, 0x18b10 bytes
    // dxgi.dll .rdata:0xad828, 0x17e70 bytes
    //
    _r20(sdk::unknown_ptr) idxgi_swap_chain_get_source_size_stop;
    
    // [IDXGISwapChainPartner_CheckPresentDurationSupport_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac370, 0x17e70 bytes
    // dxgi.dll .rdata:0xac6b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab898, 0x18b10 bytes
    // dxgi.dll .rdata:0xad558, 0x17e70 bytes
    //
    _r21(sdk::unknown_ptr) idxgi_swap_chain_partner_check_present_duration_support_start;
    
    // [IDXGISwapChainPartner_CheckPresentDurationSupport_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac3e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac720, 0x17e70 bytes
    // dxgi.dll .rdata:0xab900, 0x18b10 bytes
    // dxgi.dll .rdata:0xad5c8, 0x17e70 bytes
    //
    _r22(sdk::unknown_ptr) idxgi_swap_chain_partner_check_present_duration_support_stop;
    
    // [IDXGISwapChainPartner_GetColorSpace_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac130, 0x17e70 bytes
    // dxgi.dll .rdata:0xac470, 0x17e70 bytes
    // dxgi.dll .rdata:0xab6a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd10, 0x17e70 bytes
    //
    _r23(sdk::unknown_ptr) idxgi_swap_chain_partner_get_color_space_start;
    
    // [IDXGISwapChainPartner_GetColorSpace_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabfb0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab528, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb90, 0x17e70 bytes
    //
    _r24(sdk::unknown_ptr) idxgi_swap_chain_partner_get_color_space_stop;
    
    // [IDXGISwapChainPartner_GetDestSize_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe80, 0x17e70 bytes
    // dxgi.dll .rdata:0xac1c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab3f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada60, 0x17e70 bytes
    //
    _r25(sdk::unknown_ptr) idxgi_swap_chain_partner_get_dest_size_start;
    
    // [IDXGISwapChainPartner_GetDestSize_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac320, 0x17e70 bytes
    // dxgi.dll .rdata:0xac660, 0x17e70 bytes
    // dxgi.dll .rdata:0xab848, 0x18b10 bytes
    // dxgi.dll .rdata:0xad508, 0x17e70 bytes
    //
    _r26(sdk::unknown_ptr) idxgi_swap_chain_partner_get_dest_size_stop;
    
    // [IDXGISwapChainPartner_GetSourceRect_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac2e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac620, 0x17e70 bytes
    // dxgi.dll .rdata:0xab818, 0x18b10 bytes
    // dxgi.dll .rdata:0xad4c8, 0x17e70 bytes
    //
    _r27(sdk::unknown_ptr) idxgi_swap_chain_partner_get_source_rect_start;
    
    // [IDXGISwapChainPartner_GetSourceRect_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac600, 0x17e70 bytes
    // dxgi.dll .rdata:0xac930, 0x17e70 bytes
    // dxgi.dll .rdata:0xabaf8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad7d8, 0x17e70 bytes
    //
    _r28(sdk::unknown_ptr) idxgi_swap_chain_partner_get_source_rect_stop;
    
    // [IDXGISwapChainPartner_GetTargetRect_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac5a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac8d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba98, 0x18b10 bytes
    // dxgi.dll .rdata:0xad778, 0x17e70 bytes
    //
    _r29(sdk::unknown_ptr) idxgi_swap_chain_partner_get_target_rect_start;
    
    // [IDXGISwapChainPartner_GetTargetRect_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac500, 0x17e70 bytes
    // dxgi.dll .rdata:0xac830, 0x17e70 bytes
    // dxgi.dll .rdata:0xab9f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad6d8, 0x17e70 bytes
    //
    _r30(sdk::unknown_ptr) idxgi_swap_chain_partner_get_target_rect_stop;
    
    // [IDXGISwapChainPartner_PresentBuffer_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf60, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab4d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb40, 0x17e70 bytes
    //
    _r31(sdk::unknown_ptr) idxgi_swap_chain_partner_present_buffer_start;
    
    // [IDXGISwapChainPartner_PresentBuffer_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac200, 0x17e70 bytes
    // dxgi.dll .rdata:0xac540, 0x17e70 bytes
    // dxgi.dll .rdata:0xab758, 0x18b10 bytes
    // dxgi.dll .rdata:0xadde0, 0x17e70 bytes
    //
    _r32(sdk::unknown_ptr) idxgi_swap_chain_partner_present_buffer_stop;
    
    // [IDXGISwapChainPartner_SetColorSpace_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac380, 0x17e70 bytes
    // dxgi.dll .rdata:0xac6c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab8a8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad568, 0x17e70 bytes
    //
    _r33(sdk::unknown_ptr) idxgi_swap_chain_partner_set_color_space_start;
    
    // [IDXGISwapChainPartner_SetColorSpace_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac550, 0x17e70 bytes
    // dxgi.dll .rdata:0xac880, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba40, 0x18b10 bytes
    // dxgi.dll .rdata:0xad728, 0x17e70 bytes
    //
    _r34(sdk::unknown_ptr) idxgi_swap_chain_partner_set_color_space_stop;
    
    // [IDXGISwapChainPartner_SetDestSize_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabfc0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac300, 0x17e70 bytes
    // dxgi.dll .rdata:0xab538, 0x18b10 bytes
    // dxgi.dll .rdata:0xadba0, 0x17e70 bytes
    //
    _r35(sdk::unknown_ptr) idxgi_swap_chain_partner_set_dest_size_start;
    
    // [IDXGISwapChainPartner_SetDestSize_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac3f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac730, 0x17e70 bytes
    // dxgi.dll .rdata:0xab910, 0x18b10 bytes
    // dxgi.dll .rdata:0xad5d8, 0x17e70 bytes
    //
    _r36(sdk::unknown_ptr) idxgi_swap_chain_partner_set_dest_size_stop;
    
    // [IDXGISwapChainPartner_SetPresentDuration_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabfe0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac320, 0x17e70 bytes
    // dxgi.dll .rdata:0xab558, 0x18b10 bytes
    // dxgi.dll .rdata:0xadbc0, 0x17e70 bytes
    //
    _r37(sdk::unknown_ptr) idxgi_swap_chain_partner_set_present_duration_start;
    
    // [IDXGISwapChainPartner_SetPresentDuration_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe30, 0x17e70 bytes
    // dxgi.dll .rdata:0xac170, 0x17e70 bytes
    // dxgi.dll .rdata:0xab3a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada10, 0x17e70 bytes
    //
    _r38(sdk::unknown_ptr) idxgi_swap_chain_partner_set_present_duration_stop;
    
    // [IDXGISwapChainPartner_SetSourceRect_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac100, 0x17e70 bytes
    // dxgi.dll .rdata:0xac440, 0x17e70 bytes
    // dxgi.dll .rdata:0xab678, 0x18b10 bytes
    // dxgi.dll .rdata:0xadce0, 0x17e70 bytes
    //
    _r39(sdk::unknown_ptr) idxgi_swap_chain_partner_set_source_rect_start;
    
    // [IDXGISwapChainPartner_SetSourceRect_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac3c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac700, 0x17e70 bytes
    // dxgi.dll .rdata:0xab8e0, 0x18b10 bytes
    // dxgi.dll .rdata:0xad5a8, 0x17e70 bytes
    //
    _r40(sdk::unknown_ptr) idxgi_swap_chain_partner_set_source_rect_stop;
    
    // [IDXGISwapChainPartner_SetTargetRect_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac5d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac900, 0x17e70 bytes
    // dxgi.dll .rdata:0xabac8, 0x18b10 bytes
    // dxgi.dll .rdata:0xad7a8, 0x17e70 bytes
    //
    _r41(sdk::unknown_ptr) idxgi_swap_chain_partner_set_target_rect_start;
    
    // [IDXGISwapChainPartner_SetTargetRect_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac640, 0x17e70 bytes
    // dxgi.dll .rdata:0xac970, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb38, 0x18b10 bytes
    // dxgi.dll .rdata:0xad818, 0x17e70 bytes
    //
    _r42(sdk::unknown_ptr) idxgi_swap_chain_partner_set_target_rect_stop;
    
    // [IDXGISwapChain_Present_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3680, 0x17e70 bytes
    // dxgi.dll .rdata:0xa39a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6ed8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4a88, 0x17e70 bytes
    //
    _r43(sdk::unknown_ptr) idxgi_swap_chain_present_start;
    
    // [IDXGISwapChain_Present_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3700, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a30, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6fa8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4738, 0x17e70 bytes
    //
    _r44(sdk::unknown_ptr) idxgi_swap_chain_present_stop;
    
    // [IDXGISwapChain_ResizeBuffers_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac578, 0x17e70 bytes
    // dxgi.dll .rdata:0xac8a8, 0x17e70 bytes
    // dxgi.dll .rdata:0xaba60, 0x18b10 bytes
    // dxgi.dll .rdata:0xad750, 0x17e70 bytes
    //
    _r45(sdk::unknown_ptr) idxgi_swap_chain_resize_buffers_start;
    
    // [IDXGISwapChain_ResizeBuffers_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabe50, 0x17e70 bytes
    // dxgi.dll .rdata:0xac190, 0x17e70 bytes
    // dxgi.dll .rdata:0xab3c0, 0x18b10 bytes
    // dxgi.dll .rdata:0xada30, 0x17e70 bytes
    //
    _r46(sdk::unknown_ptr) idxgi_swap_chain_resize_buffers_stop;
    
    // [IDXGISwapChain_ResizeTarget_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac360, 0x17e70 bytes
    // dxgi.dll .rdata:0xac6a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab888, 0x18b10 bytes
    // dxgi.dll .rdata:0xad548, 0x17e70 bytes
    //
    _r47(sdk::unknown_ptr) idxgi_swap_chain_resize_target_start;
    
    // [IDXGISwapChain_ResizeTarget_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf80, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab4f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb60, 0x17e70 bytes
    //
    _r48(sdk::unknown_ptr) idxgi_swap_chain_resize_target_stop;
    
    // [IDXGISwapChain_SetFullscreenState_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf40, 0x17e70 bytes
    // dxgi.dll .rdata:0xac280, 0x17e70 bytes
    // dxgi.dll .rdata:0xab4c0, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb20, 0x17e70 bytes
    //
    _r49(sdk::unknown_ptr) idxgi_swap_chain_set_fullscreen_state_start;
    
    // [IDXGISwapChain_SetFullscreenState_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabed0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac210, 0x17e70 bytes
    // dxgi.dll .rdata:0xab450, 0x18b10 bytes
    // dxgi.dll .rdata:0xadab0, 0x17e70 bytes
    //
    _r50(sdk::unknown_ptr) idxgi_swap_chain_set_fullscreen_state_stop;
    
    // [IDXGISwapChain_SetMatrixTransform_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac2a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac5e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab7e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade80, 0x17e70 bytes
    //
    _r51(sdk::unknown_ptr) idxgi_swap_chain_set_matrix_transform_start;
    
    // [IDXGISwapChain_SetMatrixTransform_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabec0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac200, 0x17e70 bytes
    // dxgi.dll .rdata:0xab440, 0x18b10 bytes
    // dxgi.dll .rdata:0xadaa0, 0x17e70 bytes
    //
    _r52(sdk::unknown_ptr) idxgi_swap_chain_set_matrix_transform_stop;
    
    // [IDXGISwapChain_SetMaximumFrameLatency_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac070, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab5e8, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc50, 0x17e70 bytes
    //
    _r53(sdk::unknown_ptr) idxgi_swap_chain_set_maximum_frame_latency_start;
    
    // [IDXGISwapChain_SetMaximumFrameLatency_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabf90, 0x17e70 bytes
    // dxgi.dll .rdata:0xac2d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab508, 0x18b10 bytes
    // dxgi.dll .rdata:0xadb70, 0x17e70 bytes
    //
    _r54(sdk::unknown_ptr) idxgi_swap_chain_set_maximum_frame_latency_stop;
    
    // [IDXGISwapChain_SetSourceSize_Start]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac220, 0x17e70 bytes
    // dxgi.dll .rdata:0xac560, 0x17e70 bytes
    // dxgi.dll .rdata:0xab778, 0x18b10 bytes
    // dxgi.dll .rdata:0xade00, 0x17e70 bytes
    //
    _r55(sdk::unknown_ptr) idxgi_swap_chain_set_source_size_start;
    
    // [IDXGISwapChain_SetSourceSize_Stop]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xabef0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac230, 0x17e70 bytes
    // dxgi.dll .rdata:0xab470, 0x18b10 bytes
    // dxgi.dll .rdata:0xadad0, 0x17e70 bytes
    //
    _r56(sdk::unknown_ptr) idxgi_swap_chain_set_source_size_stop;
    
    // [IID_IDXGIAdapter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac280, 0x17e70 bytes
    // dxgi.dll .rdata:0xac5c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab7c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xade60, 0x17e70 bytes
    //
    _r57(sdk::unknown_ptr) iid_idxgi_adapter;
    
    // [IID_IDXGIDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac0b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac3f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab628, 0x18b10 bytes
    // dxgi.dll .rdata:0xadc90, 0x17e70 bytes
    //
    _r58(sdk::unknown_ptr) iid_idxgi_device;
    
    // [IID_IDXGIObject]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac690, 0x17e70 bytes
    // dxgi.dll .rdata:0xac9c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xabb90, 0x18b10 bytes
    // dxgi.dll .rdata:0xad868, 0x17e70 bytes
    //
    _r59(sdk::unknown_ptr) iid_idxgi_object;
    
    // [IID_IDXGIOutput]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac1b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac4f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xab708, 0x18b10 bytes
    // dxgi.dll .rdata:0xadd90, 0x17e70 bytes
    //
    _r60(sdk::unknown_ptr) iid_idxgi_output;
    
    // [__IMPORT_DESCRIPTOR_KERNELBASE]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc80d8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc8388, 0x17e70 bytes
    // dxgi.dll .rdata:0xc7dc4, 0x18b10 bytes
    // dxgi.dll .rdata:0xc9668, 0x17e70 bytes
    //
    _r61(sdk::unknown_ptr) import_descriptor_kernelbase;
    
    // [__IMPORT_DESCRIPTOR_msvcrt]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc7e94, 0x17e70 bytes
    // dxgi.dll .rdata:0xc8144, 0x17e70 bytes
    // dxgi.dll .rdata:0xc7b94, 0x18b10 bytes
    // dxgi.dll .rdata:0xc9424, 0x17e70 bytes
    //
    _r62(sdk::unknown_ptr) import_descriptor_msvcrt;
    
    // [__IMPORT_DESCRIPTOR_ntdll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc7ea8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc8158, 0x17e70 bytes
    // dxgi.dll .rdata:0xc7ba8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc9438, 0x17e70 bytes
    //
    _r63(sdk::unknown_ptr) import_descriptor_ntdll;
    
    // [__IMPORT_DESCRIPTOR_win32u]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc7ebc, 0x17e70 bytes
    // dxgi.dll .rdata:0xc816c, 0x17e70 bytes
    // dxgi.dll .rdata:0xc7bbc, 0x18b10 bytes
    // dxgi.dll .rdata:0xc944c, 0x17e70 bytes
    //
    _r64(sdk::unknown_ptr) import_descriptor_win32u;
    
    // [InitialConfigCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4280, 0x17e70 bytes
    // dxgi.dll .text:0x4280, 0x17e70 bytes
    // dxgi.dll .text:0x8a60, 0x18b10 bytes
    // dxgi.dll .text:0x6100, 0x17e70 bytes
    //
    _r65(sdk::unknown_ptr) initial_config_callback;
    
    // [DXGIInitializeDevMode]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1cc0, 0x17e70 bytes
    // dxgi.dll .text:0x1cc0, 0x17e70 bytes
    // dxgi.dll .text:0x3740, 0x18b10 bytes
    // dxgi.dll .text:0x3b40, 0x17e70 bytes
    //
    _r66(sdk::unknown_ptr) initialize_dev_mode;
    
    // [_initterm]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24eae, 0x17e70 bytes
    // dxgi.dll .text:0x251ae, 0x17e70 bytes
    // dxgi.dll .text:0x2c3de, 0x18b10 bytes
    // dxgi.dll .text:0x25fce, 0x17e70 bytes
    //
    _r67(sdk::function<void(sdk::function<void()>**, sdk::function<void()>**)>*) initterm;
    
    // [InlineIsEqualGUID]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x174f8, 0x17e70 bytes
    // dxgi.dll .text:0x17758, 0x17e70 bytes
    // dxgi.dll .text:0x1bb74, 0x18b10 bytes
    // dxgi.dll .text:0x12c68, 0x17e70 bytes
    //
    _r68(sdk::function<int32_t(const struct nt::guid_t&, const struct nt::guid_t&)>*) inline_is_equal_guid;
    
    // [InvertSwapEffect]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d060, 0x17e70 bytes
    // dxgi.dll .text:0x1d370, 0x17e70 bytes
    // dxgi.dll .text:0x19f58, 0x18b10 bytes
    // dxgi.dll .text:0x188f0, 0x17e70 bytes
    //
    _r69(sdk::unknown_ptr) invert_swap_effect;
    
    // [IsCompatibleWithDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x55c7c, 0x17e70 bytes
    // dxgi.dll .text:0x55d6c, 0x17e70 bytes
    // dxgi.dll .text:0x60d34, 0x18b10 bytes
    // dxgi.dll .text:0x571fc, 0x17e70 bytes
    //
    _r70(sdk::unknown_ptr) is_compatible_with_device;
    
    // [IsCreateDCWPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2554c, 0x17e70 bytes
    // dxgi.dll .text:0x2584c, 0x17e70 bytes
    // dxgi.dll .text:0x2ca9c, 0x18b10 bytes
    // dxgi.dll .text:0x2666c, 0x17e70 bytes
    //
    _r71(sdk::unknown_ptr) is_create_dcw_present;
    
    // [IsD3D10Level9]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4a028, 0x17e70 bytes
    // dxgi.dll .text:0x4a118, 0x17e70 bytes
    // dxgi.dll .text:0x5536c, 0x18b10 bytes
    // dxgi.dll .text:0x4b5a8, 0x17e70 bytes
    //
    _r72(sdk::unknown_ptr) is_d3d10_level9;
    
    // [IsDwmSetWindowAttributePresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x250b8, 0x17e70 bytes
    // dxgi.dll .text:0x253b8, 0x17e70 bytes
    // dxgi.dll .text:0x2c608, 0x18b10 bytes
    // dxgi.dll .text:0x261d8, 0x17e70 bytes
    //
    _r73(sdk::unknown_ptr) is_dwm_set_window_attribute_present;
    
    // [IsDwmpDxgiIsThreadDesktopCompositedPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24f70, 0x17e70 bytes
    // dxgi.dll .text:0x25270, 0x17e70 bytes
    // dxgi.dll .text:0x2c4c0, 0x18b10 bytes
    // dxgi.dll .text:0x26090, 0x17e70 bytes
    //
    _r74(sdk::unknown_ptr) is_dwmp_dxgi_is_thread_desktop_composited_present;
    
    // [IsDwmpUpdateProxyWindowForCapturePresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24fc4, 0x17e70 bytes
    // dxgi.dll .text:0x252c4, 0x17e70 bytes
    // dxgi.dll .text:0x2c514, 0x18b10 bytes
    // dxgi.dll .text:0x260e4, 0x17e70 bytes
    //
    _r75(sdk::unknown_ptr) is_dwmp_update_proxy_window_for_capture_present;
    
    // [IsGameConfigStoreApplication]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb628, 0x17e70 bytes
    // dxgi.dll .text:0xb658, 0x17e70 bytes
    // dxgi.dll .text:0x1bfa4, 0x18b10 bytes
    // dxgi.dll .text:0x6838, 0x17e70 bytes
    //
    _r76(sdk::unknown_ptr) is_game_config_store_application;
    
    // [IsGetClientRectPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25bb0, 0x17e70 bytes
    // dxgi.dll .text:0x25eb0, 0x17e70 bytes
    // dxgi.dll .text:0x2d100, 0x18b10 bytes
    // dxgi.dll .text:0x26cd0, 0x17e70 bytes
    //
    _r77(sdk::function<uint8_t()>*) is_get_client_rect_present;
    
    // [IsGetProcessUIContextInformationPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25458, 0x17e70 bytes
    // dxgi.dll .text:0x25758, 0x17e70 bytes
    // dxgi.dll .text:0x2c9a8, 0x18b10 bytes
    // dxgi.dll .text:0x26578, 0x17e70 bytes
    //
    _r78(sdk::unknown_ptr) is_get_process_ui_context_information_present;
    
    // [IsIsWindowPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25bb0, 0x17e70 bytes
    // dxgi.dll .text:0x25eb0, 0x17e70 bytes
    // dxgi.dll .text:0x2d100, 0x18b10 bytes
    // dxgi.dll .text:0x26cd0, 0x17e70 bytes
    //
    _r79(sdk::function<uint8_t()>*) is_is_window_present;
    
    // [IsMaximizedWindowedFullscreenDesiredPerGameConfigStore]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x595b8, 0x17e70 bytes
    // dxgi.dll .text:0x596a8, 0x17e70 bytes
    // dxgi.dll .text:0x64f60, 0x18b10 bytes
    // dxgi.dll .text:0x5ab68, 0x17e70 bytes
    //
    _r80(sdk::unknown_ptr) is_maximized_windowed_fullscreen_desired_per_game_config_store;
    
    // [IsModernApp]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xeb00, 0x17e70 bytes
    // dxgi.dll .text:0xeb30, 0x17e70 bytes
    // dxgi.dll .text:0x15818, 0x18b10 bytes
    // dxgi.dll .text:0x9fe0, 0x17e70 bytes
    //
    _r81(sdk::unknown_ptr) is_modern_app;
    
    // [IsMultiSession0]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd360, 0x17e70 bytes
    // dxgi.dll .text:0xd390, 0x17e70 bytes
    // dxgi.dll .text:0x169fc, 0x18b10 bytes
    // dxgi.dll .text:0x8570, 0x17e70 bytes
    //
    _r82(sdk::unknown_ptr) is_multi_session0;
    
    // [_IsNonwritableInCurrentImage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24d40, 0x17e70 bytes
    // dxgi.dll .text:0x25040, 0x17e70 bytes
    // dxgi.dll .text:0x2c270, 0x18b10 bytes
    // dxgi.dll .text:0x25e60, 0x17e70 bytes
    //
    _r83(sdk::unknown_ptr) is_nonwritable_in_current_image;
    
    // [IsPostMessageAPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25ad0, 0x17e70 bytes
    // dxgi.dll .text:0x25dd0, 0x17e70 bytes
    // dxgi.dll .text:0x2d020, 0x18b10 bytes
    // dxgi.dll .text:0x26bf0, 0x17e70 bytes
    //
    _r84(sdk::unknown_ptr) is_post_message_a_present;
    
    // [IsProcessDWM]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xedf0, 0x17e70 bytes
    // dxgi.dll .text:0xee20, 0x17e70 bytes
    // dxgi.dll .text:0x15510, 0x18b10 bytes
    // dxgi.dll .text:0xa2d0, 0x17e70 bytes
    //
    _r85(sdk::unknown_ptr) is_process_dwm;
    
    // [IsRectInSize]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x68730, 0x17e70 bytes
    // dxgi.dll .text:0x68840, 0x17e70 bytes
    // dxgi.dll .text:0x74b80, 0x18b10 bytes
    // dxgi.dll .text:0x69c70, 0x17e70 bytes
    //
    _r86(sdk::unknown_ptr) is_rect_in_size;
    
    // [IsRef]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9ef0, 0x17e70 bytes
    // dxgi.dll .text:0x9ef0, 0x17e70 bytes
    // dxgi.dll .text:0x242d8, 0x18b10 bytes
    // dxgi.dll .text:0x1e700, 0x17e70 bytes
    //
    _r87(sdk::unknown_ptr) is_ref;
    
    // [IsRemoteDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e83c, 0x17e70 bytes
    // dxgi.dll .text:0x1eb4c, 0x17e70 bytes
    // dxgi.dll .text:0x238a0, 0x18b10 bytes
    // dxgi.dll .text:0x1a108, 0x17e70 bytes
    //
    _r88(sdk::unknown_ptr) is_remote_device;
    
    // [IsRemoteDeviceUsingXddmOutputs]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x22864, 0x17e70 bytes
    // dxgi.dll .text:0x22b44, 0x17e70 bytes
    // dxgi.dll .text:0x23864, 0x18b10 bytes
    // dxgi.dll .text:0x237e4, 0x17e70 bytes
    //
    _r89(sdk::unknown_ptr) is_remote_device_using_xddm_outputs;
    
    // [IsShell_IsLockedPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26278, 0x17e70 bytes
    // dxgi.dll .text:0x26578, 0x17e70 bytes
    // dxgi.dll .text:0x2d7c8, 0x18b10 bytes
    // dxgi.dll .text:0x27398, 0x17e70 bytes
    //
    _r90(sdk::unknown_ptr) is_shell_is_locked_present;
    
    // [IsWARPOrRef]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x9fc0, 0x17e70 bytes
    // dxgi.dll .text:0x9fc0, 0x17e70 bytes
    // dxgi.dll .text:0x2439c, 0x18b10 bytes
    // dxgi.dll .text:0x1e7d0, 0x17e70 bytes
    //
    _r91(sdk::unknown_ptr) is_warp_or_ref;
    
    // [IsWindowCloaked]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x61884, 0x17e70 bytes
    // dxgi.dll .text:0x61974, 0x17e70 bytes
    // dxgi.dll .text:0x3586a, 0x18b10 bytes
    // dxgi.dll .text:0x62da4, 0x17e70 bytes
    //
    _r92(sdk::unknown_ptr) is_window_cloaked;
    
    // [IsWindowTransparent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x618d4, 0x17e70 bytes
    // dxgi.dll .text:0x619c4, 0x17e70 bytes
    // dxgi.dll .text:0x6d430, 0x18b10 bytes
    // dxgi.dll .text:0x62df4, 0x17e70 bytes
    //
    _r93(sdk::unknown_ptr) is_window_transparent;
    
    // [IsXboxGetMultiplaneOverlayPriorityPresent]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26ab0, 0x17e70 bytes
    // dxgi.dll .text:0x26db0, 0x17e70 bytes
    // dxgi.dll .text:0x2e1d0, 0x18b10 bytes
    // dxgi.dll .text:0x27bd0, 0x17e70 bytes
    //
    _r94(sdk::unknown_ptr) is_xbox_get_multiplane_overlay_priority_present;
    
    // [isfinitematrix]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x358c, 0x17e70 bytes
    // dxgi.dll .text:0x358c, 0x17e70 bytes
    // dxgi.dll .text:0x81e8, 0x18b10 bytes
    // dxgi.dll .text:0x540c, 0x17e70 bytes
    //
    _r95(sdk::unknown_ptr) isfinitematrix;
    
    // [Journal]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbec0, 0x17e70 bytes
    // dxgi.dll .data:0xcbec0, 0x17e70 bytes
    // dxgi.dll .data:0xcaf50, 0x18b10 bytes
    // dxgi.dll .data:0xccf10, 0x17e70 bytes
    //
    _r96(sdk::unknown_ptr) journal;
    
    // [JournalCounter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xce0e0, 0x17e70 bytes
    // dxgi.dll .data:0xce0e0, 0x17e70 bytes
    // dxgi.dll .data:0xcd258, 0x18b10 bytes
    // dxgi.dll .data:0xcf130, 0x17e70 bytes
    //
    _r97(sdk::unknown_ptr) journal_counter;
    
    // [linearToGamma]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56de8, 0x17e70 bytes
    // dxgi.dll .text:0x56ed8, 0x17e70 bytes
    // dxgi.dll .text:0x61fc0, 0x18b10 bytes
    // dxgi.dll .text:0x58368, 0x17e70 bytes
    //
    _r98(sdk::unknown_ptr) linear_to_gamma;
    
    // [_lock]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24eba, 0x17e70 bytes
    // dxgi.dll .text:0x251ba, 0x17e70 bytes
    // dxgi.dll .text:0x2c3ea, 0x18b10 bytes
    // dxgi.dll .text:0x25fda, 0x17e70 bytes
    //
    _r99(sdk::unknown_ptr) lock;
    
    // [MaximizedWindowedModeFullscreenEnabled]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb4f4, 0x17e70 bytes
    // dxgi.dll .text:0xb524, 0x17e70 bytes
    // dxgi.dll .text:0x1be64, 0x18b10 bytes
    // dxgi.dll .text:0x6704, 0x17e70 bytes
    //
    _s00(sdk::unknown_ptr) maximized_windowed_mode_fullscreen_enabled;
    
    // [McGenEventRegister_EtwEventRegister]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7f74, 0x17e70 bytes
    // dxgi.dll .text:0x7f74, 0x17e70 bytes
    // dxgi.dll .text:0xbfe4, 0x18b10 bytes
    // dxgi.dll .text:0x1cb24, 0x17e70 bytes
    //
    _s01(sdk::function<uint32_t(const struct nt::guid_t*, sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*, void*, uint64_t*)>*) mc_gen_event_register_etw_event_register;
    
    // [McGenEventUnregister_EtwEventUnregister]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x81b8, 0x17e70 bytes
    // dxgi.dll .text:0x81b8, 0x17e70 bytes
    // dxgi.dll .text:0x9804, 0x18b10 bytes
    // dxgi.dll .text:0x1cd68, 0x17e70 bytes
    //
    _s02(sdk::function<uint32_t(uint64_t*)>*) mc_gen_event_unregister_etw_event_unregister;
    
    // [McGenEventWrite_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4b09c, 0x17e70 bytes
    // dxgi.dll .text:0x4b18c, 0x17e70 bytes
    // dxgi.dll .text:0x56508, 0x18b10 bytes
    // dxgi.dll .text:0x4c61c, 0x17e70 bytes
    //
    _s03(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const struct nt::guid_t*, uint32_t, struct nt::event_data_descriptor_t*)>*) mc_gen_event_write_etw_event_write_transfer;
    
    // [McTemplateU0p_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d8b8, 0x17e70 bytes
    // dxgi.dll .text:0x6d9c8, 0x17e70 bytes
    // dxgi.dll .text:0x79484, 0x18b10 bytes
    // dxgi.dll .text:0x6edf8, 0x17e70 bytes
    //
    _s04(sdk::unknown_ptr) mc_template_u0p_etw_event_write_transfer;
    
    // [McTemplateU0ppD4_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d914, 0x17e70 bytes
    // dxgi.dll .text:0x6da24, 0x17e70 bytes
    // dxgi.dll .text:0x794e0, 0x18b10 bytes
    // dxgi.dll .text:0x6ee54, 0x17e70 bytes
    //
    _s05(sdk::unknown_ptr) mc_template_u0pp_d4_etw_event_write_transfer;
    
    // [McTemplateU0pp_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6da24, 0x17e70 bytes
    // dxgi.dll .text:0x6db34, 0x17e70 bytes
    // dxgi.dll .text:0x795f0, 0x18b10 bytes
    // dxgi.dll .text:0x6ef64, 0x17e70 bytes
    //
    _s06(sdk::unknown_ptr) mc_template_u0pp_etw_event_write_transfer;
    
    // [McTemplateU0ppF6_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d998, 0x17e70 bytes
    // dxgi.dll .text:0x6daa8, 0x17e70 bytes
    // dxgi.dll .text:0x79564, 0x18b10 bytes
    // dxgi.dll .text:0x6eed8, 0x17e70 bytes
    //
    _s07(sdk::unknown_ptr) mc_template_u0pp_f6_etw_event_write_transfer;
    
    // [McTemplateU0ppp_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6da94, 0x17e70 bytes
    // dxgi.dll .text:0x6dba4, 0x17e70 bytes
    // dxgi.dll .text:0x79660, 0x18b10 bytes
    // dxgi.dll .text:0x6efd4, 0x17e70 bytes
    //
    _s08(sdk::unknown_ptr) mc_template_u0ppp_etw_event_write_transfer;
    
    // [McTemplateU0ppq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6db18, 0x17e70 bytes
    // dxgi.dll .text:0x6dc28, 0x17e70 bytes
    // dxgi.dll .text:0x796e4, 0x18b10 bytes
    // dxgi.dll .text:0x6f058, 0x17e70 bytes
    //
    _s09(sdk::unknown_ptr) mc_template_u0ppq_etw_event_write_transfer;
    
    // [McTemplateU0ppqpt_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4b100, 0x17e70 bytes
    // dxgi.dll .text:0x4b1f0, 0x17e70 bytes
    // dxgi.dll .text:0x5656c, 0x18b10 bytes
    // dxgi.dll .text:0x4c680, 0x17e70 bytes
    //
    _s10(sdk::unknown_ptr) mc_template_u0ppqpt_etw_event_write_transfer;
    
    // [McTemplateU0ppqqqqqqqqqqqqqqqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f480, 0x17e70 bytes
    // dxgi.dll .text:0x6f590, 0x17e70 bytes
    // dxgi.dll .text:0x7ac8c, 0x18b10 bytes
    // dxgi.dll .text:0x709c0, 0x17e70 bytes
    //
    _s11(sdk::unknown_ptr) mc_template_u0ppqqqqqqqqqqqqqqqqq_etw_event_write_transfer;
    
    // [McTemplateU0ppqz_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x57040, 0x17e70 bytes
    // dxgi.dll .text:0x57130, 0x17e70 bytes
    // dxgi.dll .text:0x62154, 0x18b10 bytes
    // dxgi.dll .text:0x585c0, 0x17e70 bytes
    //
    _s12(sdk::unknown_ptr) mc_template_u0ppqz_etw_event_write_transfer;
    
    // [McTemplateU0pq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6dba4, 0x17e70 bytes
    // dxgi.dll .text:0x6dcb4, 0x17e70 bytes
    // dxgi.dll .text:0x79770, 0x18b10 bytes
    // dxgi.dll .text:0x6f0e4, 0x17e70 bytes
    //
    _s13(sdk::unknown_ptr) mc_template_u0pq_etw_event_write_transfer;
    
    // [McTemplateU0pqpp_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6dc18, 0x17e70 bytes
    // dxgi.dll .text:0x6dd28, 0x17e70 bytes
    // dxgi.dll .text:0x797e4, 0x18b10 bytes
    // dxgi.dll .text:0x6f158, 0x17e70 bytes
    //
    _s14(sdk::unknown_ptr) mc_template_u0pqpp_etw_event_write_transfer;
    
    // [McTemplateU0pqppu_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6dcb4, 0x17e70 bytes
    // dxgi.dll .text:0x6ddc4, 0x17e70 bytes
    // dxgi.dll .text:0x79880, 0x18b10 bytes
    // dxgi.dll .text:0x6f1f4, 0x17e70 bytes
    //
    _s15(sdk::unknown_ptr) mc_template_u0pqppu_etw_event_write_transfer;
    
    // [McTemplateU0pqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6dd60, 0x17e70 bytes
    // dxgi.dll .text:0x6de70, 0x17e70 bytes
    // dxgi.dll .text:0x7992c, 0x18b10 bytes
    // dxgi.dll .text:0x6f2a0, 0x17e70 bytes
    //
    _s16(sdk::unknown_ptr) mc_template_u0pqq_etw_event_write_transfer;
    
    // [McTemplateU0pqqZRZR_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6321c, 0x17e70 bytes
    // dxgi.dll .text:0x6330c, 0x17e70 bytes
    // dxgi.dll .text:0x6eef8, 0x18b10 bytes
    // dxgi.dll .text:0x6473c, 0x17e70 bytes
    //
    _s17(sdk::unknown_ptr) mc_template_u0pqq_zrzr_etw_event_write_transfer;
    
    // [McTemplateU0pqqp_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4b1a8, 0x17e70 bytes
    // dxgi.dll .text:0x4b298, 0x17e70 bytes
    // dxgi.dll .text:0x56614, 0x18b10 bytes
    // dxgi.dll .text:0x4c728, 0x17e70 bytes
    //
    _s18(sdk::unknown_ptr) mc_template_u0pqqp_etw_event_write_transfer;
    
    // [McTemplateU0pqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6dddc, 0x17e70 bytes
    // dxgi.dll .text:0x6deec, 0x17e70 bytes
    // dxgi.dll .text:0x799a8, 0x18b10 bytes
    // dxgi.dll .text:0x6f31c, 0x17e70 bytes
    //
    _s19(sdk::unknown_ptr) mc_template_u0pqqq_etw_event_write_transfer;
    
    // [McTemplateU0pqqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5710c, 0x17e70 bytes
    // dxgi.dll .text:0x571fc, 0x17e70 bytes
    // dxgi.dll .text:0x62220, 0x18b10 bytes
    // dxgi.dll .text:0x5868c, 0x17e70 bytes
    //
    _s20(sdk::unknown_ptr) mc_template_u0pqqqq_etw_event_write_transfer;
    
    // [McTemplateU0pqqqqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x571b4, 0x17e70 bytes
    // dxgi.dll .text:0x572a4, 0x17e70 bytes
    // dxgi.dll .text:0x622c8, 0x18b10 bytes
    // dxgi.dll .text:0x58734, 0x17e70 bytes
    //
    _s21(sdk::unknown_ptr) mc_template_u0pqqqqqq_etw_event_write_transfer;
    
    // [McTemplateU0pqqqqqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5727c, 0x17e70 bytes
    // dxgi.dll .text:0x5736c, 0x17e70 bytes
    // dxgi.dll .text:0x62390, 0x18b10 bytes
    // dxgi.dll .text:0x587fc, 0x17e70 bytes
    //
    _s22(sdk::unknown_ptr) mc_template_u0pqqqqqqq_etw_event_write_transfer;
    
    // [McTemplateU0pqqqqqqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x57358, 0x17e70 bytes
    // dxgi.dll .text:0x57448, 0x17e70 bytes
    // dxgi.dll .text:0x6246c, 0x18b10 bytes
    // dxgi.dll .text:0x588d8, 0x17e70 bytes
    //
    _s23(sdk::unknown_ptr) mc_template_u0pqqqqqqqq_etw_event_write_transfer;
    
    // [McTemplateU0pqqqqqqqtppu_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6de70, 0x17e70 bytes
    // dxgi.dll .text:0x6df80, 0x17e70 bytes
    // dxgi.dll .text:0x79a3c, 0x18b10 bytes
    // dxgi.dll .text:0x6f3b0, 0x17e70 bytes
    //
    _s24(sdk::unknown_ptr) mc_template_u0pqqqqqqqtppu_etw_event_write_transfer;
    
    // [McTemplateU0pqt_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f650, 0x17e70 bytes
    // dxgi.dll .text:0x6f760, 0x17e70 bytes
    // dxgi.dll .text:0x7ae5c, 0x18b10 bytes
    // dxgi.dll .text:0x70b90, 0x17e70 bytes
    //
    _s25(sdk::unknown_ptr) mc_template_u0pqt_etw_event_write_transfer;
    
    // [McTemplateU0pqtpppuq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6df9c, 0x17e70 bytes
    // dxgi.dll .text:0x6e0ac, 0x17e70 bytes
    // dxgi.dll .text:0x79b68, 0x18b10 bytes
    // dxgi.dll .text:0x6f4dc, 0x17e70 bytes
    //
    _s26(sdk::unknown_ptr) mc_template_u0pqtpppuq_etw_event_write_transfer;
    
    // [McTemplateU0pt_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6dba4, 0x17e70 bytes
    // dxgi.dll .text:0x6dcb4, 0x17e70 bytes
    // dxgi.dll .text:0x79e6c, 0x18b10 bytes
    // dxgi.dll .text:0x6f0e4, 0x17e70 bytes
    //
    _s27(sdk::unknown_ptr) mc_template_u0pt_etw_event_write_transfer;
    
    // [McTemplateU0ptpppuq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6e23c, 0x17e70 bytes
    // dxgi.dll .text:0x6e34c, 0x17e70 bytes
    // dxgi.dll .text:0x79ee0, 0x18b10 bytes
    // dxgi.dll .text:0x6f77c, 0x17e70 bytes
    //
    _s28(sdk::unknown_ptr) mc_template_u0ptpppuq_etw_event_write_transfer;
    
    // [McTemplateU0ptqqq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x632b8, 0x17e70 bytes
    // dxgi.dll .text:0x633a8, 0x17e70 bytes
    // dxgi.dll .text:0x6ef94, 0x18b10 bytes
    // dxgi.dll .text:0x647d8, 0x17e70 bytes
    //
    _s29(sdk::unknown_ptr) mc_template_u0ptqqq_etw_event_write_transfer;
    
    // [McTemplateU0ptttq_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6f6d4, 0x17e70 bytes
    // dxgi.dll .text:0x6f7e4, 0x17e70 bytes
    // dxgi.dll .text:0x7aee0, 0x18b10 bytes
    // dxgi.dll .text:0x70c14, 0x17e70 bytes
    //
    _s30(sdk::unknown_ptr) mc_template_u0ptttq_etw_event_write_transfer;
    
    // [McTemplateU0puPR1_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6e2f8, 0x17e70 bytes
    // dxgi.dll .text:0x6e408, 0x17e70 bytes
    // dxgi.dll .text:0x79f9c, 0x18b10 bytes
    // dxgi.dll .text:0x6f838, 0x17e70 bytes
    //
    _s31(sdk::unknown_ptr) mc_template_u0pu_pr1_etw_event_write_transfer;
    
    // [McTemplateU0q_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4b244, 0x17e70 bytes
    // dxgi.dll .text:0x4b334, 0x17e70 bytes
    // dxgi.dll .text:0x566b0, 0x18b10 bytes
    // dxgi.dll .text:0x4c7c4, 0x17e70 bytes
    //
    _s32(sdk::function<uint32_t(struct nt::mcgen_trace_context_t*, const struct nt::event_descriptor_t*, const uint32_t)>*) mc_template_u0q_etw_event_write_transfer;
    
    // [McTemplateU0qqqqx_EtwEventWriteTransfer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x57448, 0x17e70 bytes
    // dxgi.dll .text:0x57538, 0x17e70 bytes
    // dxgi.dll .text:0x6255c, 0x18b10 bytes
    // dxgi.dll .text:0x589c8, 0x17e70 bytes
    //
    _s33(sdk::unknown_ptr) mc_template_u0qqqqx_etw_event_write_transfer;
    
    // [Microsoft_Windows_DXGIEnableBits]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcf340, 0x17e70 bytes
    // dxgi.dll .data:0xcf340, 0x17e70 bytes
    // dxgi.dll .data:0xcd500, 0x18b10 bytes
    // dxgi.dll .data:0xd0380, 0x17e70 bytes
    //
    _s34(sdk::unknown_ptr) microsoft_windows_dxgi_enable_bits;
    
    // [Microsoft_Windows_DXGIKeywords]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9830, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9b70, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8c70, 0x18b10 bytes
    // dxgi.dll .rdata:0xaad58, 0x17e70 bytes
    //
    _s35(sdk::unknown_ptr) microsoft_windows_dxgi_keywords;
    
    // [Microsoft_Windows_DXGILevels]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa9850, 0x17e70 bytes
    // dxgi.dll .rdata:0xa9b90, 0x17e70 bytes
    // dxgi.dll .rdata:0xa8c90, 0x18b10 bytes
    // dxgi.dll .rdata:0xaad50, 0x17e70 bytes
    //
    _s36(sdk::unknown_ptr) microsoft_windows_dxgi_levels;
    
    // [__native_dllmain_reason]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcb450, 0x17e70 bytes
    // dxgi.dll .data:0xcb450, 0x17e70 bytes
    // dxgi.dll .data:0xca490, 0x18b10 bytes
    // dxgi.dll .data:0xcc490, 0x17e70 bytes
    //
    _s37(sdk::unknown_ptr) native_dllmain_reason;
    
    // [__native_startup_lock]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd48, 0x17e70 bytes
    // dxgi.dll .data:0xcbd48, 0x17e70 bytes
    // dxgi.dll .data:0xcadf0, 0x18b10 bytes
    // dxgi.dll .data:0xccd88, 0x17e70 bytes
    //
    _s38(sdk::unknown_ptr) native_startup_lock;
    
    // [__native_startup_state]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd50, 0x17e70 bytes
    // dxgi.dll .data:0xcbd50, 0x17e70 bytes
    // dxgi.dll .data:0xcadf8, 0x18b10 bytes
    // dxgi.dll .data:0xccd90, 0x17e70 bytes
    //
    _s39(sdk::unknown_ptr) native_startup_state;
    
    // [NodeIndexFromQueue]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x791b8, 0x17e70 bytes
    // dxgi.dll .text:0x792e8, 0x17e70 bytes
    // dxgi.dll .text:0x84654, 0x18b10 bytes
    // dxgi.dll .text:0x7a718, 0x17e70 bytes
    //
    _s40(sdk::unknown_ptr) node_index_from_queue;
    
    // [NonCachedIsRemoteDevice]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e8bc, 0x17e70 bytes
    // dxgi.dll .text:0x1ebcc, 0x17e70 bytes
    // dxgi.dll .text:0x23918, 0x18b10 bytes
    // dxgi.dll .text:0x1a188, 0x17e70 bytes
    //
    _s41(sdk::unknown_ptr) non_cached_is_remote_device;
    
    // [__NULL_DELAY_IMPORT_DESCRIPTOR]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc66f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6978, 0x17e70 bytes
    // dxgi.dll .rdata:0xc63c8, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7c60, 0x17e70 bytes
    //
    _s42(sdk::unknown_ptr) null_delay_import_descriptor;
    
    // [OcclusionWnfCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xc130, 0x17e70 bytes
    // dxgi.dll .text:0xc160, 0x17e70 bytes
    // dxgi.dll .text:0x1e610, 0x18b10 bytes
    // dxgi.dll .text:0x7340, 0x17e70 bytes
    //
    _s43(sdk::unknown_ptr) occlusion_wnf_callback;
    
    // [_onexit]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24a2c, 0x17e70 bytes
    // dxgi.dll .text:0x24d2c, 0x17e70 bytes
    // dxgi.dll .text:0x2bf50, 0x18b10 bytes
    // dxgi.dll .text:0x25b4c, 0x17e70 bytes
    //
    _s44(sdk::function<sdk::function<int32_t()>*(sdk::function<int32_t()>*)>*) onexit;
    
    // [__onexitbegin]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd60, 0x17e70 bytes
    // dxgi.dll .data:0xcbd60, 0x17e70 bytes
    // dxgi.dll .data:0xcae08, 0x18b10 bytes
    // dxgi.dll .data:0xccda0, 0x17e70 bytes
    //
    _s45(sdk::unknown_ptr) onexitbegin;
    
    // [__onexitend]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd58, 0x17e70 bytes
    // dxgi.dll .data:0xcbd58, 0x17e70 bytes
    // dxgi.dll .data:0xcae00, 0x18b10 bytes
    // dxgi.dll .data:0xccd98, 0x17e70 bytes
    //
    _s46(sdk::unknown_ptr) onexitend;
    
    // [OpenAppRegKey]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd3d4, 0x17e70 bytes
    // dxgi.dll .text:0xd404, 0x17e70 bytes
    // dxgi.dll .text:0x1707c, 0x18b10 bytes
    // dxgi.dll .text:0x85e4, 0x17e70 bytes
    //
    _s47(sdk::unknown_ptr) open_app_reg_key;
    
    // [DXGIOutputMessage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x58838, 0x17e70 bytes
    // dxgi.dll .text:0x58928, 0x17e70 bytes
    // dxgi.dll .text:0x63bdc, 0x18b10 bytes
    // dxgi.dll .text:0x59dd8, 0x17e70 bytes
    //
    _s48(sdk::unknown_ptr) output_message;
    
    // [_pRawDllMain]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .data:0xcbd70, 0x17e70 bytes
    // dxgi.dll .data:0xcbd70, 0x17e70 bytes
    // dxgi.dll .data:0xcae18, 0x18b10 bytes
    // dxgi.dll .data:0xccdb0, 0x17e70 bytes
    //
    _s49(sdk::function<int32_t(struct win::hinstance_t*, uint32_t, void*)> const**) p_raw_dll_main;
    
    // [__pfnDefaultDliFailureHook2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xb4bd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xb4ee8, 0x17e70 bytes
    // dxgi.dll .rdata:0xb5538, 0x18b10 bytes
    // dxgi.dll .rdata:0xb61c8, 0x17e70 bytes
    //
    _s50(void const**) pfn_default_dli_failure_hook2;
    
    // [__pfnDliFailureHook2]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xb4bd8, 0x17e70 bytes
    // dxgi.dll .rdata:0xb4ee8, 0x17e70 bytes
    // dxgi.dll .rdata:0xb5538, 0x18b10 bytes
    // dxgi.dll .rdata:0xb61c8, 0x17e70 bytes
    //
    _s51(sdk::function<void*(uint32_t, struct win::delayload_info_t*)>**) pfn_dli_failure_hook2;
    
    // [__pobjMapEntryFirst]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc61c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6448, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5e38, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7730, 0x17e70 bytes
    //
    _s52(sdk::unknown_ptr) pobj_map_entry_first;
    
    // [__pobjMapEntryLast]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc61c8, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6450, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5e40, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7738, 0x17e70 bytes
    //
    _s53(sdk::unknown_ptr) pobj_map_entry_last;
    
    // [pow]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27476, 0x17e70 bytes
    // dxgi.dll .text:0x27786, 0x17e70 bytes
    // dxgi.dll .text:0x2e7a2, 0x18b10 bytes
    // dxgi.dll .text:0x28c06, 0x17e70 bytes
    //
    _s54(sdk::unknown_ptr) pow;
    
    // [powf]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x27482, 0x17e70 bytes
    // dxgi.dll .text:0x27792, 0x17e70 bytes
    // dxgi.dll .text:0x2e7ae, 0x18b10 bytes
    // dxgi.dll .text:0x28c12, 0x17e70 bytes
    //
    _s55(sdk::unknown_ptr) powf;
    
    // [ProcessVideoMemoryReporting]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75f64, 0x17e70 bytes
    // dxgi.dll .text:0x7608c, 0x17e70 bytes
    // dxgi.dll .text:0x811ec, 0x18b10 bytes
    // dxgi.dll .text:0x774bc, 0x17e70 bytes
    //
    _s56(sdk::unknown_ptr) process_video_memory_reporting;
    
    // [QueryDxgGameConfigStore]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa608, 0x17e70 bytes
    // dxgi.dll .text:0xa608, 0x17e70 bytes
    // dxgi.dll .text:0x24420, 0x18b10 bytes
    // dxgi.dll .text:0x1ee18, 0x17e70 bytes
    //
    _s57(sdk::unknown_ptr) query_dxg_game_config_store;
    
    // [QueryDxgGameConfigStoreGPropHonorFSEWinCompat]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xa710, 0x17e70 bytes
    // dxgi.dll .text:0xa710, 0x17e70 bytes
    // dxgi.dll .text:0x24cc0, 0x18b10 bytes
    // dxgi.dll .text:0x1ef20, 0x17e70 bytes
    //
    _s58(sdk::unknown_ptr) query_dxg_game_config_store_g_prop_honor_fse_win_compat;
    
    // [QueryInterfaceTest]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb84c, 0x17e70 bytes
    // dxgi.dll .text:0xb87c, 0x17e70 bytes
    // dxgi.dll .text:0x2537c, 0x18b10 bytes
    // dxgi.dll .text:0x6a5c, 0x17e70 bytes
    //
    _s59(sdk::unknown_ptr) query_interface_test;
    
    // [__raise_securityfailure]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x247a4, 0x17e70 bytes
    // dxgi.dll .text:0x24aa4, 0x17e70 bytes
    // dxgi.dll .text:0x2bcb4, 0x18b10 bytes
    // dxgi.dll .text:0x258c4, 0x17e70 bytes
    //
    _s60(sdk::function<void(struct nt::exception_pointers_t const*)>*) raise_securityfailure;
    
    // [RecordHRESULT]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59704, 0x17e70 bytes
    // dxgi.dll .text:0x597f4, 0x17e70 bytes
    // dxgi.dll .text:0x1fc5c, 0x18b10 bytes
    // dxgi.dll .text:0x5acb4, 0x17e70 bytes
    //
    _s61(sdk::unknown_ptr) record_hresult;
    
    // [RecordHRESULTAlways]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26ee0, 0x17e70 bytes
    // dxgi.dll .text:0x271f0, 0x17e70 bytes
    // dxgi.dll .text:0x65060, 0x18b10 bytes
    // dxgi.dll .text:0x28610, 0x17e70 bytes
    //
    _s62(sdk::unknown_ptr) record_hresult_always;
    
    // [RecordHRESULTAlwaysLongWideMessage]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59730, 0x17e70 bytes
    // dxgi.dll .text:0x59820, 0x17e70 bytes
    // dxgi.dll .text:0x65080, 0x18b10 bytes
    // dxgi.dll .text:0x5ace0, 0x17e70 bytes
    //
    _s63(sdk::unknown_ptr) record_hresult_always_long_wide_message;
    
    // [RecordJournal]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26ee0, 0x17e70 bytes
    // dxgi.dll .text:0x271f0, 0x17e70 bytes
    // dxgi.dll .text:0x2e5c8, 0x18b10 bytes
    // dxgi.dll .text:0x28610, 0x17e70 bytes
    //
    _s64(sdk::unknown_ptr) record_journal;
    
    // [RegDWORD]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7aa9c, 0x17e70 bytes
    // dxgi.dll .text:0x7abcc, 0x17e70 bytes
    // dxgi.dll .text:0x86128, 0x18b10 bytes
    // dxgi.dll .text:0x7bffc, 0x17e70 bytes
    //
    _s65(sdk::unknown_ptr) reg_dword;
    
    // [RegDWORDPresentAndNonZero]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7ab08, 0x17e70 bytes
    // dxgi.dll .text:0x7ac38, 0x17e70 bytes
    // dxgi.dll .text:0x86194, 0x18b10 bytes
    // dxgi.dll .text:0x7c068, 0x17e70 bytes
    //
    _s66(sdk::unknown_ptr) reg_dword_present_and_non_zero;
    
    // [ReparentOutputs]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x75c88, 0x17e70 bytes
    // dxgi.dll .text:0x75d98, 0x17e70 bytes
    // dxgi.dll .text:0x80f0c, 0x18b10 bytes
    // dxgi.dll .text:0x771c8, 0x17e70 bytes
    //
    _s67(sdk::unknown_ptr) reparent_outputs;
    
    // [DXGIReportAdapterConfiguration]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1310, 0x17e70 bytes
    // dxgi.dll .text:0x1310, 0x17e70 bytes
    // dxgi.dll .text:0x2d20, 0x18b10 bytes
    // dxgi.dll .text:0x3190, 0x17e70 bytes
    //
    _s68(sdk::unknown_ptr) report_adapter_configuration;
    
    // [__ResolveDelayLoadedAPIFlags]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xb4bd0, 0x17e70 bytes
    // dxgi.dll .rdata:0xb4ee0, 0x17e70 bytes
    // dxgi.dll .rdata:0xb5530, 0x18b10 bytes
    // dxgi.dll .rdata:0xb61c0, 0x17e70 bytes
    //
    _s69(const uint32_t*) resolve_delay_loaded_api_flags;
    
    // [ResolvingNonConvertingCopy]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x560c0, 0x17e70 bytes
    // dxgi.dll .text:0x561b0, 0x17e70 bytes
    // dxgi.dll .text:0x61270, 0x18b10 bytes
    // dxgi.dll .text:0x57640, 0x17e70 bytes
    //
    _s70(sdk::unknown_ptr) resolving_non_converting_copy;
    
    // [RetrieveKMTHandle]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1d600, 0x17e70 bytes
    // dxgi.dll .text:0x1d910, 0x17e70 bytes
    // dxgi.dll .text:0x23e68, 0x18b10 bytes
    // dxgi.dll .text:0x18e90, 0x17e70 bytes
    //
    _s71(sdk::unknown_ptr) retrieve_kmt_handle;
    
    // [RuntimeClass_Windows_UI_Composition_Core_CompositorController]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3740, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3a70, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6fd0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4770, 0x17e70 bytes
    //
    _s72(sdk::unknown_ptr) runtime_class_windows_ui_composition_core_compositor_controller;
    
    // [DXGI_SDK_MSG]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1e7c0, 0x17e70 bytes
    // dxgi.dll .text:0x1ead0, 0x17e70 bytes
    // dxgi.dll .text:0x2aa84, 0x18b10 bytes
    // dxgi.dll .text:0x1a08c, 0x17e70 bytes
    //
    _s73(sdk::unknown_ptr) sdk_msg;
    
    // [DXGI_SDK_MSG_CORE]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x588c4, 0x17e70 bytes
    // dxgi.dll .text:0x589b4, 0x17e70 bytes
    // dxgi.dll .text:0x63c74, 0x18b10 bytes
    // dxgi.dll .text:0x59e64, 0x17e70 bytes
    //
    _s74(sdk::unknown_ptr) sdk_msg_core;
    
    // [DXGI_SDK_MSG_SWAPCHAIN]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb23c, 0x17e70 bytes
    // dxgi.dll .text:0xb26c, 0x17e70 bytes
    // dxgi.dll .text:0x25b5c, 0x18b10 bytes
    // dxgi.dll .text:0x1fa7c, 0x17e70 bytes
    //
    _s75(sdk::unknown_ptr) sdk_msg_swapchain;
    
    // [SearchStringForValueName]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59e38, 0x17e70 bytes
    // dxgi.dll .text:0x59f28, 0x17e70 bytes
    // dxgi.dll .text:0x65890, 0x18b10 bytes
    // dxgi.dll .text:0x5b3f8, 0x17e70 bytes
    //
    _s76(sdk::unknown_ptr) search_string_for_value_name;
    
    // [SetAppCompatStringPointer]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x59fa0, 0x17e70 bytes
    // dxgi.dll .text:0x5a090, 0x17e70 bytes
    // dxgi.dll .text:0x659f0, 0x18b10 bytes
    // dxgi.dll .text:0x5b560, 0x17e70 bytes
    //
    _s77(sdk::unknown_ptr) set_app_compat_string_pointer;
    
    // [SetHandleIntegrityLevel]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x49738, 0x17e70 bytes
    // dxgi.dll .text:0x49828, 0x17e70 bytes
    // dxgi.dll .text:0x549d8, 0x18b10 bytes
    // dxgi.dll .text:0x4acb8, 0x17e70 bytes
    //
    _s78(sdk::unknown_ptr) set_handle_integrity_level;
    
    // [SetPrimarySurfacePrivateData]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x216d4, 0x17e70 bytes
    // dxgi.dll .text:0x219b4, 0x17e70 bytes
    // dxgi.dll .text:0x29a4c, 0x18b10 bytes
    // dxgi.dll .text:0x22654, 0x17e70 bytes
    //
    _s79(sdk::unknown_ptr) set_primary_surface_private_data;
    
    // [ShimExceptionHandler]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x92a50, 0x17e70 bytes
    // dxgi.dll .text:0x92bd0, 0x17e70 bytes
    // dxgi.dll .text:0x898fc, 0x18b10 bytes
    // dxgi.dll .text:0x93570, 0x17e70 bytes
    //
    _s80(sdk::unknown_ptr) shim_exception_handler;
    
    // [__std_terminate]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24b04, 0x17e70 bytes
    // dxgi.dll .text:0x24e04, 0x17e70 bytes
    // dxgi.dll .text:0x2c040, 0x18b10 bytes
    // dxgi.dll .text:0x25c24, 0x17e70 bytes
    //
    _s81(sdk::unknown_ptr) std_terminate;
    
    // [StringCbCatA]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c800, 0x17e70 bytes
    // dxgi.dll .text:0x6c910, 0x17e70 bytes
    // dxgi.dll .text:0x78664, 0x18b10 bytes
    // dxgi.dll .text:0x6dd40, 0x17e70 bytes
    //
    _s82(sdk::unknown_ptr) string_cb_cat_a;
    
    // [StringCbPrintfA]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c8c8, 0x17e70 bytes
    // dxgi.dll .text:0x6c9d8, 0x17e70 bytes
    // dxgi.dll .text:0x78718, 0x18b10 bytes
    // dxgi.dll .text:0x6de08, 0x17e70 bytes
    //
    _s83(sdk::unknown_ptr) string_cb_printf_a;
    
    // [StringCchCopyA]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xd6bc, 0x17e70 bytes
    // dxgi.dll .text:0xd6ec, 0x17e70 bytes
    // dxgi.dll .text:0x17370, 0x18b10 bytes
    // dxgi.dll .text:0x88cc, 0x17e70 bytes
    //
    _s84(sdk::function<sdk::hresult(char*, uint64_t, const char*)>*) string_cch_copy_a;
    
    // [SubsequentConfigCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6ffa0, 0x17e70 bytes
    // dxgi.dll .text:0x700b0, 0x17e70 bytes
    // dxgi.dll .text:0x7b7c0, 0x18b10 bytes
    // dxgi.dll .text:0x714e0, 0x17e70 bytes
    //
    _s85(sdk::unknown_ptr) subsequent_config_callback;
    
    // [SwapChainWindowEventHook]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6c9c0, 0x17e70 bytes
    // dxgi.dll .text:0x6cad0, 0x17e70 bytes
    // dxgi.dll .text:0x35db0, 0x18b10 bytes
    // dxgi.dll .text:0x6df00, 0x17e70 bytes
    //
    _s86(sdk::unknown_ptr) swap_chain_window_event_hook;
    
    // [SwapEffectFlip]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1bfd0, 0x17e70 bytes
    // dxgi.dll .text:0x1c2e0, 0x17e70 bytes
    // dxgi.dll .text:0x19cd4, 0x18b10 bytes
    // dxgi.dll .text:0x17860, 0x17e70 bytes
    //
    _s87(sdk::unknown_ptr) swap_effect_flip;
    
    // [SyncIntervalToDDIFlipInterval]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6cc18, 0x17e70 bytes
    // dxgi.dll .text:0x6cd28, 0x17e70 bytes
    // dxgi.dll .text:0xfdac, 0x18b10 bytes
    // dxgi.dll .text:0x6e158, 0x17e70 bytes
    //
    _s88(sdk::unknown_ptr) sync_interval_to_ddi_flip_interval;
    
    // [__sz_api_ms_win_core_com_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3250, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3570, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6a30, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4540, 0x17e70 bytes
    //
    _s89(sdk::unknown_ptr) sz_api_ms_win_core_com_l1_1_0_dll;
    
    // [__sz_api_ms_win_core_winrt_error_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa31f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3510, 0x17e70 bytes
    // dxgi.dll .rdata:0xa69d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa44e0, 0x17e70 bytes
    //
    _s90(sdk::unknown_ptr) sz_api_ms_win_core_winrt_error_l1_1_0_dll;
    
    // [__sz_api_ms_win_core_winrt_error_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3220, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3540, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6a00, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4510, 0x17e70 bytes
    //
    _s91(sdk::unknown_ptr) sz_api_ms_win_core_winrt_error_l1_1_1_dll;
    
    // [__sz_api_ms_win_core_winrt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3170, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3490, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6950, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4460, 0x17e70 bytes
    //
    _s92(sdk::unknown_ptr) sz_api_ms_win_core_winrt_l1_1_0_dll;
    
    // [__sz_api_ms_win_core_winrt_string_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa31c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa34e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa69a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa44b0, 0x17e70 bytes
    //
    _s93(sdk::unknown_ptr) sz_api_ms_win_core_winrt_string_l1_1_0_dll;
    
    // [__sz_api_ms_win_dx_d3dkmt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa30e0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3400, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6840, 0x18b10 bytes
    // dxgi.dll .rdata:0xa43d0, 0x17e70 bytes
    //
    _s94(sdk::unknown_ptr) sz_api_ms_win_dx_d3dkmt_l1_1_0_dll;
    
    // [__sz_api_ms_win_dx_d3dkmt_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3100, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3420, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6860, 0x18b10 bytes
    // dxgi.dll .rdata:0xa43f0, 0x17e70 bytes
    //
    _s95(sdk::unknown_ptr) sz_api_ms_win_dx_d3dkmt_l1_1_1_dll;
    
    // [__sz_api_ms_win_dx_d3dkmt_l1_1_3_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3120, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3440, 0x17e70 bytes
    // dxgi.dll .rdata:0xa68a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4410, 0x17e70 bytes
    //
    _s96(sdk::unknown_ptr) sz_api_ms_win_dx_d3dkmt_l1_1_3_dll;
    
    // [__sz_api_ms_win_dx_d3dkmt_l1_1_4_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa31a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa34c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6980, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4490, 0x17e70 bytes
    //
    _s97(sdk::unknown_ptr) sz_api_ms_win_dx_d3dkmt_l1_1_4_dll;
    
    // [__sz_api_ms_win_gdi_dpiinfo_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3270, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3590, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6a50, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4560, 0x17e70 bytes
    //
    _s98(sdk::unknown_ptr) sz_api_ms_win_gdi_dpiinfo_l1_1_0_dll;
    
    // [__sz_api_ms_win_rtcore_ntuser_private_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3140, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3460, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6920, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4430, 0x17e70 bytes
    //
    _s99(sdk::unknown_ptr) sz_api_ms_win_rtcore_ntuser_private_l1_1_7_dll;
    
    // [__sz_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa30b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa33d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6810, 0x18b10 bytes
    // dxgi.dll .rdata:0xa43a0, 0x17e70 bytes
    //
    _t00(sdk::unknown_ptr) sz_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll;
    
    // [__sz_api_ms_win_security_sddl_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa32a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa35c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6a80, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4590, 0x17e70 bytes
    //
    _t01(sdk::unknown_ptr) sz_api_ms_win_security_sddl_l1_1_0_dll;
    
    // [__sz_dcomp_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3350, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3670, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6b30, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4640, 0x17e70 bytes
    //
    _t02(sdk::unknown_ptr) sz_dcomp_dll;
    
    // [__sz_ext_ms_mf_pal_l2_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3330, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3650, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6b10, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4620, 0x17e70 bytes
    //
    _t03(sdk::unknown_ptr) sz_ext_ms_mf_pal_l2_1_0_dll;
    
    // [__sz_ext_ms_onecore_dcomp_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2840, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2b60, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5f60, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3b30, 0x17e70 bytes
    //
    _t04(sdk::unknown_ptr) sz_ext_ms_onecore_dcomp_l1_1_0_dll;
    
    // [__sz_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2750, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2a70, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5e70, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3a40, 0x17e70 bytes
    //
    _t05(sdk::unknown_ptr) sz_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll;
    
    // [__sz_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa3360, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3680, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6ba0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4650, 0x17e70 bytes
    //
    _t06(sdk::unknown_ptr) sz_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll;
    
    // [__sz_ext_ms_win_gdi_dc_create_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2950, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2c70, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6070, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3c40, 0x17e70 bytes
    //
    _t07(sdk::unknown_ptr) sz_ext_ms_win_gdi_dc_create_l1_1_0_dll;
    
    // [__sz_ext_ms_win_gdi_dc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2a40, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2d60, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6160, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3d30, 0x17e70 bytes
    //
    _t08(sdk::unknown_ptr) sz_ext_ms_win_gdi_dc_l1_2_0_dll;
    
    // [__sz_ext_ms_win_gdi_draw_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2a90, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2db0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa61b0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3d80, 0x17e70 bytes
    //
    _t09(sdk::unknown_ptr) sz_ext_ms_win_gdi_draw_l1_1_0_dll;
    
    // [__sz_ext_ms_win_gdi_draw_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2ab0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2dd0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa61d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3da0, 0x17e70 bytes
    //
    _t10(sdk::unknown_ptr) sz_ext_ms_win_gdi_draw_l1_1_1_dll;
    
    // [__sz_ext_ms_win_ntuser_gui_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2f30, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3250, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6690, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4220, 0x17e70 bytes
    //
    _t11(sdk::unknown_ptr) sz_ext_ms_win_ntuser_gui_l1_1_0_dll;
    
    // [__sz_ext_ms_win_ntuser_keyboard_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2f00, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3220, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6660, 0x18b10 bytes
    // dxgi.dll .rdata:0xa41f0, 0x17e70 bytes
    //
    _t12(sdk::unknown_ptr) sz_ext_ms_win_ntuser_keyboard_l1_1_0_dll;
    
    // [__sz_ext_ms_win_ntuser_message_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2b60, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2e80, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6280, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3e50, 0x17e70 bytes
    //
    _t13(sdk::unknown_ptr) sz_ext_ms_win_ntuser_message_l1_1_0_dll;
    
    // [__sz_ext_ms_win_ntuser_misc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2ed0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa31f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6630, 0x18b10 bytes
    // dxgi.dll .rdata:0xa41c0, 0x17e70 bytes
    //
    _t14(sdk::unknown_ptr) sz_ext_ms_win_ntuser_misc_l1_2_0_dll;
    
    // [__sz_ext_ms_win_ntuser_private_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2f60, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3280, 0x17e70 bytes
    // dxgi.dll .rdata:0xa66c0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4250, 0x17e70 bytes
    //
    _t15(sdk::unknown_ptr) sz_ext_ms_win_ntuser_private_l1_1_1_dll;
    
    // [__sz_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2870, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2b90, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5f90, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3b60, 0x17e70 bytes
    //
    _t16(sdk::unknown_ptr) sz_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll;
    
    // [__sz_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa28d0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2bf0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5ff0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3bc0, 0x17e70 bytes
    //
    _t17(sdk::unknown_ptr) sz_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll;
    
    // [__sz_ext_ms_win_ntuser_window_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2e40, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3160, 0x17e70 bytes
    // dxgi.dll .rdata:0xa65a0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4130, 0x17e70 bytes
    //
    _t18(sdk::unknown_ptr) sz_ext_ms_win_ntuser_window_l1_1_0_dll;
    
    // [__sz_ext_ms_win_ntuser_window_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2e70, 0x17e70 bytes
    // dxgi.dll .rdata:0xa3190, 0x17e70 bytes
    // dxgi.dll .rdata:0xa65d0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4160, 0x17e70 bytes
    //
    _t19(sdk::unknown_ptr) sz_ext_ms_win_ntuser_window_l1_1_1_dll;
    
    // [__sz_ext_ms_win_ntuser_windowclass_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2ea0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa31c0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6600, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4190, 0x17e70 bytes
    //
    _t20(sdk::unknown_ptr) sz_ext_ms_win_ntuser_windowclass_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2a60, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2d80, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6180, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3d50, 0x17e70 bytes
    //
    _t21(sdk::unknown_ptr) sz_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_gdi_object_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2ad0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2df0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa61f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3dc0, 0x17e70 bytes
    //
    _t22(sdk::unknown_ptr) sz_ext_ms_win_rtcore_gdi_object_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2b00, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2e20, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6220, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3df0, 0x17e70 bytes
    //
    _t23(sdk::unknown_ptr) sz_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2cd0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2ff0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa63f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3fc0, 0x17e70 bytes
    //
    _t24(sdk::unknown_ptr) sz_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2b30, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2e50, 0x17e70 bytes
    // dxgi.dll .rdata:0xa6250, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3e20, 0x17e70 bytes
    //
    _t25(sdk::unknown_ptr) sz_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa2f90, 0x17e70 bytes
    // dxgi.dll .rdata:0xa32b0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa66f0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa4280, 0x17e70 bytes
    //
    _t26(sdk::unknown_ptr) sz_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll;
    
    // [__sz_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xa28a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2bc0, 0x17e70 bytes
    // dxgi.dll .rdata:0xa5fc0, 0x18b10 bytes
    // dxgi.dll .rdata:0xa3b90, 0x17e70 bytes
    //
    _t27(sdk::unknown_ptr) sz_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_core_com_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26876, 0x17e70 bytes
    // dxgi.dll .text:0x26b76, 0x17e70 bytes
    // dxgi.dll .text:0x2dfa3, 0x18b10 bytes
    // dxgi.dll .text:0x27996, 0x17e70 bytes
    //
    _t28(sdk::unknown_ptr) tail_merge_api_ms_win_core_com_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_core_winrt_error_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26760, 0x17e70 bytes
    // dxgi.dll .text:0x26a60, 0x17e70 bytes
    // dxgi.dll .text:0x2de8d, 0x18b10 bytes
    // dxgi.dll .text:0x27880, 0x17e70 bytes
    //
    _t29(sdk::unknown_ptr) tail_merge_api_ms_win_core_winrt_error_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x267eb, 0x17e70 bytes
    // dxgi.dll .text:0x26aeb, 0x17e70 bytes
    // dxgi.dll .text:0x2df18, 0x18b10 bytes
    // dxgi.dll .text:0x2790b, 0x17e70 bytes
    //
    _t30(sdk::unknown_ptr) tail_merge_api_ms_win_core_winrt_error_l1_1_1_dll;
    
    // [__tailMerge_api_ms_win_core_winrt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x265bf, 0x17e70 bytes
    // dxgi.dll .text:0x268bf, 0x17e70 bytes
    // dxgi.dll .text:0x2dcec, 0x18b10 bytes
    // dxgi.dll .text:0x276df, 0x17e70 bytes
    //
    _t31(sdk::unknown_ptr) tail_merge_api_ms_win_core_winrt_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_core_winrt_string_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x266d5, 0x17e70 bytes
    // dxgi.dll .text:0x269d5, 0x17e70 bytes
    // dxgi.dll .text:0x2de02, 0x18b10 bytes
    // dxgi.dll .text:0x277f5, 0x17e70 bytes
    //
    _t32(sdk::unknown_ptr) tail_merge_api_ms_win_core_winrt_string_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_dx_d3dkmt_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2636f, 0x17e70 bytes
    // dxgi.dll .text:0x2666f, 0x17e70 bytes
    // dxgi.dll .text:0x2d8b3, 0x18b10 bytes
    // dxgi.dll .text:0x2748f, 0x17e70 bytes
    //
    _t33(sdk::unknown_ptr) tail_merge_api_ms_win_dx_d3dkmt_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_dx_d3dkmt_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x263fa, 0x17e70 bytes
    // dxgi.dll .text:0x266fa, 0x17e70 bytes
    // dxgi.dll .text:0x2d93e, 0x18b10 bytes
    // dxgi.dll .text:0x2751a, 0x17e70 bytes
    //
    _t34(sdk::unknown_ptr) tail_merge_api_ms_win_dx_d3dkmt_l1_1_1_dll;
    
    // [__tailMerge_api_ms_win_dx_d3dkmt_l1_1_3_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26497, 0x17e70 bytes
    // dxgi.dll .text:0x26797, 0x17e70 bytes
    // dxgi.dll .text:0x2da66, 0x18b10 bytes
    // dxgi.dll .text:0x275b7, 0x17e70 bytes
    //
    _t35(sdk::unknown_ptr) tail_merge_api_ms_win_dx_d3dkmt_l1_1_3_dll;
    
    // [__tailMerge_api_ms_win_dx_d3dkmt_l1_1_4_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2664a, 0x17e70 bytes
    // dxgi.dll .text:0x2694a, 0x17e70 bytes
    // dxgi.dll .text:0x2dd77, 0x18b10 bytes
    // dxgi.dll .text:0x2776a, 0x17e70 bytes
    //
    _t36(sdk::unknown_ptr) tail_merge_api_ms_win_dx_d3dkmt_l1_1_4_dll;
    
    // [__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26949, 0x17e70 bytes
    // dxgi.dll .text:0x26c49, 0x17e70 bytes
    // dxgi.dll .text:0x2e076, 0x18b10 bytes
    // dxgi.dll .text:0x27a69, 0x17e70 bytes
    //
    _t37(sdk::unknown_ptr) tail_merge_api_ms_win_gdi_dpiinfo_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_rtcore_ntuser_private_l1_1_7_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26534, 0x17e70 bytes
    // dxgi.dll .text:0x26834, 0x17e70 bytes
    // dxgi.dll .text:0x2dc61, 0x18b10 bytes
    // dxgi.dll .text:0x27654, 0x17e70 bytes
    //
    _t38(sdk::unknown_ptr) tail_merge_api_ms_win_rtcore_ntuser_private_l1_1_7_dll;
    
    // [__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x262e4, 0x17e70 bytes
    // dxgi.dll .text:0x265e4, 0x17e70 bytes
    // dxgi.dll .text:0x2d828, 0x18b10 bytes
    // dxgi.dll .text:0x27404, 0x17e70 bytes
    //
    _t39(sdk::unknown_ptr) tail_merge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll;
    
    // [__tailMerge_api_ms_win_security_sddl_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x269d4, 0x17e70 bytes
    // dxgi.dll .text:0x26cd4, 0x17e70 bytes
    // dxgi.dll .text:0x2e101, 0x18b10 bytes
    // dxgi.dll .text:0x27af4, 0x17e70 bytes
    //
    _t40(sdk::unknown_ptr) tail_merge_api_ms_win_security_sddl_l1_1_0_dll;
    
    // [__tailMerge_dcomp_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26b9b, 0x17e70 bytes
    // dxgi.dll .text:0x26e9b, 0x17e70 bytes
    // dxgi.dll .text:0x2e2bb, 0x18b10 bytes
    // dxgi.dll .text:0x27cbb, 0x17e70 bytes
    //
    _t41(sdk::unknown_ptr) tail_merge_dcomp_dll;
    
    // [__tailMerge_ext_ms_mf_pal_l2_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26b10, 0x17e70 bytes
    // dxgi.dll .text:0x26e10, 0x17e70 bytes
    // dxgi.dll .text:0x2e230, 0x18b10 bytes
    // dxgi.dll .text:0x27c30, 0x17e70 bytes
    //
    _t42(sdk::unknown_ptr) tail_merge_ext_ms_mf_pal_l2_1_0_dll;
    
    // [__tailMerge_ext_ms_onecore_dcomp_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25118, 0x17e70 bytes
    // dxgi.dll .text:0x25418, 0x17e70 bytes
    // dxgi.dll .text:0x2c668, 0x18b10 bytes
    // dxgi.dll .text:0x26238, 0x17e70 bytes
    //
    _t43(sdk::unknown_ptr) tail_merge_ext_ms_onecore_dcomp_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25024, 0x17e70 bytes
    // dxgi.dll .text:0x25324, 0x17e70 bytes
    // dxgi.dll .text:0x2c574, 0x18b10 bytes
    // dxgi.dll .text:0x26144, 0x17e70 bytes
    //
    _t44(sdk::unknown_ptr) tail_merge_ext_ms_win_dwmapidxgi_ext_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26c26, 0x17e70 bytes
    // dxgi.dll .text:0x26f26, 0x17e70 bytes
    // dxgi.dll .text:0x2e4a4, 0x18b10 bytes
    // dxgi.dll .text:0x27d46, 0x17e70 bytes
    //
    _t45(sdk::unknown_ptr) tail_merge_ext_ms_win_dwmapidxgi_ext_l1_1_1_dll;
    
    // [__tailMerge_ext_ms_win_gdi_dc_create_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x254b8, 0x17e70 bytes
    // dxgi.dll .text:0x257b8, 0x17e70 bytes
    // dxgi.dll .text:0x2ca08, 0x18b10 bytes
    // dxgi.dll .text:0x265d8, 0x17e70 bytes
    //
    _t46(sdk::unknown_ptr) tail_merge_ext_ms_win_gdi_dc_create_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_gdi_dc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x255be, 0x17e70 bytes
    // dxgi.dll .text:0x258be, 0x17e70 bytes
    // dxgi.dll .text:0x2cb0e, 0x18b10 bytes
    // dxgi.dll .text:0x266de, 0x17e70 bytes
    //
    _t47(sdk::unknown_ptr) tail_merge_ext_ms_win_gdi_dc_l1_2_0_dll;
    
    // [__tailMerge_ext_ms_win_gdi_draw_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x256d4, 0x17e70 bytes
    // dxgi.dll .text:0x259d4, 0x17e70 bytes
    // dxgi.dll .text:0x2cc24, 0x18b10 bytes
    // dxgi.dll .text:0x267f4, 0x17e70 bytes
    //
    _t48(sdk::unknown_ptr) tail_merge_ext_ms_win_gdi_draw_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_gdi_draw_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2575f, 0x17e70 bytes
    // dxgi.dll .text:0x25a5f, 0x17e70 bytes
    // dxgi.dll .text:0x2ccaf, 0x18b10 bytes
    // dxgi.dll .text:0x2687f, 0x17e70 bytes
    //
    _t49(sdk::unknown_ptr) tail_merge_ext_ms_win_gdi_draw_l1_1_1_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_gui_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x260d1, 0x17e70 bytes
    // dxgi.dll .text:0x263d1, 0x17e70 bytes
    // dxgi.dll .text:0x2d621, 0x18b10 bytes
    // dxgi.dll .text:0x271f1, 0x17e70 bytes
    //
    _t50(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_gui_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_keyboard_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x26034, 0x17e70 bytes
    // dxgi.dll .text:0x26334, 0x17e70 bytes
    // dxgi.dll .text:0x2d584, 0x18b10 bytes
    // dxgi.dll .text:0x27154, 0x17e70 bytes
    //
    _t51(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_keyboard_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_message_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25a1b, 0x17e70 bytes
    // dxgi.dll .text:0x25d1b, 0x17e70 bytes
    // dxgi.dll .text:0x2cf6b, 0x18b10 bytes
    // dxgi.dll .text:0x26b3b, 0x17e70 bytes
    //
    _t52(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_message_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_misc_l1_2_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25f73, 0x17e70 bytes
    // dxgi.dll .text:0x26273, 0x17e70 bytes
    // dxgi.dll .text:0x2d4c3, 0x18b10 bytes
    // dxgi.dll .text:0x27093, 0x17e70 bytes
    //
    _t53(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_misc_l1_2_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_private_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2615c, 0x17e70 bytes
    // dxgi.dll .text:0x2645c, 0x17e70 bytes
    // dxgi.dll .text:0x2d6ac, 0x18b10 bytes
    // dxgi.dll .text:0x2727c, 0x17e70 bytes
    //
    _t54(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_private_l1_1_1_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x251a3, 0x17e70 bytes
    // dxgi.dll .text:0x254a3, 0x17e70 bytes
    // dxgi.dll .text:0x2c6f3, 0x18b10 bytes
    // dxgi.dll .text:0x262c3, 0x17e70 bytes
    //
    _t55(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x253d9, 0x17e70 bytes
    // dxgi.dll .text:0x256d9, 0x17e70 bytes
    // dxgi.dll .text:0x2c929, 0x18b10 bytes
    // dxgi.dll .text:0x264f9, 0x17e70 bytes
    //
    _t56(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_uicontext_ext_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_window_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25c10, 0x17e70 bytes
    // dxgi.dll .text:0x25f10, 0x17e70 bytes
    // dxgi.dll .text:0x2d160, 0x18b10 bytes
    // dxgi.dll .text:0x26d30, 0x17e70 bytes
    //
    _t57(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_window_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25cad, 0x17e70 bytes
    // dxgi.dll .text:0x25fad, 0x17e70 bytes
    // dxgi.dll .text:0x2d1fd, 0x18b10 bytes
    // dxgi.dll .text:0x26dcd, 0x17e70 bytes
    //
    _t58(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_window_l1_1_1_dll;
    
    // [__tailMerge_ext_ms_win_ntuser_windowclass_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25ea0, 0x17e70 bytes
    // dxgi.dll .text:0x261a0, 0x17e70 bytes
    // dxgi.dll .text:0x2d3f0, 0x18b10 bytes
    // dxgi.dll .text:0x26fc0, 0x17e70 bytes
    //
    _t59(sdk::unknown_ptr) tail_merge_ext_ms_win_ntuser_windowclass_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25649, 0x17e70 bytes
    // dxgi.dll .text:0x25949, 0x17e70 bytes
    // dxgi.dll .text:0x2cb99, 0x18b10 bytes
    // dxgi.dll .text:0x26769, 0x17e70 bytes
    //
    _t60(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25820, 0x17e70 bytes
    // dxgi.dll .text:0x25b20, 0x17e70 bytes
    // dxgi.dll .text:0x2cd70, 0x18b10 bytes
    // dxgi.dll .text:0x26940, 0x17e70 bytes
    //
    _t61(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x258ab, 0x17e70 bytes
    // dxgi.dll .text:0x25bab, 0x17e70 bytes
    // dxgi.dll .text:0x2cdfb, 0x18b10 bytes
    // dxgi.dll .text:0x269cb, 0x17e70 bytes
    //
    _t62(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x25b30, 0x17e70 bytes
    // dxgi.dll .text:0x25e30, 0x17e70 bytes
    // dxgi.dll .text:0x2d080, 0x18b10 bytes
    // dxgi.dll .text:0x26c50, 0x17e70 bytes
    //
    _t63(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_ntuser_cursor_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2597e, 0x17e70 bytes
    // dxgi.dll .text:0x25c7e, 0x17e70 bytes
    // dxgi.dll .text:0x2cece, 0x18b10 bytes
    // dxgi.dll .text:0x26a9e, 0x17e70 bytes
    //
    _t64(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x261e7, 0x17e70 bytes
    // dxgi.dll .text:0x264e7, 0x17e70 bytes
    // dxgi.dll .text:0x2d737, 0x18b10 bytes
    // dxgi.dll .text:0x27307, 0x17e70 bytes
    //
    _t65(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_ntuser_dpi_l1_1_0_dll;
    
    // [__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x2529a, 0x17e70 bytes
    // dxgi.dll .text:0x2559a, 0x17e70 bytes
    // dxgi.dll .text:0x2c7ea, 0x18b10 bytes
    // dxgi.dll .text:0x263ba, 0x17e70 bytes
    //
    _t66(sdk::unknown_ptr) tail_merge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll;
    
    // [DXGIThrowFailure]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c0a8, 0x17e70 bytes
    // dxgi.dll .text:0x1c3b8, 0x17e70 bytes
    // dxgi.dll .text:0x19dfc, 0x18b10 bytes
    // dxgi.dll .text:0x17938, 0x17e70 bytes
    //
    _t67(sdk::unknown_ptr) throw_failure;
    
    // [_TI1J]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xc61a0, 0x17e70 bytes
    // dxgi.dll .rdata:0xc6428, 0x17e70 bytes
    // dxgi.dll .rdata:0xc5e18, 0x18b10 bytes
    // dxgi.dll .rdata:0xc7710, 0x17e70 bytes
    //
    _t68(sdk::unknown_ptr) ti1j;
    
    // [_unlock]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24ec6, 0x17e70 bytes
    // dxgi.dll .text:0x251c6, 0x17e70 bytes
    // dxgi.dll .text:0x2c3f6, 0x18b10 bytes
    // dxgi.dll .text:0x25fe6, 0x17e70 bytes
    //
    _t69(sdk::unknown_ptr) unlock;
    
    // [UpdateHMDEmulationStatus]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x5aea0, 0x17e70 bytes
    // dxgi.dll .text:0x5af90, 0x17e70 bytes
    // dxgi.dll .text:0x66b50, 0x18b10 bytes
    // dxgi.dll .text:0x5c460, 0x17e70 bytes
    //
    _t70(sdk::unknown_ptr) update_hmd_emulation_status;
    
    // [UpgradeBufferCount]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x1c994, 0x17e70 bytes
    // dxgi.dll .text:0x1cca4, 0x17e70 bytes
    // dxgi.dll .text:0x188bc, 0x18b10 bytes
    // dxgi.dll .text:0x18224, 0x17e70 bytes
    //
    _t71(sdk::unknown_ptr) upgrade_buffer_count;
    
    // [UpgradeSwapEffect]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0xb388, 0x17e70 bytes
    // dxgi.dll .text:0xb3b8, 0x17e70 bytes
    // dxgi.dll .text:0x1b724, 0x18b10 bytes
    // dxgi.dll .text:0x6598, 0x17e70 bytes
    //
    _t72(sdk::unknown_ptr) upgrade_swap_effect;
    
    // [ValidFlipFormat]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x4214, 0x17e70 bytes
    // dxgi.dll .text:0x4214, 0x17e70 bytes
    // dxgi.dll .text:0x732c, 0x18b10 bytes
    // dxgi.dll .text:0x6094, 0x17e70 bytes
    //
    _t73(sdk::unknown_ptr) valid_flip_format;
    
    // [ValidModeDesc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x56a68, 0x17e70 bytes
    // dxgi.dll .text:0x56b58, 0x17e70 bytes
    // dxgi.dll .text:0x61c70, 0x18b10 bytes
    // dxgi.dll .text:0x57fe8, 0x17e70 bytes
    //
    _t74(sdk::unknown_ptr) valid_mode_desc;
    
    // [ValidYuvFlipFormat]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x6d818, 0x17e70 bytes
    // dxgi.dll .text:0x6d928, 0x17e70 bytes
    // dxgi.dll .text:0x792bc, 0x18b10 bytes
    // dxgi.dll .text:0x6ed58, 0x17e70 bytes
    //
    _t75(sdk::unknown_ptr) valid_yuv_flip_format;
    
    // [_ValidateImageBase]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24da0, 0x17e70 bytes
    // dxgi.dll .text:0x250a0, 0x17e70 bytes
    // dxgi.dll .text:0x2c2d0, 0x18b10 bytes
    // dxgi.dll .text:0x25ec0, 0x17e70 bytes
    //
    _t76(sdk::unknown_ptr) validate_image_base;
    
    // [WaitCallback]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7ab80, 0x17e70 bytes
    // dxgi.dll .text:0x7acb0, 0x17e70 bytes
    // dxgi.dll .text:0x86210, 0x18b10 bytes
    // dxgi.dll .text:0x7c0e0, 0x17e70 bytes
    //
    _t77(sdk::unknown_ptr) wait_callback;
    
    // [WaitWorker]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x7aba4, 0x17e70 bytes
    // dxgi.dll .text:0x7acd4, 0x17e70 bytes
    // dxgi.dll .text:0x86234, 0x18b10 bytes
    // dxgi.dll .text:0x7c104, 0x17e70 bytes
    //
    _t78(sdk::unknown_ptr) wait_worker;
    
    // [WatchdogThreadWindowProc]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x62b10, 0x17e70 bytes
    // dxgi.dll .text:0x62c00, 0x17e70 bytes
    // dxgi.dll .text:0x6e6f0, 0x18b10 bytes
    // dxgi.dll .text:0x64030, 0x17e70 bytes
    //
    _t79(sdk::unknown_ptr) watchdog_thread_window_proc;
    
    // [WKPDID_D3DDebugObjectName]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac1f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac530, 0x17e70 bytes
    // dxgi.dll .rdata:0xab748, 0x18b10 bytes
    // dxgi.dll .rdata:0xaddd0, 0x17e70 bytes
    //
    _t80(sdk::unknown_ptr) wkpdid_d3d_debug_object_name;
    
    // [WKPDID_D3DDebugObjectNameW]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0xac0f0, 0x17e70 bytes
    // dxgi.dll .rdata:0xac430, 0x17e70 bytes
    // dxgi.dll .rdata:0xab668, 0x18b10 bytes
    // dxgi.dll .rdata:0xadcd0, 0x17e70 bytes
    //
    _t81(sdk::unknown_ptr) wkpdid_d3d_debug_object_name_w;
    
    // [__xc_a]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0x9f160, 0x17e70 bytes
    // dxgi.dll .rdata:0x9f168, 0x17e70 bytes
    // dxgi.dll .rdata:0xa22b8, 0x18b10 bytes
    // dxgi.dll .rdata:0xa0160, 0x17e70 bytes
    //
    _t82(sdk::array<sdk::function<void()>*>*) xc_a;
    
    // [__xc_z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0x9f220, 0x17e70 bytes
    // dxgi.dll .rdata:0x9f228, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2370, 0x18b10 bytes
    // dxgi.dll .rdata:0xa0228, 0x17e70 bytes
    //
    _t83(sdk::array<sdk::function<void()>*>*) xc_z;
    
    // [_XcptFilter]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .text:0x24cc9, 0x17e70 bytes
    // dxgi.dll .text:0x24fc9, 0x17e70 bytes
    // dxgi.dll .text:0x2c203, 0x18b10 bytes
    // dxgi.dll .text:0x25de9, 0x17e70 bytes
    //
    _t84(sdk::unknown_ptr) xcpt_filter;
    
    // [__xi_a]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0x9f228, 0x17e70 bytes
    // dxgi.dll .rdata:0x9f230, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2378, 0x18b10 bytes
    // dxgi.dll .rdata:0xa0230, 0x17e70 bytes
    //
    _t85(sdk::array<sdk::function<int32_t()>*>*) xi_a;
    
    // [__xi_z]
    // Ldr = [dxgi.dll]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgi.dll .rdata:0x9f238, 0x17e70 bytes
    // dxgi.dll .rdata:0x9f240, 0x17e70 bytes
    // dxgi.dll .rdata:0xa2388, 0x18b10 bytes
    // dxgi.dll .rdata:0xa0240, 0x17e70 bytes
    //
    _t86(sdk::array<sdk::function<int32_t()>*>*) xi_z;
};
#include "magic/api.end.hpp"
