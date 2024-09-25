#pragma once
#include <sdkgen/support_library.hpp>
#include "irp_ctrl_t.hpp"
#include "../nt/guid_t.hpp"
#include "name_control_t.hpp"
#include "completion_node_t.hpp"
#include "../nt/driver_object_t.hpp"

#include "magic/api.start.hpp"
namespace fltmgr
{
    // [BypassIoFailureReason_buffer]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1ef50, 0x2428 bytes
    //
    _m00(sdk::unknown_ptr) bypass_io_failure_reason_buffer;
    
    // [Feature_EnableOnlyWCOSFilters_logged_traits]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1cd5c, 0x2428 bytes
    //
    _m01(sdk::unknown_ptr) feature_enable_only_wcos_filters_logged_traits;
    
    // [Feature_EnableOnlyWCOSFilters__private_reporting]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .data:0x2c9b0, 0x2428 bytes
    //
    _m02(sdk::unknown_ptr) feature_enable_only_wcos_filters_private_reporting;
    
    // [Feature_EnforceWCOSRegistration_logged_traits]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1e888, 0x2428 bytes
    //
    _m03(sdk::unknown_ptr) feature_enforce_wcos_registration_logged_traits;
    
    // [Feature_EnforceWCOSRegistration__private_reporting]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .data:0x2cac8, 0x2428 bytes
    //
    _m04(sdk::unknown_ptr) feature_enforce_wcos_registration_private_reporting;
    
    // [FltMgrDriverName_buffer]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1efc0, 0x2428 bytes
    //
    _m05(sdk::unknown_ptr) flt_mgr_driver_name_buffer;
    
    // [FltVetoBypassIo]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys PAGE:0x595e0, 0x2428 bytes
    //
    _m06(sdk::unknown_ptr) flt_veto_bypass_io;
    
    // [FLTMGR_FILTER_REGISTERED_TELEMETRY]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x185c8, 0x2520 bytes
    //
    _m07(sdk::unknown_ptr) fltmgr_filter_registered_telemetry;
    
    // [FLTMGR_FILTER_UNLOADED_TELEMETRY]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x194d0, 0x2520 bytes
    //
    _m08(sdk::unknown_ptr) fltmgr_filter_unloaded_telemetry;
    
    // [FLTMGR_REGISTER_FILTER_FAILED_TELEMETRY]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x19470, 0x2520 bytes
    //
    _m09(sdk::unknown_ptr) fltmgr_register_filter_failed_telemetry;
    
    // [FLTMGR_START_FILTERING_FAILED_TELEMETRY]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x194c0, 0x2520 bytes
    //
    _m10(sdk::unknown_ptr) fltmgr_start_filtering_failed_telemetry;
    
    // [FltpGetNormalizedFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys PAGE:0x35644, 0x2520 bytes
    //
    _m11(sdk::unknown_ptr) fltp_get_normalized_file_name;
    
    // [FltpInitializeFilterVerifier]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys PAGE:0x3c5c4, 0x2520 bytes
    //
    _m12(sdk::unknown_ptr) fltp_initialize_filter_verifier;
    
    // [FltpInsertPerFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .text:0x9f0c, 0x2520 bytes
    //
    _m13(sdk::unknown_ptr) fltp_insert_per_file_context;
    
    // [FltpProcessManageBypassIo]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys PAGE:0x576e8, 0x2428 bytes
    //
    _m14(sdk::unknown_ptr) fltp_process_manage_bypass_io;
    
    // [FltpTelemetryIncompatibleFilterAttachOnWCOS]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .text:0x1ab68, 0x2428 bytes
    //
    _m15(sdk::unknown_ptr) fltp_telemetry_incompatible_filter_attach_on_wcos;
    
    // [FltpTelemetryLegacyFiltersSafe]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .text:0x1acfc, 0x2428 bytes
    //
    _m16(sdk::unknown_ptr) fltp_telemetry_legacy_filters_safe;
    
    // [FltpvValidateVerifierState]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .text:0x1b22c, 0x2428 bytes
    //
    _m17(sdk::unknown_ptr) fltpv_validate_verifier_state;
    
    // [FltvRegisterFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys PAGEVRF1:0x64b70, 0x2428 bytes
    //
    _m18(sdk::unknown_ptr) fltv_register_filter;
    
    // [NeedCrossFrameNameCacheValidation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys PAGE:0x39fb8, 0x2520 bytes
    //
    _m19(sdk::unknown_ptr) need_cross_frame_name_cache_validation;
    
    // [TreeUnlinkNoBalance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .text:0x17478, 0x2520 bytes
    //
    _m20(sdk::unknown_ptr) tree_unlink_no_balance;
    
    // [WPP_098b4a03c2e236fb60db8451b75506b0_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a1b0, 0x2520 bytes
    //
    _m21(sdk::unknown_ptr) wpp_098b4a03c2e236fb60db8451b75506b0_traceguids;
    
    // [WPP_149b50505dba3960f40bee6bc0134970_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a0d0, 0x2520 bytes
    //
    _m22(sdk::unknown_ptr) wpp_149b50505dba3960f40bee6bc0134970_traceguids;
    
    // [WPP_1b0a126bd502351a6b33b3a1096dc435_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1f638, 0x2428 bytes
    //
    _m23(sdk::unknown_ptr) wpp_1b0a126bd502351a6b33b3a1096dc435_traceguids;
    
    // [WPP_22e413ef121237c4c1db69738cc462d5_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1e890, 0x2428 bytes
    //
    _m24(sdk::unknown_ptr) wpp_22e413ef121237c4c1db69738cc462d5_traceguids;
    
    // [WPP_2bcc255db80a381b8f07a56f774da53c_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1ceb8, 0x2428 bytes
    //
    _m25(sdk::unknown_ptr) wpp_2bcc255db80a381b8f07a56f774da53c_traceguids;
    
    // [WPP_2f68ee66e65b3e0c8291ad769f1cd835_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a1c0, 0x2520 bytes
    //
    _m26(sdk::unknown_ptr) wpp_2f68ee66e65b3e0c8291ad769f1cd835_traceguids;
    
    // [WPP_43d7db6813c13e39f4c0a88aaf5d509d_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a0e0, 0x2520 bytes
    //
    _m27(sdk::unknown_ptr) wpp_43d7db6813c13e39f4c0a88aaf5d509d_traceguids;
    
    // [WPP_4d212d12355e32725298de3a1046ab0f_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1f7b8, 0x2428 bytes
    //
    _m28(sdk::unknown_ptr) wpp_4d212d12355e32725298de3a1046ab0f_traceguids;
    
    // [WPP_507c1f9af85c376dc0837b825ebbe5c9_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a0c0, 0x2520 bytes
    //
    _m29(sdk::unknown_ptr) wpp_507c1f9af85c376dc0837b825ebbe5c9_traceguids;
    
    // [WPP_53b84f71342c3caa814193de27a3eb02_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1d850, 0x2520 bytes
    //
    _m30(sdk::unknown_ptr) wpp_53b84f71342c3caa814193de27a3eb02_traceguids;
    
    // [WPP_54147dd00aa03f548e4357b805af0f91_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x19500, 0x2520 bytes
    //
    _m31(sdk::unknown_ptr) wpp_54147dd00aa03f548e4357b805af0f91_traceguids;
    
    // [WPP_5ee89fca7deb37eb80c8e2f6b01f78fc_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x18690, 0x2520 bytes
    //
    _m32(sdk::unknown_ptr) wpp_5ee89fca7deb37eb80c8e2f6b01f78fc_traceguids;
    
    // [WPP_7baa659d04ac33d3aa48009088529df2_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a100, 0x2520 bytes
    //
    _m33(sdk::unknown_ptr) wpp_7baa659d04ac33d3aa48009088529df2_traceguids;
    
    // [WPP_80a78fdcfe40325b4d953b627ec44969_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1e900, 0x2428 bytes
    //
    _m34(sdk::unknown_ptr) wpp_80a78fdcfe40325b4d953b627ec44969_traceguids;
    
    // [WPP_853c49219f3737e5c84934f3a031db18_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1f610, 0x2428 bytes
    //
    _m35(sdk::unknown_ptr) wpp_853c49219f3737e5c84934f3a031db18_traceguids;
    
    // [WPP_874063f5ac0a32d84c48095fb4a17f79_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1ce70, 0x2428 bytes
    //
    _m36(sdk::unknown_ptr) wpp_874063f5ac0a32d84c48095fb4a17f79_traceguids;
    
    // [WPP_8ffecb1c8b1831ec2df350eff5e47117_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a0b0, 0x2520 bytes
    //
    _m37(sdk::unknown_ptr) wpp_8ffecb1c8b1831ec2df350eff5e47117_traceguids;
    
    // [WPP_9c69d6c21b84300abc778c48ea7a49be_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1f7a8, 0x2428 bytes
    //
    _m38(sdk::unknown_ptr) wpp_9c69d6c21b84300abc778c48ea7a49be_traceguids;
    
    // [WPP_a169ebe01c5938fa194e08fb7f6faa5e_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x19a48, 0x2520 bytes
    //
    _m39(sdk::unknown_ptr) wpp_a169ebe01c5938fa194e08fb7f6faa5e_traceguids;
    
    // [WPP_a4a2f44045e136054f87286f976f8a65_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1efd8, 0x2428 bytes
    //
    _m40(sdk::unknown_ptr) wpp_a4a2f44045e136054f87286f976f8a65_traceguids;
    
    // [WPP_ad0a512b3ee3381b9f0fb469b3aa178d_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a110, 0x2520 bytes
    //
    _m41(sdk::unknown_ptr) wpp_ad0a512b3ee3381b9f0fb469b3aa178d_traceguids;
    
    // [WPP_b6fc0300d11f33e68123fe69bdff414b_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x194e0, 0x2520 bytes
    //
    _m42(sdk::unknown_ptr) wpp_b6fc0300d11f33e68123fe69bdff414b_traceguids;
    
    // [WPP_bd320f67426739bd71b9999cf0637710_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x19a68, 0x2520 bytes
    //
    _m43(sdk::unknown_ptr) wpp_bd320f67426739bd71b9999cf0637710_traceguids;
    
    // [WPP_c1ef524b915735315d6a38c2900a2271_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1f600, 0x2428 bytes
    //
    _m44(sdk::unknown_ptr) wpp_c1ef524b915735315d6a38c2900a2271_traceguids;
    
    // [WPP_c8b7fc85d64d3ede5b2a919ebf7d66ef_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a0f0, 0x2520 bytes
    //
    _m45(sdk::unknown_ptr) wpp_c8b7fc85d64d3ede5b2a919ebf7d66ef_traceguids;
    
    // [WPP_cb88e71ad6a83ed2c60fd90883e0fcd8_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x19a90, 0x2520 bytes
    //
    _m46(sdk::unknown_ptr) wpp_cb88e71ad6a83ed2c60fd90883e0fcd8_traceguids;
    
    // [WPP_e11b6d7779d53ef31580662322524777_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x19a58, 0x2520 bytes
    //
    _m47(sdk::unknown_ptr) wpp_e11b6d7779d53ef31580662322524777_traceguids;
    
    // [WPP_ef47a3eb52ad3dbd8129cb2c43c7a97d_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x18680, 0x2520 bytes
    //
    _m48(sdk::unknown_ptr) wpp_ef47a3eb52ad3dbd8129cb2c43c7a97d_traceguids;
    
    // [WPP_f0d913edcf1d378fdfaad57c1f5497d4_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x194f0, 0x2520 bytes
    //
    _m49(sdk::unknown_ptr) wpp_f0d913edcf1d378fdfaad57c1f5497d4_traceguids;
    
    // [WPP_f2983d91f5f9325bac5cf9a68f8be591_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x1a120, 0x2520 bytes
    //
    _m50(sdk::unknown_ptr) wpp_f2983d91f5f9325bac5cf9a68f8be591_traceguids;
    
    // [WPP_f4197a2e7d5b3a2ebe652f44223319f6_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .rdata:0x186a0, 0x2520 bytes
    //
    _m51(sdk::unknown_ptr) wpp_f4197a2e7d5b3a2ebe652f44223319f6_traceguids;
    
    // [WPP_f4f2b71bbb6732b7d7c5e27e0705658d_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 11
    // fltMgr.sys .rdata:0x1f648, 0x2428 bytes
    //
    _m52(sdk::unknown_ptr) wpp_f4f2b71bbb6732b7d7c5e27e0705658d_traceguids;
    
    // [WPP_SF_qDDZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .text:0x16808, 0x2520 bytes
    //
    _m53(sdk::unknown_ptr) wpp_sf_q_ddz;
    
    // [WPP_SF_qx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .text:0x1639c, 0x2520 bytes
    //
    _m54(sdk::unknown_ptr) wpp_sf_qx;
    
    // [WPP_SF_qxD]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607
    // fltMgr.sys .text:0x163ec, 0x2520 bytes
    //
    _m55(sdk::unknown_ptr) wpp_sf_qx_d;
    
    // [FltpReferenceStreamForSectionConflict]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 11
    // fltMgr.sys PAGE:0x40134, 0x2520 bytes
    // fltMgr.sys PAGE:0x46bfc, 0x2428 bytes
    //
    _m56(sdk::unknown_ptr) fltp_reference_stream_for_section_conflict;
    
    // [WPP_016895c35479382fc6c9bd657870daaa_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f568, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f568, 0x2428 bytes
    //
    _m57(sdk::unknown_ptr) wpp_016895c35479382fc6c9bd657870daaa_traceguids;
    
    // [WPP_03ca755140ee30034192ac6beea272b2_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1e788, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e788, 0x2428 bytes
    //
    _m58(sdk::unknown_ptr) wpp_03ca755140ee30034192ac6beea272b2_traceguids;
    
    // [WPP_3c339bfe678a31e669060d5d81a0c71e_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f438, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f438, 0x2428 bytes
    //
    _m59(sdk::unknown_ptr) wpp_3c339bfe678a31e669060d5d81a0c71e_traceguids;
    
    // [WPP_542d5f02596a3e3a1a4b1b6a524daf86_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f400, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f400, 0x2428 bytes
    //
    _m60(sdk::unknown_ptr) wpp_542d5f02596a3e3a1a4b1b6a524daf86_traceguids;
    
    // [WPP_5b354330e95c306e48424f9c9d9d4974_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f410, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f410, 0x2428 bytes
    //
    _m61(sdk::unknown_ptr) wpp_5b354330e95c306e48424f9c9d9d4974_traceguids;
    
    // [WPP_6136fa9fb5e334996bda81c2c8fc7448_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f448, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f448, 0x2428 bytes
    //
    _m62(sdk::unknown_ptr) wpp_6136fa9fb5e334996bda81c2c8fc7448_traceguids;
    
    // [WPP_6ba9c3f60a4a305cb4116619098bab8a_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1cdd0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cdd0, 0x2428 bytes
    //
    _m63(sdk::unknown_ptr) wpp_6ba9c3f60a4a305cb4116619098bab8a_traceguids;
    
    // [WPP_918d9d9aecdd39b2ef531648e7826595_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1cd88, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cd88, 0x2428 bytes
    //
    _m64(sdk::unknown_ptr) wpp_918d9d9aecdd39b2ef531648e7826595_traceguids;
    
    // [WPP_a7e150574a803190bec07886040dcfa1_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1e718, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e718, 0x2428 bytes
    //
    _m65(sdk::unknown_ptr) wpp_a7e150574a803190bec07886040dcfa1_traceguids;
    
    // [WPP_dd09ccb95fd23a9fa1caf305fbd4d06f_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1edd8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1edd8, 0x2428 bytes
    //
    _m66(sdk::unknown_ptr) wpp_dd09ccb95fd23a9fa1caf305fbd4d06f_traceguids;
    
    // [WPP_e6dd300a76343ac5a328ea384f3e5f67_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f578, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f578, 0x2428 bytes
    //
    _m67(sdk::unknown_ptr) wpp_e6dd300a76343ac5a328ea384f3e5f67_traceguids;
    
    // [FltFlushBuffers2]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x18620, 0x2428 bytes
    // fltMgr.sys .text:0x18700, 0x2428 bytes
    // fltMgr.sys .text:0x18620, 0x2428 bytes
    //
    _m68(sdk::unknown_ptr) flt_flush_buffers2;
    
    // [FltMgrVerifierFsRtlEcpCleanup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc0e0, 0x2428 bytes
    // fltMgr.sys .text:0xc280, 0x2428 bytes
    // fltMgr.sys .text:0xc0e0, 0x2428 bytes
    //
    _m69(sdk::unknown_ptr) flt_mgr_verifier_fs_rtl_ecp_cleanup;
    
    // [FltQueryDirectoryFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x44710, 0x2428 bytes
    // fltMgr.sys PAGE:0x44790, 0x2428 bytes
    // fltMgr.sys PAGE:0x44710, 0x2428 bytes
    //
    _m70(sdk::unknown_ptr) flt_query_directory_file_ex;
    
    // [FltQueryInformationByName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1710, 0x2428 bytes
    // fltMgr.sys .text:0x18ab0, 0x2428 bytes
    // fltMgr.sys .text:0x1710, 0x2428 bytes
    //
    _m71(sdk::unknown_ptr) flt_query_information_by_name;
    
    // [FltRequestFileInfoOnCreateCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3bfd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dea0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3bfd0, 0x2428 bytes
    //
    _m72(sdk::unknown_ptr) flt_request_file_info_on_create_completion;
    
    // [FltRetrieveFileInfoOnCreateCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c190, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dde0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c190, 0x2428 bytes
    //
    _m73(sdk::unknown_ptr) flt_retrieve_file_info_on_create_completion;
    
    // [FltRetrieveFileInfoOnCreateCompletionEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x53980, 0x2428 bytes
    // fltMgr.sys PAGE:0x55940, 0x2428 bytes
    // fltMgr.sys PAGE:0x53980, 0x2428 bytes
    //
    _m74(sdk::unknown_ptr) flt_retrieve_file_info_on_create_completion_ex;
    
    // [FltTagFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x56d50, 0x2428 bytes
    // fltMgr.sys PAGE:0x592a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56d50, 0x2428 bytes
    //
    _m75(sdk::unknown_ptr) flt_tag_file_ex;
    
    // [FLTMGR_FILTER_REGISTERED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1c898, 0x2428 bytes
    // fltMgr.sys .rdata:0x1caa0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c898, 0x2428 bytes
    //
    _m76(sdk::unknown_ptr) fltmgr_filter_registered;
    
    // [FLTMGR_FILTER_UNLOADED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1e698, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ce60, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e698, 0x2428 bytes
    //
    _m77(sdk::unknown_ptr) fltmgr_filter_unloaded;
    
    // [FLTMGR_REGISTER_FILTER_FAILED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1e6b8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e828, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e6b8, 0x2428 bytes
    //
    _m78(sdk::unknown_ptr) fltmgr_register_filter_failed;
    
    // [FLTMGR_START_FILTERING_FAILED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1e708, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e878, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e708, 0x2428 bytes
    //
    _m79(sdk::unknown_ptr) fltmgr_start_filtering_failed;
    
    // [FltpCallNormalizeNameComponentHandler]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3735c, 0x2428 bytes
    // fltMgr.sys PAGE:0x40a04, 0x2428 bytes
    // fltMgr.sys PAGE:0x3735c, 0x2428 bytes
    //
    _m80(sdk::unknown_ptr) fltp_call_normalize_name_component_handler;
    
    // [FltpDeleteTxVolContextList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x422a4, 0x2428 bytes
    // fltMgr.sys PAGE:0x428b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x422a4, 0x2428 bytes
    //
    _m81(sdk::unknown_ptr) fltp_delete_tx_vol_context_list;
    
    // [FltpEmptyObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1c4e0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c360, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c4e0, 0x2428 bytes
    //
    _m82(sdk::unknown_ptr) fltp_empty_object;
    
    // [FltpFreeFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c8c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3bcc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c8c0, 0x2428 bytes
    //
    _m83(sdk::unknown_ptr) fltp_free_file_name_information;
    
    // [FltpGetActiveFilterCount]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x5a40c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d6e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a40c, 0x2428 bytes
    //
    _m84(sdk::unknown_ptr) fltp_get_active_filter_count;
    
    // [FltpGetAnySectionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x53294, 0x2428 bytes
    // fltMgr.sys PAGE:0x46b5c, 0x2428 bytes
    // fltMgr.sys PAGE:0x53294, 0x2428 bytes
    //
    _m85(sdk::unknown_ptr) fltp_get_any_section_context;
    
    // [FltpGetAutoOptInFeatures]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x42c2c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3798c, 0x2428 bytes
    // fltMgr.sys PAGE:0x42c2c, 0x2428 bytes
    //
    _m86(sdk::unknown_ptr) fltp_get_auto_opt_in_features;
    
    // [FltpGetUniqueIdentifierForFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1a1d4, 0x2428 bytes
    // fltMgr.sys .text:0xdf48, 0x2428 bytes
    // fltMgr.sys .text:0x1a1d4, 0x2428 bytes
    //
    _m87(sdk::unknown_ptr) fltp_get_unique_identifier_for_filter;
    
    // [FltpPerformPostCallbacksCallout]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15320, 0x2428 bytes
    // fltMgr.sys .text:0x1a40, 0x2428 bytes
    // fltMgr.sys .text:0x15320, 0x2428 bytes
    //
    _m88(sdk::unknown_ptr) fltp_perform_post_callbacks_callout;
    
    // [FltpPerformPostCallbacksWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x5400, 0x2428 bytes
    // fltMgr.sys .text:0x60b0, 0x2428 bytes
    // fltMgr.sys .text:0x5400, 0x2428 bytes
    //
    _m89(sdk::unknown_ptr) fltp_perform_post_callbacks_worker;
    
    // [FltpPerformPreCallbacksCallout]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x153d0, 0x2428 bytes
    // fltMgr.sys .text:0x15590, 0x2428 bytes
    // fltMgr.sys .text:0x153d0, 0x2428 bytes
    //
    _m90(sdk::unknown_ptr) fltp_perform_pre_callbacks_callout;
    
    // [FltpPerformPreCallbacksWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x5d20, 0x2428 bytes
    // fltMgr.sys .text:0x69c0, 0x2428 bytes
    // fltMgr.sys .text:0x5d20, 0x2428 bytes
    //
    _m91(sdk::unknown_ptr) fltp_perform_pre_callbacks_worker;
    
    // [FltpPurgeAndReinstateNameCacheForPosixDelete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xdec0, 0x2428 bytes
    // fltMgr.sys .text:0xd714, 0x2428 bytes
    // fltMgr.sys .text:0xdec0, 0x2428 bytes
    //
    _m92(sdk::unknown_ptr) fltp_purge_and_reinstate_name_cache_for_posix_delete;
    
    // [FltpQocEcpCleanupCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x441c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43ce0, 0x2428 bytes
    // fltMgr.sys PAGE:0x441c0, 0x2428 bytes
    //
    _m93(sdk::unknown_ptr) fltp_qoc_ecp_cleanup_callback;
    
    // [FltpRecordLastFileRenameForVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9ec4, 0x2428 bytes
    // fltMgr.sys .text:0xc564, 0x2428 bytes
    // fltMgr.sys .text:0x9ec4, 0x2428 bytes
    //
    _m94(sdk::unknown_ptr) fltp_record_last_file_rename_for_volume;
    
    // [FltpTelemetryFilterRegistration]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x59314, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c15c, 0x2428 bytes
    // fltMgr.sys PAGE:0x59314, 0x2428 bytes
    //
    _m95(sdk::unknown_ptr) fltp_telemetry_filter_registration;
    
    // [FltpTelemetryFilterStartFiltering]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x59540, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d0e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x59540, 0x2428 bytes
    //
    _m96(sdk::unknown_ptr) fltp_telemetry_filter_start_filtering;
    
    // [FltpTelemetryFilterUnregistration]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x595f8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d5d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x595f8, 0x2428 bytes
    //
    _m97(sdk::unknown_ptr) fltp_telemetry_filter_unregistration;
    
    // [FltpTelemetryFltSendMessage]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb220, 0x2428 bytes
    // fltMgr.sys .text:0xb5b0, 0x2428 bytes
    // fltMgr.sys .text:0xb220, 0x2428 bytes
    //
    _m98(sdk::unknown_ptr) fltp_telemetry_flt_send_message;
    
    // [FltpTerminateActiveConnections]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bf80, 0x2520 bytes
    // fltMgr.sys PAGE:0x579ac, 0x2428 bytes
    // fltMgr.sys PAGE:0x579ac, 0x2428 bytes
    //
    _m99(sdk::unknown_ptr) fltp_terminate_active_connections;
    
    // [FltvQueryDirectoryFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x626c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x648e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x626c0, 0x2428 bytes
    //
    _n00(sdk::unknown_ptr) fltv_query_directory_file_ex;
    
    // [FltvTagFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x62d10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x65020, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62d10, 0x2428 bytes
    //
    _n01(sdk::unknown_ptr) fltv_tag_file_ex;
    
    // [GUID_ECP_QUERY_ON_CREATE]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1c5a8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cdb8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c5a8, 0x2428 bytes
    //
    _n02(sdk::unknown_ptr) guid_ecp_query_on_create;
    
    // [QueryStandardLinkInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38044, 0x2520 bytes
    // fltMgr.sys PAGE:0x38c70, 0x2428 bytes
    // fltMgr.sys PAGE:0x38c70, 0x2428 bytes
    //
    _n03(sdk::unknown_ptr) query_standard_link_information;
    
    // [WPP_25f8f1cc1d9b3bcfe9b8fb5ad130a4e4_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1ecf8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ee68, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ecf8, 0x2428 bytes
    //
    _n04(sdk::unknown_ptr) wpp_25f8f1cc1d9b3bcfe9b8fb5ad130a4e4_traceguids;
    
    // [WPP_34631b1b045236e3a32c474f3298003d_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f490, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f6a0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f490, 0x2428 bytes
    //
    _n05(sdk::unknown_ptr) wpp_34631b1b045236e3a32c474f3298003d_traceguids;
    
    // [WPP_3cdc21e9d8d13051f9b160f81f9223cb_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x22e70, 0x2428 bytes
    // fltMgr.sys .rdata:0x231d8, 0x2428 bytes
    // fltMgr.sys .rdata:0x22e70, 0x2428 bytes
    //
    _n06(sdk::unknown_ptr) wpp_3cdc21e9d8d13051f9b160f81f9223cb_traceguids;
    
    // [WPP_4764c14601b732a44e833ed0ac244820_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1cde0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f680, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cde0, 0x2428 bytes
    //
    _n07(sdk::unknown_ptr) wpp_4764c14601b732a44e833ed0ac244820_traceguids;
    
    // [WPP_5fe24c30b5473d398a5c9c12ebbd52ae_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1e768, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e8e0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e768, 0x2428 bytes
    //
    _n08(sdk::unknown_ptr) wpp_5fe24c30b5473d398a5c9c12ebbd52ae_traceguids;
    
    // [WPP_cbe3f6451e623b58885c36f6a9ed018e_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f4d8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f6e8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f4d8, 0x2428 bytes
    //
    _n09(sdk::unknown_ptr) wpp_cbe3f6451e623b58885c36f6a9ed018e_traceguids;
    
    // [WPP_e2a6b30a27ec33087ca3b9cf7b2a6f2d_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1ed18, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ee88, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ed18, 0x2428 bytes
    //
    _n10(sdk::unknown_ptr) wpp_e2a6b30a27ec33087ca3b9cf7b2a6f2d_traceguids;
    
    // [WPP_e31c62956803364de79863b89ed01be7_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1ed08, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ee78, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ed08, 0x2428 bytes
    //
    _n11(sdk::unknown_ptr) wpp_e31c62956803364de79863b89ed01be7_traceguids;
    
    // [WPP_e8684e49308533f31143b963756be383_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1f480, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f690, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f480, 0x2428 bytes
    //
    _n12(sdk::unknown_ptr) wpp_e8684e49308533f31143b963756be383_traceguids;
    
    // [WPP_ffda56d28305341add16439808a660dd_Traceguids]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1cdf0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cec8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cdf0, 0x2428 bytes
    //
    _n13(sdk::unknown_ptr) wpp_ffda56d28305341add16439808a660dd_traceguids;
    
    // [WPP_SF_DDZZq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x19014, 0x2428 bytes
    // fltMgr.sys .text:0x19d34, 0x2428 bytes
    // fltMgr.sys .text:0x19014, 0x2428 bytes
    //
    _n14(sdk::unknown_ptr) wpp_sf_ddz_zq;
    
    // [WPP_SF_qDDZDD]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x19684, 0x2428 bytes
    // fltMgr.sys .text:0x1a314, 0x2428 bytes
    // fltMgr.sys .text:0x19684, 0x2428 bytes
    //
    _n15(sdk::unknown_ptr) wpp_sf_q_ddzdd;
    
    // [WPP_SF_qDZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1939c, 0x2428 bytes
    // fltMgr.sys .text:0x1a09c, 0x2428 bytes
    // fltMgr.sys .text:0x1939c, 0x2428 bytes
    //
    _n16(sdk::unknown_ptr) wpp_sf_q_dz;
    
    // [WPP_SF_qi]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x18e10, 0x2428 bytes
    // fltMgr.sys .text:0x19bd8, 0x2428 bytes
    // fltMgr.sys .text:0x18e10, 0x2428 bytes
    //
    _n17(sdk::unknown_ptr) wpp_sf_qi;
    
    // [WPP_SF_qiD]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x18e68, 0x2428 bytes
    // fltMgr.sys .text:0x19c30, 0x2428 bytes
    // fltMgr.sys .text:0x18e68, 0x2428 bytes
    //
    _n18(sdk::unknown_ptr) wpp_sf_qi_d;
    
    // [WPP_SF_ZZq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x19240, 0x2428 bytes
    // fltMgr.sys .text:0x19f4c, 0x2428 bytes
    // fltMgr.sys .text:0x19240, 0x2428 bytes
    //
    _n19(sdk::unknown_ptr) wpp_sf_z_zq;
    
    // [ZERO_GUID]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x2c9d0, 0x2428 bytes
    // fltMgr.sys .data:0x2cae0, 0x2428 bytes
    // fltMgr.sys .data:0x2c9d0, 0x2428 bytes
    //
    _n20(sdk::unknown_ptr) zero_guid;
    
    // [CleanupFileListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3950c, 0x2520 bytes
    // fltMgr.sys PAGE:0x36b2c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4e50e, 0x2428 bytes
    // fltMgr.sys PAGE:0x36b2c, 0x2428 bytes
    //
    _n21(sdk::unknown_ptr) cleanup_file_list_ctrl;
    
    // [CleanupStreamListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x362b4, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c7d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3bff0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c7d8, 0x2428 bytes
    //
    _n22(sdk::unknown_ptr) cleanup_stream_list_ctrl;
    
    // [CleanupTargetedIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x324e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d540, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e83c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d540, 0x2428 bytes
    //
    _n23(sdk::unknown_ptr) cleanup_targeted_io;
    
    // [ContextTypeInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x19010, 0x2520 bytes
    // fltMgr.sys .rdata:0x1df20, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e020, 0x2428 bytes
    // fltMgr.sys .rdata:0x1df20, 0x2428 bytes
    //
    _n24(sdk::unknown_ptr) context_type_info;
    
    // [CreateTemporaryFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ae00, 0x2520 bytes
    // fltMgr.sys PAGE:0x39370, 0x2428 bytes
    // fltMgr.sys PAGE:0x45b7c, 0x2428 bytes
    // fltMgr.sys PAGE:0x39370, 0x2428 bytes
    //
    _n25(sdk::unknown_ptr) create_temporary_file_name_information;
    
    // [DeleteContextFromFileList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12738, 0x2520 bytes
    // fltMgr.sys .text:0x158e0, 0x2428 bytes
    // fltMgr.sys .text:0x15a98, 0x2428 bytes
    // fltMgr.sys .text:0x158e0, 0x2428 bytes
    //
    _n26(sdk::unknown_ptr) delete_context_from_file_list;
    
    // [DeleteContextFromStreamList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8b98, 0x2520 bytes
    // fltMgr.sys .text:0x9318, 0x2428 bytes
    // fltMgr.sys .text:0x26cc, 0x2428 bytes
    // fltMgr.sys .text:0x9318, 0x2428 bytes
    //
    _n27(sdk::unknown_ptr) delete_context_from_stream_list;
    
    // [DeleteFileListCtrlCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39450, 0x2520 bytes
    // fltMgr.sys PAGE:0x36b80, 0x2428 bytes
    // fltMgr.sys PAGE:0x4e580, 0x2428 bytes
    // fltMgr.sys PAGE:0x36b80, 0x2428 bytes
    //
    _n28(sdk::unknown_ptr) delete_file_list_ctrl_callback;
    
    // [DeleteNameCacheNodes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34560, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c630, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c300, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c630, 0x2428 bytes
    //
    _n29(sdk::unknown_ptr) delete_name_cache_nodes;
    
    // [DeleteStreamListCtrlCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37d40, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ccd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b150, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ccd0, 0x2428 bytes
    //
    _n30(sdk::unknown_ptr) delete_stream_list_ctrl_callback;
    
    // [DoFreeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8a50, 0x2520 bytes
    // fltMgr.sys .text:0x9840, 0x2428 bytes
    // fltMgr.sys .text:0x2840, 0x2428 bytes
    // fltMgr.sys .text:0x9840, 0x2428 bytes
    //
    _n31(sdk::unknown_ptr) do_free_context;
    
    // [DoFreeContextMemory]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8230, 0x2520 bytes
    // fltMgr.sys .text:0x9960, 0x2428 bytes
    // fltMgr.sys .text:0x2960, 0x2428 bytes
    // fltMgr.sys .text:0x9960, 0x2428 bytes
    //
    _n32(sdk::unknown_ptr) do_free_context_memory;
    
    // [DoReleaseContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8180, 0x2520 bytes
    // fltMgr.sys .text:0x87e0, 0x2428 bytes
    // fltMgr.sys .text:0x3370, 0x2428 bytes
    // fltMgr.sys .text:0x87e0, 0x2428 bytes
    //
    _n33(sdk::unknown_ptr) do_release_context;
    
    // [DrainCompletionNode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13454, 0x2520 bytes
    // fltMgr.sys .text:0x166d0, 0x2428 bytes
    // fltMgr.sys .text:0x165c4, 0x2428 bytes
    // fltMgr.sys .text:0x166d0, 0x2428 bytes
    //
    _n34(sdk::unknown_ptr) drain_completion_node;
    
    // [ECP_TYPE_OPEN_REPARSE_GUID]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18370, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c570, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cdc8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c570, 0x2428 bytes
    //
    _n35(sdk::unknown_ptr) ecp_type_open_reparse_guid;
    
    // [FileSystemRegKeyName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18058, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c200, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c000, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c200, 0x2428 bytes
    //
    _n36(sdk::unknown_ptr) file_system_reg_key_name;
    
    // [FindNextRightSubtree]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb2cc, 0x2520 bytes
    // fltMgr.sys .text:0xcb34, 0x2428 bytes
    // fltMgr.sys .text:0xc8e0, 0x2428 bytes
    // fltMgr.sys .text:0xcb34, 0x2428 bytes
    //
    _n37(sdk::unknown_ptr) find_next_right_subtree;
    
    // [FltAcknowledgeEcp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46960, 0x2520 bytes
    // fltMgr.sys PAGE:0x53560, 0x2428 bytes
    // fltMgr.sys PAGE:0x55620, 0x2428 bytes
    // fltMgr.sys PAGE:0x53560, 0x2428 bytes
    //
    _n38(sdk::unknown_ptr) flt_acknowledge_ecp;
    
    // [FltAcquirePushLockExclusive]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xaca0, 0x2520 bytes
    // fltMgr.sys .text:0x18ed0, 0x2428 bytes
    // fltMgr.sys .text:0xbdb0, 0x2428 bytes
    // fltMgr.sys .text:0x18ed0, 0x2428 bytes
    //
    _n39(sdk::unknown_ptr) flt_acquire_push_lock_exclusive;
    
    // [FltAcquirePushLockExclusiveEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xafb0, 0x2520 bytes
    // fltMgr.sys .text:0xb9a0, 0x2428 bytes
    // fltMgr.sys .text:0xc1f0, 0x2428 bytes
    // fltMgr.sys .text:0xb9a0, 0x2428 bytes
    //
    _n40(sdk::unknown_ptr) flt_acquire_push_lock_exclusive_ex;
    
    // [FltAcquirePushLockShared]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb370, 0x2520 bytes
    // fltMgr.sys .text:0x18f10, 0x2428 bytes
    // fltMgr.sys .text:0xc2f0, 0x2428 bytes
    // fltMgr.sys .text:0x18f10, 0x2428 bytes
    //
    _n41(sdk::unknown_ptr) flt_acquire_push_lock_shared;
    
    // [FltAcquirePushLockSharedEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb1d0, 0x2520 bytes
    // fltMgr.sys .text:0xc090, 0x2428 bytes
    // fltMgr.sys .text:0xc370, 0x2428 bytes
    // fltMgr.sys .text:0xc090, 0x2428 bytes
    //
    _n42(sdk::unknown_ptr) flt_acquire_push_lock_shared_ex;
    
    // [FltAcquireResourceExclusive]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16450, 0x2520 bytes
    // fltMgr.sys .text:0x1880, 0x2428 bytes
    // fltMgr.sys .text:0x1a70, 0x2428 bytes
    // fltMgr.sys .text:0x1880, 0x2428 bytes
    //
    _n43(sdk::unknown_ptr) flt_acquire_resource_exclusive;
    
    // [FltAcquireResourceShared]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16470, 0x2520 bytes
    // fltMgr.sys .text:0x1010, 0x2428 bytes
    // fltMgr.sys .text:0x1090, 0x2428 bytes
    // fltMgr.sys .text:0x1010, 0x2428 bytes
    //
    _n44(sdk::unknown_ptr) flt_acquire_resource_shared;
    
    // [FltAddOpenReparseEntry]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35480, 0x2520 bytes
    // fltMgr.sys PAGE:0x3b660, 0x2428 bytes
    // fltMgr.sys PAGE:0x36010, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b660, 0x2428 bytes
    //
    _n45(sdk::unknown_ptr) flt_add_open_reparse_entry;
    
    // [FltAdjustDeviceStackSizeForIoRedirection]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14ee0, 0x2520 bytes
    // fltMgr.sys .text:0x18200, 0x2428 bytes
    // fltMgr.sys .text:0x182e0, 0x2428 bytes
    // fltMgr.sys .text:0x18200, 0x2428 bytes
    //
    _n46(sdk::unknown_ptr) flt_adjust_device_stack_size_for_io_redirection;
    
    // [FltAllocateCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2420, 0x2520 bytes
    // fltMgr.sys .text:0x2ca0, 0x2428 bytes
    // fltMgr.sys .text:0x9890, 0x2428 bytes
    // fltMgr.sys .text:0x2ca0, 0x2428 bytes
    //
    _n47(sdk::unknown_ptr) flt_allocate_callback_data;
    
    // [FltAllocateCallbackDataEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xad50, 0x2520 bytes
    // fltMgr.sys .text:0xbd40, 0x2428 bytes
    // fltMgr.sys .text:0xc100, 0x2428 bytes
    // fltMgr.sys .text:0xbd40, 0x2428 bytes
    //
    _n48(sdk::unknown_ptr) flt_allocate_callback_data_ex;
    
    // [FltAllocateContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x90c0, 0x2520 bytes
    // fltMgr.sys .text:0x9550, 0x2428 bytes
    // fltMgr.sys .text:0xa130, 0x2428 bytes
    // fltMgr.sys .text:0x9550, 0x2428 bytes
    //
    _n49(sdk::unknown_ptr) flt_allocate_context;
    
    // [FltAllocateDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17650, 0x2520 bytes
    // fltMgr.sys .text:0x1a8e0, 0x2428 bytes
    // fltMgr.sys .text:0x1b430, 0x2428 bytes
    // fltMgr.sys .text:0x1a8e0, 0x2428 bytes
    //
    _n50(sdk::unknown_ptr) flt_allocate_deferred_io_work_item;
    
    // [FltAllocateExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46970, 0x2520 bytes
    // fltMgr.sys PAGE:0x53580, 0x2428 bytes
    // fltMgr.sys PAGE:0x4e410, 0x2428 bytes
    // fltMgr.sys PAGE:0x53580, 0x2428 bytes
    //
    _n51(sdk::unknown_ptr) flt_allocate_extra_create_parameter;
    
    // [FltAllocateExtraCreateParameterFromLookasideList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35e10, 0x2520 bytes
    // fltMgr.sys PAGE:0x3af30, 0x2428 bytes
    // fltMgr.sys PAGE:0x3aba0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3af30, 0x2428 bytes
    //
    _n52(sdk::unknown_ptr) flt_allocate_extra_create_parameter_from_lookaside_list;
    
    // [FltAllocateExtraCreateParameterList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a080, 0x2520 bytes
    // fltMgr.sys PAGE:0x44160, 0x2428 bytes
    // fltMgr.sys PAGE:0x43c80, 0x2428 bytes
    // fltMgr.sys PAGE:0x44160, 0x2428 bytes
    //
    _n53(sdk::unknown_ptr) flt_allocate_extra_create_parameter_list;
    
    // [FltAllocateFileLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x484d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x54720, 0x2428 bytes
    // fltMgr.sys PAGE:0x566e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x54720, 0x2428 bytes
    //
    _n54(sdk::unknown_ptr) flt_allocate_file_lock;
    
    // [FltAllocateGenericWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9790, 0x2520 bytes
    // fltMgr.sys .text:0x9a00, 0x2428 bytes
    // fltMgr.sys .text:0xaae0, 0x2428 bytes
    // fltMgr.sys .text:0x9a00, 0x2428 bytes
    //
    _n55(sdk::unknown_ptr) flt_allocate_generic_work_item;
    
    // [FltAllocatePoolAlignedWithTag]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16ae0, 0x2520 bytes
    // fltMgr.sys .text:0x19860, 0x2428 bytes
    // fltMgr.sys .text:0x1a4e0, 0x2428 bytes
    // fltMgr.sys .text:0x19860, 0x2428 bytes
    //
    _n56(sdk::unknown_ptr) flt_allocate_pool_aligned_with_tag;
    
    // [FltApplyPriorityInfoThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14f40, 0x2520 bytes
    // fltMgr.sys .text:0x18270, 0x2428 bytes
    // fltMgr.sys .text:0x18350, 0x2428 bytes
    // fltMgr.sys .text:0x18270, 0x2428 bytes
    //
    _n57(sdk::unknown_ptr) flt_apply_priority_info_thread;
    
    // [FltAttachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45440, 0x2520 bytes
    // fltMgr.sys PAGE:0x53080, 0x2428 bytes
    // fltMgr.sys PAGE:0x552a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x53080, 0x2428 bytes
    //
    _n58(sdk::unknown_ptr) flt_attach_volume;
    
    // [FltAttachVolumeAtAltitude]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45470, 0x2520 bytes
    // fltMgr.sys PAGE:0x530b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x552d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x530b0, 0x2428 bytes
    //
    _n59(sdk::unknown_ptr) flt_attach_volume_at_altitude;
    
    // [FltBuildDefaultSecurityDescriptor]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3fa60, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c650, 0x2428 bytes
    // fltMgr.sys PAGE:0x4dae0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c650, 0x2428 bytes
    //
    _n60(sdk::unknown_ptr) flt_build_default_security_descriptor;
    
    // [FltCancelFileOpen]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49eb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x56380, 0x2428 bytes
    // fltMgr.sys PAGE:0x58730, 0x2428 bytes
    // fltMgr.sys PAGE:0x56380, 0x2428 bytes
    //
    _n61(sdk::unknown_ptr) flt_cancel_file_open;
    
    // [FltCancelIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16be0, 0x2520 bytes
    // fltMgr.sys .text:0x19d90, 0x2428 bytes
    // fltMgr.sys .text:0x1a5e0, 0x2428 bytes
    // fltMgr.sys .text:0x19d90, 0x2428 bytes
    //
    _n62(sdk::unknown_ptr) flt_cancel_io;
    
    // [FltCancellableWaitForMultipleObjects]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50b20, 0x2520 bytes
    // fltMgr.sys PAGE:0x5b060, 0x2428 bytes
    // fltMgr.sys PAGE:0x5c440, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b060, 0x2428 bytes
    //
    _n63(sdk::unknown_ptr) flt_cancellable_wait_for_multiple_objects;
    
    // [FltCancellableWaitForSingleObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ade0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45b40, 0x2428 bytes
    // fltMgr.sys PAGE:0x45c40, 0x2428 bytes
    // fltMgr.sys PAGE:0x45b40, 0x2428 bytes
    //
    _n64(sdk::unknown_ptr) flt_cancellable_wait_for_single_object;
    
    // [FltCbdqDisable]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16c00, 0x2520 bytes
    // fltMgr.sys .text:0x19dc0, 0x2428 bytes
    // fltMgr.sys .text:0x1a610, 0x2428 bytes
    // fltMgr.sys .text:0x19dc0, 0x2428 bytes
    //
    _n65(sdk::unknown_ptr) flt_cbdq_disable;
    
    // [FltCbdqEnable]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16c40, 0x2520 bytes
    // fltMgr.sys .text:0x19e00, 0x2428 bytes
    // fltMgr.sys .text:0x1a650, 0x2428 bytes
    // fltMgr.sys .text:0x19e00, 0x2428 bytes
    //
    _n66(sdk::unknown_ptr) flt_cbdq_enable;
    
    // [FltCbdqInitialize]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc030, 0x2520 bytes
    // fltMgr.sys .text:0xe5d0, 0x2428 bytes
    // fltMgr.sys .text:0xe510, 0x2428 bytes
    // fltMgr.sys .text:0xe5d0, 0x2428 bytes
    //
    _n67(sdk::unknown_ptr) flt_cbdq_initialize;
    
    // [FltCbdqInsertIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16c80, 0x2520 bytes
    // fltMgr.sys .text:0xdf60, 0x2428 bytes
    // fltMgr.sys .text:0xdbb0, 0x2428 bytes
    // fltMgr.sys .text:0xdf60, 0x2428 bytes
    //
    _n68(sdk::unknown_ptr) flt_cbdq_insert_io;
    
    // [FltCbdqRemoveIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16d00, 0x2520 bytes
    // fltMgr.sys .text:0x19e40, 0x2428 bytes
    // fltMgr.sys .text:0x1a690, 0x2428 bytes
    // fltMgr.sys .text:0x19e40, 0x2428 bytes
    //
    _n69(sdk::unknown_ptr) flt_cbdq_remove_io;
    
    // [FltCbdqRemoveNextIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc680, 0x2520 bytes
    // fltMgr.sys .text:0xe100, 0x2428 bytes
    // fltMgr.sys .text:0xdde0, 0x2428 bytes
    // fltMgr.sys .text:0xe100, 0x2428 bytes
    //
    _n70(sdk::unknown_ptr) flt_cbdq_remove_next_io;
    
    // [FltCheckAndGrowNameControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37ee0, 0x2520 bytes
    // fltMgr.sys PAGE:0x38260, 0x2428 bytes
    // fltMgr.sys PAGE:0x39a50, 0x2428 bytes
    // fltMgr.sys PAGE:0x38260, 0x2428 bytes
    //
    _n71(sdk::unknown_ptr) flt_check_and_grow_name_control;
    
    // [FltCheckLockForReadAccess]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48530, 0x2520 bytes
    // fltMgr.sys PAGE:0x547a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56760, 0x2428 bytes
    // fltMgr.sys PAGE:0x547a0, 0x2428 bytes
    //
    _n72(sdk::unknown_ptr) flt_check_lock_for_read_access;
    
    // [FltCheckLockForWriteAccess]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x485a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x54820, 0x2428 bytes
    // fltMgr.sys PAGE:0x567e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x54820, 0x2428 bytes
    //
    _n73(sdk::unknown_ptr) flt_check_lock_for_write_access;
    
    // [FltCheckOplock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x141c0, 0x2520 bytes
    // fltMgr.sys .text:0x173f0, 0x2428 bytes
    // fltMgr.sys .text:0x17340, 0x2428 bytes
    // fltMgr.sys .text:0x173f0, 0x2428 bytes
    //
    _n74(sdk::unknown_ptr) flt_check_oplock;
    
    // [FltCheckOplockEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14200, 0x2520 bytes
    // fltMgr.sys .text:0x17440, 0x2428 bytes
    // fltMgr.sys .text:0x17390, 0x2428 bytes
    // fltMgr.sys .text:0x17440, 0x2428 bytes
    //
    _n75(sdk::unknown_ptr) flt_check_oplock_ex;
    
    // [FltClearCallbackDataDirty]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12150, 0x2520 bytes
    // fltMgr.sys .text:0x14f20, 0x2428 bytes
    // fltMgr.sys .text:0x15100, 0x2428 bytes
    // fltMgr.sys .text:0x14f20, 0x2428 bytes
    //
    _n76(sdk::unknown_ptr) flt_clear_callback_data_dirty;
    
    // [FltClearCancelCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16d50, 0x2520 bytes
    // fltMgr.sys .text:0x19ea0, 0x2428 bytes
    // fltMgr.sys .text:0x1a6f0, 0x2428 bytes
    // fltMgr.sys .text:0x19ea0, 0x2428 bytes
    //
    _n77(sdk::unknown_ptr) flt_clear_cancel_completion;
    
    // [FltClose]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a150, 0x2520 bytes
    // fltMgr.sys PAGE:0x447e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x443a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x447e0, 0x2428 bytes
    //
    _n78(sdk::unknown_ptr) flt_close;
    
    // [FltCloseClientPort]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bbb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45bb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46170, 0x2428 bytes
    // fltMgr.sys PAGE:0x45bb0, 0x2428 bytes
    //
    _n79(sdk::unknown_ptr) flt_close_client_port;
    
    // [FltCloseCommunicationPort]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bc50, 0x2520 bytes
    // fltMgr.sys PAGE:0x57890, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a070, 0x2428 bytes
    // fltMgr.sys PAGE:0x57890, 0x2428 bytes
    //
    _n80(sdk::unknown_ptr) flt_close_communication_port;
    
    // [FltCloseSectionForDataScan]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x374c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ecd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x41410, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ecd0, 0x2428 bytes
    //
    _n81(sdk::unknown_ptr) flt_close_section_for_data_scan;
    
    // [FltCommitComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4eb80, 0x2520 bytes
    // fltMgr.sys PAGE:0x47600, 0x2428 bytes
    // fltMgr.sys PAGE:0x48630, 0x2428 bytes
    // fltMgr.sys PAGE:0x47600, 0x2428 bytes
    //
    _n82(sdk::unknown_ptr) flt_commit_complete;
    
    // [FltCommitFinalizeComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ebf0, 0x2520 bytes
    // fltMgr.sys PAGE:0x47670, 0x2428 bytes
    // fltMgr.sys PAGE:0x486a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x47670, 0x2428 bytes
    //
    _n83(sdk::unknown_ptr) flt_commit_finalize_complete;
    
    // [FltCompareInstanceAltitudes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49e20, 0x2520 bytes
    // fltMgr.sys PAGE:0x56350, 0x2428 bytes
    // fltMgr.sys PAGE:0x58700, 0x2428 bytes
    // fltMgr.sys PAGE:0x56350, 0x2428 bytes
    //
    _n84(sdk::unknown_ptr) flt_compare_instance_altitudes;
    
    // [FltCompletePendedPostOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16980, 0x2520 bytes
    // fltMgr.sys .text:0xdc90, 0x2428 bytes
    // fltMgr.sys .text:0xd4e0, 0x2428 bytes
    // fltMgr.sys .text:0xdc90, 0x2428 bytes
    //
    _n85(sdk::unknown_ptr) flt_complete_pended_post_operation;
    
    // [FltCompletePendedPreOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1c00, 0x2520 bytes
    // fltMgr.sys .text:0xc400, 0x2428 bytes
    // fltMgr.sys .text:0x1180, 0x2428 bytes
    // fltMgr.sys .text:0xc400, 0x2428 bytes
    //
    _n86(sdk::unknown_ptr) flt_complete_pended_pre_operation;
    
    // [FltCopyOpenReparseList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46a60, 0x2520 bytes
    // fltMgr.sys PAGE:0x53640, 0x2428 bytes
    // fltMgr.sys PAGE:0x55640, 0x2428 bytes
    // fltMgr.sys PAGE:0x53640, 0x2428 bytes
    //
    _n87(sdk::unknown_ptr) flt_copy_open_reparse_list;
    
    // [FltCreateCommunicationPort]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3f700, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c4a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d930, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c4a0, 0x2428 bytes
    //
    _n88(sdk::unknown_ptr) flt_create_communication_port;
    
    // [FltCreateFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49ec0, 0x2520 bytes
    // fltMgr.sys PAGE:0x563a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58750, 0x2428 bytes
    // fltMgr.sys PAGE:0x563a0, 0x2428 bytes
    //
    _n89(sdk::unknown_ptr) flt_create_file;
    
    // [FltCreateFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38840, 0x2520 bytes
    // fltMgr.sys PAGE:0x45890, 0x2428 bytes
    // fltMgr.sys PAGE:0x45ab0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45890, 0x2428 bytes
    //
    _n90(sdk::unknown_ptr) flt_create_file_ex;
    
    // [FltCreateFileEx2]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36fa0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d5d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e8d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d5d0, 0x2428 bytes
    //
    _n91(sdk::unknown_ptr) flt_create_file_ex2;
    
    // [FltCreateMailslotFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49f60, 0x2520 bytes
    // fltMgr.sys PAGE:0x56440, 0x2428 bytes
    // fltMgr.sys PAGE:0x587f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56440, 0x2428 bytes
    //
    _n92(sdk::unknown_ptr) flt_create_mailslot_file;
    
    // [FltCreateNamedPipeFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4a360, 0x2520 bytes
    // fltMgr.sys PAGE:0x56700, 0x2428 bytes
    // fltMgr.sys PAGE:0x58ac0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56700, 0x2428 bytes
    //
    _n93(sdk::unknown_ptr) flt_create_named_pipe_file;
    
    // [FltCreateSectionForDataScan]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37530, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ee80, 0x2428 bytes
    // fltMgr.sys PAGE:0x414e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ee80, 0x2428 bytes
    //
    _n94(sdk::unknown_ptr) flt_create_section_for_data_scan;
    
    // [FltCreateSystemVolumeInformationFolder]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4de90, 0x2520 bytes
    // fltMgr.sys PAGE:0x58e40, 0x2428 bytes
    // fltMgr.sys PAGE:0x5aba0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58e40, 0x2428 bytes
    //
    _n95(sdk::unknown_ptr) flt_create_system_volume_information_folder;
    
    // [FltCurrentBatchOplock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49900, 0x2520 bytes
    // fltMgr.sys PAGE:0x55d60, 0x2428 bytes
    // fltMgr.sys PAGE:0x58110, 0x2428 bytes
    // fltMgr.sys PAGE:0x55d60, 0x2428 bytes
    //
    _n96(sdk::unknown_ptr) flt_current_batch_oplock;
    
    // [FltCurrentOplock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14250, 0x2520 bytes
    // fltMgr.sys .text:0x17490, 0x2428 bytes
    // fltMgr.sys .text:0x173e0, 0x2428 bytes
    // fltMgr.sys .text:0x17490, 0x2428 bytes
    //
    _n97(sdk::unknown_ptr) flt_current_oplock;
    
    // [FltCurrentOplockH]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49910, 0x2520 bytes
    // fltMgr.sys PAGE:0x55d80, 0x2428 bytes
    // fltMgr.sys PAGE:0x58130, 0x2428 bytes
    // fltMgr.sys PAGE:0x55d80, 0x2428 bytes
    //
    _n98(sdk::unknown_ptr) flt_current_oplock_h;
    
    // [FltDecodeParameters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2d70, 0x2520 bytes
    // fltMgr.sys .text:0x4250, 0x2428 bytes
    // fltMgr.sys .text:0x9730, 0x2428 bytes
    // fltMgr.sys .text:0x4250, 0x2428 bytes
    //
    _n99(sdk::unknown_ptr) flt_decode_parameters;
    
    // [FltDeleteContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9350, 0x2520 bytes
    // fltMgr.sys .text:0x9a90, 0x2428 bytes
    // fltMgr.sys .text:0xa5e0, 0x2428 bytes
    // fltMgr.sys .text:0x9a90, 0x2428 bytes
    //
    _o00(sdk::unknown_ptr) flt_delete_context;
    
    // [FltDeleteExtraCreateParameterLookasideList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46c10, 0x2520 bytes
    // fltMgr.sys PAGE:0x53810, 0x2428 bytes
    // fltMgr.sys PAGE:0x55810, 0x2428 bytes
    // fltMgr.sys PAGE:0x53810, 0x2428 bytes
    //
    _o01(sdk::unknown_ptr) flt_delete_extra_create_parameter_lookaside_list;
    
    // [FltDeleteFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x128e0, 0x2520 bytes
    // fltMgr.sys .text:0x15a00, 0x2428 bytes
    // fltMgr.sys .text:0x15bb0, 0x2428 bytes
    // fltMgr.sys .text:0x15a00, 0x2428 bytes
    //
    _o02(sdk::unknown_ptr) flt_delete_file_context;
    
    // [FltDeleteInstanceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1310, 0x2520 bytes
    // fltMgr.sys .text:0xa210, 0x2428 bytes
    // fltMgr.sys .text:0xa930, 0x2428 bytes
    // fltMgr.sys .text:0xa210, 0x2428 bytes
    //
    _o03(sdk::unknown_ptr) flt_delete_instance_context;
    
    // [FltDeletePushLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3af20, 0x2520 bytes
    // fltMgr.sys PAGE:0x45ca0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46260, 0x2428 bytes
    // fltMgr.sys PAGE:0x45ca0, 0x2428 bytes
    //
    _o04(sdk::unknown_ptr) flt_delete_push_lock;
    
    // [FltDeleteStreamContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12950, 0x2520 bytes
    // fltMgr.sys .text:0x15a80, 0x2428 bytes
    // fltMgr.sys .text:0x15c30, 0x2428 bytes
    // fltMgr.sys .text:0x15a80, 0x2428 bytes
    //
    _o05(sdk::unknown_ptr) flt_delete_stream_context;
    
    // [FltDeleteStreamHandleContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8e70, 0x2520 bytes
    // fltMgr.sys .text:0x9420, 0x2428 bytes
    // fltMgr.sys .text:0x25b0, 0x2428 bytes
    // fltMgr.sys .text:0x9420, 0x2428 bytes
    //
    _o06(sdk::unknown_ptr) flt_delete_stream_handle_context;
    
    // [FltDeleteTransactionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45870, 0x2520 bytes
    // fltMgr.sys PAGE:0x530e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55300, 0x2428 bytes
    // fltMgr.sys PAGE:0x530e0, 0x2428 bytes
    //
    _o07(sdk::unknown_ptr) flt_delete_transaction_context;
    
    // [FltDeleteVolumeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x129c0, 0x2520 bytes
    // fltMgr.sys .text:0x15b00, 0x2428 bytes
    // fltMgr.sys .text:0xe3b0, 0x2428 bytes
    // fltMgr.sys .text:0x15b00, 0x2428 bytes
    //
    _o08(sdk::unknown_ptr) flt_delete_volume_context;
    
    // [FltDetachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x454a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x47a40, 0x2428 bytes
    // fltMgr.sys PAGE:0x48a80, 0x2428 bytes
    // fltMgr.sys PAGE:0x47a40, 0x2428 bytes
    //
    _o09(sdk::unknown_ptr) flt_detach_volume;
    
    // [FltDeviceIoControlFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4a7a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x569f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58dc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x569f0, 0x2428 bytes
    //
    _o10(sdk::unknown_ptr) flt_device_io_control_file;
    
    // [FltDoCompletionProcessingWhenSafe]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16d80, 0x2520 bytes
    // fltMgr.sys .text:0x19ed0, 0x2428 bytes
    // fltMgr.sys .text:0x1a720, 0x2428 bytes
    // fltMgr.sys .text:0x19ed0, 0x2428 bytes
    //
    _o11(sdk::unknown_ptr) flt_do_completion_processing_when_safe;
    
    // [FltDynamicRegistrySettingsResource]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x25460, 0x2520 bytes
    // fltMgr.sys .data:0x2b4e0, 0x2428 bytes
    // fltMgr.sys .data:0x2b5a0, 0x2428 bytes
    // fltMgr.sys .data:0x2b4e0, 0x2428 bytes
    //
    _o12(sdk::unknown_ptr) flt_dynamic_registry_settings_resource;
    
    // [FltEnlistInTransaction]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ec40, 0x2520 bytes
    // fltMgr.sys PAGE:0x47700, 0x2428 bytes
    // fltMgr.sys PAGE:0x48730, 0x2428 bytes
    // fltMgr.sys PAGE:0x47700, 0x2428 bytes
    //
    _o13(sdk::unknown_ptr) flt_enlist_in_transaction;
    
    // [FltEnumerateFilterInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46d60, 0x2520 bytes
    // fltMgr.sys PAGE:0x47de0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46280, 0x2428 bytes
    // fltMgr.sys PAGE:0x47de0, 0x2428 bytes
    //
    _o14(sdk::unknown_ptr) flt_enumerate_filter_information;
    
    // [FltEnumerateFilters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46d80, 0x2520 bytes
    // fltMgr.sys PAGE:0x53a90, 0x2428 bytes
    // fltMgr.sys PAGE:0x55a50, 0x2428 bytes
    // fltMgr.sys PAGE:0x53a90, 0x2428 bytes
    //
    _o15(sdk::unknown_ptr) flt_enumerate_filters;
    
    // [FltEnumerateInstanceInformationByDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x30ab0, 0x2520 bytes
    // fltMgr.sys PAGE:0x42700, 0x2428 bytes
    // fltMgr.sys PAGE:0x42b10, 0x2428 bytes
    // fltMgr.sys PAGE:0x42700, 0x2428 bytes
    //
    _o16(sdk::unknown_ptr) flt_enumerate_instance_information_by_device_object;
    
    // [FltEnumerateInstanceInformationByFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46ea0, 0x2520 bytes
    // fltMgr.sys PAGE:0x53be0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55ba0, 0x2428 bytes
    // fltMgr.sys PAGE:0x53be0, 0x2428 bytes
    //
    _o17(sdk::unknown_ptr) flt_enumerate_instance_information_by_filter;
    
    // [FltEnumerateInstanceInformationByVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46f90, 0x2520 bytes
    // fltMgr.sys PAGE:0x53cf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55cb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x53cf0, 0x2428 bytes
    //
    _o18(sdk::unknown_ptr) flt_enumerate_instance_information_by_volume;
    
    // [FltEnumerateInstanceInformationByVolumeName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46fa0, 0x2520 bytes
    // fltMgr.sys PAGE:0x46ad0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46e50, 0x2428 bytes
    // fltMgr.sys PAGE:0x46ad0, 0x2428 bytes
    //
    _o19(sdk::unknown_ptr) flt_enumerate_instance_information_by_volume_name;
    
    // [FltEnumerateInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35ee0, 0x2520 bytes
    // fltMgr.sys PAGE:0x38150, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a140, 0x2428 bytes
    // fltMgr.sys PAGE:0x38150, 0x2428 bytes
    //
    _o20(sdk::unknown_ptr) flt_enumerate_instances;
    
    // [FltEnumerateVolumeInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x470a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x53d20, 0x2428 bytes
    // fltMgr.sys PAGE:0x55ce0, 0x2428 bytes
    // fltMgr.sys PAGE:0x53d20, 0x2428 bytes
    //
    _o21(sdk::unknown_ptr) flt_enumerate_volume_information;
    
    // [FltEnumerateVolumes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x470b0, 0x2520 bytes
    // fltMgr.sys PAGE:0x53d50, 0x2428 bytes
    // fltMgr.sys PAGE:0x55d10, 0x2428 bytes
    // fltMgr.sys PAGE:0x53d50, 0x2428 bytes
    //
    _o22(sdk::unknown_ptr) flt_enumerate_volumes;
    
    // [FltFastIoMdlRead]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14f50, 0x2520 bytes
    // fltMgr.sys .text:0x18290, 0x2428 bytes
    // fltMgr.sys .text:0x18370, 0x2428 bytes
    // fltMgr.sys .text:0x18290, 0x2428 bytes
    //
    _o23(sdk::unknown_ptr) flt_fast_io_mdl_read;
    
    // [FltFastIoMdlReadComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15030, 0x2520 bytes
    // fltMgr.sys .text:0x18380, 0x2428 bytes
    // fltMgr.sys .text:0x18460, 0x2428 bytes
    // fltMgr.sys .text:0x18380, 0x2428 bytes
    //
    _o24(sdk::unknown_ptr) flt_fast_io_mdl_read_complete;
    
    // [FltFastIoMdlWriteComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x150f0, 0x2520 bytes
    // fltMgr.sys .text:0x18450, 0x2428 bytes
    // fltMgr.sys .text:0x18530, 0x2428 bytes
    // fltMgr.sys .text:0x18450, 0x2428 bytes
    //
    _o25(sdk::unknown_ptr) flt_fast_io_mdl_write_complete;
    
    // [FltFastIoPrepareMdlWrite]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x151c0, 0x2520 bytes
    // fltMgr.sys .text:0x18530, 0x2428 bytes
    // fltMgr.sys .text:0x18610, 0x2428 bytes
    // fltMgr.sys .text:0x18530, 0x2428 bytes
    //
    _o26(sdk::unknown_ptr) flt_fast_io_prepare_mdl_write;
    
    // [FltFindExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39a60, 0x2520 bytes
    // fltMgr.sys PAGE:0x44130, 0x2428 bytes
    // fltMgr.sys PAGE:0x43a50, 0x2428 bytes
    // fltMgr.sys PAGE:0x44130, 0x2428 bytes
    //
    _o27(sdk::unknown_ptr) flt_find_extra_create_parameter;
    
    // [FltFlushBuffers]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4a7f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x56a50, 0x2428 bytes
    // fltMgr.sys PAGE:0x58e20, 0x2428 bytes
    // fltMgr.sys PAGE:0x56a50, 0x2428 bytes
    //
    _o28(sdk::unknown_ptr) flt_flush_buffers;
    
    // [FltFreeCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2cf0, 0x2520 bytes
    // fltMgr.sys .text:0x41d0, 0x2428 bytes
    // fltMgr.sys .text:0x96b0, 0x2428 bytes
    // fltMgr.sys .text:0x41d0, 0x2428 bytes
    //
    _o29(sdk::unknown_ptr) flt_free_callback_data;
    
    // [FltFreeDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17680, 0x2520 bytes
    // fltMgr.sys .text:0x1a920, 0x2428 bytes
    // fltMgr.sys .text:0x1b470, 0x2428 bytes
    // fltMgr.sys .text:0x1a920, 0x2428 bytes
    //
    _o30(sdk::unknown_ptr) flt_free_deferred_io_work_item;
    
    // [FltFreeExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46c20, 0x2520 bytes
    // fltMgr.sys PAGE:0x53840, 0x2428 bytes
    // fltMgr.sys PAGE:0x55840, 0x2428 bytes
    // fltMgr.sys PAGE:0x53840, 0x2428 bytes
    //
    _o31(sdk::unknown_ptr) flt_free_extra_create_parameter;
    
    // [FltFreeExtraCreateParameterList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a160, 0x2520 bytes
    // fltMgr.sys PAGE:0x45080, 0x2428 bytes
    // fltMgr.sys PAGE:0x443c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45080, 0x2428 bytes
    //
    _o32(sdk::unknown_ptr) flt_free_extra_create_parameter_list;
    
    // [FltFreeFileLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48610, 0x2520 bytes
    // fltMgr.sys PAGE:0x548a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56860, 0x2428 bytes
    // fltMgr.sys PAGE:0x548a0, 0x2428 bytes
    //
    _o33(sdk::unknown_ptr) flt_free_file_lock;
    
    // [FltFreeGenericWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1520, 0x2520 bytes
    // fltMgr.sys .text:0x9a40, 0x2428 bytes
    // fltMgr.sys .text:0xab20, 0x2428 bytes
    // fltMgr.sys .text:0x9a40, 0x2428 bytes
    //
    _o34(sdk::unknown_ptr) flt_free_generic_work_item;
    
    // [FltFreeOpenReparseList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46c30, 0x2520 bytes
    // fltMgr.sys PAGE:0x53860, 0x2428 bytes
    // fltMgr.sys PAGE:0x55860, 0x2428 bytes
    // fltMgr.sys PAGE:0x53860, 0x2428 bytes
    //
    _o35(sdk::unknown_ptr) flt_free_open_reparse_list;
    
    // [FltFreePoolAlignedWithTag]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16b70, 0x2520 bytes
    // fltMgr.sys .text:0x19900, 0x2428 bytes
    // fltMgr.sys .text:0x1a580, 0x2428 bytes
    // fltMgr.sys .text:0x19900, 0x2428 bytes
    //
    _o36(sdk::unknown_ptr) flt_free_pool_aligned_with_tag;
    
    // [FltFreeSecurityDescriptor]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ffd0, 0x2520 bytes
    // fltMgr.sys PAGE:0x4ca10, 0x2428 bytes
    // fltMgr.sys PAGE:0x4dfd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4ca10, 0x2428 bytes
    //
    _o37(sdk::unknown_ptr) flt_free_security_descriptor;
    
    // [FltFsControlFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31ec0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d990, 0x2428 bytes
    // fltMgr.sys PAGE:0x3eef0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d990, 0x2428 bytes
    //
    _o38(sdk::unknown_ptr) flt_fs_control_file;
    
    // [FltGetActivityIdCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11030, 0x2520 bytes
    // fltMgr.sys .text:0x140f0, 0x2428 bytes
    // fltMgr.sys .text:0x1010, 0x2428 bytes
    // fltMgr.sys .text:0x140f0, 0x2428 bytes
    //
    _o39(sdk::unknown_ptr) flt_get_activity_id_callback_data;
    
    // [FltGetBottomInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47190, 0x2520 bytes
    // fltMgr.sys PAGE:0x53e50, 0x2428 bytes
    // fltMgr.sys PAGE:0x55e10, 0x2428 bytes
    // fltMgr.sys PAGE:0x53e50, 0x2428 bytes
    //
    _o40(sdk::unknown_ptr) flt_get_bottom_instance;
    
    // [FltGetContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12ae0, 0x2520 bytes
    // fltMgr.sys .text:0x15c20, 0x2428 bytes
    // fltMgr.sys .text:0xf5a0, 0x2428 bytes
    // fltMgr.sys .text:0x15c20, 0x2428 bytes
    //
    _o41(sdk::unknown_ptr) flt_get_contexts;
    
    // [FltGetContextsEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12b00, 0x2520 bytes
    // fltMgr.sys .text:0x15c50, 0x2428 bytes
    // fltMgr.sys .text:0x15cb0, 0x2428 bytes
    // fltMgr.sys .text:0x15c50, 0x2428 bytes
    //
    _o42(sdk::unknown_ptr) flt_get_contexts_ex;
    
    // [FltGetDestinationFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c9b0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e740, 0x2428 bytes
    // fltMgr.sys PAGE:0x42f90, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e740, 0x2428 bytes
    //
    _o43(sdk::unknown_ptr) flt_get_destination_file_name_information;
    
    // [FltGetDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x174a0, 0x2520 bytes
    // fltMgr.sys .text:0xda50, 0x2428 bytes
    // fltMgr.sys .text:0xd340, 0x2428 bytes
    // fltMgr.sys .text:0xda50, 0x2428 bytes
    //
    _o44(sdk::unknown_ptr) flt_get_device_object;
    
    // [FltGetDiskDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb3a0, 0x2520 bytes
    // fltMgr.sys .text:0xcaf0, 0x2428 bytes
    // fltMgr.sys .text:0xc750, 0x2428 bytes
    // fltMgr.sys .text:0xcaf0, 0x2428 bytes
    //
    _o45(sdk::unknown_ptr) flt_get_disk_device_object;
    
    // [FltGetEcpListFromCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34260, 0x2520 bytes
    // fltMgr.sys PAGE:0x3be60, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dc00, 0x2428 bytes
    // fltMgr.sys PAGE:0x3be60, 0x2428 bytes
    //
    _o46(sdk::unknown_ptr) flt_get_ecp_list_from_callback_data;
    
    // [FltGetFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12b40, 0x2520 bytes
    // fltMgr.sys .text:0x15c90, 0x2428 bytes
    // fltMgr.sys .text:0xf5d0, 0x2428 bytes
    // fltMgr.sys .text:0x15c90, 0x2428 bytes
    //
    _o47(sdk::unknown_ptr) flt_get_file_context;
    
    // [FltGetFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x7970, 0x2520 bytes
    // fltMgr.sys .text:0x3fa0, 0x2428 bytes
    // fltMgr.sys .text:0x4ee0, 0x2428 bytes
    // fltMgr.sys .text:0x3fa0, 0x2428 bytes
    //
    _o48(sdk::unknown_ptr) flt_get_file_name_information;
    
    // [FltGetFileNameInformationUnsafe]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36e90, 0x2520 bytes
    // fltMgr.sys PAGE:0x39e80, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fc70, 0x2428 bytes
    // fltMgr.sys PAGE:0x39e80, 0x2428 bytes
    //
    _o49(sdk::unknown_ptr) flt_get_file_name_information_unsafe;
    
    // [FltGetFileSystemType]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbb60, 0x2520 bytes
    // fltMgr.sys .text:0xbea0, 0x2428 bytes
    // fltMgr.sys .text:0xbe90, 0x2428 bytes
    // fltMgr.sys .text:0xbea0, 0x2428 bytes
    //
    _o50(sdk::unknown_ptr) flt_get_file_system_type;
    
    // [FltGetFilterFromInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47230, 0x2520 bytes
    // fltMgr.sys PAGE:0x53f10, 0x2428 bytes
    // fltMgr.sys PAGE:0x55ed0, 0x2428 bytes
    // fltMgr.sys PAGE:0x53f10, 0x2428 bytes
    //
    _o51(sdk::unknown_ptr) flt_get_filter_from_instance;
    
    // [FltGetFilterFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47260, 0x2520 bytes
    // fltMgr.sys PAGE:0x368b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x36ec0, 0x2428 bytes
    // fltMgr.sys PAGE:0x368b0, 0x2428 bytes
    //
    _o52(sdk::unknown_ptr) flt_get_filter_from_name;
    
    // [FltGetFilterInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47350, 0x2520 bytes
    // fltMgr.sys PAGE:0x481a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46640, 0x2428 bytes
    // fltMgr.sys PAGE:0x481a0, 0x2428 bytes
    //
    _o53(sdk::unknown_ptr) flt_get_filter_information;
    
    // [FltGetFsZeroingOffset]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x152a0, 0x2520 bytes
    // fltMgr.sys .text:0x18700, 0x2428 bytes
    // fltMgr.sys .text:0x187e0, 0x2428 bytes
    // fltMgr.sys .text:0x18700, 0x2428 bytes
    //
    _o54(sdk::unknown_ptr) flt_get_fs_zeroing_offset;
    
    // [FltGetInstanceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xa280, 0x2520 bytes
    // fltMgr.sys .text:0xa9a0, 0x2428 bytes
    // fltMgr.sys .text:0xbcd0, 0x2428 bytes
    // fltMgr.sys .text:0xa9a0, 0x2428 bytes
    //
    _o55(sdk::unknown_ptr) flt_get_instance_context;
    
    // [FltGetInstanceInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39850, 0x2520 bytes
    // fltMgr.sys PAGE:0x42cb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x37670, 0x2428 bytes
    // fltMgr.sys PAGE:0x42cb0, 0x2428 bytes
    //
    _o56(sdk::unknown_ptr) flt_get_instance_information;
    
    // [FltGetIoAttributionHandleFromCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x152c0, 0x2520 bytes
    // fltMgr.sys .text:0x18730, 0x2428 bytes
    // fltMgr.sys .text:0x18810, 0x2428 bytes
    // fltMgr.sys .text:0x18730, 0x2428 bytes
    //
    _o57(sdk::unknown_ptr) flt_get_io_attribution_handle_from_callback_data;
    
    // [FltGetIoCacheIntention]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17a10, 0x2520 bytes
    // fltMgr.sys .text:0x1ace0, 0x2428 bytes
    // fltMgr.sys .text:0x1b830, 0x2428 bytes
    // fltMgr.sys .text:0x1ace0, 0x2428 bytes
    //
    _o58(sdk::unknown_ptr) flt_get_io_cache_intention;
    
    // [FltGetIoPriorityHint]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc2e0, 0x2520 bytes
    // fltMgr.sys .text:0x18770, 0x2428 bytes
    // fltMgr.sys .text:0x18850, 0x2428 bytes
    // fltMgr.sys .text:0x18770, 0x2428 bytes
    //
    _o59(sdk::unknown_ptr) flt_get_io_priority_hint;
    
    // [FltGetIoPriorityHintFromCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb530, 0x2520 bytes
    // fltMgr.sys .text:0xc790, 0x2428 bytes
    // fltMgr.sys .text:0x14c0, 0x2428 bytes
    // fltMgr.sys .text:0xc790, 0x2428 bytes
    //
    _o60(sdk::unknown_ptr) flt_get_io_priority_hint_from_callback_data;
    
    // [FltGetIoPriorityHintFromFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x152f0, 0x2520 bytes
    // fltMgr.sys .text:0x18810, 0x2428 bytes
    // fltMgr.sys .text:0x188f0, 0x2428 bytes
    // fltMgr.sys .text:0x18810, 0x2428 bytes
    //
    _o61(sdk::unknown_ptr) flt_get_io_priority_hint_from_file_object;
    
    // [FltGetIoPriorityHintFromThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15360, 0x2520 bytes
    // fltMgr.sys .text:0x18890, 0x2428 bytes
    // fltMgr.sys .text:0x18970, 0x2428 bytes
    // fltMgr.sys .text:0x18890, 0x2428 bytes
    //
    _o62(sdk::unknown_ptr) flt_get_io_priority_hint_from_thread;
    
    // [FltGetIrpName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13900, 0x2520 bytes
    // fltMgr.sys .text:0x16bb0, 0x2428 bytes
    // fltMgr.sys .text:0x16ab0, 0x2428 bytes
    // fltMgr.sys .text:0x16bb0, 0x2428 bytes
    //
    _o63(sdk::unknown_ptr) flt_get_irp_name;
    
    // [FltGetLowerInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47580, 0x2520 bytes
    // fltMgr.sys PAGE:0x53f40, 0x2428 bytes
    // fltMgr.sys PAGE:0x55f00, 0x2428 bytes
    // fltMgr.sys PAGE:0x53f40, 0x2428 bytes
    //
    _o64(sdk::unknown_ptr) flt_get_lower_instance;
    
    // [FltGetNewSystemBufferAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x168e0, 0x2520 bytes
    // fltMgr.sys .text:0x197a0, 0x2428 bytes
    // fltMgr.sys .text:0x1a420, 0x2428 bytes
    // fltMgr.sys .text:0x197a0, 0x2428 bytes
    //
    _o65(sdk::unknown_ptr) flt_get_new_system_buffer_address;
    
    // [FltGetNextExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46cb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x538f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4e4d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x538f0, 0x2428 bytes
    //
    _o66(sdk::unknown_ptr) flt_get_next_extra_create_parameter;
    
    // [FltGetRequestorProcess]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xae10, 0x2520 bytes
    // fltMgr.sys .text:0xb960, 0x2428 bytes
    // fltMgr.sys .text:0xbdf0, 0x2428 bytes
    // fltMgr.sys .text:0xb960, 0x2428 bytes
    //
    _o67(sdk::unknown_ptr) flt_get_requestor_process;
    
    // [FltGetRequestorProcessId]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb0a0, 0x2520 bytes
    // fltMgr.sys .text:0xc100, 0x2428 bytes
    // fltMgr.sys .text:0xc2a0, 0x2428 bytes
    // fltMgr.sys .text:0xc100, 0x2428 bytes
    //
    _o68(sdk::unknown_ptr) flt_get_requestor_process_id;
    
    // [FltGetRequestorProcessIdEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17a30, 0x2520 bytes
    // fltMgr.sys .text:0x1ad10, 0x2428 bytes
    // fltMgr.sys .text:0xf790, 0x2428 bytes
    // fltMgr.sys .text:0x1ad10, 0x2428 bytes
    //
    _o69(sdk::unknown_ptr) flt_get_requestor_process_id_ex;
    
    // [FltGetRequestorSessionId]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39a80, 0x2520 bytes
    // fltMgr.sys PAGE:0x44570, 0x2428 bytes
    // fltMgr.sys PAGE:0x43f80, 0x2428 bytes
    // fltMgr.sys PAGE:0x44570, 0x2428 bytes
    //
    _o70(sdk::unknown_ptr) flt_get_requestor_session_id;
    
    // [FltGetRoutineAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3f980, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c3c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d2b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c3c0, 0x2428 bytes
    //
    _o71(sdk::unknown_ptr) flt_get_routine_address;
    
    // [FltGetSectionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12b90, 0x2520 bytes
    // fltMgr.sys .text:0x15cf0, 0x2428 bytes
    // fltMgr.sys .text:0x15cf0, 0x2428 bytes
    // fltMgr.sys .text:0x15cf0, 0x2428 bytes
    //
    _o72(sdk::unknown_ptr) flt_get_section_context;
    
    // [FltGetStreamContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x71e0, 0x2520 bytes
    // fltMgr.sys .text:0x3c20, 0x2428 bytes
    // fltMgr.sys .text:0x4b80, 0x2428 bytes
    // fltMgr.sys .text:0x3c20, 0x2428 bytes
    //
    _o73(sdk::unknown_ptr) flt_get_stream_context;
    
    // [FltGetStreamHandleContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x7130, 0x2520 bytes
    // fltMgr.sys .text:0x3a70, 0x2428 bytes
    // fltMgr.sys .text:0x4a00, 0x2428 bytes
    // fltMgr.sys .text:0x3a70, 0x2428 bytes
    //
    _o74(sdk::unknown_ptr) flt_get_stream_handle_context;
    
    // [FltGetSwappedBufferMdlAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16900, 0x2520 bytes
    // fltMgr.sys .text:0x197c0, 0x2428 bytes
    // fltMgr.sys .text:0x1a440, 0x2428 bytes
    // fltMgr.sys .text:0x197c0, 0x2428 bytes
    //
    _o75(sdk::unknown_ptr) flt_get_swapped_buffer_mdl_address;
    
    // [FltGetTopInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35350, 0x2520 bytes
    // fltMgr.sys PAGE:0x39190, 0x2428 bytes
    // fltMgr.sys PAGE:0x3aaf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x39190, 0x2428 bytes
    //
    _o76(sdk::unknown_ptr) flt_get_top_instance;
    
    // [FltGetTransactionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45990, 0x2520 bytes
    // fltMgr.sys PAGE:0x47250, 0x2428 bytes
    // fltMgr.sys PAGE:0x478a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x47250, 0x2428 bytes
    //
    _o77(sdk::unknown_ptr) flt_get_transaction_context;
    
    // [FltGetTunneledName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4cbe0, 0x2520 bytes
    // fltMgr.sys PAGE:0x57bf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a320, 0x2428 bytes
    // fltMgr.sys PAGE:0x57bf0, 0x2428 bytes
    //
    _o78(sdk::unknown_ptr) flt_get_tunneled_name;
    
    // [FltGetUpperInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47620, 0x2520 bytes
    // fltMgr.sys PAGE:0x54000, 0x2428 bytes
    // fltMgr.sys PAGE:0x55fc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x54000, 0x2428 bytes
    //
    _o79(sdk::unknown_ptr) flt_get_upper_instance;
    
    // [FltGetVolumeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12c20, 0x2520 bytes
    // fltMgr.sys .text:0x15d90, 0x2428 bytes
    // fltMgr.sys .text:0x15d90, 0x2428 bytes
    // fltMgr.sys .text:0x15d90, 0x2428 bytes
    //
    _o80(sdk::unknown_ptr) flt_get_volume_context;
    
    // [FltGetVolumeFromDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x476c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x540c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56080, 0x2428 bytes
    // fltMgr.sys PAGE:0x540c0, 0x2428 bytes
    //
    _o81(sdk::unknown_ptr) flt_get_volume_from_device_object;
    
    // [FltGetVolumeFromFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35610, 0x2520 bytes
    // fltMgr.sys PAGE:0x390b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a350, 0x2428 bytes
    // fltMgr.sys PAGE:0x390b0, 0x2428 bytes
    //
    _o82(sdk::unknown_ptr) flt_get_volume_from_file_object;
    
    // [FltGetVolumeFromInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3aef0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45b80, 0x2428 bytes
    // fltMgr.sys PAGE:0x45f00, 0x2428 bytes
    // fltMgr.sys PAGE:0x45b80, 0x2428 bytes
    //
    _o83(sdk::unknown_ptr) flt_get_volume_from_instance;
    
    // [FltGetVolumeFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x476d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x453b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45670, 0x2428 bytes
    // fltMgr.sys PAGE:0x453b0, 0x2428 bytes
    //
    _o84(sdk::unknown_ptr) flt_get_volume_from_name;
    
    // [FltGetVolumeGuidName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a6c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x44820, 0x2428 bytes
    // fltMgr.sys PAGE:0x449e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x44820, 0x2428 bytes
    //
    _o85(sdk::unknown_ptr) flt_get_volume_guid_name;
    
    // [FltGetVolumeInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47740, 0x2520 bytes
    // fltMgr.sys PAGE:0x46c90, 0x2428 bytes
    // fltMgr.sys PAGE:0x47010, 0x2428 bytes
    // fltMgr.sys PAGE:0x46c90, 0x2428 bytes
    //
    _o86(sdk::unknown_ptr) flt_get_volume_information;
    
    // [FltGetVolumeInstanceFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35a70, 0x2520 bytes
    // fltMgr.sys PAGE:0x38550, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a250, 0x2428 bytes
    // fltMgr.sys PAGE:0x38550, 0x2428 bytes
    //
    _o87(sdk::unknown_ptr) flt_get_volume_instance_from_name;
    
    // [FltGetVolumeName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ac90, 0x2520 bytes
    // fltMgr.sys PAGE:0x45100, 0x2428 bytes
    // fltMgr.sys PAGE:0x45600, 0x2428 bytes
    // fltMgr.sys PAGE:0x45100, 0x2428 bytes
    //
    _o88(sdk::unknown_ptr) flt_get_volume_name;
    
    // [FltGetVolumeProperties]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a540, 0x2520 bytes
    // fltMgr.sys PAGE:0x44ba0, 0x2428 bytes
    // fltMgr.sys PAGE:0x44d70, 0x2428 bytes
    // fltMgr.sys PAGE:0x44ba0, 0x2428 bytes
    //
    _o89(sdk::unknown_ptr) flt_get_volume_properties;
    
    // [FltGlobals]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x25500, 0x2520 bytes
    // fltMgr.sys .data:0x2b600, 0x2428 bytes
    // fltMgr.sys .data:0x2b6c0, 0x2428 bytes
    // fltMgr.sys .data:0x2b600, 0x2428 bytes
    //
    _o90(sdk::unknown_ptr) flt_globals;
    
    // [FltInitExtraCreateParameterLookasideList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ff20, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c8b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4dd40, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c8b0, 0x2428 bytes
    //
    _o91(sdk::unknown_ptr) flt_init_extra_create_parameter_lookaside_list;
    
    // [FltInitializeFileLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48650, 0x2520 bytes
    // fltMgr.sys PAGE:0x548f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x568b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x548f0, 0x2428 bytes
    //
    _o92(sdk::unknown_ptr) flt_initialize_file_lock;
    
    // [FltInitializeOplock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49920, 0x2520 bytes
    // fltMgr.sys PAGE:0x55da0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58150, 0x2428 bytes
    // fltMgr.sys PAGE:0x55da0, 0x2428 bytes
    //
    _o93(sdk::unknown_ptr) flt_initialize_oplock;
    
    // [FltInitializePushLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a410, 0x2520 bytes
    // fltMgr.sys PAGE:0x445c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43d10, 0x2428 bytes
    // fltMgr.sys PAGE:0x445c0, 0x2428 bytes
    //
    _o94(sdk::unknown_ptr) flt_initialize_push_lock;
    
    // [FltInsertExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39d00, 0x2520 bytes
    // fltMgr.sys PAGE:0x44190, 0x2428 bytes
    // fltMgr.sys PAGE:0x43cb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x44190, 0x2428 bytes
    //
    _o95(sdk::unknown_ptr) flt_insert_extra_create_parameter;
    
    // [FltIs32bitProcess]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1000, 0x2520 bytes
    // fltMgr.sys .text:0x1380, 0x2428 bytes
    // fltMgr.sys .text:0xf7c0, 0x2428 bytes
    // fltMgr.sys .text:0x1380, 0x2428 bytes
    //
    _o96(sdk::unknown_ptr) flt_is32bit_process;
    
    // [FltIsCallbackDataDirty]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x4ef0, 0x2520 bytes
    // fltMgr.sys .text:0x68a0, 0x2428 bytes
    // fltMgr.sys .text:0x7520, 0x2428 bytes
    // fltMgr.sys .text:0x68a0, 0x2428 bytes
    //
    _o97(sdk::unknown_ptr) flt_is_callback_data_dirty;
    
    // [FltIsDirectory]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9000, 0x2520 bytes
    // fltMgr.sys .text:0x9220, 0x2428 bytes
    // fltMgr.sys .text:0x35e0, 0x2428 bytes
    // fltMgr.sys .text:0x9220, 0x2428 bytes
    //
    _o98(sdk::unknown_ptr) flt_is_directory;
    
    // [FltIsEcpAcknowledged]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46ce0, 0x2520 bytes
    // fltMgr.sys PAGE:0x44230, 0x2428 bytes
    // fltMgr.sys PAGE:0x43d60, 0x2428 bytes
    // fltMgr.sys PAGE:0x44230, 0x2428 bytes
    //
    _o99(sdk::unknown_ptr) flt_is_ecp_acknowledged;
    
    // [FltIsEcpFromUserMode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a140, 0x2520 bytes
    // fltMgr.sys PAGE:0x44800, 0x2428 bytes
    // fltMgr.sys PAGE:0x43f60, 0x2428 bytes
    // fltMgr.sys PAGE:0x44800, 0x2428 bytes
    //
    _p00(sdk::unknown_ptr) flt_is_ecp_from_user_mode;
    
    // [FltIsFltMgrVolumeDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x504b0, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a880, 0x2428 bytes
    // fltMgr.sys PAGE:0x5be70, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a880, 0x2428 bytes
    //
    _p01(sdk::unknown_ptr) flt_is_flt_mgr_volume_device_object;
    
    // [FltIsIoCanceled]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb840, 0x2520 bytes
    // fltMgr.sys .text:0xcff0, 0x2428 bytes
    // fltMgr.sys .text:0xcc90, 0x2428 bytes
    // fltMgr.sys .text:0xcff0, 0x2428 bytes
    //
    _p02(sdk::unknown_ptr) flt_is_io_canceled;
    
    // [FltIsIoRedirectionAllowed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x153d0, 0x2520 bytes
    // fltMgr.sys .text:0x18900, 0x2428 bytes
    // fltMgr.sys .text:0x189e0, 0x2428 bytes
    // fltMgr.sys .text:0x18900, 0x2428 bytes
    //
    _p03(sdk::unknown_ptr) flt_is_io_redirection_allowed;
    
    // [FltIsIoRedirectionAllowedForOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15410, 0x2520 bytes
    // fltMgr.sys .text:0x18940, 0x2428 bytes
    // fltMgr.sys .text:0x18a20, 0x2428 bytes
    // fltMgr.sys .text:0x18940, 0x2428 bytes
    //
    _p04(sdk::unknown_ptr) flt_is_io_redirection_allowed_for_operation;
    
    // [FltIsOperationSynchronous]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb0e0, 0x2520 bytes
    // fltMgr.sys .text:0xbe00, 0x2428 bytes
    // fltMgr.sys .text:0xbfc0, 0x2428 bytes
    // fltMgr.sys .text:0xbe00, 0x2428 bytes
    //
    _p05(sdk::unknown_ptr) flt_is_operation_synchronous;
    
    // [FltIsVolumeSnapshot]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f000, 0x2520 bytes
    // fltMgr.sys PAGE:0x431b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x437c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x431b0, 0x2428 bytes
    //
    _p06(sdk::unknown_ptr) flt_is_volume_snapshot;
    
    // [FltIsVolumeWritable]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x504e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a8c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5beb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a8c0, 0x2428 bytes
    //
    _p07(sdk::unknown_ptr) flt_is_volume_writable;
    
    // [FltLoadFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3fdb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c980, 0x2428 bytes
    // fltMgr.sys PAGE:0x4de10, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c980, 0x2428 bytes
    //
    _p08(sdk::unknown_ptr) flt_load_filter;
    
    // [FltLockUserBuffer]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1d50, 0x2520 bytes
    // fltMgr.sys .text:0xc150, 0x2428 bytes
    // fltMgr.sys .text:0x13f0, 0x2428 bytes
    // fltMgr.sys .text:0xc150, 0x2428 bytes
    //
    _p09(sdk::unknown_ptr) flt_lock_user_buffer;
    
    // [FltMgrDeviceName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18000, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c1a0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c030, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c1a0, 0x2428 bytes
    //
    _p10(sdk::unknown_ptr) flt_mgr_device_name;
    
    // [FltMgrFsRtlAttachDeviceCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3aeb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45930, 0x2428 bytes
    // fltMgr.sys PAGE:0x45b50, 0x2428 bytes
    // fltMgr.sys PAGE:0x45930, 0x2428 bytes
    //
    _p11(sdk::unknown_ptr) flt_mgr_fs_rtl_attach_device_callback;
    
    // [FltMgrFsRtlEcpCleanup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb320, 0x2520 bytes
    // fltMgr.sys .text:0xa040, 0x2428 bytes
    // fltMgr.sys .text:0x9df0, 0x2428 bytes
    // fltMgr.sys .text:0xa040, 0x2428 bytes
    //
    _p12(sdk::unknown_ptr) flt_mgr_fs_rtl_ecp_cleanup;
    
    // [FltMgrFsRtlGetFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35240, 0x2520 bytes
    // fltMgr.sys PAGE:0x390f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fd30, 0x2428 bytes
    // fltMgr.sys PAGE:0x390f0, 0x2428 bytes
    //
    _p13(sdk::unknown_ptr) flt_mgr_fs_rtl_get_file_name_information;
    
    // [FltMgrFsRtlGetSupportedFeatures]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f130, 0x2520 bytes
    // fltMgr.sys PAGE:0x42fd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43570, 0x2428 bytes
    // fltMgr.sys PAGE:0x42fd0, 0x2428 bytes
    //
    _p14(sdk::unknown_ptr) flt_mgr_fs_rtl_get_supported_features;
    
    // [FltMgrMsgDeviceName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18048, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c1f0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c020, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c1f0, 0x2428 bytes
    //
    _p15(sdk::unknown_ptr) flt_mgr_msg_device_name;
    
    // [FltMgrOpenReparseEcpCleanup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xad10, 0x2520 bytes
    // fltMgr.sys .text:0xbc10, 0x2428 bytes
    // fltMgr.sys .text:0x1050, 0x2428 bytes
    // fltMgr.sys .text:0xbc10, 0x2428 bytes
    //
    _p16(sdk::unknown_ptr) flt_mgr_open_reparse_ecp_cleanup;
    
    // [FltNotifyFilterChangeDirectory]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50b50, 0x2520 bytes
    // fltMgr.sys PAGE:0x5b0b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5c490, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b0b0, 0x2428 bytes
    //
    _p17(sdk::unknown_ptr) flt_notify_filter_change_directory;
    
    // [FltObjectDereference]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2300, 0x2520 bytes
    // fltMgr.sys .text:0xa040, 0x2428 bytes
    // fltMgr.sys .text:0x9df0, 0x2428 bytes
    // fltMgr.sys .text:0xa040, 0x2428 bytes
    //
    _p18(sdk::unknown_ptr) flt_object_dereference;
    
    // [FltObjectReference]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8610, 0x2520 bytes
    // fltMgr.sys .text:0x2c70, 0x2428 bytes
    // fltMgr.sys .text:0x2b60, 0x2428 bytes
    // fltMgr.sys .text:0x2c70, 0x2428 bytes
    //
    _p19(sdk::unknown_ptr) flt_object_reference;
    
    // [FltOpenVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x395d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f5f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x448f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f5f0, 0x2428 bytes
    //
    _p20(sdk::unknown_ptr) flt_open_volume;
    
    // [FltOplockBreakH]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49930, 0x2520 bytes
    // fltMgr.sys PAGE:0x55dc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58170, 0x2428 bytes
    // fltMgr.sys PAGE:0x55dc0, 0x2428 bytes
    //
    _p21(sdk::unknown_ptr) flt_oplock_break_h;
    
    // [FltOplockBreakToNone]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14260, 0x2520 bytes
    // fltMgr.sys .text:0x174b0, 0x2428 bytes
    // fltMgr.sys .text:0x17400, 0x2428 bytes
    // fltMgr.sys .text:0x174b0, 0x2428 bytes
    //
    _p22(sdk::unknown_ptr) flt_oplock_break_to_none;
    
    // [FltOplockBreakToNoneEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x142b0, 0x2520 bytes
    // fltMgr.sys .text:0x17500, 0x2428 bytes
    // fltMgr.sys .text:0x17450, 0x2428 bytes
    // fltMgr.sys .text:0x17500, 0x2428 bytes
    //
    _p23(sdk::unknown_ptr) flt_oplock_break_to_none_ex;
    
    // [FltOplockFsctrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49980, 0x2520 bytes
    // fltMgr.sys PAGE:0x55e10, 0x2428 bytes
    // fltMgr.sys PAGE:0x581c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55e10, 0x2428 bytes
    //
    _p24(sdk::unknown_ptr) flt_oplock_fsctrl;
    
    // [FltOplockFsctrlEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49990, 0x2520 bytes
    // fltMgr.sys PAGE:0x55e30, 0x2428 bytes
    // fltMgr.sys PAGE:0x581e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55e30, 0x2428 bytes
    //
    _p25(sdk::unknown_ptr) flt_oplock_fsctrl_ex;
    
    // [FltOplockIsFastIoPossible]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49ab0, 0x2520 bytes
    // fltMgr.sys PAGE:0x55f70, 0x2428 bytes
    // fltMgr.sys PAGE:0x58320, 0x2428 bytes
    // fltMgr.sys PAGE:0x55f70, 0x2428 bytes
    //
    _p26(sdk::unknown_ptr) flt_oplock_is_fast_io_possible;
    
    // [FltOplockIsSharedRequest]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49ac0, 0x2520 bytes
    // fltMgr.sys PAGE:0x55f90, 0x2428 bytes
    // fltMgr.sys PAGE:0x58340, 0x2428 bytes
    // fltMgr.sys PAGE:0x55f90, 0x2428 bytes
    //
    _p27(sdk::unknown_ptr) flt_oplock_is_shared_request;
    
    // [FltOplockKeysEqual]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14300, 0x2520 bytes
    // fltMgr.sys .text:0x17550, 0x2428 bytes
    // fltMgr.sys .text:0x174a0, 0x2428 bytes
    // fltMgr.sys .text:0x17550, 0x2428 bytes
    //
    _p28(sdk::unknown_ptr) flt_oplock_keys_equal;
    
    // [FltParseFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35fc0, 0x2520 bytes
    // fltMgr.sys PAGE:0x36c70, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f930, 0x2428 bytes
    // fltMgr.sys PAGE:0x36c70, 0x2428 bytes
    //
    _p29(sdk::unknown_ptr) flt_parse_file_name;
    
    // [FltParseFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36390, 0x2520 bytes
    // fltMgr.sys PAGE:0x37530, 0x2428 bytes
    // fltMgr.sys PAGE:0x39640, 0x2428 bytes
    // fltMgr.sys PAGE:0x37530, 0x2428 bytes
    //
    _p30(sdk::unknown_ptr) flt_parse_file_name_information;
    
    // [FltPerformAsynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1580, 0x2520 bytes
    // fltMgr.sys .text:0x9100, 0x2428 bytes
    // fltMgr.sys .text:0x9f90, 0x2428 bytes
    // fltMgr.sys .text:0x9100, 0x2428 bytes
    //
    _p31(sdk::unknown_ptr) flt_perform_asynchronous_io;
    
    // [FltPerformSynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2900, 0x2520 bytes
    // fltMgr.sys .text:0x7f80, 0x2428 bytes
    // fltMgr.sys .text:0x8f70, 0x2428 bytes
    // fltMgr.sys .text:0x7f80, 0x2428 bytes
    //
    _p32(sdk::unknown_ptr) flt_perform_synchronous_io;
    
    // [FltPrePrepareComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ef30, 0x2520 bytes
    // fltMgr.sys PAGE:0x59f10, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b880, 0x2428 bytes
    // fltMgr.sys PAGE:0x59f10, 0x2428 bytes
    //
    _p33(sdk::unknown_ptr) flt_pre_prepare_complete;
    
    // [FltPrepareComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4efa0, 0x2520 bytes
    // fltMgr.sys PAGE:0x59f90, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b900, 0x2428 bytes
    // fltMgr.sys PAGE:0x59f90, 0x2428 bytes
    //
    _p34(sdk::unknown_ptr) flt_prepare_complete;
    
    // [FltPrepareToReuseEcp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46cf0, 0x2520 bytes
    // fltMgr.sys PAGE:0x53930, 0x2428 bytes
    // fltMgr.sys PAGE:0x558f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x53930, 0x2428 bytes
    //
    _p35(sdk::unknown_ptr) flt_prepare_to_reuse_ecp;
    
    // [FltProcessFileLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48660, 0x2520 bytes
    // fltMgr.sys PAGE:0x54920, 0x2428 bytes
    // fltMgr.sys PAGE:0x568e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x54920, 0x2428 bytes
    //
    _p36(sdk::unknown_ptr) flt_process_file_lock;
    
    // [FltPropagateActivityIdToThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11050, 0x2520 bytes
    // fltMgr.sys .text:0x14130, 0x2428 bytes
    // fltMgr.sys .text:0x142c0, 0x2428 bytes
    // fltMgr.sys .text:0x14130, 0x2428 bytes
    //
    _p37(sdk::unknown_ptr) flt_propagate_activity_id_to_thread;
    
    // [FltPropagateIrpExtension]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xaf10, 0x2520 bytes
    // fltMgr.sys .text:0xbf40, 0x2428 bytes
    // fltMgr.sys .text:0x1100, 0x2428 bytes
    // fltMgr.sys .text:0xbf40, 0x2428 bytes
    //
    _p38(sdk::unknown_ptr) flt_propagate_irp_extension;
    
    // [FltPurgeFileNameInformationCache]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c020, 0x2520 bytes
    // fltMgr.sys PAGE:0x57a60, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a190, 0x2428 bytes
    // fltMgr.sys PAGE:0x57a60, 0x2428 bytes
    //
    _p39(sdk::unknown_ptr) flt_purge_file_name_information_cache;
    
    // [FltQueryDirectoryFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x30f10, 0x2520 bytes
    // fltMgr.sys PAGE:0x446b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x44730, 0x2428 bytes
    // fltMgr.sys PAGE:0x446b0, 0x2428 bytes
    //
    _p40(sdk::unknown_ptr) flt_query_directory_file;
    
    // [FltQueryEaFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x316f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x445d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x41250, 0x2428 bytes
    // fltMgr.sys PAGE:0x445d0, 0x2428 bytes
    //
    _p41(sdk::unknown_ptr) flt_query_ea_file;
    
    // [FltQueryInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33980, 0x2520 bytes
    // fltMgr.sys PAGE:0x3aff0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ef50, 0x2428 bytes
    // fltMgr.sys PAGE:0x3aff0, 0x2428 bytes
    //
    _p42(sdk::unknown_ptr) flt_query_information_file;
    
    // [FltQueryQuotaInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4a840, 0x2520 bytes
    // fltMgr.sys PAGE:0x56a70, 0x2428 bytes
    // fltMgr.sys PAGE:0x58e40, 0x2428 bytes
    // fltMgr.sys PAGE:0x56a70, 0x2428 bytes
    //
    _p43(sdk::unknown_ptr) flt_query_quota_information_file;
    
    // [FltQuerySecurityObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x30e00, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d090, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e9f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d090, 0x2428 bytes
    //
    _p44(sdk::unknown_ptr) flt_query_security_object;
    
    // [FltQueryVolumeInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39560, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f560, 0x2428 bytes
    // fltMgr.sys PAGE:0x44860, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f560, 0x2428 bytes
    //
    _p45(sdk::unknown_ptr) flt_query_volume_information;
    
    // [FltQueryVolumeInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbfa0, 0x2520 bytes
    // fltMgr.sys .text:0xe530, 0x2428 bytes
    // fltMgr.sys .text:0xe470, 0x2428 bytes
    // fltMgr.sys .text:0xe530, 0x2428 bytes
    //
    _p46(sdk::unknown_ptr) flt_query_volume_information_file;
    
    // [FltQueueDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17700, 0x2520 bytes
    // fltMgr.sys .text:0x1a9a0, 0x2428 bytes
    // fltMgr.sys .text:0x1b4f0, 0x2428 bytes
    // fltMgr.sys .text:0x1a9a0, 0x2428 bytes
    //
    _p47(sdk::unknown_ptr) flt_queue_deferred_io_work_item;
    
    // [FltQueueGenericWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9690, 0x2520 bytes
    // fltMgr.sys .text:0xc820, 0x2428 bytes
    // fltMgr.sys .text:0x1e70, 0x2428 bytes
    // fltMgr.sys .text:0xc820, 0x2428 bytes
    //
    _p48(sdk::unknown_ptr) flt_queue_generic_work_item;
    
    // [FltReadFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x154a0, 0x2520 bytes
    // fltMgr.sys .text:0x1080, 0x2428 bytes
    // fltMgr.sys .text:0x18c40, 0x2428 bytes
    // fltMgr.sys .text:0x1080, 0x2428 bytes
    //
    _p49(sdk::unknown_ptr) flt_read_file;
    
    // [FltReadFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15500, 0x2520 bytes
    // fltMgr.sys .text:0x10e0, 0x2428 bytes
    // fltMgr.sys .text:0x18ca0, 0x2428 bytes
    // fltMgr.sys .text:0x10e0, 0x2428 bytes
    //
    _p50(sdk::unknown_ptr) flt_read_file_ex;
    
    // [FltReferenceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb210, 0x2520 bytes
    // fltMgr.sys .text:0xbfc0, 0x2428 bytes
    // fltMgr.sys .text:0xc1c0, 0x2428 bytes
    // fltMgr.sys .text:0xbfc0, 0x2428 bytes
    //
    _p51(sdk::unknown_ptr) flt_reference_context;
    
    // [FltReferenceFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39cc0, 0x2520 bytes
    // fltMgr.sys PAGE:0x441f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43d20, 0x2428 bytes
    // fltMgr.sys PAGE:0x441f0, 0x2428 bytes
    //
    _p52(sdk::unknown_ptr) flt_reference_file_name_information;
    
    // [FltRegisterFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ba60, 0x2520 bytes
    // fltMgr.sys PAGE:0x49890, 0x2428 bytes
    // fltMgr.sys PAGE:0x4bad0, 0x2428 bytes
    // fltMgr.sys PAGE:0x49890, 0x2428 bytes
    //
    _p53(sdk::unknown_ptr) flt_register_filter;
    
    // [FltRegisterForDataScan]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3fe30, 0x2520 bytes
    // fltMgr.sys PAGE:0x48ad0, 0x2428 bytes
    // fltMgr.sys PAGE:0x49720, 0x2428 bytes
    // fltMgr.sys PAGE:0x48ad0, 0x2428 bytes
    //
    _p54(sdk::unknown_ptr) flt_register_for_data_scan;
    
    // [FltReissueSynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39360, 0x2520 bytes
    // fltMgr.sys PAGE:0x45170, 0x2428 bytes
    // fltMgr.sys PAGE:0x453c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45170, 0x2428 bytes
    //
    _p55(sdk::unknown_ptr) flt_reissue_synchronous_io;
    
    // [FltReleaseContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8b20, 0x2520 bytes
    // fltMgr.sys .text:0x97f0, 0x2428 bytes
    // fltMgr.sys .text:0x27e0, 0x2428 bytes
    // fltMgr.sys .text:0x97f0, 0x2428 bytes
    //
    _p56(sdk::unknown_ptr) flt_release_context;
    
    // [FltReleaseContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12d20, 0x2520 bytes
    // fltMgr.sys .text:0x15e80, 0x2428 bytes
    // fltMgr.sys .text:0xf630, 0x2428 bytes
    // fltMgr.sys .text:0x15e80, 0x2428 bytes
    //
    _p57(sdk::unknown_ptr) flt_release_contexts;
    
    // [FltReleaseContextsEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12d30, 0x2520 bytes
    // fltMgr.sys .text:0x15ea0, 0x2428 bytes
    // fltMgr.sys .text:0x15e80, 0x2428 bytes
    // fltMgr.sys .text:0x15ea0, 0x2428 bytes
    //
    _p58(sdk::unknown_ptr) flt_release_contexts_ex;
    
    // [FltReleaseFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37170, 0x2520 bytes
    // fltMgr.sys PAGE:0x3cb80, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ac60, 0x2428 bytes
    // fltMgr.sys PAGE:0x3cb80, 0x2428 bytes
    //
    _p59(sdk::unknown_ptr) flt_release_file_name_information;
    
    // [FltReleasePushLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xacf0, 0x2520 bytes
    // fltMgr.sys .text:0x18f50, 0x2428 bytes
    // fltMgr.sys .text:0xbe30, 0x2428 bytes
    // fltMgr.sys .text:0x18f50, 0x2428 bytes
    //
    _p60(sdk::unknown_ptr) flt_release_push_lock;
    
    // [FltReleasePushLockEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xaff0, 0x2520 bytes
    // fltMgr.sys .text:0xba20, 0x2428 bytes
    // fltMgr.sys .text:0xc240, 0x2428 bytes
    // fltMgr.sys .text:0xba20, 0x2428 bytes
    //
    _p61(sdk::unknown_ptr) flt_release_push_lock_ex;
    
    // [FltReleaseResource]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16490, 0x2520 bytes
    // fltMgr.sys .text:0x1050, 0x2428 bytes
    // fltMgr.sys .text:0x10d0, 0x2428 bytes
    // fltMgr.sys .text:0x1050, 0x2428 bytes
    //
    _p62(sdk::unknown_ptr) flt_release_resource;
    
    // [FltRemoveExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46d00, 0x2520 bytes
    // fltMgr.sys PAGE:0x53950, 0x2428 bytes
    // fltMgr.sys PAGE:0x55910, 0x2428 bytes
    // fltMgr.sys PAGE:0x53950, 0x2428 bytes
    //
    _p63(sdk::unknown_ptr) flt_remove_extra_create_parameter;
    
    // [FltRemoveOpenReparseEntry]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33120, 0x2520 bytes
    // fltMgr.sys PAGE:0x406e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x361e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x406e0, 0x2428 bytes
    //
    _p64(sdk::unknown_ptr) flt_remove_open_reparse_entry;
    
    // [FltRequestOperationStatusCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12160, 0x2520 bytes
    // fltMgr.sys .text:0x14f30, 0x2428 bytes
    // fltMgr.sys .text:0x15110, 0x2428 bytes
    // fltMgr.sys .text:0x14f30, 0x2428 bytes
    //
    _p65(sdk::unknown_ptr) flt_request_operation_status_callback;
    
    // [FltRetainSwappedBufferMdlAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16910, 0x2520 bytes
    // fltMgr.sys .text:0x197d0, 0x2428 bytes
    // fltMgr.sys .text:0x1a450, 0x2428 bytes
    // fltMgr.sys .text:0x197d0, 0x2428 bytes
    //
    _p66(sdk::unknown_ptr) flt_retain_swapped_buffer_mdl_address;
    
    // [FltRetrieveIoPriorityInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb3e0, 0x2520 bytes
    // fltMgr.sys .text:0xc940, 0x2428 bytes
    // fltMgr.sys .text:0xc500, 0x2428 bytes
    // fltMgr.sys .text:0xc940, 0x2428 bytes
    //
    _p67(sdk::unknown_ptr) flt_retrieve_io_priority_info;
    
    // [FltReuseCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17c0, 0x2520 bytes
    // fltMgr.sys .text:0x9c30, 0x2428 bytes
    // fltMgr.sys .text:0xa430, 0x2428 bytes
    // fltMgr.sys .text:0x9c30, 0x2428 bytes
    //
    _p68(sdk::unknown_ptr) flt_reuse_callback_data;
    
    // [FltRollbackComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f010, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a010, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b980, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a010, 0x2428 bytes
    //
    _p69(sdk::unknown_ptr) flt_rollback_complete;
    
    // [FltRollbackEnlistment]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f090, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a0a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5ba10, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a0a0, 0x2428 bytes
    //
    _p70(sdk::unknown_ptr) flt_rollback_enlistment;
    
    // [FltSendMessage]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xa340, 0x2520 bytes
    // fltMgr.sys .text:0xaa60, 0x2428 bytes
    // fltMgr.sys .text:0xade0, 0x2428 bytes
    // fltMgr.sys .text:0xaa60, 0x2428 bytes
    //
    _p71(sdk::unknown_ptr) flt_send_message;
    
    // [FltSetActivityIdCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11070, 0x2520 bytes
    // fltMgr.sys .text:0x14170, 0x2428 bytes
    // fltMgr.sys .text:0x14300, 0x2428 bytes
    // fltMgr.sys .text:0x14170, 0x2428 bytes
    //
    _p72(sdk::unknown_ptr) flt_set_activity_id_callback_data;
    
    // [FltSetCallbackDataDirty]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc2d0, 0x2520 bytes
    // fltMgr.sys .text:0xe030, 0x2428 bytes
    // fltMgr.sys .text:0xdc80, 0x2428 bytes
    // fltMgr.sys .text:0xe030, 0x2428 bytes
    //
    _p73(sdk::unknown_ptr) flt_set_callback_data_dirty;
    
    // [FltSetCancelCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16f60, 0x2520 bytes
    // fltMgr.sys .text:0x1a0b0, 0x2428 bytes
    // fltMgr.sys .text:0x1a910, 0x2428 bytes
    // fltMgr.sys .text:0x1a0b0, 0x2428 bytes
    //
    _p74(sdk::unknown_ptr) flt_set_cancel_completion;
    
    // [FltSetEaFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4a9c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x56bf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58fc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56bf0, 0x2428 bytes
    //
    _p75(sdk::unknown_ptr) flt_set_ea_file;
    
    // [FltSetEcpListIntoCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46d20, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c110, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dfe0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c110, 0x2428 bytes
    //
    _p76(sdk::unknown_ptr) flt_set_ecp_list_into_callback_data;
    
    // [FltSetFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9830, 0x2520 bytes
    // fltMgr.sys .text:0x18f0, 0x2428 bytes
    // fltMgr.sys .text:0x15d0, 0x2428 bytes
    // fltMgr.sys .text:0x18f0, 0x2428 bytes
    //
    _p77(sdk::unknown_ptr) flt_set_file_context;
    
    // [FltSetFsZeroingOffset]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x159c0, 0x2520 bytes
    // fltMgr.sys .text:0x189d0, 0x2428 bytes
    // fltMgr.sys .text:0x191a0, 0x2428 bytes
    // fltMgr.sys .text:0x189d0, 0x2428 bytes
    //
    _p78(sdk::unknown_ptr) flt_set_fs_zeroing_offset;
    
    // [FltSetFsZeroingOffsetRequired]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x159e0, 0x2520 bytes
    // fltMgr.sys .text:0x18a00, 0x2428 bytes
    // fltMgr.sys .text:0x191d0, 0x2428 bytes
    // fltMgr.sys .text:0x18a00, 0x2428 bytes
    //
    _p79(sdk::unknown_ptr) flt_set_fs_zeroing_offset_required;
    
    // [FltSetInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4aa30, 0x2520 bytes
    // fltMgr.sys PAGE:0x44430, 0x2428 bytes
    // fltMgr.sys PAGE:0x37000, 0x2428 bytes
    // fltMgr.sys PAGE:0x44430, 0x2428 bytes
    //
    _p80(sdk::unknown_ptr) flt_set_information_file;
    
    // [FltSetInstanceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb5d0, 0x2520 bytes
    // fltMgr.sys .text:0xc9b0, 0x2428 bytes
    // fltMgr.sys .text:0xc7a0, 0x2428 bytes
    // fltMgr.sys .text:0xc9b0, 0x2428 bytes
    //
    _p81(sdk::unknown_ptr) flt_set_instance_context;
    
    // [FltSetIoCacheIntention]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17a60, 0x2520 bytes
    // fltMgr.sys .text:0x1ad40, 0x2428 bytes
    // fltMgr.sys .text:0x1b860, 0x2428 bytes
    // fltMgr.sys .text:0x1ad40, 0x2428 bytes
    //
    _p82(sdk::unknown_ptr) flt_set_io_cache_intention;
    
    // [FltSetIoPriorityHintIntoCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb5b0, 0x2520 bytes
    // fltMgr.sys .text:0xc980, 0x2428 bytes
    // fltMgr.sys .text:0x15a0, 0x2428 bytes
    // fltMgr.sys .text:0xc980, 0x2428 bytes
    //
    _p83(sdk::unknown_ptr) flt_set_io_priority_hint_into_callback_data;
    
    // [FltSetIoPriorityHintIntoFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15a00, 0x2520 bytes
    // fltMgr.sys .text:0x18a30, 0x2428 bytes
    // fltMgr.sys .text:0x19200, 0x2428 bytes
    // fltMgr.sys .text:0x18a30, 0x2428 bytes
    //
    _p84(sdk::unknown_ptr) flt_set_io_priority_hint_into_file_object;
    
    // [FltSetIoPriorityHintIntoThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15a10, 0x2520 bytes
    // fltMgr.sys .text:0x18a50, 0x2428 bytes
    // fltMgr.sys .text:0x19220, 0x2428 bytes
    // fltMgr.sys .text:0x18a50, 0x2428 bytes
    //
    _p85(sdk::unknown_ptr) flt_set_io_priority_hint_into_thread;
    
    // [FltSetQuotaInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4abb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x56c70, 0x2428 bytes
    // fltMgr.sys PAGE:0x59040, 0x2428 bytes
    // fltMgr.sys PAGE:0x56c70, 0x2428 bytes
    //
    _p86(sdk::unknown_ptr) flt_set_quota_information_file;
    
    // [FltSetSecurityObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ac20, 0x2520 bytes
    // fltMgr.sys PAGE:0x56ce0, 0x2428 bytes
    // fltMgr.sys PAGE:0x590b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56ce0, 0x2428 bytes
    //
    _p87(sdk::unknown_ptr) flt_set_security_object;
    
    // [FltSetStreamContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8b60, 0x2520 bytes
    // fltMgr.sys .text:0x2170, 0x2428 bytes
    // fltMgr.sys .text:0x2d60, 0x2428 bytes
    // fltMgr.sys .text:0x2170, 0x2428 bytes
    //
    _p88(sdk::unknown_ptr) flt_set_stream_context;
    
    // [FltSetStreamHandleContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8140, 0x2520 bytes
    // fltMgr.sys .text:0x2350, 0x2428 bytes
    // fltMgr.sys .text:0x3090, 0x2428 bytes
    // fltMgr.sys .text:0x2350, 0x2428 bytes
    //
    _p89(sdk::unknown_ptr) flt_set_stream_handle_context;
    
    // [FltSetTransactionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45a80, 0x2520 bytes
    // fltMgr.sys PAGE:0x478f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x48930, 0x2428 bytes
    // fltMgr.sys PAGE:0x478f0, 0x2428 bytes
    //
    _p90(sdk::unknown_ptr) flt_set_transaction_context;
    
    // [FltSetVolumeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12d50, 0x2520 bytes
    // fltMgr.sys .text:0x15ed0, 0x2428 bytes
    // fltMgr.sys .text:0x15eb0, 0x2428 bytes
    // fltMgr.sys .text:0x15ed0, 0x2428 bytes
    //
    _p91(sdk::unknown_ptr) flt_set_volume_context;
    
    // [FltSetVolumeInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x505d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a9e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5bfd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a9e0, 0x2428 bytes
    //
    _p92(sdk::unknown_ptr) flt_set_volume_information;
    
    // [FltStartFiltering]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ef70, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c240, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d040, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c240, 0x2428 bytes
    //
    _p93(sdk::unknown_ptr) flt_start_filtering;
    
    // [FltSupportsFileContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12ff0, 0x2520 bytes
    // fltMgr.sys .text:0x16140, 0x2428 bytes
    // fltMgr.sys .text:0x16110, 0x2428 bytes
    // fltMgr.sys .text:0x16140, 0x2428 bytes
    //
    _p94(sdk::unknown_ptr) flt_supports_file_contexts;
    
    // [FltSupportsFileContextsEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9ed0, 0x2520 bytes
    // fltMgr.sys .text:0x1b70, 0x2428 bytes
    // fltMgr.sys .text:0x19f0, 0x2428 bytes
    // fltMgr.sys .text:0x1b70, 0x2428 bytes
    //
    _p95(sdk::unknown_ptr) flt_supports_file_contexts_ex;
    
    // [FltSupportsStreamContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xacd0, 0x2520 bytes
    // fltMgr.sys .text:0xb4a0, 0x2428 bytes
    // fltMgr.sys .text:0xbd80, 0x2428 bytes
    // fltMgr.sys .text:0xb4a0, 0x2428 bytes
    //
    _p96(sdk::unknown_ptr) flt_supports_stream_contexts;
    
    // [FltSupportsStreamHandleContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xacd0, 0x2520 bytes
    // fltMgr.sys .text:0xb4a0, 0x2428 bytes
    // fltMgr.sys .text:0xbd80, 0x2428 bytes
    // fltMgr.sys .text:0xb4a0, 0x2428 bytes
    //
    _p97(sdk::unknown_ptr) flt_supports_stream_handle_contexts;
    
    // [FltTagFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ac90, 0x2520 bytes
    // fltMgr.sys PAGE:0x36010, 0x2428 bytes
    // fltMgr.sys PAGE:0x59120, 0x2428 bytes
    // fltMgr.sys PAGE:0x36010, 0x2428 bytes
    //
    _p98(sdk::unknown_ptr) flt_tag_file;
    
    // [FltTelemetryGlobals]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x263c0, 0x2520 bytes
    // fltMgr.sys .data:0x2c8c0, 0x2428 bytes
    // fltMgr.sys .data:0x2c9c0, 0x2428 bytes
    // fltMgr.sys .data:0x2c8c0, 0x2428 bytes
    //
    _p99(sdk::unknown_ptr) flt_telemetry_globals;
    
    // [FltUninitializeFileLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48740, 0x2520 bytes
    // fltMgr.sys PAGE:0x54a30, 0x2428 bytes
    // fltMgr.sys PAGE:0x569f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x54a30, 0x2428 bytes
    //
    _q00(sdk::unknown_ptr) flt_uninitialize_file_lock;
    
    // [FltUninitializeOplock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14310, 0x2520 bytes
    // fltMgr.sys .text:0x17570, 0x2428 bytes
    // fltMgr.sys .text:0x174c0, 0x2428 bytes
    // fltMgr.sys .text:0x17570, 0x2428 bytes
    //
    _q01(sdk::unknown_ptr) flt_uninitialize_oplock;
    
    // [FltUnloadFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b680, 0x2520 bytes
    // fltMgr.sys PAGE:0x573d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x59bb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x573d0, 0x2428 bytes
    //
    _q02(sdk::unknown_ptr) flt_unload_filter;
    
    // [FltUnregisterFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f340, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a110, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d390, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a110, 0x2428 bytes
    //
    _q03(sdk::unknown_ptr) flt_unregister_filter;
    
    // [FltUntagFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ae00, 0x2520 bytes
    // fltMgr.sys PAGE:0x36160, 0x2428 bytes
    // fltMgr.sys PAGE:0x59490, 0x2428 bytes
    // fltMgr.sys PAGE:0x36160, 0x2428 bytes
    //
    _q04(sdk::unknown_ptr) flt_untag_file;
    
    // [FltWriteFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15a20, 0x2520 bytes
    // fltMgr.sys .text:0x13c0, 0x2428 bytes
    // fltMgr.sys .text:0xf730, 0x2428 bytes
    // fltMgr.sys .text:0x13c0, 0x2428 bytes
    //
    _q05(sdk::unknown_ptr) flt_write_file;
    
    // [FltWriteFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15a80, 0x2520 bytes
    // fltMgr.sys .text:0x1420, 0x2428 bytes
    // fltMgr.sys .text:0x19240, 0x2428 bytes
    // fltMgr.sys .text:0x1420, 0x2428 bytes
    //
    _q06(sdk::unknown_ptr) flt_write_file_ex;
    
    // [FLTMGR_FILTER_FAILED_INSTANCE_SETUP]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x19480, 0x2520 bytes
    // fltMgr.sys .rdata:0x1e6c8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e838, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e6c8, 0x2428 bytes
    //
    _q07(sdk::unknown_ptr) fltmgr_filter_failed_instance_setup;
    
    // [FLTMGR_FS_ATTACH_FAILED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x194a0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1e6e8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e858, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e6e8, 0x2428 bytes
    //
    _q08(sdk::unknown_ptr) fltmgr_fs_attach_failed;
    
    // [FLTMGR_NAME_CACHING_DISABLED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x19460, 0x2520 bytes
    // fltMgr.sys .rdata:0x1e6a8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e818, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e6a8, 0x2428 bytes
    //
    _q09(sdk::unknown_ptr) fltmgr_name_caching_disabled;
    
    // [FLTMGR_TIOCTRL_ECP_GUID]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18360, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c598, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cda8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c598, 0x2428 bytes
    //
    _q10(sdk::unknown_ptr) fltmgr_tioctrl_ecp_guid;
    
    // [FLTMGR_VOLUME_ATTACH_FAILED]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x19490, 0x2520 bytes
    // fltMgr.sys .rdata:0x1e6d8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e848, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e6d8, 0x2428 bytes
    //
    _q11(sdk::unknown_ptr) fltmgr_volume_attach_failed;
    
    // [FltpAcquireLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc6c0, 0x2520 bytes
    // fltMgr.sys .text:0xe1c0, 0x2428 bytes
    // fltMgr.sys .text:0xdea0, 0x2428 bytes
    // fltMgr.sys .text:0xe1c0, 0x2428 bytes
    //
    _q12(sdk::unknown_ptr) fltp_acquire_lock;
    
    // [FltpAcquireMessageWaiterLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb360, 0x2520 bytes
    // fltMgr.sys .text:0xc380, 0x2428 bytes
    // fltMgr.sys .text:0xc330, 0x2428 bytes
    // fltMgr.sys .text:0xc380, 0x2428 bytes
    //
    _q13(sdk::unknown_ptr) fltp_acquire_message_waiter_lock;
    
    // [FltpAddMessageWaiter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xae30, 0x2520 bytes
    // fltMgr.sys .text:0xbc40, 0x2428 bytes
    // fltMgr.sys .text:0xbec0, 0x2428 bytes
    // fltMgr.sys .text:0xbc40, 0x2428 bytes
    //
    _q14(sdk::unknown_ptr) fltp_add_message_waiter;
    
    // [FltpAdjustFrameAltitudesForLegacyFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e0e4, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b198, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a968, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b198, 0x2428 bytes
    //
    _q15(sdk::unknown_ptr) fltp_adjust_frame_altitudes_for_legacy_filter;
    
    // [FltpAllocateBackPocketIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11090, 0x2520 bytes
    // fltMgr.sys .text:0x141a8, 0x2428 bytes
    // fltMgr.sys .text:0x14338, 0x2428 bytes
    // fltMgr.sys .text:0x141a8, 0x2428 bytes
    //
    _q16(sdk::unknown_ptr) fltp_allocate_back_pocket_irp_ctrl;
    
    // [FltpAllocateCallbackDataMustSucceed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16d4, 0x2520 bytes
    // fltMgr.sys .text:0x9d48, 0x2428 bytes
    // fltMgr.sys .text:0xa4e0, 0x2428 bytes
    // fltMgr.sys .text:0x9d48, 0x2428 bytes
    //
    _q17(sdk::unknown_ptr) fltp_allocate_callback_data_must_succeed;
    
    // [FltpAllocateCompletionNodeTracking]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38f94, 0x2520 bytes
    // fltMgr.sys PAGE:0x415ac, 0x2428 bytes
    // fltMgr.sys PAGE:0x3824c, 0x2428 bytes
    // fltMgr.sys PAGE:0x415ac, 0x2428 bytes
    //
    _q18(sdk::unknown_ptr) fltp_allocate_completion_node_tracking;
    
    // [FltpAllocateFileListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39368, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f058, 0x2428 bytes
    // fltMgr.sys PAGE:0x36960, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f058, 0x2428 bytes
    //
    _q19(sdk::unknown_ptr) fltp_allocate_file_list_ctrl;
    
    // [FltpAllocateFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c08c, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ac60, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ce60, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ac60, 0x2428 bytes
    //
    _q20(sdk::unknown_ptr) fltp_allocate_file_name_information;
    
    // [FltpAllocateFltCcb]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3f67c, 0x2520 bytes
    // fltMgr.sys PAGE:0x439fc, 0x2428 bytes
    // fltMgr.sys PAGE:0x37610, 0x2428 bytes
    // fltMgr.sys PAGE:0x439fc, 0x2428 bytes
    //
    _q21(sdk::unknown_ptr) fltp_allocate_flt_ccb;
    
    // [FltpAllocateInitializeNameGenerationContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8410, 0x2520 bytes
    // fltMgr.sys .text:0x2d10, 0x2428 bytes
    // fltMgr.sys .text:0x3c90, 0x2428 bytes
    // fltMgr.sys .text:0x2d10, 0x2428 bytes
    //
    _q22(sdk::unknown_ptr) fltp_allocate_initialize_name_generation_context;
    
    // [FltpAllocateIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x6150, 0x2520 bytes
    // fltMgr.sys .text:0x78a0, 0x2428 bytes
    // fltMgr.sys .text:0x85c0, 0x2428 bytes
    // fltMgr.sys .text:0x78a0, 0x2428 bytes
    //
    _q23(sdk::unknown_ptr) fltp_allocate_irp_ctrl;
    
    // [FltpAllocateIrpCtrlInternal]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x6170, 0x2520 bytes
    // fltMgr.sys .text:0x78c0, 0x2428 bytes
    // fltMgr.sys .text:0x85e0, 0x2428 bytes
    // fltMgr.sys .text:0x78c0, 0x2428 bytes
    //
    _q24(sdk::unknown_ptr) fltp_allocate_irp_ctrl_internal;
    
    // [FltpAllocateIrpCtrlMustSucceed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1764, 0x2520 bytes
    // fltMgr.sys .text:0x9dec, 0x2428 bytes
    // fltMgr.sys .text:0xa584, 0x2428 bytes
    // fltMgr.sys .text:0x9dec, 0x2428 bytes
    //
    _q25(sdk::unknown_ptr) fltp_allocate_irp_ctrl_must_succeed;
    
    // [FltpAllocateNameCacheCreateCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36740, 0x2520 bytes
    // fltMgr.sys PAGE:0x392e4, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b8d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x392e4, 0x2428 bytes
    //
    _q26(sdk::unknown_ptr) fltp_allocate_name_cache_create_ctrl;
    
    // [FltpAllocateStaticIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x112a0, 0x2520 bytes
    // fltMgr.sys .text:0x143e4, 0x2428 bytes
    // fltMgr.sys .text:0x1456c, 0x2428 bytes
    // fltMgr.sys .text:0x143e4, 0x2428 bytes
    //
    _q27(sdk::unknown_ptr) fltp_allocate_static_irp_ctrl;
    
    // [FltpAllocateStreamListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3617c, 0x2520 bytes
    // fltMgr.sys PAGE:0x39d50, 0x2428 bytes
    // fltMgr.sys PAGE:0x438f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x39d50, 0x2428 bytes
    //
    _q28(sdk::unknown_ptr) fltp_allocate_stream_list_ctrl;
    
    // [FltpAllocateTelemetryStringRoutine]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbe0c, 0x2520 bytes
    // fltMgr.sys .text:0xe4a8, 0x2428 bytes
    // fltMgr.sys .text:0xdffc, 0x2428 bytes
    // fltMgr.sys .text:0xe4a8, 0x2428 bytes
    //
    _q29(sdk::unknown_ptr) fltp_allocate_telemetry_string_routine;
    
    // [FltpAllocateTxVolContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45db4, 0x2520 bytes
    // fltMgr.sys PAGE:0x46874, 0x2428 bytes
    // fltMgr.sys PAGE:0x482b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x46874, 0x2428 bytes
    //
    _q30(sdk::unknown_ptr) fltp_allocate_tx_vol_context;
    
    // [FltpAsyncIoCompletionCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15f60, 0x2520 bytes
    // fltMgr.sys .text:0x16b0, 0x2428 bytes
    // fltMgr.sys .text:0x19760, 0x2428 bytes
    // fltMgr.sys .text:0x16b0, 0x2428 bytes
    //
    _q31(sdk::unknown_ptr) fltp_async_io_completion_callback;
    
    // [FltpAttachDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2fbac, 0x2520 bytes
    // fltMgr.sys PAGE:0x423e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x431c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x423e8, 0x2428 bytes
    //
    _q32(sdk::unknown_ptr) fltp_attach_device_object;
    
    // [FltpAttachFrame]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c9f8, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a654, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b274, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a654, 0x2428 bytes
    //
    _q33(sdk::unknown_ptr) fltp_attach_frame;
    
    // [FltpAttachStreamListCtrlToTxVolCtx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45e38, 0x2520 bytes
    // fltMgr.sys PAGE:0x46008, 0x2428 bytes
    // fltMgr.sys PAGE:0x47ccc, 0x2428 bytes
    // fltMgr.sys PAGE:0x46008, 0x2428 bytes
    //
    _q34(sdk::unknown_ptr) fltp_attach_stream_list_ctrl_to_tx_vol_ctx;
    
    // [FltpAttachToFileSystemDevice]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d624, 0x2520 bytes
    // fltMgr.sys PAGE:0x485c4, 0x2428 bytes
    // fltMgr.sys PAGE:0x48e74, 0x2428 bytes
    // fltMgr.sys PAGE:0x485c4, 0x2428 bytes
    //
    _q35(sdk::unknown_ptr) fltp_attach_to_file_system_device;
    
    // [FltpAttachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f5d8, 0x2520 bytes
    // fltMgr.sys PAGE:0x36454, 0x2428 bytes
    // fltMgr.sys PAGE:0x36a60, 0x2428 bytes
    // fltMgr.sys PAGE:0x36454, 0x2428 bytes
    //
    _q36(sdk::unknown_ptr) fltp_attach_volume;
    
    // [FltpBuildCleanupRequest]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4af48, 0x2520 bytes
    // fltMgr.sys PAGE:0x56f38, 0x2428 bytes
    // fltMgr.sys PAGE:0x5971c, 0x2428 bytes
    // fltMgr.sys PAGE:0x56f38, 0x2428 bytes
    //
    _q37(sdk::unknown_ptr) fltp_build_cleanup_request;
    
    // [FltpBuildDeviceControlRequest]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2214, 0x2520 bytes
    // fltMgr.sys .text:0x8db8, 0x2428 bytes
    // fltMgr.sys .text:0x9a3c, 0x2428 bytes
    // fltMgr.sys .text:0x8db8, 0x2428 bytes
    //
    _q38(sdk::unknown_ptr) fltp_build_device_control_request;
    
    // [FltpBuildParameterOffsetTable]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys INIT:0x5b7b0, 0x2520 bytes
    // fltMgr.sys INIT:0x666f8, 0x2428 bytes
    // fltMgr.sys INIT:0x69780, 0x2428 bytes
    // fltMgr.sys INIT:0x666f8, 0x2428 bytes
    //
    _q39(sdk::unknown_ptr) fltp_build_parameter_offset_table;
    
    // [FltpBuildRequest]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2650, 0x2520 bytes
    // fltMgr.sys .text:0x8360, 0x2428 bytes
    // fltMgr.sys .text:0x9390, 0x2428 bytes
    // fltMgr.sys .text:0x8360, 0x2428 bytes
    //
    _q40(sdk::unknown_ptr) fltp_build_request;
    
    // [FltpCacheCreateNames]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3678c, 0x2520 bytes
    // fltMgr.sys PAGE:0x398a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a460, 0x2428 bytes
    // fltMgr.sys PAGE:0x398a0, 0x2428 bytes
    //
    _q41(sdk::unknown_ptr) fltp_cache_create_names;
    
    // [FltpCalculateLegacyFilterAltitude]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49b7c, 0x2520 bytes
    // fltMgr.sys PAGE:0x5607c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5842c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5607c, 0x2428 bytes
    //
    _q42(sdk::unknown_ptr) fltp_calculate_legacy_filter_altitude;
    
    // [FltpCallOpenedFileNameHandler]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3585c, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e680, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fe8c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e680, 0x2428 bytes
    //
    _q43(sdk::unknown_ptr) fltp_call_opened_file_name_handler;
    
    // [FltpCallShortFileNameHandler]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c254, 0x2520 bytes
    // fltMgr.sys PAGE:0x36314, 0x2428 bytes
    // fltMgr.sys PAGE:0x36820, 0x2428 bytes
    // fltMgr.sys PAGE:0x36314, 0x2428 bytes
    //
    _q44(sdk::unknown_ptr) fltp_call_short_file_name_handler;
    
    // [FltpCanSimulateFileContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13014, 0x2520 bytes
    // fltMgr.sys .text:0x1616c, 0x2428 bytes
    // fltMgr.sys .text:0x1613c, 0x2428 bytes
    // fltMgr.sys .text:0x1616c, 0x2428 bytes
    //
    _q45(sdk::unknown_ptr) fltp_can_simulate_file_contexts;
    
    // [FltpCancelFileOpen]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4afc8, 0x2520 bytes
    // fltMgr.sys PAGE:0x56fc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x597a4, 0x2428 bytes
    // fltMgr.sys PAGE:0x56fc0, 0x2428 bytes
    //
    _q46(sdk::unknown_ptr) fltp_cancel_file_open;
    
    // [FltpCancelIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13644, 0x2520 bytes
    // fltMgr.sys .text:0x168dc, 0x2428 bytes
    // fltMgr.sys .text:0x167d0, 0x2428 bytes
    // fltMgr.sys .text:0x168dc, 0x2428 bytes
    //
    _q47(sdk::unknown_ptr) fltp_cancel_irp;
    
    // [FltpCancelMessageWaiter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x164b0, 0x2520 bytes
    // fltMgr.sys .text:0x18f80, 0x2428 bytes
    // fltMgr.sys .text:0x19ca0, 0x2428 bytes
    // fltMgr.sys .text:0x18f80, 0x2428 bytes
    //
    _q48(sdk::unknown_ptr) fltp_cancel_message_waiter;
    
    // [FltpCancelRoutine]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16f90, 0x2520 bytes
    // fltMgr.sys .text:0x1a0e0, 0x2428 bytes
    // fltMgr.sys .text:0x1a940, 0x2428 bytes
    // fltMgr.sys .text:0x1a0e0, 0x2428 bytes
    //
    _q49(sdk::unknown_ptr) fltp_cancel_routine;
    
    // [FltpCheckGetQuotaBufferValidity]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b080, 0x2520 bytes
    // fltMgr.sys PAGE:0x57090, 0x2428 bytes
    // fltMgr.sys PAGE:0x59874, 0x2428 bytes
    // fltMgr.sys PAGE:0x57090, 0x2428 bytes
    //
    _q50(sdk::unknown_ptr) fltp_check_get_quota_buffer_validity;
    
    // [FltpCleanupAfterDataScanConflict]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc234, 0x2520 bytes
    // fltMgr.sys .text:0xbbb4, 0x2428 bytes
    // fltMgr.sys .text:0xd8ac, 0x2428 bytes
    // fltMgr.sys .text:0xbbb4, 0x2428 bytes
    //
    _q51(sdk::unknown_ptr) fltp_cleanup_after_data_scan_conflict;
    
    // [FltpCleanupBackPocketIrpCtrls]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d488, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b104, 0x2428 bytes
    // fltMgr.sys PAGE:0x4ac08, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b104, 0x2428 bytes
    //
    _q52(sdk::unknown_ptr) fltp_cleanup_back_pocket_irp_ctrls;
    
    // [FltpCleanupCommunicationPort]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bc60, 0x2520 bytes
    // fltMgr.sys PAGE:0x43de0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45f2c, 0x2428 bytes
    // fltMgr.sys PAGE:0x43de0, 0x2428 bytes
    //
    _q53(sdk::unknown_ptr) fltp_cleanup_communication_port;
    
    // [FltpCleanupContextRegistration]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45d20, 0x2520 bytes
    // fltMgr.sys PAGE:0x531e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d774, 0x2428 bytes
    // fltMgr.sys PAGE:0x531e8, 0x2428 bytes
    //
    _q54(sdk::unknown_ptr) fltp_cleanup_context_registration;
    
    // [FltpCleanupDeviceHintEcp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32488, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e45c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f7bc, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e45c, 0x2428 bytes
    //
    _q55(sdk::unknown_ptr) fltp_cleanup_device_hint_ecp;
    
    // [FltpCleanupDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f414, 0x2520 bytes
    // fltMgr.sys PAGE:0x4233c, 0x2428 bytes
    // fltMgr.sys PAGE:0x42950, 0x2428 bytes
    // fltMgr.sys PAGE:0x4233c, 0x2428 bytes
    //
    _q56(sdk::unknown_ptr) fltp_cleanup_device_object;
    
    // [FltpCleanupFileListCtrlForInstanceRemoval]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x30e8c, 0x2520 bytes
    // fltMgr.sys PAGE:0x408c8, 0x2428 bytes
    // fltMgr.sys PAGE:0x418a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x408c8, 0x2428 bytes
    //
    _q57(sdk::unknown_ptr) fltp_cleanup_file_list_ctrl_for_instance_removal;
    
    // [FltpCleanupFileObjectContextForCleanup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33030, 0x2520 bytes
    // fltMgr.sys PAGE:0x405d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x40018, 0x2428 bytes
    // fltMgr.sys PAGE:0x405d8, 0x2428 bytes
    //
    _q58(sdk::unknown_ptr) fltp_cleanup_file_object_context_for_cleanup;
    
    // [FltpCleanupFileObjectContextForClose]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32eec, 0x2520 bytes
    // fltMgr.sys PAGE:0x4045c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ff44, 0x2428 bytes
    // fltMgr.sys PAGE:0x4045c, 0x2428 bytes
    //
    _q59(sdk::unknown_ptr) fltp_cleanup_file_object_context_for_close;
    
    // [FltpCleanupFileObjectContextsForLastFilterRemoval]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e1e8, 0x2520 bytes
    // fltMgr.sys PAGE:0x59240, 0x2428 bytes
    // fltMgr.sys PAGE:0x5afb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x59240, 0x2428 bytes
    //
    _q60(sdk::unknown_ptr) fltp_cleanup_file_object_contexts_for_last_filter_removal;
    
    // [FltpCleanupFilterVerifier]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x5081c, 0x2520 bytes
    // fltMgr.sys PAGE:0x5acc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d6b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x5acc0, 0x2428 bytes
    //
    _q61(sdk::unknown_ptr) fltp_cleanup_filter_verifier;
    
    // [FltpCleanupFrame]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3cdec, 0x2520 bytes
    // fltMgr.sys PAGE:0x4af74, 0x2428 bytes
    // fltMgr.sys PAGE:0x4aa78, 0x2428 bytes
    // fltMgr.sys PAGE:0x4af74, 0x2428 bytes
    //
    _q62(sdk::unknown_ptr) fltp_cleanup_frame;
    
    // [FltpCleanupLoadedLegacyFiltersList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e280, 0x2520 bytes
    // fltMgr.sys PAGE:0x480b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x46558, 0x2428 bytes
    // fltMgr.sys PAGE:0x480b8, 0x2428 bytes
    //
    _q63(sdk::unknown_ptr) fltp_cleanup_loaded_legacy_filters_list;
    
    // [FltpCleanupNameControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32344, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e63c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fe44, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e63c, 0x2428 bytes
    //
    _q64(sdk::unknown_ptr) fltp_cleanup_name_control;
    
    // [FltpCleanupStreamListCtrlForFileObjectClose]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x355c8, 0x2520 bytes
    // fltMgr.sys PAGE:0x3aed8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c9d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3aed8, 0x2428 bytes
    //
    _q65(sdk::unknown_ptr) fltp_cleanup_stream_list_ctrl_for_file_object_close;
    
    // [FltpCleanupStreamListCtrlForFileObjectCloseWithStreamListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8800, 0x2520 bytes
    // fltMgr.sys .text:0x8c30, 0x2428 bytes
    // fltMgr.sys .text:0x3194, 0x2428 bytes
    // fltMgr.sys .text:0x8c30, 0x2428 bytes
    //
    _q66(sdk::unknown_ptr) fltp_cleanup_stream_list_ctrl_for_file_object_close_with_stream_list_ctrl;
    
    // [FltpCleanupStreamListCtrlForInstanceRemoval]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37dec, 0x2520 bytes
    // fltMgr.sys PAGE:0x40910, 0x2428 bytes
    // fltMgr.sys PAGE:0x418e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x40910, 0x2428 bytes
    //
    _q67(sdk::unknown_ptr) fltp_cleanup_stream_list_ctrl_for_instance_removal;
    
    // [FltpCleanupTargetInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b110, 0x2520 bytes
    // fltMgr.sys PAGE:0x47318, 0x2428 bytes
    // fltMgr.sys PAGE:0x48340, 0x2428 bytes
    // fltMgr.sys PAGE:0x47318, 0x2428 bytes
    //
    _q68(sdk::unknown_ptr) fltp_cleanup_target_info;
    
    // [FltpClearPurgeFailureMode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31bf8, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ed48, 0x2428 bytes
    // fltMgr.sys PAGE:0x4132c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ed48, 0x2428 bytes
    //
    _q69(sdk::unknown_ptr) fltp_clear_purge_failure_mode;
    
    // [FltpClearPurgeFailureModeWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d7f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x58300, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a440, 0x2428 bytes
    // fltMgr.sys PAGE:0x58300, 0x2428 bytes
    //
    _q70(sdk::unknown_ptr) fltp_clear_purge_failure_mode_worker;
    
    // [FltpClientPortClose]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bd60, 0x2520 bytes
    // fltMgr.sys PAGE:0x43f00, 0x2428 bytes
    // fltMgr.sys PAGE:0x46050, 0x2428 bytes
    // fltMgr.sys PAGE:0x43f00, 0x2428 bytes
    //
    _q71(sdk::unknown_ptr) fltp_client_port_close;
    
    // [FltpClientPortDelete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bd90, 0x2520 bytes
    // fltMgr.sys PAGE:0x45c80, 0x2428 bytes
    // fltMgr.sys PAGE:0x46240, 0x2428 bytes
    // fltMgr.sys PAGE:0x45c80, 0x2428 bytes
    //
    _q72(sdk::unknown_ptr) fltp_client_port_delete;
    
    // [FltpCloseControlDevice]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3fc98, 0x2520 bytes
    // fltMgr.sys PAGE:0x43bb8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4512c, 0x2428 bytes
    // fltMgr.sys PAGE:0x43bb8, 0x2428 bytes
    //
    _q73(sdk::unknown_ptr) fltp_close_control_device;
    
    // [FltpCommonAttachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x454b4, 0x2520 bytes
    // fltMgr.sys PAGE:0x36680, 0x2428 bytes
    // fltMgr.sys PAGE:0x36c90, 0x2428 bytes
    // fltMgr.sys PAGE:0x36680, 0x2428 bytes
    //
    _q74(sdk::unknown_ptr) fltp_common_attach_volume;
    
    // [FltpCommonDetachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4565c, 0x2520 bytes
    // fltMgr.sys PAGE:0x47a5c, 0x2428 bytes
    // fltMgr.sys PAGE:0x48a9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x47a5c, 0x2428 bytes
    //
    _q75(sdk::unknown_ptr) fltp_common_detach_volume;
    
    // [FltpCommonDetachVolumeWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45700, 0x2520 bytes
    // fltMgr.sys PAGE:0x47c10, 0x2428 bytes
    // fltMgr.sys PAGE:0x48c50, 0x2428 bytes
    // fltMgr.sys PAGE:0x47c10, 0x2428 bytes
    //
    _q76(sdk::unknown_ptr) fltp_common_detach_volume_worker;
    
    // [FltpCommonDeviceControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3fca8, 0x2520 bytes
    // fltMgr.sys PAGE:0x43a78, 0x2428 bytes
    // fltMgr.sys PAGE:0x44fe8, 0x2428 bytes
    // fltMgr.sys PAGE:0x43a78, 0x2428 bytes
    //
    _q77(sdk::unknown_ptr) fltp_common_device_control;
    
    // [FltpCommonOplockCheckBreak]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14334, 0x2520 bytes
    // fltMgr.sys .text:0x175b0, 0x2428 bytes
    // fltMgr.sys .text:0x17500, 0x2428 bytes
    // fltMgr.sys .text:0x175b0, 0x2428 bytes
    //
    _q78(sdk::unknown_ptr) fltp_common_oplock_check_break;
    
    // [FltpCompleteCanceledIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16fd0, 0x2520 bytes
    // fltMgr.sys .text:0x1a130, 0x2428 bytes
    // fltMgr.sys .text:0x1a990, 0x2428 bytes
    // fltMgr.sys .text:0x1a130, 0x2428 bytes
    //
    _q79(sdk::unknown_ptr) fltp_complete_canceled_irp;
    
    // [FltpCompleteCompletionNode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc1f8, 0x2520 bytes
    // fltMgr.sys .text:0xe098, 0x2428 bytes
    // fltMgr.sys .text:0xaba8, 0x2428 bytes
    // fltMgr.sys .text:0xe098, 0x2428 bytes
    //
    _q80(sdk::unknown_ptr) fltp_complete_completion_node;
    
    // [FltpCompleteLockIrpRoutine]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13980, 0x2520 bytes
    // fltMgr.sys .text:0x16c40, 0x2428 bytes
    // fltMgr.sys .text:0x16b40, 0x2428 bytes
    // fltMgr.sys .text:0x16c40, 0x2428 bytes
    //
    _q81(sdk::unknown_ptr) fltp_complete_lock_irp_routine;
    
    // [FltpCompletePhase2Init]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e7c8, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b578, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a140, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b578, 0x2428 bytes
    //
    _q82(sdk::unknown_ptr) fltp_complete_phase2_init;
    
    // [FltpCompleteRequest]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1188, 0x2520 bytes
    // fltMgr.sys .text:0x9ff4, 0x2428 bytes
    // fltMgr.sys .text:0xab68, 0x2428 bytes
    // fltMgr.sys .text:0x9ff4, 0x2428 bytes
    //
    _q83(sdk::unknown_ptr) fltp_complete_request;
    
    // [FltpCompletionWorkerThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x488a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x54bb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x47510, 0x2428 bytes
    // fltMgr.sys PAGE:0x54bb0, 0x2428 bytes
    //
    _q84(sdk::unknown_ptr) fltp_completion_worker_thread;
    
    // [FltpComputeWaitInterval]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xac6c, 0x2520 bytes
    // fltMgr.sys .text:0xb46c, 0x2428 bytes
    // fltMgr.sys .text:0xbc98, 0x2428 bytes
    // fltMgr.sys .text:0xb46c, 0x2428 bytes
    //
    _q85(sdk::unknown_ptr) fltp_compute_wait_interval;
    
    // [FltpControlDispatch]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbea4, 0x2520 bytes
    // fltMgr.sys .text:0xb850, 0x2428 bytes
    // fltMgr.sys .text:0xc938, 0x2428 bytes
    // fltMgr.sys .text:0xb850, 0x2428 bytes
    //
    _q86(sdk::unknown_ptr) fltp_control_dispatch;
    
    // [FltpCopyOffloadCapable]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f0ec, 0x2520 bytes
    // fltMgr.sys PAGE:0x432d4, 0x2428 bytes
    // fltMgr.sys PAGE:0x43770, 0x2428 bytes
    // fltMgr.sys PAGE:0x432d4, 0x2428 bytes
    //
    _q87(sdk::unknown_ptr) fltp_copy_offload_capable;
    
    // [FltpCopyUnicodeString]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c93c, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a904, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b508, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a904, 0x2428 bytes
    //
    _q88(sdk::unknown_ptr) fltp_copy_unicode_string;
    
    // [FltpCreate]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33d70, 0x2520 bytes
    // fltMgr.sys PAGE:0x3b8b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d660, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b8b0, 0x2428 bytes
    //
    _q89(sdk::unknown_ptr) fltp_create;
    
    // [FltpCreateControlDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3dfa8, 0x2520 bytes
    // fltMgr.sys PAGE:0x489bc, 0x2428 bytes
    // fltMgr.sys PAGE:0x49344, 0x2428 bytes
    // fltMgr.sys PAGE:0x489bc, 0x2428 bytes
    //
    _q90(sdk::unknown_ptr) fltp_create_control_device_object;
    
    // [FltpCreateFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36b88, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d2e4, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e5e4, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d2e4, 0x2428 bytes
    //
    _q91(sdk::unknown_ptr) fltp_create_file;
    
    // [FltpCreateFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34970, 0x2520 bytes
    // fltMgr.sys PAGE:0x3a7f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ca30, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a7f0, 0x2428 bytes
    //
    _q92(sdk::unknown_ptr) fltp_create_file_name_information;
    
    // [FltpCreateInstanceFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38a70, 0x2520 bytes
    // fltMgr.sys PAGE:0x40af8, 0x2428 bytes
    // fltMgr.sys PAGE:0x38714, 0x2428 bytes
    // fltMgr.sys PAGE:0x40af8, 0x2428 bytes
    //
    _q93(sdk::unknown_ptr) fltp_create_instance_from_name;
    
    // [FltpCreateKtmResourceManager]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e3dc, 0x2520 bytes
    // fltMgr.sys PAGE:0x48c90, 0x2428 bytes
    // fltMgr.sys PAGE:0x49800, 0x2428 bytes
    // fltMgr.sys PAGE:0x48c90, 0x2428 bytes
    //
    _q94(sdk::unknown_ptr) fltp_create_ktm_resource_manager;
    
    // [FltpCreatePostCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3af20, 0x2520 bytes
    // fltMgr.sys PAGE:0x45ca0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46260, 0x2428 bytes
    // fltMgr.sys PAGE:0x45ca0, 0x2428 bytes
    //
    _q95(sdk::unknown_ptr) fltp_create_post_completion;
    
    // [FltpCreatePreserveFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x342b0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3b830, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dc70, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b830, 0x2428 bytes
    //
    _q96(sdk::unknown_ptr) fltp_create_preserve_file_object;
    
    // [FltpCreateVolumeDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f6c4, 0x2520 bytes
    // fltMgr.sys PAGE:0x419e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x37c30, 0x2428 bytes
    // fltMgr.sys PAGE:0x419e0, 0x2428 bytes
    //
    _q97(sdk::unknown_ptr) fltp_create_volume_device_object;
    
    // [FltpDataScanConflictProcessing]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x20e4, 0x2520 bytes
    // fltMgr.sys .text:0xba58, 0x2428 bytes
    // fltMgr.sys .text:0x9c60, 0x2428 bytes
    // fltMgr.sys .text:0xba58, 0x2428 bytes
    //
    _q98(sdk::unknown_ptr) fltp_data_scan_conflict_processing;
    
    // [FltpDataScanConflictQueuedWorkerThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x40340, 0x2520 bytes
    // fltMgr.sys PAGE:0x58360, 0x2428 bytes
    // fltMgr.sys PAGE:0x47770, 0x2428 bytes
    // fltMgr.sys PAGE:0x58360, 0x2428 bytes
    //
    _q99(sdk::unknown_ptr) fltp_data_scan_conflict_queued_worker_thread;
    
    // [FltpDataScanConflictResumeCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x403a8, 0x2520 bytes
    // fltMgr.sys PAGE:0x583d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x477e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x583d8, 0x2428 bytes
    //
    _r00(sdk::unknown_ptr) fltp_data_scan_conflict_resume_completion;
    
    // [FltpDataScanConflictWorkerThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d840, 0x2520 bytes
    // fltMgr.sys PAGE:0x584b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a4a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x584b0, 0x2428 bytes
    //
    _r01(sdk::unknown_ptr) fltp_data_scan_conflict_worker_thread;
    
    // [FltpDataScanCsqAcquireLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc570, 0x2520 bytes
    // fltMgr.sys .text:0x19940, 0x2428 bytes
    // fltMgr.sys .text:0xdac0, 0x2428 bytes
    // fltMgr.sys .text:0x19940, 0x2428 bytes
    //
    _r02(sdk::unknown_ptr) fltp_data_scan_csq_acquire_lock;
    
    // [FltpDataScanCsqCompleteCanceledIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16ba0, 0x2520 bytes
    // fltMgr.sys .text:0x19980, 0x2428 bytes
    // fltMgr.sys .text:0xd870, 0x2428 bytes
    // fltMgr.sys .text:0x19980, 0x2428 bytes
    //
    _r03(sdk::unknown_ptr) fltp_data_scan_csq_complete_canceled_irp;
    
    // [FltpDataScanCsqInsertIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc4d0, 0x2520 bytes
    // fltMgr.sys .text:0x199c0, 0x2428 bytes
    // fltMgr.sys .text:0xd960, 0x2428 bytes
    // fltMgr.sys .text:0x199c0, 0x2428 bytes
    //
    _r04(sdk::unknown_ptr) fltp_data_scan_csq_insert_irp;
    
    // [FltpDataScanCsqPeekNextIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc610, 0x2520 bytes
    // fltMgr.sys .text:0x19a70, 0x2428 bytes
    // fltMgr.sys .text:0xdb40, 0x2428 bytes
    // fltMgr.sys .text:0x19a70, 0x2428 bytes
    //
    _r05(sdk::unknown_ptr) fltp_data_scan_csq_peek_next_irp;
    
    // [FltpDataScanCsqReleaseLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc5e0, 0x2520 bytes
    // fltMgr.sys .text:0x19aa0, 0x2428 bytes
    // fltMgr.sys .text:0xdb00, 0x2428 bytes
    // fltMgr.sys .text:0x19aa0, 0x2428 bytes
    //
    _r06(sdk::unknown_ptr) fltp_data_scan_csq_release_lock;
    
    // [FltpDataScanCsqRemoveIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc5a0, 0x2520 bytes
    // fltMgr.sys .text:0x19ae0, 0x2428 bytes
    // fltMgr.sys .text:0xda70, 0x2428 bytes
    // fltMgr.sys .text:0x19ae0, 0x2428 bytes
    //
    _r07(sdk::unknown_ptr) fltp_data_scan_csq_remove_irp;
    
    // [FltpDeleteAllFileListCtrls]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f574, 0x2520 bytes
    // fltMgr.sys PAGE:0x420dc, 0x2428 bytes
    // fltMgr.sys PAGE:0x426f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x420dc, 0x2428 bytes
    //
    _r08(sdk::unknown_ptr) fltp_delete_all_file_list_ctrls;
    
    // [FltpDeleteAllStreamListCtrls]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f4ac, 0x2520 bytes
    // fltMgr.sys PAGE:0x421c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x427d4, 0x2428 bytes
    // fltMgr.sys PAGE:0x421c0, 0x2428 bytes
    //
    _r09(sdk::unknown_ptr) fltp_delete_all_stream_list_ctrls;
    
    // [FltpDeleteContextList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34410, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c270, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c480, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c270, 0x2428 bytes
    //
    _r10(sdk::unknown_ptr) fltp_delete_context_list;
    
    // [FltpDeleteTxVolContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45edc, 0x2520 bytes
    // fltMgr.sys PAGE:0x46428, 0x2428 bytes
    // fltMgr.sys PAGE:0x47e70, 0x2428 bytes
    // fltMgr.sys PAGE:0x46428, 0x2428 bytes
    //
    _r11(sdk::unknown_ptr) fltp_delete_tx_vol_context;
    
    // [FltpDequeueThrottledWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1020, 0x2520 bytes
    // fltMgr.sys .text:0xa84c, 0x2428 bytes
    // fltMgr.sys .text:0xad2c, 0x2428 bytes
    // fltMgr.sys .text:0xa84c, 0x2428 bytes
    //
    _r12(sdk::unknown_ptr) fltp_dequeue_throttled_work_item;
    
    // [FltpDetachFromFileSystemDevice]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45738, 0x2520 bytes
    // fltMgr.sys PAGE:0x47cc8, 0x2428 bytes
    // fltMgr.sys PAGE:0x496a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x47cc8, 0x2428 bytes
    //
    _r13(sdk::unknown_ptr) fltp_detach_from_file_system_device;
    
    // [FltpDetachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f904, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a498, 0x2428 bytes
    // fltMgr.sys PAGE:0x5ba7c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a498, 0x2428 bytes
    //
    _r14(sdk::unknown_ptr) fltp_detach_volume;
    
    // [FltpDetermineStaticOperationType]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11400, 0x2520 bytes
    // fltMgr.sys .text:0x14554, 0x2428 bytes
    // fltMgr.sys .text:0x146dc, 0x2428 bytes
    // fltMgr.sys .text:0x14554, 0x2428 bytes
    //
    _r15(sdk::unknown_ptr) fltp_determine_static_operation_type;
    
    // [FltpDetranslateIoctlDataBuffers]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d79c, 0x2520 bytes
    // fltMgr.sys PAGE:0x582a4, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a3e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x582a4, 0x2428 bytes
    //
    _r16(sdk::unknown_ptr) fltp_detranslate_ioctl_data_buffers;
    
    // [FltpDisableNameCachePurgeForTxRename]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x45f6c, 0x2520 bytes
    // fltMgr.sys PAGE:0x53348, 0x2428 bytes
    // fltMgr.sys PAGE:0x55408, 0x2428 bytes
    // fltMgr.sys PAGE:0x53348, 0x2428 bytes
    //
    _r17(sdk::unknown_ptr) fltp_disable_name_cache_purge_for_tx_rename;
    
    // [FltpDisableNameCachingForStream]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb46c, 0x2520 bytes
    // fltMgr.sys .text:0x9f94, 0x2428 bytes
    // fltMgr.sys .text:0xc638, 0x2428 bytes
    // fltMgr.sys .text:0x9f94, 0x2428 bytes
    //
    _r18(sdk::unknown_ptr) fltp_disable_name_caching_for_stream;
    
    // [FltpDisableNameCachingForVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc71c, 0x2520 bytes
    // fltMgr.sys .text:0xd00c, 0x2428 bytes
    // fltMgr.sys .text:0xc6fc, 0x2428 bytes
    // fltMgr.sys .text:0xd00c, 0x2428 bytes
    //
    _r19(sdk::unknown_ptr) fltp_disable_name_caching_for_volume;
    
    // [FltpDisconnectPort]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bd9c, 0x2520 bytes
    // fltMgr.sys PAGE:0x43f2c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4607c, 0x2428 bytes
    // fltMgr.sys PAGE:0x43f2c, 0x2428 bytes
    //
    _r20(sdk::unknown_ptr) fltp_disconnect_port;
    
    // [FltpDispatch]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x3090, 0x2520 bytes
    // fltMgr.sys .text:0x4830, 0x2428 bytes
    // fltMgr.sys .text:0x5570, 0x2428 bytes
    // fltMgr.sys .text:0x4830, 0x2428 bytes
    //
    _r21(sdk::unknown_ptr) fltp_dispatch;
    
    // [FltpDoAltitudeAdjustment]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49d64, 0x2520 bytes
    // fltMgr.sys PAGE:0x56284, 0x2428 bytes
    // fltMgr.sys PAGE:0x58638, 0x2428 bytes
    // fltMgr.sys PAGE:0x56284, 0x2428 bytes
    //
    _r22(sdk::unknown_ptr) fltp_do_altitude_adjustment;
    
    // [FltpDoFilterNotificationForNewVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x30fe0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3fe24, 0x2428 bytes
    // fltMgr.sys PAGE:0x4198c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fe24, 0x2428 bytes
    //
    _r23(sdk::unknown_ptr) fltp_do_filter_notification_for_new_volume;
    
    // [FltpDoInstanceDetachNotification]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49e30, 0x2520 bytes
    // fltMgr.sys PAGE:0x47af8, 0x2428 bytes
    // fltMgr.sys PAGE:0x48b38, 0x2428 bytes
    // fltMgr.sys PAGE:0x47af8, 0x2428 bytes
    //
    _r24(sdk::unknown_ptr) fltp_do_instance_detach_notification;
    
    // [FltpDoInstanceSetupNotification]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38d50, 0x2520 bytes
    // fltMgr.sys PAGE:0x413ac, 0x2428 bytes
    // fltMgr.sys PAGE:0x38534, 0x2428 bytes
    // fltMgr.sys PAGE:0x413ac, 0x2428 bytes
    //
    _r25(sdk::unknown_ptr) fltp_do_instance_setup_notification;
    
    // [FltpDoUnloadFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b6c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x5741c, 0x2428 bytes
    // fltMgr.sys PAGE:0x59bfc, 0x2428 bytes
    // fltMgr.sys PAGE:0x5741c, 0x2428 bytes
    //
    _r26(sdk::unknown_ptr) fltp_do_unload_filter;
    
    // [FltpDoVolumeNotificationForNewFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3efc4, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c2a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d1a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c2a8, 0x2428 bytes
    //
    _r27(sdk::unknown_ptr) fltp_do_volume_notification_for_new_filter;
    
    // [FltpDrainActiveCompletions]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1220, 0x2520 bytes
    // fltMgr.sys .text:0xa060, 0x2428 bytes
    // fltMgr.sys .text:0xa780, 0x2428 bytes
    // fltMgr.sys .text:0xa060, 0x2428 bytes
    //
    _r28(sdk::unknown_ptr) fltp_drain_active_completions;
    
    // [FltpDriverReinitialization]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x40430, 0x2520 bytes
    // fltMgr.sys PAGE:0x45cb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46270, 0x2428 bytes
    // fltMgr.sys PAGE:0x45cb0, 0x2428 bytes
    //
    _r29(sdk::unknown_ptr) fltp_driver_reinitialization;
    
    // [FltpEnableNameCachePurgeForTxRename]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x460b4, 0x2520 bytes
    // fltMgr.sys PAGE:0x45ec8, 0x2428 bytes
    // fltMgr.sys PAGE:0x47b78, 0x2428 bytes
    // fltMgr.sys PAGE:0x45ec8, 0x2428 bytes
    //
    _r30(sdk::unknown_ptr) fltp_enable_name_cache_purge_for_tx_rename;
    
    // [FltpEnableNameCachingForStream]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb418, 0x2520 bytes
    // fltMgr.sys .text:0x9f20, 0x2428 bytes
    // fltMgr.sys .text:0xc5c0, 0x2428 bytes
    // fltMgr.sys .text:0x9f20, 0x2428 bytes
    //
    _r31(sdk::unknown_ptr) fltp_enable_name_caching_for_stream;
    
    // [FltpEnableNameCachingForVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc6cc, 0x2520 bytes
    // fltMgr.sys .text:0xcf84, 0x2428 bytes
    // fltMgr.sys .text:0xc698, 0x2428 bytes
    // fltMgr.sys .text:0xcf84, 0x2428 bytes
    //
    _r32(sdk::unknown_ptr) fltp_enable_name_caching_for_volume;
    
    // [FltpEnableStreamListForSectionContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37368, 0x2520 bytes
    // fltMgr.sys PAGE:0x3eb4c, 0x2428 bytes
    // fltMgr.sys PAGE:0x41724, 0x2428 bytes
    // fltMgr.sys PAGE:0x3eb4c, 0x2428 bytes
    //
    _r33(sdk::unknown_ptr) fltp_enable_stream_list_for_section_contexts;
    
    // [FltpEnlistTxVolContextInTransaction]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46208, 0x2520 bytes
    // fltMgr.sys PAGE:0x46748, 0x2428 bytes
    // fltMgr.sys PAGE:0x4818c, 0x2428 bytes
    // fltMgr.sys PAGE:0x46748, 0x2428 bytes
    //
    _r34(sdk::unknown_ptr) fltp_enlist_tx_vol_context_in_transaction;
    
    // [FltpEnumerateAggregateFilterInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47820, 0x2520 bytes
    // fltMgr.sys PAGE:0x47e18, 0x2428 bytes
    // fltMgr.sys PAGE:0x462b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x47e18, 0x2428 bytes
    //
    _r35(sdk::unknown_ptr) fltp_enumerate_aggregate_filter_information;
    
    // [FltpEnumerateFileSystemVolumes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3db5c, 0x2520 bytes
    // fltMgr.sys PAGE:0x48820, 0x2428 bytes
    // fltMgr.sys PAGE:0x49160, 0x2428 bytes
    // fltMgr.sys PAGE:0x48820, 0x2428 bytes
    //
    _r36(sdk::unknown_ptr) fltp_enumerate_file_system_volumes;
    
    // [FltpEnumerateMiniFilterOnlyInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47bbc, 0x2520 bytes
    // fltMgr.sys PAGE:0x540dc, 0x2428 bytes
    // fltMgr.sys PAGE:0x5609c, 0x2428 bytes
    // fltMgr.sys PAGE:0x540dc, 0x2428 bytes
    //
    _r37(sdk::unknown_ptr) fltp_enumerate_mini_filter_only_information;
    
    // [FltpEnumerateRegistryInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x388dc, 0x2520 bytes
    // fltMgr.sys PAGE:0x409b4, 0x2428 bytes
    // fltMgr.sys PAGE:0x385d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x409b4, 0x2428 bytes
    //
    _r38(sdk::unknown_ptr) fltp_enumerate_registry_instances;
    
    // [FltpEnumerateVolumeInformationInternal]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47ce8, 0x2520 bytes
    // fltMgr.sys PAGE:0x46b70, 0x2428 bytes
    // fltMgr.sys PAGE:0x46ef0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46b70, 0x2428 bytes
    //
    _r39(sdk::unknown_ptr) fltp_enumerate_volume_information_internal;
    
    // [FltpExpandFilePath]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3625c, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e5cc, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fbbc, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e5cc, 0x2428 bytes
    //
    _r40(sdk::unknown_ptr) fltp_expand_file_path;
    
    // [FltpExpandFilePathCallout]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11b0, 0x2520 bytes
    // fltMgr.sys .text:0x19630, 0x2428 bytes
    // fltMgr.sys .text:0xcea0, 0x2428 bytes
    // fltMgr.sys .text:0x19630, 0x2428 bytes
    //
    _r41(sdk::unknown_ptr) fltp_expand_file_path_callout;
    
    // [FltpExpandFilePathWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32550, 0x2520 bytes
    // fltMgr.sys PAGE:0x3dbf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3efec, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dbf0, 0x2428 bytes
    //
    _r42(sdk::unknown_ptr) fltp_expand_file_path_worker;
    
    // [FltpExpandShortNames]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37854, 0x2520 bytes
    // fltMgr.sys PAGE:0x377e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x403a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x377e0, 0x2428 bytes
    //
    _r43(sdk::unknown_ptr) fltp_expand_short_names;
    
    // [FltpExtendIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x114a0, 0x2520 bytes
    // fltMgr.sys .text:0xd810, 0x2428 bytes
    // fltMgr.sys .text:0xd174, 0x2428 bytes
    // fltMgr.sys .text:0xd810, 0x2428 bytes
    //
    _r44(sdk::function<struct fltmgr::completion_node_t*(struct fltmgr::irp_ctrl_t*)>*) fltp_extend_irp_ctrl;
    
    // [FltpFastIoCheckIfPossible]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48980, 0x2520 bytes
    // fltMgr.sys PAGE:0x54cc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56b70, 0x2428 bytes
    // fltMgr.sys PAGE:0x54cc0, 0x2428 bytes
    //
    _r45(sdk::unknown_ptr) fltp_fast_io_check_if_possible;
    
    // [FltpFastIoDetachDevice]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ad80, 0x2520 bytes
    // fltMgr.sys PAGE:0x450a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45360, 0x2428 bytes
    // fltMgr.sys PAGE:0x450a0, 0x2428 bytes
    //
    _r46(sdk::unknown_ptr) fltp_fast_io_detach_device;
    
    // [FltpFastIoDetachDeviceWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f3e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x426a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x434b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x426a0, 0x2428 bytes
    //
    _r47(sdk::unknown_ptr) fltp_fast_io_detach_device_worker;
    
    // [FltpFastIoDeviceControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31cd0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d9f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43a80, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d9f0, 0x2428 bytes
    //
    _r48(sdk::unknown_ptr) fltp_fast_io_device_control;
    
    // [FltpFastIoLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x319a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x38860, 0x2428 bytes
    // fltMgr.sys PAGE:0x39f20, 0x2428 bytes
    // fltMgr.sys PAGE:0x38860, 0x2428 bytes
    //
    _r49(sdk::unknown_ptr) fltp_fast_io_lock;
    
    // [FltpFastIoMdlCommon]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x15fa8, 0x2520 bytes
    // fltMgr.sys .text:0x18a6c, 0x2428 bytes
    // fltMgr.sys .text:0x197bc, 0x2428 bytes
    // fltMgr.sys .text:0x18a6c, 0x2428 bytes
    //
    _r50(sdk::unknown_ptr) fltp_fast_io_mdl_common;
    
    // [FltpFastIoMdlRead]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x317d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x44250, 0x2428 bytes
    // fltMgr.sys PAGE:0x43d80, 0x2428 bytes
    // fltMgr.sys PAGE:0x44250, 0x2428 bytes
    //
    _r51(sdk::unknown_ptr) fltp_fast_io_mdl_read;
    
    // [FltpFastIoMdlReadComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x18a0, 0x2520 bytes
    // fltMgr.sys .text:0xc220, 0x2428 bytes
    // fltMgr.sys .text:0x9b20, 0x2428 bytes
    // fltMgr.sys .text:0xc220, 0x2428 bytes
    //
    _r52(sdk::unknown_ptr) fltp_fast_io_mdl_read_complete;
    
    // [FltpFastIoMdlReadCompleteCompressed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x139f0, 0x2520 bytes
    // fltMgr.sys .text:0x16cc0, 0x2428 bytes
    // fltMgr.sys .text:0x16bc0, 0x2428 bytes
    // fltMgr.sys .text:0x16cc0, 0x2428 bytes
    //
    _r53(sdk::unknown_ptr) fltp_fast_io_mdl_read_complete_compressed;
    
    // [FltpFastIoMdlWriteComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb860, 0x2520 bytes
    // fltMgr.sys .text:0xcce0, 0x2428 bytes
    // fltMgr.sys .text:0xcce0, 0x2428 bytes
    // fltMgr.sys .text:0xcce0, 0x2428 bytes
    //
    _r54(sdk::unknown_ptr) fltp_fast_io_mdl_write_complete;
    
    // [FltpFastIoMdlWriteCompleteCompressed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13a30, 0x2520 bytes
    // fltMgr.sys .text:0x16d10, 0x2428 bytes
    // fltMgr.sys .text:0x16c10, 0x2428 bytes
    // fltMgr.sys .text:0x16d10, 0x2428 bytes
    //
    _r55(sdk::unknown_ptr) fltp_fast_io_mdl_write_complete_compressed;
    
    // [FltpFastIoPrepareMdlWrite]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3aac0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45960, 0x2428 bytes
    // fltMgr.sys PAGE:0x45c80, 0x2428 bytes
    // fltMgr.sys PAGE:0x45960, 0x2428 bytes
    //
    _r56(sdk::unknown_ptr) fltp_fast_io_prepare_mdl_write;
    
    // [FltpFastIoQueryBasicInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33150, 0x2520 bytes
    // fltMgr.sys PAGE:0x38ef0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a930, 0x2428 bytes
    // fltMgr.sys PAGE:0x38ef0, 0x2428 bytes
    //
    _r57(sdk::unknown_ptr) fltp_fast_io_query_basic_info;
    
    // [FltpFastIoQueryNetworkOpenInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32d50, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d130, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ea90, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d130, 0x2428 bytes
    //
    _r58(sdk::unknown_ptr) fltp_fast_io_query_network_open_info;
    
    // [FltpFastIoQueryOpen]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33a00, 0x2520 bytes
    // fltMgr.sys PAGE:0x3b490, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d2e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b490, 0x2428 bytes
    //
    _r59(sdk::unknown_ptr) fltp_fast_io_query_open;
    
    // [FltpFastIoQueryStandardInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x337d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3a640, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c810, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a640, 0x2428 bytes
    //
    _r60(sdk::unknown_ptr) fltp_fast_io_query_standard_info;
    
    // [FltpFastIoRead]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33b90, 0x2520 bytes
    // fltMgr.sys PAGE:0x3b2a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d470, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b2a0, 0x2428 bytes
    //
    _r61(sdk::unknown_ptr) fltp_fast_io_read;
    
    // [FltpFastIoReadCompressed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48b80, 0x2520 bytes
    // fltMgr.sys PAGE:0x54ed0, 0x2428 bytes
    // fltMgr.sys PAGE:0x56d80, 0x2428 bytes
    // fltMgr.sys PAGE:0x54ed0, 0x2428 bytes
    //
    _r62(sdk::unknown_ptr) fltp_fast_io_read_compressed;
    
    // [FltpFastIoUnlockAll]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48c20, 0x2520 bytes
    // fltMgr.sys PAGE:0x54f70, 0x2428 bytes
    // fltMgr.sys PAGE:0x56e20, 0x2428 bytes
    // fltMgr.sys PAGE:0x54f70, 0x2428 bytes
    //
    _r63(sdk::unknown_ptr) fltp_fast_io_unlock_all;
    
    // [FltpFastIoUnlockAllByKey]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48e10, 0x2520 bytes
    // fltMgr.sys PAGE:0x55170, 0x2428 bytes
    // fltMgr.sys PAGE:0x57020, 0x2428 bytes
    // fltMgr.sys PAGE:0x55170, 0x2428 bytes
    //
    _r64(sdk::unknown_ptr) fltp_fast_io_unlock_all_by_key;
    
    // [FltpFastIoUnlockSingle]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39ac0, 0x2520 bytes
    // fltMgr.sys PAGE:0x38650, 0x2428 bytes
    // fltMgr.sys PAGE:0x39d10, 0x2428 bytes
    // fltMgr.sys PAGE:0x38650, 0x2428 bytes
    //
    _r65(sdk::unknown_ptr) fltp_fast_io_unlock_single;
    
    // [FltpFastIoWrite]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x335e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3b0b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d0f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b0b0, 0x2428 bytes
    //
    _r66(sdk::unknown_ptr) fltp_fast_io_write;
    
    // [FltpFastIoWriteCompressed]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49000, 0x2520 bytes
    // fltMgr.sys PAGE:0x55370, 0x2428 bytes
    // fltMgr.sys PAGE:0x57220, 0x2428 bytes
    // fltMgr.sys PAGE:0x55370, 0x2428 bytes
    //
    _r67(sdk::unknown_ptr) fltp_fast_io_write_compressed;
    
    // [FltpFilterCountInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47dd0, 0x2520 bytes
    // fltMgr.sys PAGE:0x483b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46850, 0x2428 bytes
    // fltMgr.sys PAGE:0x483b0, 0x2428 bytes
    //
    _r68(sdk::unknown_ptr) fltp_filter_count_instances;
    
    // [FltpFilterMessage]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8eec, 0x2520 bytes
    // fltMgr.sys .text:0xb720, 0x2428 bytes
    // fltMgr.sys .text:0x2434, 0x2428 bytes
    // fltMgr.sys .text:0xb720, 0x2428 bytes
    //
    _r69(sdk::unknown_ptr) fltp_filter_message;
    
    // [FltpFilterReply]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1e74, 0x2520 bytes
    // fltMgr.sys .text:0xb52c, 0x2428 bytes
    // fltMgr.sys .text:0x2240, 0x2428 bytes
    // fltMgr.sys .text:0xb52c, 0x2428 bytes
    //
    _r70(sdk::unknown_ptr) fltp_filter_reply;
    
    // [FltpFilterVerifierThunks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x24610, 0x2520 bytes
    // fltMgr.sys .data:0x2a660, 0x2428 bytes
    // fltMgr.sys .data:0x2a660, 0x2428 bytes
    // fltMgr.sys .data:0x2a660, 0x2428 bytes
    //
    _r71(sdk::unknown_ptr) fltp_filter_verifier_thunks;
    
    // [FltpFindCharReverse]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36120, 0x2520 bytes
    // fltMgr.sys PAGE:0x36d9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fa70, 0x2428 bytes
    // fltMgr.sys PAGE:0x36d9c, 0x2428 bytes
    //
    _r72(sdk::unknown_ptr) fltp_find_char_reverse;
    
    // [FltpFindFirst]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4fafc, 0x2520 bytes
    // fltMgr.sys PAGE:0x468f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46c68, 0x2428 bytes
    // fltMgr.sys PAGE:0x468f0, 0x2428 bytes
    //
    _r73(sdk::unknown_ptr) fltp_find_first;
    
    // [FltpFindFrameForDeviceStack]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a348, 0x2520 bytes
    // fltMgr.sys PAGE:0x44f80, 0x2428 bytes
    // fltMgr.sys PAGE:0x44624, 0x2428 bytes
    // fltMgr.sys PAGE:0x44f80, 0x2428 bytes
    //
    _r74(sdk::unknown_ptr) fltp_find_frame_for_device_stack;
    
    // [FltpFindFrameForFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c4b8, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a220, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b8a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a220, 0x2428 bytes
    //
    _r75(sdk::unknown_ptr) fltp_find_frame_for_filter;
    
    // [FltpFindNext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4fc44, 0x2520 bytes
    // fltMgr.sys PAGE:0x469e4, 0x2428 bytes
    // fltMgr.sys PAGE:0x46d5c, 0x2428 bytes
    // fltMgr.sys PAGE:0x469e4, 0x2428 bytes
    //
    _r76(sdk::unknown_ptr) fltp_find_next;
    
    // [FltpFreeBackPocketIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11840, 0x2520 bytes
    // fltMgr.sys .text:0x14608, 0x2428 bytes
    // fltMgr.sys .text:0x14790, 0x2428 bytes
    // fltMgr.sys .text:0x14608, 0x2428 bytes
    //
    _r77(sdk::unknown_ptr) fltp_free_back_pocket_irp_ctrl;
    
    // [FltpFreeCallbackDataMdlChain]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1854, 0x2520 bytes
    // fltMgr.sys .text:0x9ce0, 0x2428 bytes
    // fltMgr.sys .text:0xa3dc, 0x2428 bytes
    // fltMgr.sys .text:0x9ce0, 0x2428 bytes
    //
    _r78(sdk::unknown_ptr) fltp_free_callback_data_mdl_chain;
    
    // [FltpFreeCompletionNodeTracking]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12c8, 0x2520 bytes
    // fltMgr.sys .text:0xa304, 0x2428 bytes
    // fltMgr.sys .text:0xaa24, 0x2428 bytes
    // fltMgr.sys .text:0xa304, 0x2428 bytes
    //
    _r79(sdk::unknown_ptr) fltp_free_completion_node_tracking;
    
    // [FltpFreeFltCcb]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4fd80, 0x2520 bytes
    // fltMgr.sys PAGE:0x43d88, 0x2428 bytes
    // fltMgr.sys PAGE:0x452fc, 0x2428 bytes
    // fltMgr.sys PAGE:0x43d88, 0x2428 bytes
    //
    _r80(sdk::unknown_ptr) fltp_free_flt_ccb;
    
    // [FltpFreeFrameLookasideLists]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d3a4, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b00c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4ab10, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b00c, 0x2428 bytes
    //
    _r81(sdk::unknown_ptr) fltp_free_frame_lookaside_lists;
    
    // [FltpFreeInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x312e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x400cc, 0x2428 bytes
    // fltMgr.sys PAGE:0x40ebc, 0x2428 bytes
    // fltMgr.sys PAGE:0x400cc, 0x2428 bytes
    //
    _r82(sdk::unknown_ptr) fltp_free_instance;
    
    // [FltpFreeIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x4040, 0x2520 bytes
    // fltMgr.sys .text:0x4620, 0x2428 bytes
    // fltMgr.sys .text:0x5360, 0x2428 bytes
    // fltMgr.sys .text:0x4620, 0x2428 bytes
    //
    _r83(sdk::unknown_ptr) fltp_free_irp_ctrl;
    
    // [FltpFreeMdlChain]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1694, 0x2520 bytes
    // fltMgr.sys .text:0xc3a0, 0x2428 bytes
    // fltMgr.sys .text:0xa0a8, 0x2428 bytes
    // fltMgr.sys .text:0xc3a0, 0x2428 bytes
    //
    _r84(sdk::unknown_ptr) fltp_free_mdl_chain;
    
    // [FltpFreeNameCacheCreateCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x322e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3cdac, 0x2428 bytes
    // fltMgr.sys PAGE:0x3be00, 0x2428 bytes
    // fltMgr.sys PAGE:0x3cdac, 0x2428 bytes
    //
    _r85(sdk::unknown_ptr) fltp_free_name_cache_create_ctrl;
    
    // [FltpFreeNameGenerationContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8360, 0x2520 bytes
    // fltMgr.sys .text:0x21ac, 0x2428 bytes
    // fltMgr.sys .text:0x9d20, 0x2428 bytes
    // fltMgr.sys .text:0x21ac, 0x2428 bytes
    //
    _r86(sdk::unknown_ptr) fltp_free_name_generation_context;
    
    // [FltpFreeStaticIrpCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11934, 0x2520 bytes
    // fltMgr.sys .text:0x1470c, 0x2428 bytes
    // fltMgr.sys .text:0x14894, 0x2428 bytes
    // fltMgr.sys .text:0x1470c, 0x2428 bytes
    //
    _r87(sdk::unknown_ptr) fltp_free_static_irp_ctrl;
    
    // [FltpFreeTelemetryStringRoutine]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbe00, 0x2520 bytes
    // fltMgr.sys .text:0xe484, 0x2428 bytes
    // fltMgr.sys .text:0xe028, 0x2428 bytes
    // fltMgr.sys .text:0xe484, 0x2428 bytes
    //
    _r88(sdk::unknown_ptr) fltp_free_telemetry_string_routine;
    
    // [FltpFreeTxVolStreamListCtrlEntries]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x463f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x4659c, 0x2428 bytes
    // fltMgr.sys PAGE:0x47fe0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4659c, 0x2428 bytes
    //
    _r89(sdk::unknown_ptr) fltp_free_tx_vol_stream_list_ctrl_entries;
    
    // [FltpFreeUnicodeString]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c9cc, 0x2520 bytes
    // fltMgr.sys PAGE:0x48b78, 0x2428 bytes
    // fltMgr.sys PAGE:0x497c8, 0x2428 bytes
    // fltMgr.sys PAGE:0x48b78, 0x2428 bytes
    //
    _r90(sdk::unknown_ptr) fltp_free_unicode_string;
    
    // [FltpFreeVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x308c8, 0x2520 bytes
    // fltMgr.sys PAGE:0x41ee8, 0x2428 bytes
    // fltMgr.sys PAGE:0x424d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x41ee8, 0x2428 bytes
    //
    _r91(sdk::unknown_ptr) fltp_free_volume;
    
    // [FltpFsControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33490, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c9f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e0c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c9f0, 0x2428 bytes
    //
    _r92(sdk::unknown_ptr) fltp_fs_control;
    
    // [FltpFsControlCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb020, 0x2520 bytes
    // fltMgr.sys .text:0xbf90, 0x2428 bytes
    // fltMgr.sys .text:0xbff0, 0x2428 bytes
    // fltMgr.sys .text:0xbf90, 0x2428 bytes
    //
    _r93(sdk::unknown_ptr) fltp_fs_control_completion;
    
    // [FltpFsControlLoadFileSystem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49098, 0x2520 bytes
    // fltMgr.sys PAGE:0x55410, 0x2428 bytes
    // fltMgr.sys PAGE:0x572c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55410, 0x2428 bytes
    //
    _r94(sdk::unknown_ptr) fltp_fs_control_load_file_system;
    
    // [FltpFsControlMountVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2ffd8, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f6cc, 0x2428 bytes
    // fltMgr.sys PAGE:0x41e40, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f6cc, 0x2428 bytes
    //
    _r95(sdk::unknown_ptr) fltp_fs_control_mount_volume;
    
    // [FltpFsNotification]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d510, 0x2520 bytes
    // fltMgr.sys PAGE:0x48450, 0x2428 bytes
    // fltMgr.sys PAGE:0x48d00, 0x2428 bytes
    // fltMgr.sys PAGE:0x48450, 0x2428 bytes
    //
    _r96(sdk::unknown_ptr) fltp_fs_notification;
    
    // [FltpFsNotificationActual]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d534, 0x2520 bytes
    // fltMgr.sys PAGE:0x48478, 0x2428 bytes
    // fltMgr.sys PAGE:0x48d28, 0x2428 bytes
    // fltMgr.sys PAGE:0x48478, 0x2428 bytes
    //
    _r97(sdk::unknown_ptr) fltp_fs_notification_actual;
    
    // [FltpFsRtlCompletionRoutine]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14510, 0x2520 bytes
    // fltMgr.sys .text:0x177b0, 0x2428 bytes
    // fltMgr.sys .text:0x17700, 0x2428 bytes
    // fltMgr.sys .text:0x177b0, 0x2428 bytes
    //
    _r98(sdk::unknown_ptr) fltp_fs_rtl_completion_routine;
    
    // [FltpGenerateDeviceHintEcp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x323bc, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e4d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f830, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e4d0, 0x2428 bytes
    //
    _r99(sdk::unknown_ptr) fltp_generate_device_hint_ecp;
    
    // [FltpGenerateUniqueIdentifierForObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbe7c, 0x2520 bytes
    // fltMgr.sys .text:0x1a1a4, 0x2428 bytes
    // fltMgr.sys .text:0x1a9d8, 0x2428 bytes
    // fltMgr.sys .text:0x1a1a4, 0x2428 bytes
    //
    _s00(sdk::unknown_ptr) fltp_generate_unique_identifier_for_object;
    
    // [FltpGetBaseDeviceObjectName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d98c, 0x2520 bytes
    // fltMgr.sys PAGE:0x48578, 0x2428 bytes
    // fltMgr.sys PAGE:0x48e28, 0x2428 bytes
    // fltMgr.sys PAGE:0x48578, 0x2428 bytes
    //
    _s01(sdk::unknown_ptr) fltp_get_base_device_object_name;
    
    // [FltpGetBoundTransaction]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb400, 0x2520 bytes
    // fltMgr.sys .text:0x9e94, 0x2428 bytes
    // fltMgr.sys .text:0xc534, 0x2428 bytes
    // fltMgr.sys .text:0x9e94, 0x2428 bytes
    //
    _s02(sdk::unknown_ptr) fltp_get_bound_transaction;
    
    // [FltpGetCallbackNodeForInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14d4, 0x2520 bytes
    // fltMgr.sys .text:0x9e48, 0x2428 bytes
    // fltMgr.sys .text:0xce4c, 0x2428 bytes
    // fltMgr.sys .text:0x9e48, 0x2428 bytes
    //
    _s03(sdk::unknown_ptr) fltp_get_callback_node_for_instance;
    
    // [FltpGetContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x130d4, 0x2520 bytes
    // fltMgr.sys .text:0x16240, 0x2428 bytes
    // fltMgr.sys .text:0x16210, 0x2428 bytes
    // fltMgr.sys .text:0x16240, 0x2428 bytes
    //
    _s04(sdk::unknown_ptr) fltp_get_contexts;
    
    // [FltpGetDeviceObjectFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47e4c, 0x2520 bytes
    // fltMgr.sys PAGE:0x454f4, 0x2428 bytes
    // fltMgr.sys PAGE:0x457b4, 0x2428 bytes
    // fltMgr.sys PAGE:0x454f4, 0x2428 bytes
    //
    _s05(sdk::unknown_ptr) fltp_get_device_object_from_name;
    
    // [FltpGetDriverVersion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c384, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a088, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c560, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a088, 0x2428 bytes
    //
    _s06(sdk::unknown_ptr) fltp_get_driver_version;
    
    // [FltpGetFileListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9b7c, 0x2520 bytes
    // fltMgr.sys .text:0x1928, 0x2428 bytes
    // fltMgr.sys .text:0x17dc, 0x2428 bytes
    // fltMgr.sys .text:0x1928, 0x2428 bytes
    //
    _s07(sdk::unknown_ptr) fltp_get_file_list_ctrl;
    
    // [FltpGetFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34ed0, 0x2520 bytes
    // fltMgr.sys PAGE:0x39430, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b230, 0x2428 bytes
    // fltMgr.sys PAGE:0x39430, 0x2428 bytes
    //
    _s08(sdk::unknown_ptr) fltp_get_file_name;
    
    // [FltpGetFileNameFromFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36490, 0x2520 bytes
    // fltMgr.sys PAGE:0x39f50, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b5f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x39f50, 0x2428 bytes
    //
    _s09(sdk::unknown_ptr) fltp_get_file_name_from_file_object;
    
    // [FltpGetFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x6830, 0x2520 bytes
    // fltMgr.sys .text:0x2f40, 0x2428 bytes
    // fltMgr.sys .text:0x3ec0, 0x2428 bytes
    // fltMgr.sys .text:0x2f40, 0x2428 bytes
    //
    _s10(sdk::unknown_ptr) fltp_get_file_name_information;
    
    // [FltpGetFileNameOpenById]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4cc98, 0x2520 bytes
    // fltMgr.sys PAGE:0x57cb8, 0x2428 bytes
    // fltMgr.sys PAGE:0x36218, 0x2428 bytes
    // fltMgr.sys PAGE:0x57cb8, 0x2428 bytes
    //
    _s11(sdk::unknown_ptr) fltp_get_file_name_open_by_id;
    
    // [FltpGetFileNameOpenByIdCallout]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x167e0, 0x2520 bytes
    // fltMgr.sys .text:0x19660, 0x2428 bytes
    // fltMgr.sys .text:0x1150, 0x2428 bytes
    // fltMgr.sys .text:0x19660, 0x2428 bytes
    //
    _s12(sdk::unknown_ptr) fltp_get_file_name_open_by_id_callout;
    
    // [FltpGetFileNameOpenByIdWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ccfc, 0x2520 bytes
    // fltMgr.sys PAGE:0x57d2c, 0x2428 bytes
    // fltMgr.sys PAGE:0x36280, 0x2428 bytes
    // fltMgr.sys PAGE:0x57d2c, 0x2428 bytes
    //
    _s13(sdk::unknown_ptr) fltp_get_file_name_open_by_id_worker;
    
    // [FltpGetFltVolumeFromAttachmentList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x457a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45424, 0x2428 bytes
    // fltMgr.sys PAGE:0x456e4, 0x2428 bytes
    // fltMgr.sys PAGE:0x45424, 0x2428 bytes
    //
    _s14(sdk::unknown_ptr) fltp_get_flt_volume_from_attachment_list;
    
    // [FltpGetFrameZeroVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f278, 0x2520 bytes
    // fltMgr.sys PAGE:0x430cc, 0x2428 bytes
    // fltMgr.sys PAGE:0x43698, 0x2428 bytes
    // fltMgr.sys PAGE:0x430cc, 0x2428 bytes
    //
    _s15(sdk::unknown_ptr) fltp_get_frame_zero_volume;
    
    // [FltpGetFsDeviceObjectAfterMount]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1138, 0x2520 bytes
    // fltMgr.sys .text:0xa7e0, 0x2428 bytes
    // fltMgr.sys .text:0xacc0, 0x2428 bytes
    // fltMgr.sys .text:0xa7e0, 0x2428 bytes
    //
    _s16(sdk::unknown_ptr) fltp_get_fs_device_object_after_mount;
    
    // [FltpGetInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4fdcc, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a664, 0x2428 bytes
    // fltMgr.sys PAGE:0x5bc50, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a664, 0x2428 bytes
    //
    _s17(sdk::unknown_ptr) fltp_get_information;
    
    // [FltpGetInstanceAltitude]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3b564, 0x2520 bytes
    // fltMgr.sys PAGE:0x493bc, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c86c, 0x2428 bytes
    // fltMgr.sys PAGE:0x493bc, 0x2428 bytes
    //
    _s18(sdk::unknown_ptr) fltp_get_instance_altitude;
    
    // [FltpGetIoTargetFromFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8630, 0x2520 bytes
    // fltMgr.sys .text:0x1f70, 0x2428 bytes
    // fltMgr.sys .text:0x2b90, 0x2428 bytes
    // fltMgr.sys .text:0x1f70, 0x2428 bytes
    //
    _s19(sdk::unknown_ptr) fltp_get_io_target_from_file_object;
    
    // [FltpGetLegacyFilterInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x47f14, 0x2520 bytes
    // fltMgr.sys PAGE:0x5425c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5621c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5425c, 0x2428 bytes
    //
    _s20(sdk::unknown_ptr) fltp_get_legacy_filter_information;
    
    // [FltpGetLegacyInstanceInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x480c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x54428, 0x2428 bytes
    // fltMgr.sys PAGE:0x563e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x54428, 0x2428 bytes
    //
    _s21(sdk::unknown_ptr) fltp_get_legacy_instance_information;
    
    // [FltpGetLoadOrderGroupRegistryValue]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3af24, 0x2520 bytes
    // fltMgr.sys PAGE:0x491c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4cad0, 0x2428 bytes
    // fltMgr.sys PAGE:0x491c0, 0x2428 bytes
    //
    _s22(sdk::unknown_ptr) fltp_get_load_order_group_registry_value;
    
    // [FltpGetLoadedLegacyFiltersList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e2dc, 0x2520 bytes
    // fltMgr.sys PAGE:0x48120, 0x2428 bytes
    // fltMgr.sys PAGE:0x465c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x48120, 0x2428 bytes
    //
    _s23(sdk::unknown_ptr) fltp_get_loaded_legacy_filters_list;
    
    // [FltpGetMessage]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x23c4, 0x2520 bytes
    // fltMgr.sys .text:0xb4c4, 0x2428 bytes
    // fltMgr.sys .text:0x21d8, 0x2428 bytes
    // fltMgr.sys .text:0xb4c4, 0x2428 bytes
    //
    _s24(sdk::unknown_ptr) fltp_get_message;
    
    // [FltpGetNextCallbackNodeForInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8d1c, 0x2520 bytes
    // fltMgr.sys .text:0x8c78, 0x2428 bytes
    // fltMgr.sys .text:0x9900, 0x2428 bytes
    // fltMgr.sys .text:0x8c78, 0x2428 bytes
    //
    _s25(sdk::unknown_ptr) fltp_get_next_callback_node_for_instance;
    
    // [FltpGetNextMessageWaiter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb040, 0x2520 bytes
    // fltMgr.sys .text:0xbed0, 0x2428 bytes
    // fltMgr.sys .text:0xc020, 0x2428 bytes
    // fltMgr.sys .text:0xbed0, 0x2428 bytes
    //
    _s26(sdk::unknown_ptr) fltp_get_next_message_waiter;
    
    // [FltpGetNormalizedDestinationFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d14c, 0x2520 bytes
    // fltMgr.sys PAGE:0x36e98, 0x2428 bytes
    // fltMgr.sys PAGE:0x42dcc, 0x2428 bytes
    // fltMgr.sys PAGE:0x36e98, 0x2428 bytes
    //
    _s27(sdk::unknown_ptr) fltp_get_normalized_destination_file_name;
    
    // [FltpGetNormalizedFileNameCallout]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9660, 0x2520 bytes
    // fltMgr.sys .text:0x1de0, 0x2428 bytes
    // fltMgr.sys .text:0xcb10, 0x2428 bytes
    // fltMgr.sys .text:0x1de0, 0x2428 bytes
    //
    _s28(sdk::unknown_ptr) fltp_get_normalized_file_name_callout;
    
    // [FltpGetNormalizedFileNameWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x356c8, 0x2520 bytes
    // fltMgr.sys PAGE:0x3a210, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b960, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a210, 0x2428 bytes
    //
    _s29(sdk::unknown_ptr) fltp_get_normalized_file_name_worker;
    
    // [FltpGetObjectName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f65c, 0x2520 bytes
    // fltMgr.sys PAGE:0x41e70, 0x2428 bytes
    // fltMgr.sys PAGE:0x42460, 0x2428 bytes
    // fltMgr.sys PAGE:0x41e70, 0x2428 bytes
    //
    _s30(sdk::unknown_ptr) fltp_get_object_name;
    
    // [FltpGetOpenedDestinationFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d1f8, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f458, 0x2428 bytes
    // fltMgr.sys PAGE:0x42e94, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f458, 0x2428 bytes
    //
    _s31(sdk::unknown_ptr) fltp_get_opened_destination_file_name;
    
    // [FltpGetOpenedFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34e40, 0x2520 bytes
    // fltMgr.sys PAGE:0x3981c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3b0d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3981c, 0x2428 bytes
    //
    _s32(sdk::unknown_ptr) fltp_get_opened_file_name;
    
    // [FltpGetParameterOffsets]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys INIT:0x5b89c, 0x2520 bytes
    // fltMgr.sys INIT:0x6680c, 0x2428 bytes
    // fltMgr.sys INIT:0x69894, 0x2428 bytes
    // fltMgr.sys INIT:0x6680c, 0x2428 bytes
    //
    _s33(sdk::unknown_ptr) fltp_get_parameter_offsets;
    
    // [FltpGetRegDwordValue]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39744, 0x2520 bytes
    // fltMgr.sys PAGE:0x42b30, 0x2428 bytes
    // fltMgr.sys PAGE:0x37a10, 0x2428 bytes
    // fltMgr.sys PAGE:0x42b30, 0x2428 bytes
    //
    _s34(sdk::unknown_ptr) fltp_get_reg_dword_value;
    
    // [FltpGetServicePathFromFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ba58, 0x2520 bytes
    // fltMgr.sys PAGE:0x576bc, 0x2428 bytes
    // fltMgr.sys PAGE:0x59e9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x576bc, 0x2428 bytes
    //
    _s35(sdk::unknown_ptr) fltp_get_service_path_from_filter;
    
    // [FltpGetShortFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d618, 0x2520 bytes
    // fltMgr.sys PAGE:0x36384, 0x2428 bytes
    // fltMgr.sys PAGE:0x36890, 0x2428 bytes
    // fltMgr.sys PAGE:0x36384, 0x2428 bytes
    //
    _s36(sdk::unknown_ptr) fltp_get_short_file_name;
    
    // [FltpGetStreamListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x7280, 0x2520 bytes
    // fltMgr.sys .text:0x3db0, 0x2428 bytes
    // fltMgr.sys .text:0x4ce0, 0x2428 bytes
    // fltMgr.sys .text:0x3db0, 0x2428 bytes
    //
    _s37(sdk::unknown_ptr) fltp_get_stream_list_ctrl;
    
    // [FltpGetSupportedFeaturesValue]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3968c, 0x2520 bytes
    // fltMgr.sys PAGE:0x42a38, 0x2428 bytes
    // fltMgr.sys PAGE:0x37b18, 0x2428 bytes
    // fltMgr.sys PAGE:0x42a38, 0x2428 bytes
    //
    _s38(sdk::unknown_ptr) fltp_get_supported_features_value;
    
    // [FltpGetTargetInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b150, 0x2520 bytes
    // fltMgr.sys PAGE:0x460a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x470e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x460a0, 0x2428 bytes
    //
    _s39(sdk::unknown_ptr) fltp_get_target_info;
    
    // [FltpGetTxVolContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46474, 0x2520 bytes
    // fltMgr.sys PAGE:0x46310, 0x2428 bytes
    // fltMgr.sys PAGE:0x47d64, 0x2428 bytes
    // fltMgr.sys PAGE:0x46310, 0x2428 bytes
    //
    _s40(sdk::unknown_ptr) fltp_get_tx_vol_context;
    
    // [FltpGetUniqueIdentifierForObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f63c, 0x2520 bytes
    // fltMgr.sys PAGE:0x426dc, 0x2428 bytes
    // fltMgr.sys PAGE:0x433f8, 0x2428 bytes
    // fltMgr.sys PAGE:0x426dc, 0x2428 bytes
    //
    _s41(sdk::unknown_ptr) fltp_get_unique_identifier_for_object;
    
    // [FltpGetUniqueIdentifierForVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x10a8, 0x2520 bytes
    // fltMgr.sys .text:0xa8fc, 0x2428 bytes
    // fltMgr.sys .text:0xac08, 0x2428 bytes
    // fltMgr.sys .text:0xa8fc, 0x2428 bytes
    //
    _s42(sdk::unknown_ptr) fltp_get_unique_identifier_for_volume;
    
    // [FltpGetUniqueIdentifierForVolumeSnapshot]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17080, 0x2520 bytes
    // fltMgr.sys .text:0x1a2a4, 0x2428 bytes
    // fltMgr.sys .text:0x1aa08, 0x2428 bytes
    // fltMgr.sys .text:0x1a2a4, 0x2428 bytes
    //
    _s43(sdk::unknown_ptr) fltp_get_unique_identifier_for_volume_snapshot;
    
    // [FltpGetVolumeFromDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x353e0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3923c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a390, 0x2428 bytes
    // fltMgr.sys PAGE:0x3923c, 0x2428 bytes
    //
    _s44(sdk::unknown_ptr) fltp_get_volume_from_device_object;
    
    // [FltpGetVolumeSafe]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f36c, 0x2520 bytes
    // fltMgr.sys PAGE:0x429b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x434ec, 0x2428 bytes
    // fltMgr.sys PAGE:0x429b8, 0x2428 bytes
    //
    _s45(sdk::unknown_ptr) fltp_get_volume_safe;
    
    // [FltpHandleDataScanSynchronization]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2030, 0x2520 bytes
    // fltMgr.sys .text:0xbb10, 0x2428 bytes
    // fltMgr.sys .text:0x8ed0, 0x2428 bytes
    // fltMgr.sys .text:0xbb10, 0x2428 bytes
    //
    _s46(sdk::unknown_ptr) fltp_handle_data_scan_synchronization;
    
    // [FltpHandlePreCallbackReturnStatus]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x4d70, 0x2520 bytes
    // fltMgr.sys .text:0x6740, 0x2428 bytes
    // fltMgr.sys .text:0x73c0, 0x2428 bytes
    // fltMgr.sys .text:0x6740, 0x2428 bytes
    //
    _s47(sdk::unknown_ptr) fltp_handle_pre_callback_return_status;
    
    // [FltpInitFrameLookasideLists]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d03c, 0x2520 bytes
    // fltMgr.sys PAGE:0x4aba8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4aea4, 0x2428 bytes
    // fltMgr.sys PAGE:0x4aba8, 0x2428 bytes
    //
    _s48(sdk::unknown_ptr) fltp_init_frame_lookaside_lists;
    
    // [FltpInitInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38288, 0x2520 bytes
    // fltMgr.sys PAGE:0x40e48, 0x2428 bytes
    // fltMgr.sys PAGE:0x38d3c, 0x2428 bytes
    // fltMgr.sys PAGE:0x40e48, 0x2428 bytes
    //
    _s49(sdk::unknown_ptr) fltp_init_instance;
    
    // [FltpInitLookasideLists]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e850, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b60c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a1d4, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b60c, 0x2428 bytes
    //
    _s50(sdk::unknown_ptr) fltp_init_lookaside_lists;
    
    // [FltpInitThrottledWorkItemCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys INIT:0x5b760, 0x2520 bytes
    // fltMgr.sys INIT:0x66698, 0x2428 bytes
    // fltMgr.sys INIT:0x69a88, 0x2428 bytes
    // fltMgr.sys INIT:0x66698, 0x2428 bytes
    //
    _s51(sdk::unknown_ptr) fltp_init_throttled_work_item_ctrl;
    
    // [FltpInitVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2f828, 0x2520 bytes
    // fltMgr.sys PAGE:0x41af8, 0x2428 bytes
    // fltMgr.sys PAGE:0x37d40, 0x2428 bytes
    // fltMgr.sys PAGE:0x41af8, 0x2428 bytes
    //
    _s52(sdk::unknown_ptr) fltp_init_volume;
    
    // [FltpInitializeBackPocketIrpCtrls]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d2a8, 0x2520 bytes
    // fltMgr.sys PAGE:0x4ae5c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b15c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4ae5c, 0x2428 bytes
    //
    _s53(sdk::unknown_ptr) fltp_initialize_back_pocket_irp_ctrls;
    
    // [FltpInitializeCallbackNode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xa1ec, 0x2520 bytes
    // fltMgr.sys .text:0xa728, 0x2428 bytes
    // fltMgr.sys .text:0x1d80, 0x2428 bytes
    // fltMgr.sys .text:0xa728, 0x2428 bytes
    //
    _s54(sdk::unknown_ptr) fltp_initialize_callback_node;
    
    // [FltpInitializeFilterCcb]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4fea0, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a73c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5bd28, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a73c, 0x2428 bytes
    //
    _s55(sdk::unknown_ptr) fltp_initialize_filter_ccb;
    
    // [FltpInitializeFrame]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ce60, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a9a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4ac9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a9a0, 0x2428 bytes
    //
    _s56(sdk::unknown_ptr) fltp_initialize_frame;
    
    // [FltpInitializeGeneratedIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x95a0, 0x2520 bytes
    // fltMgr.sys .text:0x9048, 0x2428 bytes
    // fltMgr.sys .text:0x92d0, 0x2428 bytes
    // fltMgr.sys .text:0x9048, 0x2428 bytes
    //
    _s57(sdk::unknown_ptr) fltp_initialize_generated_irp;
    
    // [FltpInitializeInstanceCcb]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ff48, 0x2520 bytes
    // fltMgr.sys PAGE:0x3674c, 0x2428 bytes
    // fltMgr.sys PAGE:0x36d5c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3674c, 0x2428 bytes
    //
    _s58(sdk::unknown_ptr) fltp_initialize_instance_ccb;
    
    // [FltpInitializeIrpCtrlStackProfiler]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e5dc, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b334, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a8b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b334, 0x2428 bytes
    //
    _s59(sdk::unknown_ptr) fltp_initialize_irp_ctrl_stack_profiler;
    
    // [FltpInitializeManagerVolumeCcb]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x500d8, 0x2520 bytes
    // fltMgr.sys PAGE:0x47b5c, 0x2428 bytes
    // fltMgr.sys PAGE:0x48b9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x47b5c, 0x2428 bytes
    //
    _s60(sdk::unknown_ptr) fltp_initialize_manager_volume_ccb;
    
    // [FltpInitializeMessagingSupport]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys INIT:0x5ba88, 0x2520 bytes
    // fltMgr.sys INIT:0x66a00, 0x2428 bytes
    // fltMgr.sys INIT:0x69568, 0x2428 bytes
    // fltMgr.sys INIT:0x66a00, 0x2428 bytes
    //
    _s61(sdk::unknown_ptr) fltp_initialize_messaging_support;
    
    // [FltpInitializeTelemetry]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys INIT:0x5bd70, 0x2520 bytes
    // fltMgr.sys INIT:0x66c18, 0x2428 bytes
    // fltMgr.sys INIT:0x69510, 0x2428 bytes
    // fltMgr.sys INIT:0x66c18, 0x2428 bytes
    //
    _s62(sdk::unknown_ptr) fltp_initialize_telemetry;
    
    // [FltpInitializeVolumeCcb]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50178, 0x2520 bytes
    // fltMgr.sys PAGE:0x47358, 0x2428 bytes
    // fltMgr.sys PAGE:0x48380, 0x2428 bytes
    // fltMgr.sys PAGE:0x47358, 0x2428 bytes
    //
    _s63(sdk::unknown_ptr) fltp_initialize_volume_ccb;
    
    // [FltpInsertCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xa17c, 0x2520 bytes
    // fltMgr.sys .text:0xa6bc, 0x2428 bytes
    // fltMgr.sys .text:0x1d14, 0x2428 bytes
    // fltMgr.sys .text:0xa6bc, 0x2428 bytes
    //
    _s64(sdk::unknown_ptr) fltp_insert_callback;
    
    // [FltpInsertIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17010, 0x2520 bytes
    // fltMgr.sys .text:0xdfe0, 0x2428 bytes
    // fltMgr.sys .text:0xdc30, 0x2428 bytes
    // fltMgr.sys .text:0xdfe0, 0x2428 bytes
    //
    _s65(sdk::unknown_ptr) fltp_insert_irp;
    
    // [FltpInsertVolumeInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38dfc, 0x2520 bytes
    // fltMgr.sys PAGE:0x41448, 0x2428 bytes
    // fltMgr.sys PAGE:0x383d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x41448, 0x2428 bytes
    //
    _s66(sdk::unknown_ptr) fltp_insert_volume_instance;
    
    // [FltpInternalCompletePendedPreOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x19d0, 0x2520 bytes
    // fltMgr.sys .text:0xc550, 0x2428 bytes
    // fltMgr.sys .text:0x12d0, 0x2428 bytes
    // fltMgr.sys .text:0xc550, 0x2428 bytes
    //
    _s67(sdk::unknown_ptr) fltp_internal_complete_pended_pre_operation;
    
    // [FltpInvalidateNameCacheForTxRename]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c2bc, 0x2520 bytes
    // fltMgr.sys PAGE:0x45e38, 0x2428 bytes
    // fltMgr.sys PAGE:0x47ae8, 0x2428 bytes
    // fltMgr.sys PAGE:0x45e38, 0x2428 bytes
    //
    _s68(sdk::unknown_ptr) fltp_invalidate_name_cache_for_tx_rename;
    
    // [FltpInvalidateNameCaching]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39d7c, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f2b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x44030, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f2b8, 0x2428 bytes
    //
    _s69(sdk::unknown_ptr) fltp_invalidate_name_caching;
    
    // [FltpInvalidateNameCachingAllFrames]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39d10, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f3f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43fc8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f3f0, 0x2428 bytes
    //
    _s70(sdk::unknown_ptr) fltp_invalidate_name_caching_all_frames;
    
    // [FltpIoGetDeviceObjectPointer]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x483d8, 0x2520 bytes
    // fltMgr.sys PAGE:0x45580, 0x2428 bytes
    // fltMgr.sys PAGE:0x45840, 0x2428 bytes
    // fltMgr.sys PAGE:0x45580, 0x2428 bytes
    //
    _s71(sdk::unknown_ptr) fltp_io_get_device_object_pointer;
    
    // [FltpIrpCtrlStackProfilerTimer]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xcd40, 0x2520 bytes
    // fltMgr.sys .text:0xd0b0, 0x2428 bytes
    // fltMgr.sys .text:0xcee0, 0x2428 bytes
    // fltMgr.sys .text:0xd0b0, 0x2428 bytes
    //
    _s72(sdk::unknown_ptr) fltp_irp_ctrl_stack_profiler_timer;
    
    // [FltpIsAttachedToDevice]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2fb48, 0x2520 bytes
    // fltMgr.sys PAGE:0x42620, 0x2428 bytes
    // fltMgr.sys PAGE:0x4342c, 0x2428 bytes
    // fltMgr.sys PAGE:0x42620, 0x2428 bytes
    //
    _s73(sdk::unknown_ptr) fltp_is_attached_to_device;
    
    // [FltpIsCandidateForNameTunneling]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x36f2c, 0x2520 bytes
    // fltMgr.sys PAGE:0x374a4, 0x2428 bytes
    // fltMgr.sys PAGE:0x395b4, 0x2428 bytes
    // fltMgr.sys PAGE:0x374a4, 0x2428 bytes
    //
    _s74(sdk::unknown_ptr) fltp_is_candidate_for_name_tunneling;
    
    // [FltpIsDaxVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x174d8, 0x2520 bytes
    // fltMgr.sys .text:0x1a728, 0x2428 bytes
    // fltMgr.sys .text:0x1b1ec, 0x2428 bytes
    // fltMgr.sys .text:0x1a728, 0x2428 bytes
    //
    _s75(sdk::unknown_ptr) fltp_is_dax_volume;
    
    // [FltpIsOpenByObjectId]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d6d8, 0x2520 bytes
    // fltMgr.sys PAGE:0x581dc, 0x2428 bytes
    // fltMgr.sys PAGE:0x366f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x581dc, 0x2428 bytes
    //
    _s76(sdk::unknown_ptr) fltp_is_open_by_object_id;
    
    // [FltpIsVolumeDetached]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x97bc, 0x2520 bytes
    // fltMgr.sys .text:0xa3c0, 0x2428 bytes
    // fltMgr.sys .text:0x1f8c, 0x2428 bytes
    // fltMgr.sys .text:0xa3c0, 0x2428 bytes
    //
    _s77(sdk::unknown_ptr) fltp_is_volume_detached;
    
    // [FltpKtmNotification]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f0f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x474a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x484d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x474a0, 0x2428 bytes
    //
    _s78(sdk::unknown_ptr) fltp_ktm_notification;
    
    // [FltpLegacyProcessingAfterPreCallbacksCompleted]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x5060, 0x2520 bytes
    // fltMgr.sys .text:0x6a40, 0x2428 bytes
    // fltMgr.sys .text:0x76c0, 0x2428 bytes
    // fltMgr.sys .text:0x6a40, 0x2428 bytes
    //
    _s79(sdk::unknown_ptr) fltp_legacy_processing_after_pre_callbacks_completed;
    
    // [FltpLinkCompletionNodeToInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x4f00, 0x2520 bytes
    // fltMgr.sys .text:0x68c0, 0x2428 bytes
    // fltMgr.sys .text:0x7540, 0x2428 bytes
    // fltMgr.sys .text:0x68c0, 0x2428 bytes
    //
    _s80(sdk::unknown_ptr) fltp_link_completion_node_to_instance;
    
    // [FltpLinkFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x541d0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c008, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d008, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c008, 0x2428 bytes
    //
    _s81(sdk::unknown_ptr) fltp_link_filter;
    
    // [FltpLinkFilterIntoFrame]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c3f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a11c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b9c8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a11c, 0x2428 bytes
    //
    _s82(sdk::unknown_ptr) fltp_link_filter_into_frame;
    
    // [FltpLinkHandle]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x5021c, 0x2520 bytes
    // fltMgr.sys PAGE:0x43bd8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4514c, 0x2428 bytes
    // fltMgr.sys PAGE:0x43bd8, 0x2428 bytes
    //
    _s83(sdk::unknown_ptr) fltp_link_handle;
    
    // [FltpLinkVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2fe38, 0x2520 bytes
    // fltMgr.sys PAGE:0x418c4, 0x2428 bytes
    // fltMgr.sys PAGE:0x42344, 0x2428 bytes
    // fltMgr.sys PAGE:0x418c4, 0x2428 bytes
    //
    _s84(sdk::unknown_ptr) fltp_link_volume;
    
    // [FltpLoadFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3fd28, 0x2520 bytes
    // fltMgr.sys PAGE:0x4c8e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4dd70, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c8e0, 0x2428 bytes
    //
    _s85(sdk::unknown_ptr) fltp_load_filter;
    
    // [FltpLogEventWithObjectID]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c128, 0x2520 bytes
    // fltMgr.sys PAGE:0x49e94, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c36c, 0x2428 bytes
    // fltMgr.sys PAGE:0x49e94, 0x2428 bytes
    //
    _s86(sdk::unknown_ptr) fltp_log_event_with_object_id;
    
    // [FltpLogFreeInstanceFunction]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x254c8, 0x2520 bytes
    // fltMgr.sys .data:0x2b548, 0x2428 bytes
    // fltMgr.sys .data:0x2b610, 0x2428 bytes
    // fltMgr.sys .data:0x2b548, 0x2428 bytes
    //
    _s87(sdk::unknown_ptr) fltp_log_free_instance_function;
    
    // [FltpLogInitInstanceFunction]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x254d0, 0x2520 bytes
    // fltMgr.sys .data:0x2b550, 0x2428 bytes
    // fltMgr.sys .data:0x2b618, 0x2428 bytes
    // fltMgr.sys .data:0x2b550, 0x2428 bytes
    //
    _s88(sdk::unknown_ptr) fltp_log_init_instance_function;
    
    // [FltpLookupPerFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9e70, 0x2520 bytes
    // fltMgr.sys .text:0x1b0c, 0x2428 bytes
    // fltMgr.sys .text:0x198c, 0x2428 bytes
    // fltMgr.sys .text:0x1b0c, 0x2428 bytes
    //
    _s89(sdk::unknown_ptr) fltp_lookup_per_file_context;
    
    // [FltpManualDeviceAttachTimer]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xba40, 0x2520 bytes
    // fltMgr.sys .text:0xd060, 0x2428 bytes
    // fltMgr.sys .text:0xccb0, 0x2428 bytes
    // fltMgr.sys .text:0xd060, 0x2428 bytes
    //
    _s90(sdk::unknown_ptr) fltp_manual_device_attach_timer;
    
    // [FltpManualDeviceAttachWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a170, 0x2520 bytes
    // fltMgr.sys PAGE:0x44d40, 0x2428 bytes
    // fltMgr.sys PAGE:0x443e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x44d40, 0x2428 bytes
    //
    _s91(sdk::unknown_ptr) fltp_manual_device_attach_worker;
    
    // [FltpMarkAllCallbacksForDeletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11d8, 0x2520 bytes
    // fltMgr.sys .text:0xa358, 0x2428 bytes
    // fltMgr.sys .text:0xaa78, 0x2428 bytes
    // fltMgr.sys .text:0xa358, 0x2428 bytes
    //
    _s92(sdk::unknown_ptr) fltp_mark_all_callbacks_for_deletion;
    
    // [FltpMeasureFreeInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3da40, 0x2520 bytes
    // fltMgr.sys PAGE:0x46e70, 0x2428 bytes
    // fltMgr.sys PAGE:0x49550, 0x2428 bytes
    // fltMgr.sys PAGE:0x46e70, 0x2428 bytes
    //
    _s93(sdk::unknown_ptr) fltp_measure_free_instance;
    
    // [FltpMeasureInitInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3dad0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45750, 0x2428 bytes
    // fltMgr.sys PAGE:0x45970, 0x2428 bytes
    // fltMgr.sys PAGE:0x45750, 0x2428 bytes
    //
    _s94(sdk::unknown_ptr) fltp_measure_init_instance;
    
    // [FltpMiniFilterDriverUnload]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4baa0, 0x2520 bytes
    // fltMgr.sys PAGE:0x57720, 0x2428 bytes
    // fltMgr.sys PAGE:0x59f00, 0x2428 bytes
    // fltMgr.sys PAGE:0x57720, 0x2428 bytes
    //
    _s95(sdk::unknown_ptr) fltp_mini_filter_driver_unload;
    
    // [FltpMiniFilterDummyUnload]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3af20, 0x2520 bytes
    // fltMgr.sys PAGE:0x45ca0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46260, 0x2428 bytes
    // fltMgr.sys PAGE:0x45ca0, 0x2428 bytes
    //
    _s96(sdk::unknown_ptr) fltp_mini_filter_dummy_unload;
    
    // [FltpMoveCallbackDataToIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x5850, 0x2520 bytes
    // fltMgr.sys .text:0x71b0, 0x2428 bytes
    // fltMgr.sys .text:0x7eb0, 0x2428 bytes
    // fltMgr.sys .text:0x71b0, 0x2428 bytes
    //
    _s97(sdk::unknown_ptr) fltp_move_callback_data_to_irp;
    
    // [FltpMoveIrpToCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x64b0, 0x2520 bytes
    // fltMgr.sys .text:0x7c70, 0x2428 bytes
    // fltMgr.sys .text:0x8990, 0x2428 bytes
    // fltMgr.sys .text:0x7c70, 0x2428 bytes
    //
    _s98(sdk::unknown_ptr) fltp_move_irp_to_callback_data;
    
    // [FltpMsgDispatch]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x33300, 0x2520 bytes
    // fltMgr.sys PAGE:0x43320, 0x2428 bytes
    // fltMgr.sys PAGE:0x393d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x43320, 0x2428 bytes
    //
    _s99(sdk::unknown_ptr) fltp_msg_dispatch;
    
    // [FltpNameCanBeExpanded]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32370, 0x2520 bytes
    // fltMgr.sys PAGE:0x37434, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fb4c, 0x2428 bytes
    // fltMgr.sys PAGE:0x37434, 0x2428 bytes
    //
    _t00(sdk::unknown_ptr) fltp_name_can_be_expanded;
    
    // [FltpNoFilterCallbackCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13a80, 0x2520 bytes
    // fltMgr.sys .text:0x16d60, 0x2428 bytes
    // fltMgr.sys .text:0x16c60, 0x2428 bytes
    // fltMgr.sys .text:0x16d60, 0x2428 bytes
    //
    _t01(sdk::unknown_ptr) fltp_no_filter_callback_completion;
    
    // [FltpNoFilterCallbackCompletionWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13a88, 0x2520 bytes
    // fltMgr.sys .text:0x16d78, 0x2428 bytes
    // fltMgr.sys .text:0x16c78, 0x2428 bytes
    // fltMgr.sys .text:0x16d78, 0x2428 bytes
    //
    _t02(sdk::unknown_ptr) fltp_no_filter_callback_completion_worker;
    
    // [FltpNoFilterCallbacksWorkerThread]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49240, 0x2520 bytes
    // fltMgr.sys PAGE:0x55600, 0x2428 bytes
    // fltMgr.sys PAGE:0x574b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x55600, 0x2428 bytes
    //
    _t03(sdk::unknown_ptr) fltp_no_filter_callbacks_worker_thread;
    
    // [FltpNormalizeNameComponent]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37660, 0x2520 bytes
    // fltMgr.sys PAGE:0x36f60, 0x2428 bytes
    // fltMgr.sys PAGE:0x40ac4, 0x2428 bytes
    // fltMgr.sys PAGE:0x36f60, 0x2428 bytes
    //
    _t04(sdk::unknown_ptr) fltp_normalize_name_component;
    
    // [FltpNormalizeNameFromCache]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c33c, 0x2520 bytes
    // fltMgr.sys PAGE:0x37e40, 0x2428 bytes
    // fltMgr.sys PAGE:0x41b20, 0x2428 bytes
    // fltMgr.sys PAGE:0x37e40, 0x2428 bytes
    //
    _t05(sdk::unknown_ptr) fltp_normalize_name_from_cache;
    
    // [FltpNumCallbackNodes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x390d8, 0x2520 bytes
    // fltMgr.sys PAGE:0x41740, 0x2428 bytes
    // fltMgr.sys PAGE:0x381d4, 0x2428 bytes
    // fltMgr.sys PAGE:0x41740, 0x2428 bytes
    //
    _t06(sdk::unknown_ptr) fltp_num_callback_nodes;
    
    // [FltpObjectPointerDereference]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32bfc, 0x2520 bytes
    // fltMgr.sys PAGE:0x40718, 0x2428 bytes
    // fltMgr.sys PAGE:0x401d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x40718, 0x2428 bytes
    //
    _t07(sdk::unknown_ptr) fltp_object_pointer_dereference;
    
    // [FltpObjectPointerReference]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a6b0, 0x2520 bytes
    // fltMgr.sys PAGE:0x44d28, 0x2428 bytes
    // fltMgr.sys PAGE:0x44ef8, 0x2428 bytes
    // fltMgr.sys PAGE:0x44d28, 0x2428 bytes
    //
    _t08(sdk::unknown_ptr) fltp_object_pointer_reference;
    
    // [FltpOpenClientPort]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3f114, 0x2520 bytes
    // fltMgr.sys PAGE:0x43504, 0x2428 bytes
    // fltMgr.sys PAGE:0x37114, 0x2428 bytes
    // fltMgr.sys PAGE:0x43504, 0x2428 bytes
    //
    _t09(sdk::unknown_ptr) fltp_open_client_port;
    
    // [FltpOpenFileForFailedSupersede]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4d8a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x5851c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a50c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5851c, 0x2428 bytes
    //
    _t10(sdk::unknown_ptr) fltp_open_file_for_failed_supersede;
    
    // [FltpOpenInstancesRegistryKey]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x38c7c, 0x2520 bytes
    // fltMgr.sys PAGE:0x417bc, 0x2428 bytes
    // fltMgr.sys PAGE:0x380c8, 0x2428 bytes
    // fltMgr.sys PAGE:0x417bc, 0x2428 bytes
    //
    _t11(sdk::unknown_ptr) fltp_open_instances_registry_key;
    
    // [FltpOpenLinkOrRenameTarget]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b3fc, 0x2520 bytes
    // fltMgr.sys PAGE:0x57134, 0x2428 bytes
    // fltMgr.sys PAGE:0x59918, 0x2428 bytes
    // fltMgr.sys PAGE:0x57134, 0x2428 bytes
    //
    _t12(sdk::unknown_ptr) fltp_open_link_or_rename_target;
    
    // [FltpOperationFlags]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18710, 0x2520 bytes
    // fltMgr.sys .rdata:0x1d440, 0x2428 bytes
    // fltMgr.sys .rdata:0x1d530, 0x2428 bytes
    // fltMgr.sys .rdata:0x1d440, 0x2428 bytes
    //
    _t13(sdk::unknown_ptr) fltp_operation_flags;
    
    // [FltpOplockWaitComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49af0, 0x2520 bytes
    // fltMgr.sys PAGE:0x55fd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58380, 0x2428 bytes
    // fltMgr.sys PAGE:0x55fd0, 0x2428 bytes
    //
    _t14(sdk::unknown_ptr) fltp_oplock_wait_complete;
    
    // [FltpParseShareName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a468, 0x2520 bytes
    // fltMgr.sys PAGE:0x48bb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x44f04, 0x2428 bytes
    // fltMgr.sys PAGE:0x48bb0, 0x2428 bytes
    //
    _t15(sdk::unknown_ptr) fltp_parse_share_name;
    
    // [FltpParseStreamName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35990, 0x2520 bytes
    // fltMgr.sys PAGE:0x36e08, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fac0, 0x2428 bytes
    // fltMgr.sys PAGE:0x36e08, 0x2428 bytes
    //
    _t16(sdk::unknown_ptr) fltp_parse_stream_name;
    
    // [FltpPassThrough]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x31e0, 0x2520 bytes
    // fltMgr.sys .text:0x4970, 0x2428 bytes
    // fltMgr.sys .text:0x56b0, 0x2428 bytes
    // fltMgr.sys .text:0x4970, 0x2428 bytes
    //
    _t17(sdk::unknown_ptr) fltp_pass_through;
    
    // [FltpPassThroughCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2ed0, 0x2520 bytes
    // fltMgr.sys .text:0x43b0, 0x2428 bytes
    // fltMgr.sys .text:0x5100, 0x2428 bytes
    // fltMgr.sys .text:0x43b0, 0x2428 bytes
    //
    _t18(sdk::unknown_ptr) fltp_pass_through_completion;
    
    // [FltpPassThroughCompletionWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x36e0, 0x2520 bytes
    // fltMgr.sys .text:0x4f20, 0x2428 bytes
    // fltMgr.sys .text:0x5b50, 0x2428 bytes
    // fltMgr.sys .text:0x4f20, 0x2428 bytes
    //
    _t19(sdk::unknown_ptr) fltp_pass_through_completion_worker;
    
    // [FltpPassThroughFastIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2ee0, 0x2520 bytes
    // fltMgr.sys .text:0x43d0, 0x2428 bytes
    // fltMgr.sys .text:0x5120, 0x2428 bytes
    // fltMgr.sys .text:0x43d0, 0x2428 bytes
    //
    _t20(sdk::unknown_ptr) fltp_pass_through_fast_io;
    
    // [FltpPassThroughInternal]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x41f0, 0x2520 bytes
    // fltMgr.sys .text:0x5a70, 0x2428 bytes
    // fltMgr.sys .text:0x6720, 0x2428 bytes
    // fltMgr.sys .text:0x5a70, 0x2428 bytes
    //
    _t21(sdk::unknown_ptr) fltp_pass_through_internal;
    
    // [FltpPeekNextIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc640, 0x2520 bytes
    // fltMgr.sys .text:0xe160, 0x2428 bytes
    // fltMgr.sys .text:0xde40, 0x2428 bytes
    // fltMgr.sys .text:0xe160, 0x2428 bytes
    //
    _t22(sdk::unknown_ptr) fltp_peek_next_irp;
    
    // [FltpPerfTraceOperationCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12284, 0x2520 bytes
    // fltMgr.sys .text:0x15074, 0x2428 bytes
    // fltMgr.sys .text:0x15254, 0x2428 bytes
    // fltMgr.sys .text:0x15074, 0x2428 bytes
    //
    _t23(sdk::unknown_ptr) fltp_perf_trace_operation_callback;
    
    // [FltpPerfTraceOperationFailure]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12418, 0x2520 bytes
    // fltMgr.sys .text:0x15214, 0x2428 bytes
    // fltMgr.sys .text:0x153f4, 0x2428 bytes
    // fltMgr.sys .text:0x15214, 0x2428 bytes
    //
    _t24(sdk::unknown_ptr) fltp_perf_trace_operation_failure;
    
    // [FltpPerformAsynchronousIoWrapper]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16338, 0x2520 bytes
    // fltMgr.sys .text:0x1648, 0x2428 bytes
    // fltMgr.sys .text:0x19b60, 0x2428 bytes
    // fltMgr.sys .text:0x1648, 0x2428 bytes
    //
    _t25(sdk::unknown_ptr) fltp_perform_asynchronous_io_wrapper;
    
    // [FltpPerformFastIoCall]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x5a20, 0x2520 bytes
    // fltMgr.sys .text:0x7290, 0x2428 bytes
    // fltMgr.sys .text:0x7f90, 0x2428 bytes
    // fltMgr.sys .text:0x7290, 0x2428 bytes
    //
    _t26(sdk::unknown_ptr) fltp_perform_fast_io_call;
    
    // [FltpPerformPostCallbacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x3a70, 0x2520 bytes
    // fltMgr.sys .text:0xde6c, 0x2428 bytes
    // fltMgr.sys .text:0xd6bc, 0x2428 bytes
    // fltMgr.sys .text:0xde6c, 0x2428 bytes
    //
    _t27(sdk::unknown_ptr) fltp_perform_post_callbacks;
    
    // [FltpPerformPostMountCallbacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2ff34, 0x2520 bytes
    // fltMgr.sys PAGE:0x3fb30, 0x2428 bytes
    // fltMgr.sys PAGE:0x42298, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fb30, 0x2428 bytes
    //
    _t28(sdk::unknown_ptr) fltp_perform_post_mount_callbacks;
    
    // [FltpPerformPreCallbacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x43e0, 0x2520 bytes
    // fltMgr.sys .text:0x15344, 0x2428 bytes
    // fltMgr.sys .text:0x15500, 0x2428 bytes
    // fltMgr.sys .text:0x15344, 0x2428 bytes
    //
    _t29(sdk::unknown_ptr) fltp_perform_pre_callbacks;
    
    // [FltpPerformPreMountCallbacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x305c0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3fbdc, 0x2428 bytes
    // fltMgr.sys PAGE:0x38af4, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fbdc, 0x2428 bytes
    //
    _t30(sdk::unknown_ptr) fltp_perform_pre_mount_callbacks;
    
    // [FltpPortGenericMapping]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x190a0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1dfb0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e010, 0x2428 bytes
    // fltMgr.sys .rdata:0x1dfb0, 0x2428 bytes
    //
    _t31(sdk::unknown_ptr) fltp_port_generic_mapping;
    
    // [FltpPostFsFilterOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x2490, 0x2520 bytes
    // fltMgr.sys .text:0x8a20, 0x2428 bytes
    // fltMgr.sys .text:0x8d00, 0x2428 bytes
    // fltMgr.sys .text:0x8a20, 0x2428 bytes
    //
    _t32(sdk::unknown_ptr) fltp_post_fs_filter_operation;
    
    // [FltpPostSyncOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x5088c, 0x2520 bytes
    // fltMgr.sys PAGE:0x5ad50, 0x2428 bytes
    // fltMgr.sys PAGE:0x5c138, 0x2428 bytes
    // fltMgr.sys PAGE:0x5ad50, 0x2428 bytes
    //
    _t33(sdk::unknown_ptr) fltp_post_sync_operation;
    
    // [FltpPreFsFilterOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x24d0, 0x2520 bytes
    // fltMgr.sys .text:0x2680, 0x2428 bytes
    // fltMgr.sys .text:0x3a70, 0x2428 bytes
    // fltMgr.sys .text:0x2680, 0x2428 bytes
    //
    _t34(sdk::unknown_ptr) fltp_pre_fs_filter_operation;
    
    // [FltpPrePostIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x49b60, 0x2520 bytes
    // fltMgr.sys PAGE:0x56050, 0x2428 bytes
    // fltMgr.sys PAGE:0x58400, 0x2428 bytes
    // fltMgr.sys PAGE:0x56050, 0x2428 bytes
    //
    _t35(sdk::unknown_ptr) fltp_pre_post_irp;
    
    // [FltpPrivateLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x48748, 0x2520 bytes
    // fltMgr.sys PAGE:0x54a4c, 0x2428 bytes
    // fltMgr.sys PAGE:0x56a0c, 0x2428 bytes
    // fltMgr.sys PAGE:0x54a4c, 0x2428 bytes
    //
    _t36(sdk::unknown_ptr) fltp_private_lock;
    
    // [FltpProcessContextRegistration]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c608, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a340, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b5a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a340, 0x2428 bytes
    //
    _t37(sdk::unknown_ptr) fltp_process_context_registration;
    
    // [FltpProcessDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50960, 0x2520 bytes
    // fltMgr.sys PAGE:0x5ae60, 0x2428 bytes
    // fltMgr.sys PAGE:0x5c240, 0x2428 bytes
    // fltMgr.sys PAGE:0x5ae60, 0x2428 bytes
    //
    _t38(sdk::unknown_ptr) fltp_process_deferred_io_work_item;
    
    // [FltpProcessDirtyData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc0ac, 0x2520 bytes
    // fltMgr.sys .text:0x153f4, 0x2428 bytes
    // fltMgr.sys .text:0x155b4, 0x2428 bytes
    // fltMgr.sys .text:0x153f4, 0x2428 bytes
    //
    _t39(sdk::unknown_ptr) fltp_process_dirty_data;
    
    // [FltpProcessGenericWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31600, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ffc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x42a00, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ffc0, 0x2428 bytes
    //
    _t40(sdk::unknown_ptr) fltp_process_generic_work_item;
    
    // [FltpProcessIoCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13c7c, 0x2520 bytes
    // fltMgr.sys .text:0xdda4, 0x2428 bytes
    // fltMgr.sys .text:0xd5f4, 0x2428 bytes
    // fltMgr.sys .text:0xdda4, 0x2428 bytes
    //
    _t41(sdk::unknown_ptr) fltp_process_io_completion;
    
    // [FltpProcessIrpCtrlStackProfiler]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xba60, 0x2520 bytes
    // fltMgr.sys .text:0xce60, 0x2428 bytes
    // fltMgr.sys .text:0xcb60, 0x2428 bytes
    // fltMgr.sys .text:0xce60, 0x2428 bytes
    //
    _t42(sdk::unknown_ptr) fltp_process_irp_ctrl_stack_profiler;
    
    // [FltpProcessOperationStatusCallbacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1250c, 0x2520 bytes
    // fltMgr.sys .text:0x1569c, 0x2428 bytes
    // fltMgr.sys .text:0x1585c, 0x2428 bytes
    // fltMgr.sys .text:0x1569c, 0x2428 bytes
    //
    _t43(sdk::unknown_ptr) fltp_process_operation_status_callbacks;
    
    // [FltpProcessShutdownRequest]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4dbcc, 0x2520 bytes
    // fltMgr.sys PAGE:0x58afc, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a8b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x58afc, 0x2428 bytes
    //
    _t44(sdk::unknown_ptr) fltp_process_shutdown_request;
    
    // [FltpPropagateCallbackDataMdl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16918, 0x2520 bytes
    // fltMgr.sys .text:0x197e0, 0x2428 bytes
    // fltMgr.sys .text:0x1a460, 0x2428 bytes
    // fltMgr.sys .text:0x197e0, 0x2428 bytes
    //
    _t45(sdk::unknown_ptr) fltp_propagate_callback_data_mdl;
    
    // [FltpPurgeAndReinstateNameCacheForTxRename]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c7f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x464c8, 0x2428 bytes
    // fltMgr.sys PAGE:0x47f10, 0x2428 bytes
    // fltMgr.sys PAGE:0x464c8, 0x2428 bytes
    //
    _t46(sdk::unknown_ptr) fltp_purge_and_reinstate_name_cache_for_tx_rename;
    
    // [FltpPurgeMessageWaiters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4be08, 0x2520 bytes
    // fltMgr.sys PAGE:0x43fb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x46100, 0x2428 bytes
    // fltMgr.sys PAGE:0x43fb0, 0x2428 bytes
    //
    _t47(sdk::unknown_ptr) fltp_purge_message_waiters;
    
    // [FltpPurgeVolumeNameCache]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c8d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x57ad4, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a204, 0x2428 bytes
    // fltMgr.sys PAGE:0x57ad4, 0x2428 bytes
    //
    _t48(sdk::unknown_ptr) fltp_purge_volume_name_cache;
    
    // [FltpQueryInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3812c, 0x2520 bytes
    // fltMgr.sys PAGE:0x38d60, 0x2428 bytes
    // fltMgr.sys PAGE:0x398c4, 0x2428 bytes
    // fltMgr.sys PAGE:0x38d60, 0x2428 bytes
    //
    _t49(sdk::unknown_ptr) fltp_query_information_file;
    
    // [FltpQueryInformationFileFromInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31254, 0x2520 bytes
    // fltMgr.sys PAGE:0x36a98, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e45c, 0x2428 bytes
    // fltMgr.sys PAGE:0x36a98, 0x2428 bytes
    //
    _t50(sdk::unknown_ptr) fltp_query_information_file_from_instance;
    
    // [FltpQueueDataScanSynchronization]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc374, 0x2520 bytes
    // fltMgr.sys .text:0x19b28, 0x2428 bytes
    // fltMgr.sys .text:0xd76c, 0x2428 bytes
    // fltMgr.sys .text:0x19b28, 0x2428 bytes
    //
    _t51(sdk::unknown_ptr) fltp_queue_data_scan_synchronization;
    
    // [FltpQueueThrottledWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb994, 0x2520 bytes
    // fltMgr.sys .text:0xcb94, 0x2428 bytes
    // fltMgr.sys .text:0xca3c, 0x2428 bytes
    // fltMgr.sys .text:0xcb94, 0x2428 bytes
    //
    _t52(sdk::unknown_ptr) fltp_queue_throttled_work_item;
    
    // [FltpReadDriverParameters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys INIT:0x5bdb8, 0x2520 bytes
    // fltMgr.sys INIT:0x66c70, 0x2428 bytes
    // fltMgr.sys INIT:0x6912c, 0x2428 bytes
    // fltMgr.sys INIT:0x66c70, 0x2428 bytes
    //
    _t53(sdk::unknown_ptr) fltp_read_driver_parameters;
    
    // [FltpReallocNameControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x370a4, 0x2520 bytes
    // fltMgr.sys PAGE:0x382ac, 0x2428 bytes
    // fltMgr.sys PAGE:0x39a9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x382ac, 0x2428 bytes
    //
    _t54(sdk::function<int32_t(struct fltmgr::name_control_t*, uint32_t, wchar_t**)>*) fltp_realloc_name_control;
    
    // [FltpRegAltitudeValueName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18420, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c5c8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cd68, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c5c8, 0x2428 bytes
    //
    _t55(sdk::unknown_ptr) fltp_reg_altitude_value_name;
    
    // [FltpRegDefaultInstanceValueName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18478, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c6e8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cc48, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c6e8, 0x2428 bytes
    //
    _t56(sdk::unknown_ptr) fltp_reg_default_instance_value_name;
    
    // [FltpRegFilterInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18390, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c5f0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ccd0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c5f0, 0x2428 bytes
    //
    _t57(sdk::unknown_ptr) fltp_reg_filter_instances;
    
    // [FltpRegFlagsValueName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18380, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c5e0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cd80, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c5e0, 0x2428 bytes
    //
    _t58(sdk::unknown_ptr) fltp_reg_flags_value_name;
    
    // [FltpRegGroupValueName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18438, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c6d0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cc70, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c6d0, 0x2428 bytes
    //
    _t59(sdk::unknown_ptr) fltp_reg_group_value_name;
    
    // [FltpReinitStreamForSectionConflict]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37220, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ea54, 0x2428 bytes
    // fltMgr.sys PAGE:0x4162c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ea54, 0x2428 bytes
    //
    _t60(sdk::unknown_ptr) fltp_reinit_stream_for_section_conflict;
    
    // [FltpReinstateNameCaching]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39eac, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f144, 0x2428 bytes
    // fltMgr.sys PAGE:0x441a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f144, 0x2428 bytes
    //
    _t61(sdk::unknown_ptr) fltp_reinstate_name_caching;
    
    // [FltpReinstateNameCachingAllFrames]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39e54, 0x2520 bytes
    // fltMgr.sys PAGE:0x3f25c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4414c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3f25c, 0x2428 bytes
    //
    _t62(sdk::unknown_ptr) fltp_reinstate_name_caching_all_frames;
    
    // [FltpReissuePostOperationFailure]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ffdc, 0x2520 bytes
    // fltMgr.sys PAGE:0x4401c, 0x2428 bytes
    // fltMgr.sys PAGE:0x468f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4401c, 0x2428 bytes
    //
    _t63(sdk::unknown_ptr) fltp_reissue_post_operation_failure;
    
    // [FltpReissuePostOperationFailureCallout]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x40290, 0x2520 bytes
    // fltMgr.sys PAGE:0x588d0, 0x2428 bytes
    // fltMgr.sys PAGE:0x47600, 0x2428 bytes
    // fltMgr.sys PAGE:0x588d0, 0x2428 bytes
    //
    _t64(sdk::unknown_ptr) fltp_reissue_post_operation_failure_callout;
    
    // [FltpReissueSynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39144, 0x2520 bytes
    // fltMgr.sys PAGE:0x45188, 0x2428 bytes
    // fltMgr.sys PAGE:0x453d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x45188, 0x2428 bytes
    //
    _t65(sdk::unknown_ptr) fltp_reissue_synchronous_io;
    
    // [FltpReleaseContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13304, 0x2520 bytes
    // fltMgr.sys .text:0x16478, 0x2428 bytes
    // fltMgr.sys .text:0x16448, 0x2428 bytes
    // fltMgr.sys .text:0x16478, 0x2428 bytes
    //
    _t66(sdk::unknown_ptr) fltp_release_contexts;
    
    // [FltpReleaseFileListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9b2c, 0x2520 bytes
    // fltMgr.sys .text:0x1d80, 0x2428 bytes
    // fltMgr.sys .text:0x1794, 0x2428 bytes
    // fltMgr.sys .text:0x1d80, 0x2428 bytes
    //
    _t67(sdk::unknown_ptr) fltp_release_file_list_ctrl;
    
    // [FltpReleaseLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xc6b0, 0x2520 bytes
    // fltMgr.sys .text:0xe1a0, 0x2428 bytes
    // fltMgr.sys .text:0xde80, 0x2428 bytes
    // fltMgr.sys .text:0xe1a0, 0x2428 bytes
    //
    _t68(sdk::unknown_ptr) fltp_release_lock;
    
    // [FltpReleaseMessageWaiterLock]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb350, 0x2520 bytes
    // fltMgr.sys .text:0xc360, 0x2428 bytes
    // fltMgr.sys .text:0xc350, 0x2428 bytes
    // fltMgr.sys .text:0xc360, 0x2428 bytes
    //
    _t69(sdk::unknown_ptr) fltp_release_message_waiter_lock;
    
    // [FltpReleaseStreamForSectionConflict]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x16bcc, 0x2520 bytes
    // fltMgr.sys .text:0x19d60, 0x2428 bytes
    // fltMgr.sys .text:0x1a5bc, 0x2428 bytes
    // fltMgr.sys .text:0x19d60, 0x2428 bytes
    //
    _t70(sdk::unknown_ptr) fltp_release_stream_for_section_conflict;
    
    // [FltpReleaseStreamListCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x82e8, 0x2520 bytes
    // fltMgr.sys .text:0x8950, 0x2428 bytes
    // fltMgr.sys .text:0x34f0, 0x2428 bytes
    // fltMgr.sys .text:0x8950, 0x2428 bytes
    //
    _t71(sdk::unknown_ptr) fltp_release_stream_list_ctrl;
    
    // [FltpReleaseTxVolContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46574, 0x2520 bytes
    // fltMgr.sys PAGE:0x45f9c, 0x2428 bytes
    // fltMgr.sys PAGE:0x47c4c, 0x2428 bytes
    // fltMgr.sys PAGE:0x45f9c, 0x2428 bytes
    //
    _t72(sdk::unknown_ptr) fltp_release_tx_vol_context;
    
    // [FltpRemoveAllNamesCachedForFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x346d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c380, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c560, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c380, 0x2428 bytes
    //
    _t73(sdk::unknown_ptr) fltp_remove_all_names_cached_for_file_object;
    
    // [FltpRemoveAllStreamHandleContextsForFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x343f4, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c248, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c2cc, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c248, 0x2428 bytes
    //
    _t74(sdk::unknown_ptr) fltp_remove_all_stream_handle_contexts_for_file_object;
    
    // [FltpRemoveCallbacksForInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13f0, 0x2520 bytes
    // fltMgr.sys .text:0xa11c, 0x2428 bytes
    // fltMgr.sys .text:0xa83c, 0x2428 bytes
    // fltMgr.sys .text:0xa11c, 0x2428 bytes
    //
    _t75(sdk::unknown_ptr) fltp_remove_callbacks_for_instance;
    
    // [FltpRemoveExtraDataFromStream]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3acec, 0x2520 bytes
    // fltMgr.sys PAGE:0x456b0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45e54, 0x2428 bytes
    // fltMgr.sys PAGE:0x456b0, 0x2428 bytes
    //
    _t76(sdk::unknown_ptr) fltp_remove_extra_data_from_stream;
    
    // [FltpRemoveFinalComponent]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a08c, 0x2520 bytes
    // fltMgr.sys PAGE:0x36274, 0x2428 bytes
    // fltMgr.sys PAGE:0x36780, 0x2428 bytes
    // fltMgr.sys PAGE:0x36274, 0x2428 bytes
    //
    _t77(sdk::unknown_ptr) fltp_remove_final_component;
    
    // [FltpRemoveIrp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17050, 0x2520 bytes
    // fltMgr.sys .text:0xe040, 0x2428 bytes
    // fltMgr.sys .text:0xdcc0, 0x2428 bytes
    // fltMgr.sys .text:0xe040, 0x2428 bytes
    //
    _t78(sdk::unknown_ptr) fltp_remove_irp;
    
    // [FltpRemoveMessageWaiter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xaf50, 0x2520 bytes
    // fltMgr.sys .text:0xbe30, 0x2428 bytes
    // fltMgr.sys .text:0xc090, 0x2428 bytes
    // fltMgr.sys .text:0xbe30, 0x2428 bytes
    //
    _t79(sdk::unknown_ptr) fltp_remove_message_waiter;
    
    // [FltpRemoveVolumeContextsForFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50640, 0x2520 bytes
    // fltMgr.sys PAGE:0x5aa68, 0x2428 bytes
    // fltMgr.sys PAGE:0x4d820, 0x2428 bytes
    // fltMgr.sys PAGE:0x5aa68, 0x2428 bytes
    //
    _t80(sdk::unknown_ptr) fltp_remove_volume_contexts_for_filter;
    
    // [FltpResetDeviceHintEcp]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4b5f4, 0x2520 bytes
    // fltMgr.sys PAGE:0x46fc8, 0x2428 bytes
    // fltMgr.sys PAGE:0x476bc, 0x2428 bytes
    // fltMgr.sys PAGE:0x46fc8, 0x2428 bytes
    //
    _t81(sdk::unknown_ptr) fltp_reset_device_hint_ecp;
    
    // [FltpRundownStreamForSectionConflict]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x372f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x3eac0, 0x2428 bytes
    // fltMgr.sys PAGE:0x41698, 0x2428 bytes
    // fltMgr.sys PAGE:0x3eac0, 0x2428 bytes
    //
    _t82(sdk::unknown_ptr) fltp_rundown_stream_for_section_conflict;
    
    // [FltpSafeCompletionWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4dd70, 0x2520 bytes
    // fltMgr.sys PAGE:0x58cf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5aab0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58cf0, 0x2428 bytes
    //
    _t83(sdk::unknown_ptr) fltp_safe_completion_worker;
    
    // [FltpSaveFileObjectFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb4ac, 0x2520 bytes
    // fltMgr.sys .text:0xbfec, 0x2428 bytes
    // fltMgr.sys .text:0x9610, 0x2428 bytes
    // fltMgr.sys .text:0xbfec, 0x2428 bytes
    //
    _t84(sdk::unknown_ptr) fltp_save_file_object_file_name;
    
    // [FltpScanForVolumeByName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50764, 0x2520 bytes
    // fltMgr.sys PAGE:0x5abe0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5c058, 0x2428 bytes
    // fltMgr.sys PAGE:0x5abe0, 0x2428 bytes
    //
    _t85(sdk::unknown_ptr) fltp_scan_for_volume_by_name;
    
    // [FltpScheduleCommitFinalize]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f254, 0x2520 bytes
    // fltMgr.sys PAGE:0x476a8, 0x2428 bytes
    // fltMgr.sys PAGE:0x486d8, 0x2428 bytes
    // fltMgr.sys PAGE:0x476a8, 0x2428 bytes
    //
    _t86(sdk::unknown_ptr) fltp_schedule_commit_finalize;
    
    // [FltpSendModernAppTermination]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17070, 0x2520 bytes
    // fltMgr.sys .text:0x1a180, 0x2428 bytes
    // fltMgr.sys .text:0xdc90, 0x2428 bytes
    // fltMgr.sys .text:0x1a180, 0x2428 bytes
    //
    _t87(sdk::unknown_ptr) fltp_send_modern_app_termination;
    
    // [FltpSendModernAppTerminationWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4de50, 0x2520 bytes
    // fltMgr.sys PAGE:0x58de0, 0x2428 bytes
    // fltMgr.sys PAGE:0x48cb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x58de0, 0x2428 bytes
    //
    _t88(sdk::unknown_ptr) fltp_send_modern_app_termination_worker;
    
    // [FltpServerPortClose]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4beb0, 0x2520 bytes
    // fltMgr.sys PAGE:0x578c0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a0a0, 0x2428 bytes
    // fltMgr.sys PAGE:0x578c0, 0x2428 bytes
    //
    _t89(sdk::unknown_ptr) fltp_server_port_close;
    
    // [FltpServerPortDelete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bf30, 0x2520 bytes
    // fltMgr.sys PAGE:0x57950, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a130, 0x2428 bytes
    // fltMgr.sys PAGE:0x57950, 0x2428 bytes
    //
    _t90(sdk::unknown_ptr) fltp_server_port_delete;
    
    // [FltpServicesRegistryPath]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x183b0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c610, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ccf0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c610, 0x2428 bytes
    //
    _t91(sdk::unknown_ptr) fltp_services_registry_path;
    
    // [FltpSetAndEnlistTxVolContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x465d0, 0x2520 bytes
    // fltMgr.sys PAGE:0x4661c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4806c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4661c, 0x2428 bytes
    //
    _t92(sdk::unknown_ptr) fltp_set_and_enlist_tx_vol_context;
    
    // [FltpSetBufferAndMdlBasedOnBufferingMode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1560, 0x2520 bytes
    // fltMgr.sys .text:0x8ea0, 0x2428 bytes
    // fltMgr.sys .text:0xa0fc, 0x2428 bytes
    // fltMgr.sys .text:0x8ea0, 0x2428 bytes
    //
    _t93(sdk::unknown_ptr) fltp_set_buffer_and_mdl_based_on_buffering_mode;
    
    // [FltpSetCallbacksForInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9f4c, 0x2520 bytes
    // fltMgr.sys .text:0xa454, 0x2428 bytes
    // fltMgr.sys .text:0x1aa4, 0x2428 bytes
    // fltMgr.sys .text:0xa454, 0x2428 bytes
    //
    _t94(sdk::unknown_ptr) fltp_set_callbacks_for_instance;
    
    // [FltpSetIoTargetInFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34340, 0x2520 bytes
    // fltMgr.sys PAGE:0x3bee0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3dcf0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3bee0, 0x2428 bytes
    //
    _t95(sdk::unknown_ptr) fltp_set_io_target_in_file_object;
    
    // [FltpSetIrpCtrlIoPriority]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9500, 0x2520 bytes
    // fltMgr.sys .text:0x8fa4, 0x2428 bytes
    // fltMgr.sys .text:0x9eec, 0x2428 bytes
    // fltMgr.sys .text:0x8fa4, 0x2428 bytes
    //
    _t96(sdk::unknown_ptr) fltp_set_irp_ctrl_io_priority;
    
    // [FltpSetPurgeFailureMode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31ba8, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ee20, 0x2428 bytes
    // fltMgr.sys PAGE:0x41488, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ee20, 0x2428 bytes
    //
    _t97(sdk::unknown_ptr) fltp_set_purge_failure_mode;
    
    // [FltpSetSectionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37270, 0x2520 bytes
    // fltMgr.sys PAGE:0x3efcc, 0x2428 bytes
    // fltMgr.sys PAGE:0x38a68, 0x2428 bytes
    // fltMgr.sys PAGE:0x3efcc, 0x2428 bytes
    //
    _t98(sdk::unknown_ptr) fltp_set_section_context;
    
    // [FltpSetStreamListStandardInformationFlags]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x37f18, 0x2520 bytes
    // fltMgr.sys PAGE:0x38a7c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3adb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x38a7c, 0x2428 bytes
    //
    _t99(sdk::unknown_ptr) fltp_set_stream_list_standard_information_flags;
    
    // [FltpSetTxVolVolNameCachePurge]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46738, 0x2520 bytes
    // fltMgr.sys PAGE:0x53470, 0x2428 bytes
    // fltMgr.sys PAGE:0x55530, 0x2428 bytes
    // fltMgr.sys PAGE:0x53470, 0x2428 bytes
    //
    _u00(sdk::unknown_ptr) fltp_set_tx_vol_vol_name_cache_purge;
    
    // [FltpSetUpIrpCallControl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x230c, 0x2520 bytes
    // fltMgr.sys .text:0x1e34, 0x2428 bytes
    // fltMgr.sys .text:0x2a50, 0x2428 bytes
    // fltMgr.sys .text:0x1e34, 0x2428 bytes
    //
    _u01(sdk::unknown_ptr) fltp_set_up_irp_call_control;
    
    // [FltpSetVolumeNameCachingState]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x2fdb8, 0x2520 bytes
    // fltMgr.sys PAGE:0x4258c, 0x2428 bytes
    // fltMgr.sys PAGE:0x43364, 0x2428 bytes
    // fltMgr.sys PAGE:0x4258c, 0x2428 bytes
    //
    _u02(sdk::unknown_ptr) fltp_set_volume_name_caching_state;
    
    // [FltpSetupPerformIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x942c, 0x2520 bytes
    // fltMgr.sys .text:0x8ec8, 0x2428 bytes
    // fltMgr.sys .text:0x9e10, 0x2428 bytes
    // fltMgr.sys .text:0x8ec8, 0x2428 bytes
    //
    _u03(sdk::unknown_ptr) fltp_setup_perform_io;
    
    // [FltpShouldSwapStacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3569c, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e5f8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3fc24, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e5f8, 0x2428 bytes
    //
    _u04(sdk::unknown_ptr) fltp_should_swap_stacks;
    
    // [FltpStartManualDeviceAttachChecks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e67c, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b3ec, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a68c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b3ec, 0x2428 bytes
    //
    _u05(sdk::unknown_ptr) fltp_start_manual_device_attach_checks;
    
    // [FltpStartMonitoringFrame]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3e560, 0x2520 bytes
    // fltMgr.sys PAGE:0x4b29c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a818, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b29c, 0x2428 bytes
    //
    _u06(sdk::unknown_ptr) fltp_start_monitoring_frame;
    
    // [FltpSyncIoCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb020, 0x2520 bytes
    // fltMgr.sys .text:0xbf90, 0x2428 bytes
    // fltMgr.sys .text:0xbff0, 0x2428 bytes
    // fltMgr.sys .text:0xbf90, 0x2428 bytes
    //
    _u07(sdk::unknown_ptr) fltp_sync_io_completion;
    
    // [FltpSyncOpWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x50a80, 0x2520 bytes
    // fltMgr.sys PAGE:0x5afa0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5c380, 0x2428 bytes
    // fltMgr.sys PAGE:0x5afa0, 0x2428 bytes
    //
    _u08(sdk::unknown_ptr) fltp_sync_op_worker;
    
    // [FltpSynchronizeIoCleanup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb7e8, 0x2520 bytes
    // fltMgr.sys .text:0xcc90, 0x2428 bytes
    // fltMgr.sys .text:0x1544, 0x2428 bytes
    // fltMgr.sys .text:0xcc90, 0x2428 bytes
    //
    _u09(sdk::unknown_ptr) fltp_synchronize_io_cleanup;
    
    // [FltpSynchronizeWithDatascan]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4017c, 0x2520 bytes
    // fltMgr.sys PAGE:0x589b4, 0x2428 bytes
    // fltMgr.sys PAGE:0x46a64, 0x2428 bytes
    // fltMgr.sys PAGE:0x589b4, 0x2428 bytes
    //
    _u10(sdk::unknown_ptr) fltp_synchronize_with_datascan;
    
    // [FltpSynchronizedOperationCompletion]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xad30, 0x2520 bytes
    // fltMgr.sys .text:0xb9f0, 0x2428 bytes
    // fltMgr.sys .text:0xbe60, 0x2428 bytes
    // fltMgr.sys .text:0xb9f0, 0x2428 bytes
    //
    _u11(sdk::unknown_ptr) fltp_synchronized_operation_completion;
    
    // [FltpSysVolCreateSecurityDescriptor]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e048, 0x2520 bytes
    // fltMgr.sys PAGE:0x59040, 0x2428 bytes
    // fltMgr.sys PAGE:0x5adac, 0x2428 bytes
    // fltMgr.sys PAGE:0x59040, 0x2428 bytes
    //
    _u12(sdk::unknown_ptr) fltp_sys_vol_create_security_descriptor;
    
    // [FltpTelemetryArrayElementSeparator]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1a130, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c8a8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ca9c, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c8a8, 0x2428 bytes
    //
    _u13(sdk::unknown_ptr) fltp_telemetry_array_element_separator;
    
    // [FltpTelemetryArrayEnd]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1846c, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c6dc, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cc6c, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c6dc, 0x2428 bytes
    //
    _u14(sdk::unknown_ptr) fltp_telemetry_array_end;
    
    // [FltpTelemetryArrayStart]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18470, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c6e0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cc68, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c6e0, 0x2428 bytes
    //
    _u15(sdk::unknown_ptr) fltp_telemetry_array_start;
    
    // [FltpTelemetryEmptyArray]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1a134, 0x2520 bytes
    // fltMgr.sys .rdata:0x1f4f0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f72c, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f4f0, 0x2428 bytes
    //
    _u16(sdk::unknown_ptr) fltp_telemetry_empty_array;
    
    // [FltpTelemetryEnumerateSerializeFilterRegistryInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3b0d4, 0x2520 bytes
    // fltMgr.sys PAGE:0x48e58, 0x2428 bytes
    // fltMgr.sys PAGE:0x4ccd0, 0x2428 bytes
    // fltMgr.sys PAGE:0x48e58, 0x2428 bytes
    //
    _u17(sdk::unknown_ptr) fltp_telemetry_enumerate_serialize_filter_registry_instances;
    
    // [FltpTelemetryFilterInfoFormat]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x184a0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c730, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cae0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c730, 0x2428 bytes
    //
    _u18(sdk::unknown_ptr) fltp_telemetry_filter_info_format;
    
    // [FltpTelemetryFreeInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e2a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x596f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b090, 0x2428 bytes
    // fltMgr.sys PAGE:0x596f0, 0x2428 bytes
    //
    _u19(sdk::unknown_ptr) fltp_telemetry_free_instance;
    
    // [FltpTelemetryInitInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e410, 0x2520 bytes
    // fltMgr.sys PAGE:0x59850, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b1f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x59850, 0x2428 bytes
    //
    _u20(sdk::unknown_ptr) fltp_telemetry_init_instance;
    
    // [FltpTelemetryInstanceInfoFormat]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18448, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c6a8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1cc80, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c6a8, 0x2428 bytes
    //
    _u21(sdk::unknown_ptr) fltp_telemetry_instance_info_format;
    
    // [FltpTelemetryLegacyFilterInfoFormat]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1a140, 0x2520 bytes
    // fltMgr.sys .rdata:0x1f4f8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f738, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f4f8, 0x2428 bytes
    //
    _u22(sdk::unknown_ptr) fltp_telemetry_legacy_filter_info_format;
    
    // [FltpTelemetryLegacyFilters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e540, 0x2520 bytes
    // fltMgr.sys PAGE:0x5998c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b32c, 0x2428 bytes
    // fltMgr.sys PAGE:0x5998c, 0x2428 bytes
    //
    _u23(sdk::function<void(struct nt::driver_object_t**, uint32_t)>*) fltp_telemetry_legacy_filters;
    
    // [FltpTelemetryLegacyFiltersInfoFormatEnd]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1a170, 0x2520 bytes
    // fltMgr.sys .rdata:0x1f528, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f768, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f528, 0x2428 bytes
    //
    _u24(sdk::unknown_ptr) fltp_telemetry_legacy_filters_info_format_end;
    
    // [FltpTelemetryLegacyFiltersInfoFormatStart]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x1a180, 0x2520 bytes
    // fltMgr.sys .rdata:0x1f538, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f778, 0x2428 bytes
    // fltMgr.sys .rdata:0x1f538, 0x2428 bytes
    //
    _u25(sdk::unknown_ptr) fltp_telemetry_legacy_filters_info_format_start;
    
    // [FltpTelemetrySerializeFilterRegistrationInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3b874, 0x2520 bytes
    // fltMgr.sys PAGE:0x496f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c5f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x496f0, 0x2428 bytes
    //
    _u26(sdk::unknown_ptr) fltp_telemetry_serialize_filter_registration_info;
    
    // [FltpTelemetrySerializeFilterRegistryInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3b74c, 0x2520 bytes
    // fltMgr.sys PAGE:0x49610, 0x2428 bytes
    // fltMgr.sys PAGE:0x4c78c, 0x2428 bytes
    // fltMgr.sys PAGE:0x49610, 0x2428 bytes
    //
    _u27(sdk::unknown_ptr) fltp_telemetry_serialize_filter_registry_instances;
    
    // [FltpTelemetrySerializeLegacyFilterInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e670, 0x2520 bytes
    // fltMgr.sys PAGE:0x59a74, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b414, 0x2428 bytes
    // fltMgr.sys PAGE:0x59a74, 0x2428 bytes
    //
    _u28(sdk::unknown_ptr) fltp_telemetry_serialize_legacy_filter_info;
    
    // [FltpTelemetrySerializeLegacyFiltersInfo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4e784, 0x2520 bytes
    // fltMgr.sys PAGE:0x59b64, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b504, 0x2428 bytes
    // fltMgr.sys PAGE:0x59b64, 0x2428 bytes
    //
    _u29(sdk::unknown_ptr) fltp_telemetry_serialize_legacy_filters_info;
    
    // [FltpTelemetryUnloadFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4ea58, 0x2520 bytes
    // fltMgr.sys PAGE:0x59dd8, 0x2428 bytes
    // fltMgr.sys PAGE:0x5b750, 0x2428 bytes
    // fltMgr.sys PAGE:0x59dd8, 0x2428 bytes
    //
    _u30(sdk::unknown_ptr) fltp_telemetry_unload_filter;
    
    // [FltpTelemetryVolumeAttach]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3d9c8, 0x2520 bytes
    // fltMgr.sys PAGE:0x46d60, 0x2428 bytes
    // fltMgr.sys PAGE:0x4944c, 0x2428 bytes
    // fltMgr.sys PAGE:0x46d60, 0x2428 bytes
    //
    _u31(sdk::unknown_ptr) fltp_telemetry_volume_attach;
    
    // [FltpTraceRedirectedFileIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3a420, 0x2520 bytes
    // fltMgr.sys PAGE:0x57380, 0x2428 bytes
    // fltMgr.sys PAGE:0x59b60, 0x2428 bytes
    // fltMgr.sys PAGE:0x57380, 0x2428 bytes
    //
    _u32(sdk::unknown_ptr) fltp_trace_redirected_file_io;
    
    // [FltpTranslateIoctlDataBuffers]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34de4, 0x2520 bytes
    // fltMgr.sys PAGE:0x3c984, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e05c, 0x2428 bytes
    // fltMgr.sys PAGE:0x3c984, 0x2428 bytes
    //
    _u33(sdk::unknown_ptr) fltp_translate_ioctl_data_buffers;
    
    // [FltpTxVolKtmNotification]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x467f0, 0x2520 bytes
    // fltMgr.sys PAGE:0x45d30, 0x2428 bytes
    // fltMgr.sys PAGE:0x479e0, 0x2428 bytes
    // fltMgr.sys PAGE:0x45d30, 0x2428 bytes
    //
    _u34(sdk::unknown_ptr) fltp_tx_vol_ktm_notification;
    
    // [FltpTxVolWaitForCommitFinalize]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x46900, 0x2520 bytes
    // fltMgr.sys PAGE:0x45cc0, 0x2428 bytes
    // fltMgr.sys PAGE:0x47970, 0x2428 bytes
    // fltMgr.sys PAGE:0x45cc0, 0x2428 bytes
    //
    _u35(sdk::unknown_ptr) fltp_tx_vol_wait_for_commit_finalize;
    
    // [FltpUnlinkCompletionNodeFromInstanceLocked]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x136e4, 0x2520 bytes
    // fltMgr.sys .text:0x16990, 0x2428 bytes
    // fltMgr.sys .text:0x16884, 0x2428 bytes
    // fltMgr.sys .text:0x16990, 0x2428 bytes
    //
    _u36(sdk::unknown_ptr) fltp_unlink_completion_node_from_instance_locked;
    
    // [FltpUnlinkFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54230, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c07c, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d07c, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c07c, 0x2428 bytes
    //
    _u37(sdk::unknown_ptr) fltp_unlink_filter;
    
    // [FltpUnloadFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x5042c, 0x2520 bytes
    // fltMgr.sys PAGE:0x5a7ec, 0x2428 bytes
    // fltMgr.sys PAGE:0x5bdd8, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a7ec, 0x2428 bytes
    //
    _u38(sdk::unknown_ptr) fltp_unload_filter;
    
    // [FltpUnloadFilterWorker]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4bba0, 0x2520 bytes
    // fltMgr.sys PAGE:0x57870, 0x2428 bytes
    // fltMgr.sys PAGE:0x5a050, 0x2428 bytes
    // fltMgr.sys PAGE:0x57870, 0x2428 bytes
    //
    _u39(sdk::unknown_ptr) fltp_unload_filter_worker;
    
    // [FltpUpdateDynamicRegistrySettings]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ebf0, 0x2520 bytes
    // fltMgr.sys PAGE:0x4be70, 0x2428 bytes
    // fltMgr.sys PAGE:0x49d10, 0x2428 bytes
    // fltMgr.sys PAGE:0x4be70, 0x2428 bytes
    //
    _u40(sdk::unknown_ptr) fltp_update_dynamic_registry_settings;
    
    // [FltpVerifierCodeSectionHandle]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x26488, 0x2520 bytes
    // fltMgr.sys .data:0x2c9e0, 0x2428 bytes
    // fltMgr.sys .data:0x2caf0, 0x2428 bytes
    // fltMgr.sys .data:0x2c9e0, 0x2428 bytes
    //
    _u41(sdk::unknown_ptr) fltp_verifier_code_section_handle;
    
    // [FltpVerifierFlags]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x26480, 0x2520 bytes
    // fltMgr.sys .data:0x2c9c0, 0x2428 bytes
    // fltMgr.sys .data:0x2c9a8, 0x2428 bytes
    // fltMgr.sys .data:0x2c9c0, 0x2428 bytes
    //
    _u42(sdk::unknown_ptr) fltp_verifier_flags;
    
    // [FltpVerifyIoIrqlStatus]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54284, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c0e4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d0e4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c0e4, 0x2428 bytes
    //
    _u43(sdk::unknown_ptr) fltp_verify_io_irql_status;
    
    // [FltpWaitForCommitFinalize]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4f2a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x47400, 0x2428 bytes
    // fltMgr.sys PAGE:0x48430, 0x2428 bytes
    // fltMgr.sys PAGE:0x47400, 0x2428 bytes
    //
    _u44(sdk::unknown_ptr) fltp_wait_for_commit_finalize;
    
    // [FltpWaitForRundownProtectionReleaseInternal]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb0f8, 0x2520 bytes
    // fltMgr.sys .text:0xc668, 0x2428 bytes
    // fltMgr.sys .text:0xc3b8, 0x2428 bytes
    // fltMgr.sys .text:0xc668, 0x2428 bytes
    //
    _u45(sdk::function<void(void*, uint8_t)>*) fltp_wait_for_rundown_protection_release_internal;
    
    // [FltpWatchForRegistryChanges]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3ec60, 0x2520 bytes
    // fltMgr.sys PAGE:0x4bf00, 0x2428 bytes
    // fltMgr.sys PAGE:0x49b80, 0x2428 bytes
    // fltMgr.sys PAGE:0x4bf00, 0x2428 bytes
    //
    _u46(sdk::unknown_ptr) fltp_watch_for_registry_changes;
    
    // [FltpvConnectionNotify]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51020, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60010, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62010, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60010, 0x2428 bytes
    //
    _u47(sdk::unknown_ptr) fltpv_connection_notify;
    
    // [FltpvDisconnectNotify]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51160, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60170, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62190, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60170, 0x2428 bytes
    //
    _u48(sdk::unknown_ptr) fltpv_disconnect_notify;
    
    // [FltpvDoLostObjectCheck]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54350, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c180, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d190, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c180, 0x2428 bytes
    //
    _u49(sdk::unknown_ptr) fltpv_do_lost_object_check;
    
    // [FltpvFreeVerifierObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54548, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c3c4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d3d4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c3c4, 0x2428 bytes
    //
    _u50(sdk::unknown_ptr) fltpv_free_verifier_object;
    
    // [FltpvGetCallbackDataChanges]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x5456c, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c3ec, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d3fc, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c3ec, 0x2428 bytes
    //
    _u51(sdk::unknown_ptr) fltpv_get_callback_data_changes;
    
    // [FltpvGetFileObjectForHandle]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54650, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c4f4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d504, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c4f4, 0x2428 bytes
    //
    _u52(sdk::unknown_ptr) fltpv_get_file_object_for_handle;
    
    // [FltpvGetFilterFromCallerAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54698, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c554, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d564, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c554, 0x2428 bytes
    //
    _u53(sdk::unknown_ptr) fltpv_get_filter_from_caller_address;
    
    // [FltpvLinkResourceToFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54724, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c5f4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d604, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c5f4, 0x2428 bytes
    //
    _u54(sdk::unknown_ptr) fltpv_link_resource_to_filter;
    
    // [FltpvMessageNotify]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51240, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60270, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x622b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60270, 0x2428 bytes
    //
    _u55(sdk::unknown_ptr) fltpv_message_notify;
    
    // [FltpvPreAllocateVerifierObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x548dc, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c7e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d7f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c7e0, 0x2428 bytes
    //
    _u56(sdk::unknown_ptr) fltpv_pre_allocate_verifier_object;
    
    // [FltpvPrintErrors]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54918, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5c824, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d834, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5c824, 0x2428 bytes
    //
    _u57(sdk::unknown_ptr) fltpv_print_errors;
    
    // [FltpvUnlinkResourceFromFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54af8, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5ca68, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5da54, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ca68, 0x2428 bytes
    //
    _u58(sdk::unknown_ptr) fltpv_unlink_resource_from_filter;
    
    // [FltpvValidateFileNameOptions]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54c70, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5cbf4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dbe0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5cbf4, 0x2428 bytes
    //
    _u59(sdk::unknown_ptr) fltpv_validate_file_name_options;
    
    // [FltpvValidateReadWriteParameters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54cc8, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5cc54, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dc40, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5cc54, 0x2428 bytes
    //
    _u60(sdk::unknown_ptr) fltpv_validate_read_write_parameters;
    
    // [FltpvVerifyIoIrqlStatus]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54f1c, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5ceb4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dea0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ceb4, 0x2428 bytes
    //
    _u61(sdk::unknown_ptr) fltpv_verify_io_irql_status;
    
    // [FltpvVerifyPreOperationStatus]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x54fdc, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5cf78, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5df68, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5cf78, 0x2428 bytes
    //
    _u62(sdk::unknown_ptr) fltpv_verify_pre_operation_status;
    
    // [FltvAddOpenReparseEntry]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51350, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x603a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62400, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x603a0, 0x2428 bytes
    //
    _u63(sdk::unknown_ptr) fltv_add_open_reparse_entry;
    
    // [FltvAllocateCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55470, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d440, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e430, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d440, 0x2428 bytes
    //
    _u64(sdk::unknown_ptr) fltv_allocate_callback_data;
    
    // [FltvAllocateCallbackDataEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55510, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d500, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e4f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d500, 0x2428 bytes
    //
    _u65(sdk::unknown_ptr) fltv_allocate_callback_data_ex;
    
    // [FltvAllocateContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x555c0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d5d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e5c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d5d0, 0x2428 bytes
    //
    _u66(sdk::unknown_ptr) fltv_allocate_context;
    
    // [FltvAllocateDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55670, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d6a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e690, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d6a0, 0x2428 bytes
    //
    _u67(sdk::unknown_ptr) fltv_allocate_deferred_io_work_item;
    
    // [FltvAllocateExtraCreateParameter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x513c0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60420, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62490, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60420, 0x2428 bytes
    //
    _u68(sdk::unknown_ptr) fltv_allocate_extra_create_parameter;
    
    // [FltvAllocateExtraCreateParameterFromLookasideList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51470, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x604e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62560, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x604e0, 0x2428 bytes
    //
    _u69(sdk::unknown_ptr) fltv_allocate_extra_create_parameter_from_lookaside_list;
    
    // [FltvAllocateGenericWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x556e0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d730, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e730, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d730, 0x2428 bytes
    //
    _u70(sdk::unknown_ptr) fltv_allocate_generic_work_item;
    
    // [FltvAllocatePoolAlignedWithTag]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17510, 0x2520 bytes
    // fltMgr.sys .text:0x1a770, 0x2428 bytes
    // fltMgr.sys .text:0x1b2d0, 0x2428 bytes
    // fltMgr.sys .text:0x1a770, 0x2428 bytes
    //
    _u71(sdk::unknown_ptr) fltv_allocate_pool_aligned_with_tag;
    
    // [FltvAttachVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51520, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x605a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62630, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x605a0, 0x2428 bytes
    //
    _u72(sdk::unknown_ptr) fltv_attach_volume;
    
    // [FltvAttachVolumeAtAltitude]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x515d0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60650, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x626f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60650, 0x2428 bytes
    //
    _u73(sdk::unknown_ptr) fltv_attach_volume_at_altitude;
    
    // [FltvCancelFileOpen]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51680, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60710, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x627b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60710, 0x2428 bytes
    //
    _u74(sdk::unknown_ptr) fltv_cancel_file_open;
    
    // [FltvCbdqInsertIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55750, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d7c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e7d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d7c0, 0x2428 bytes
    //
    _u75(sdk::unknown_ptr) fltv_cbdq_insert_io;
    
    // [FltvCbdqRemoveIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x557e0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d860, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e870, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d860, 0x2428 bytes
    //
    _u76(sdk::unknown_ptr) fltv_cbdq_remove_io;
    
    // [FltvCbdqRemoveNextIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55820, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d8a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e8b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d8a0, 0x2428 bytes
    //
    _u77(sdk::unknown_ptr) fltv_cbdq_remove_next_io;
    
    // [FltvClose]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x516f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60780, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62820, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60780, 0x2428 bytes
    //
    _u78(sdk::unknown_ptr) fltv_close;
    
    // [FltvCloseSectionForDataScan]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51750, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x607e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62890, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x607e0, 0x2428 bytes
    //
    _u79(sdk::unknown_ptr) fltv_close_section_for_data_scan;
    
    // [FltvCompareInstanceAltitudes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55860, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d8e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e8f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d8e0, 0x2428 bytes
    //
    _u80(sdk::unknown_ptr) fltv_compare_instance_altitudes;
    
    // [FltvCompletePendedPostOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x558e0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5d970, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e980, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5d970, 0x2428 bytes
    //
    _u81(sdk::unknown_ptr) fltv_complete_pended_post_operation;
    
    // [FltvCompletePendedPreOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x559b0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5da40, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ea70, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5da40, 0x2428 bytes
    //
    _u82(sdk::unknown_ptr) fltv_complete_pended_pre_operation;
    
    // [FltvCopyOpenReparseList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x517a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60840, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x628f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60840, 0x2428 bytes
    //
    _u83(sdk::unknown_ptr) fltv_copy_open_reparse_list;
    
    // [FltvCreateFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51810, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x608c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62980, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x608c0, 0x2428 bytes
    //
    _u84(sdk::unknown_ptr) fltv_create_file;
    
    // [FltvCreateFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51930, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x609f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62ab0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x609f0, 0x2428 bytes
    //
    _u85(sdk::unknown_ptr) fltv_create_file_ex;
    
    // [FltvCreateFileEx2]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51a70, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60b40, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62c00, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60b40, 0x2428 bytes
    //
    _u86(sdk::unknown_ptr) fltv_create_file_ex2;
    
    // [FltvCreateSectionForDataScan]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51ca0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60d50, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62e10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60d50, 0x2428 bytes
    //
    _u87(sdk::unknown_ptr) fltv_create_section_for_data_scan;
    
    // [FltvCreateSystemVolumeInformationFolder]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51d90, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60e50, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62f10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60e50, 0x2428 bytes
    //
    _u88(sdk::unknown_ptr) fltv_create_system_volume_information_folder;
    
    // [FltvDeleteContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55bc0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5dc50, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ec90, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dc50, 0x2428 bytes
    //
    _u89(sdk::unknown_ptr) fltv_delete_context;
    
    // [FltvDeleteFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55c00, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5dca0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ece0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dca0, 0x2428 bytes
    //
    _u90(sdk::unknown_ptr) fltv_delete_file_context;
    
    // [FltvDeleteInstanceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55c80, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5dd40, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ed90, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dd40, 0x2428 bytes
    //
    _u91(sdk::unknown_ptr) fltv_delete_instance_context;
    
    // [FltvDeleteStreamContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55d00, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5dde0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ee30, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dde0, 0x2428 bytes
    //
    _u92(sdk::unknown_ptr) fltv_delete_stream_context;
    
    // [FltvDeleteStreamHandleContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55d80, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5de80, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5eee0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5de80, 0x2428 bytes
    //
    _u93(sdk::unknown_ptr) fltv_delete_stream_handle_context;
    
    // [FltvDeleteTransactionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55e00, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5df20, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ef90, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5df20, 0x2428 bytes
    //
    _u94(sdk::unknown_ptr) fltv_delete_transaction_context;
    
    // [FltvDeleteVolumeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55e80, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5dfc0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f040, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5dfc0, 0x2428 bytes
    //
    _u95(sdk::unknown_ptr) fltv_delete_volume_context;
    
    // [FltvDeviceIoControlFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51dc0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60e80, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62f50, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60e80, 0x2428 bytes
    //
    _u96(sdk::unknown_ptr) fltv_device_io_control_file;
    
    // [FltvDoCompletionProcessingWhenSafe]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55f00, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e050, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f0e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e050, 0x2428 bytes
    //
    _u97(sdk::unknown_ptr) fltv_do_completion_processing_when_safe;
    
    // [FltvEnumerateFilters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51e20, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x60f10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62fe0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x60f10, 0x2428 bytes
    //
    _u98(sdk::unknown_ptr) fltv_enumerate_filters;
    
    // [FltvEnumerateInstances]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x51f90, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61090, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63170, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61090, 0x2428 bytes
    //
    _u99(sdk::unknown_ptr) fltv_enumerate_instances;
    
    // [FltvEnumerateVolumes]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52100, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61220, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63300, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61220, 0x2428 bytes
    //
    _v00(sdk::unknown_ptr) fltv_enumerate_volumes;
    
    // [FltvFlushBuffers]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52270, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x613b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x634a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x613b0, 0x2428 bytes
    //
    _v01(sdk::unknown_ptr) fltv_flush_buffers;
    
    // [FltvFreeCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55fa0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e100, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f190, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e100, 0x2428 bytes
    //
    _v02(sdk::unknown_ptr) fltv_free_callback_data;
    
    // [FltvFreeDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x55ff0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e160, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f200, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e160, 0x2428 bytes
    //
    _v03(sdk::unknown_ptr) fltv_free_deferred_io_work_item;
    
    // [FltvFreeGenericWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56030, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e1a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f250, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e1a0, 0x2428 bytes
    //
    _v04(sdk::unknown_ptr) fltv_free_generic_work_item;
    
    // [FltvFreeOpenReparseList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x522b0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x613f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x634f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x613f0, 0x2428 bytes
    //
    _v05(sdk::unknown_ptr) fltv_free_open_reparse_list;
    
    // [FltvFsControlFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x522e0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61430, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63540, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61430, 0x2428 bytes
    //
    _v06(sdk::unknown_ptr) fltv_fs_control_file;
    
    // [FltvGenerateFileName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52340, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x614c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x635d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x614c0, 0x2428 bytes
    //
    _v07(sdk::unknown_ptr) fltv_generate_file_name;
    
    // [FltvGetBottomInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x523f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61580, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x636a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61580, 0x2428 bytes
    //
    _v08(sdk::unknown_ptr) fltv_get_bottom_instance;
    
    // [FltvGetContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56070, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e1e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f2a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e1e0, 0x2428 bytes
    //
    _v09(sdk::unknown_ptr) fltv_get_contexts;
    
    // [FltvGetContextsEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56120, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e2a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f380, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e2a0, 0x2428 bytes
    //
    _v10(sdk::unknown_ptr) fltv_get_contexts_ex;
    
    // [FltvGetDestinationFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52470, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61610, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63730, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61610, 0x2428 bytes
    //
    _v11(sdk::unknown_ptr) fltv_get_destination_file_name_information;
    
    // [FltvGetFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56230, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e3c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f4a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e3c0, 0x2428 bytes
    //
    _v12(sdk::unknown_ptr) fltv_get_file_context;
    
    // [FltvGetFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x562a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e450, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f540, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e450, 0x2428 bytes
    //
    _v13(sdk::unknown_ptr) fltv_get_file_name_information;
    
    // [FltvGetFileNameInformationUnsafe]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52540, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x616f0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63820, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x616f0, 0x2428 bytes
    //
    _v14(sdk::unknown_ptr) fltv_get_file_name_information_unsafe;
    
    // [FltvGetFilterFromInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x525f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x617a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x638e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x617a0, 0x2428 bytes
    //
    _v15(sdk::unknown_ptr) fltv_get_filter_from_instance;
    
    // [FltvGetFilterFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52670, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61830, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63970, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61830, 0x2428 bytes
    //
    _v16(sdk::unknown_ptr) fltv_get_filter_from_name;
    
    // [FltvGetInstanceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56330, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e500, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f600, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e500, 0x2428 bytes
    //
    _v17(sdk::unknown_ptr) fltv_get_instance_context;
    
    // [FltvGetLowerInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x526f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x618c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63a00, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x618c0, 0x2428 bytes
    //
    _v18(sdk::unknown_ptr) fltv_get_lower_instance;
    
    // [FltvGetRoutineAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52770, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61950, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63a90, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61950, 0x2428 bytes
    //
    _v19(sdk::unknown_ptr) fltv_get_routine_address;
    
    // [FltvGetSectionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x563a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e590, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f6a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e590, 0x2428 bytes
    //
    _v20(sdk::unknown_ptr) fltv_get_section_context;
    
    // [FltvGetStreamContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56410, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e620, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f740, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e620, 0x2428 bytes
    //
    _v21(sdk::unknown_ptr) fltv_get_stream_context;
    
    // [FltvGetStreamHandleContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56480, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e6b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f7e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e6b0, 0x2428 bytes
    //
    _v22(sdk::unknown_ptr) fltv_get_stream_handle_context;
    
    // [FltvGetSwappedBufferMdlAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x564f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e740, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f880, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e740, 0x2428 bytes
    //
    _v23(sdk::unknown_ptr) fltv_get_swapped_buffer_mdl_address;
    
    // [FltvGetTopInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x527b0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61990, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63ad0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61990, 0x2428 bytes
    //
    _v24(sdk::unknown_ptr) fltv_get_top_instance;
    
    // [FltvGetTransactionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56540, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e7a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f8e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e7a0, 0x2428 bytes
    //
    _v25(sdk::unknown_ptr) fltv_get_transaction_context;
    
    // [FltvGetTunneledName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52830, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61a20, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63b60, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61a20, 0x2428 bytes
    //
    _v26(sdk::unknown_ptr) fltv_get_tunneled_name;
    
    // [FltvGetUpperInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x528f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61af0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63c40, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61af0, 0x2428 bytes
    //
    _v27(sdk::unknown_ptr) fltv_get_upper_instance;
    
    // [FltvGetVolumeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x565b0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e830, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f980, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e830, 0x2428 bytes
    //
    _v28(sdk::unknown_ptr) fltv_get_volume_context;
    
    // [FltvGetVolumeFromDeviceObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52970, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61b80, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63cd0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61b80, 0x2428 bytes
    //
    _v29(sdk::unknown_ptr) fltv_get_volume_from_device_object;
    
    // [FltvGetVolumeFromFileObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52a00, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61c20, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63d70, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61c20, 0x2428 bytes
    //
    _v30(sdk::unknown_ptr) fltv_get_volume_from_file_object;
    
    // [FltvGetVolumeFromInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52a90, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61cc0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63e10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61cc0, 0x2428 bytes
    //
    _v31(sdk::unknown_ptr) fltv_get_volume_from_instance;
    
    // [FltvGetVolumeFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52b10, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61d50, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63ea0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61d50, 0x2428 bytes
    //
    _v32(sdk::unknown_ptr) fltv_get_volume_from_name;
    
    // [FltvGetVolumeInstanceFromName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52ba0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61df0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63f40, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61df0, 0x2428 bytes
    //
    _v33(sdk::unknown_ptr) fltv_get_volume_instance_from_name;
    
    // [FltvInstanceQueryTeardown]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52c40, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61ea0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x63ff0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61ea0, 0x2428 bytes
    //
    _v34(sdk::unknown_ptr) fltv_instance_query_teardown;
    
    // [FltvInstanceSetup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52d30, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x61fb0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64120, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x61fb0, 0x2428 bytes
    //
    _v35(sdk::unknown_ptr) fltv_instance_setup;
    
    // [FltvInstanceTeardownComplete]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52e30, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x620d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64260, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x620d0, 0x2428 bytes
    //
    _v36(sdk::unknown_ptr) fltv_instance_teardown_complete;
    
    // [FltvInstanceTeardownStart]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x52f20, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x621d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64390, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x621d0, 0x2428 bytes
    //
    _v37(sdk::unknown_ptr) fltv_instance_teardown_start;
    
    // [FltvLockUserBuffer]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56620, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e8c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fa20, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e8c0, 0x2428 bytes
    //
    _v38(sdk::unknown_ptr) fltv_lock_user_buffer;
    
    // [FltvMessageTable]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x24f50, 0x2520 bytes
    // fltMgr.sys .data:0x2afc0, 0x2428 bytes
    // fltMgr.sys .data:0x2afc0, 0x2428 bytes
    // fltMgr.sys .data:0x2afc0, 0x2428 bytes
    //
    _v39(sdk::unknown_ptr) fltv_message_table;
    
    // [FltvNormalizeNameComponent]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53010, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x622d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x644c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x622d0, 0x2428 bytes
    //
    _v40(sdk::unknown_ptr) fltv_normalize_name_component;
    
    // [FltvNormalizeNameComponentEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x530e0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x623a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x645a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x623a0, 0x2428 bytes
    //
    _v41(sdk::unknown_ptr) fltv_normalize_name_component_ex;
    
    // [FltvObjectDereference]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56660, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e900, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fa60, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e900, 0x2428 bytes
    //
    _v42(sdk::unknown_ptr) fltv_object_dereference;
    
    // [FltvObjectReference]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x566a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e940, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fab0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e940, 0x2428 bytes
    //
    _v43(sdk::unknown_ptr) fltv_object_reference;
    
    // [FltvOpenVolume]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x531c0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62480, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64690, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62480, 0x2428 bytes
    //
    _v44(sdk::unknown_ptr) fltv_open_volume;
    
    // [FltvOplockFsctrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53270, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62530, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64750, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62530, 0x2428 bytes
    //
    _v45(sdk::unknown_ptr) fltv_oplock_fsctrl;
    
    // [FltvOplockFsctrlEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x532d0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x625a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x647c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x625a0, 0x2428 bytes
    //
    _v46(sdk::unknown_ptr) fltv_oplock_fsctrl_ex;
    
    // [FltvPerformAsynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56720, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5e9e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fb50, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5e9e0, 0x2428 bytes
    //
    _v47(sdk::unknown_ptr) fltv_perform_asynchronous_io;
    
    // [FltvPerformSynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56850, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5eb20, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fc90, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5eb20, 0x2428 bytes
    //
    _v48(sdk::unknown_ptr) fltv_perform_synchronous_io;
    
    // [FltvPostOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56960, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5ec40, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fdc0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ec40, 0x2428 bytes
    //
    _v49(sdk::unknown_ptr) fltv_post_operation;
    
    // [FltvPreOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56b70, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5ee80, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60030, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5ee80, 0x2428 bytes
    //
    _v50(sdk::unknown_ptr) fltv_pre_operation;
    
    // [FltvQueryDirectoryFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53340, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62620, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64840, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62620, 0x2428 bytes
    //
    _v51(sdk::unknown_ptr) fltv_query_directory_file;
    
    // [FltvQueryEaFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x533a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62750, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64970, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62750, 0x2428 bytes
    //
    _v52(sdk::unknown_ptr) fltv_query_ea_file;
    
    // [FltvQueryInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53400, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62800, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64a20, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62800, 0x2428 bytes
    //
    _v53(sdk::unknown_ptr) fltv_query_information_file;
    
    // [FltvQuerySecurityObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53460, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62870, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64aa0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62870, 0x2428 bytes
    //
    _v54(sdk::unknown_ptr) fltv_query_security_object;
    
    // [FltvQueryVolumeInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56df0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f150, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60330, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f150, 0x2428 bytes
    //
    _v55(sdk::unknown_ptr) fltv_query_volume_information_file;
    
    // [FltvQueueDeferredIoWorkItem]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56e50, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f1c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x603b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f1c0, 0x2428 bytes
    //
    _v56(sdk::unknown_ptr) fltv_queue_deferred_io_work_item;
    
    // [FltvReadFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56f30, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f2b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x604a0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f2b0, 0x2428 bytes
    //
    _v57(sdk::unknown_ptr) fltv_read_file;
    
    // [FltvReadFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x56fd0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f390, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60580, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f390, 0x2428 bytes
    //
    _v58(sdk::unknown_ptr) fltv_read_file_ex;
    
    // [FltvReferenceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57080, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f480, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60690, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f480, 0x2428 bytes
    //
    _v59(sdk::unknown_ptr) fltv_reference_context;
    
    // [FltvReferenceFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x534c0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x628e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64b20, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x628e0, 0x2428 bytes
    //
    _v60(sdk::unknown_ptr) fltv_reference_file_name_information;
    
    // [FltvReissueSynchronousIo]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x534f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62920, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64bc0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62920, 0x2428 bytes
    //
    _v61(sdk::unknown_ptr) fltv_reissue_synchronous_io;
    
    // [FltvReleaseContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x570b0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f4b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x606d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f4b0, 0x2428 bytes
    //
    _v62(sdk::unknown_ptr) fltv_release_context;
    
    // [FltvReleaseContexts]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x570e0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f4e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60710, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f4e0, 0x2428 bytes
    //
    _v63(sdk::unknown_ptr) fltv_release_contexts;
    
    // [FltvReleaseContextsEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57190, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f590, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60830, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f590, 0x2428 bytes
    //
    _v64(sdk::unknown_ptr) fltv_release_contexts_ex;
    
    // [FltvReleaseFileNameInformation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53660, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62a90, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64d40, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62a90, 0x2428 bytes
    //
    _v65(sdk::unknown_ptr) fltv_release_file_name_information;
    
    // [FltvRemoveOpenReparseEntry]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x536a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62ad0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64d90, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62ad0, 0x2428 bytes
    //
    _v66(sdk::unknown_ptr) fltv_remove_open_reparse_entry;
    
    // [FltvRequestOperationStatusCallback]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57260, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f670, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60970, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f670, 0x2428 bytes
    //
    _v67(sdk::unknown_ptr) fltv_request_operation_status_callback;
    
    // [FltvRetainSwappedBufferMdlAddress]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x572d0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f6e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x609e0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f6e0, 0x2428 bytes
    //
    _v68(sdk::unknown_ptr) fltv_retain_swapped_buffer_mdl_address;
    
    // [FltvReuseCallbackData]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57320, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f740, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60a40, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f740, 0x2428 bytes
    //
    _v69(sdk::unknown_ptr) fltv_reuse_callback_data;
    
    // [FltvSetEaFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x536d0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62b10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64df0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62b10, 0x2428 bytes
    //
    _v70(sdk::unknown_ptr) fltv_set_ea_file;
    
    // [FltvSetFileContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57390, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f7b0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60ab0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f7b0, 0x2428 bytes
    //
    _v71(sdk::unknown_ptr) fltv_set_file_context;
    
    // [FltvSetInformationFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53730, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62b70, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64e60, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62b70, 0x2428 bytes
    //
    _v72(sdk::unknown_ptr) fltv_set_information_file;
    
    // [FltvSetInstanceContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57450, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f890, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60b90, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f890, 0x2428 bytes
    //
    _v73(sdk::unknown_ptr) fltv_set_instance_context;
    
    // [FltvSetSecurityObject]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x537c0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62c10, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64f00, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62c10, 0x2428 bytes
    //
    _v74(sdk::unknown_ptr) fltv_set_security_object;
    
    // [FltvSetStreamContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x574f0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5f950, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60c60, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5f950, 0x2428 bytes
    //
    _v75(sdk::unknown_ptr) fltv_set_stream_context;
    
    // [FltvSetStreamHandleContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x575b0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5fa30, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60d40, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fa30, 0x2428 bytes
    //
    _v76(sdk::unknown_ptr) fltv_set_stream_handle_context;
    
    // [FltvSetTransactionContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57670, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5fb10, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60e20, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fb10, 0x2428 bytes
    //
    _v77(sdk::unknown_ptr) fltv_set_transaction_context;
    
    // [FltvSetVolumeContext]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57730, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5fbf0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60f00, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fbf0, 0x2428 bytes
    //
    _v78(sdk::unknown_ptr) fltv_set_volume_context;
    
    // [FltvStartFiltering]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53820, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62c70, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64f70, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62c70, 0x2428 bytes
    //
    _v79(sdk::unknown_ptr) fltv_start_filtering;
    
    // [FltvTagFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53830, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62c90, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x64fa0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62c90, 0x2428 bytes
    //
    _v80(sdk::unknown_ptr) fltv_tag_file;
    
    // [FltvUnregisterFilter]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x53890, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62db0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x650d0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62db0, 0x2428 bytes
    //
    _v81(sdk::unknown_ptr) fltv_unregister_filter;
    
    // [FltvUntagFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF1:0x538a0, 0x2520 bytes
    // fltMgr.sys PAGEVRF1:0x62dd0, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x65100, 0x2428 bytes
    // fltMgr.sys PAGEVRF1:0x62dd0, 0x2428 bytes
    //
    _v82(sdk::unknown_ptr) fltv_untag_file;
    
    // [FltvWriteFile]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x577d0, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5fcb0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x60fd0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fcb0, 0x2428 bytes
    //
    _v83(sdk::unknown_ptr) fltv_write_file;
    
    // [FltvWriteFileEx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57870, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5fd80, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x610c0, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fd80, 0x2428 bytes
    //
    _v84(sdk::unknown_ptr) fltv_write_file_ex;
    
    // [FrameZeroAltitude]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18010, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c1b0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c040, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c1b0, 0x2428 bytes
    //
    _v85(sdk::unknown_ptr) frame_zero_altitude;
    
    // [FreeTargetedIoCtrl]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x32fa4, 0x2520 bytes
    // fltMgr.sys PAGE:0x4052c, 0x2428 bytes
    // fltMgr.sys PAGE:0x40120, 0x2428 bytes
    // fltMgr.sys PAGE:0x4052c, 0x2428 bytes
    //
    _v86(sdk::unknown_ptr) free_targeted_io_ctrl;
    
    // [FsrtlFltMgrCallbacks]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18020, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c1c0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c050, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c1c0, 0x2428 bytes
    //
    _v87(sdk::unknown_ptr) fsrtl_flt_mgr_callbacks;
    
    // [GetContextFromFileList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13360, 0x2520 bytes
    // fltMgr.sys .text:0x164dc, 0x2428 bytes
    // fltMgr.sys .text:0xf64e, 0x2428 bytes
    // fltMgr.sys .text:0x164dc, 0x2428 bytes
    //
    _v88(sdk::unknown_ptr) get_context_from_file_list;
    
    // [GetContextFromStreamList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x7630, 0x2520 bytes
    // fltMgr.sys .text:0x165b8, 0x2428 bytes
    // fltMgr.sys .text:0x164ac, 0x2428 bytes
    // fltMgr.sys .text:0x165b8, 0x2428 bytes
    //
    _v89(sdk::unknown_ptr) get_context_from_stream_list;
    
    // [GetCtxIdx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xbe24, 0x2520 bytes
    // fltMgr.sys .text:0xe4d4, 0x2428 bytes
    // fltMgr.sys .text:0xdef4, 0x2428 bytes
    // fltMgr.sys .text:0xe4d4, 0x2428 bytes
    //
    _v90(sdk::unknown_ptr) get_ctx_idx;
    
    // [GUID_ECP_FLT_CREATEFILE_TARGET]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x194b0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1e6f8, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e868, 0x2428 bytes
    // fltMgr.sys .rdata:0x1e6f8, 0x2428 bytes
    //
    _v91(struct nt::guid_t*) guid_ecp_flt_createfile_target;
    
    // [HandleStreamListNotSupported]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8840, 0x2520 bytes
    // fltMgr.sys .text:0x2390, 0x2428 bytes
    // fltMgr.sys .text:0x2da0, 0x2428 bytes
    // fltMgr.sys .text:0x2390, 0x2428 bytes
    //
    _v92(sdk::unknown_ptr) handle_stream_list_not_supported;
    
    // [InsertContextEntry]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c810, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a508, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b75c, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a508, 0x2428 bytes
    //
    _v93(sdk::unknown_ptr) insert_context_entry;
    
    // [IrpNames]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18150, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c340, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c370, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c340, 0x2428 bytes
    //
    _v94(sdk::unknown_ptr) irp_names;
    
    // [IssueControlOperation]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x31f0c, 0x2520 bytes
    // fltMgr.sys PAGE:0x3d6e8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ec38, 0x2428 bytes
    // fltMgr.sys PAGE:0x3d6e8, 0x2428 bytes
    //
    _v95(sdk::unknown_ptr) issue_control_operation;
    
    // [LegacyFilterAltitdudeMap]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x24d20, 0x2520 bytes
    // fltMgr.sys .data:0x2ad90, 0x2428 bytes
    // fltMgr.sys .data:0x2ad90, 0x2428 bytes
    // fltMgr.sys .data:0x2ad90, 0x2428 bytes
    //
    _v96(sdk::unknown_ptr) legacy_filter_altitdude_map;
    
    // [ManualDeviceAttachList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .data:0x24000, 0x2520 bytes
    // fltMgr.sys .data:0x2a000, 0x2428 bytes
    // fltMgr.sys .data:0x2a000, 0x2428 bytes
    // fltMgr.sys .data:0x2a000, 0x2428 bytes
    //
    _v97(sdk::unknown_ptr) manual_device_attach_list;
    
    // [NameCacheListInsert]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x34d84, 0x2520 bytes
    // fltMgr.sys PAGE:0x3a5d4, 0x2428 bytes
    // fltMgr.sys PAGE:0x3bd84, 0x2428 bytes
    // fltMgr.sys PAGE:0x3a5d4, 0x2428 bytes
    //
    _v98(sdk::unknown_ptr) name_cache_list_insert;
    
    // [PROV_FLTMGR]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18660, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c9b0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c9e0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c9b0, 0x2428 bytes
    //
    _v99(sdk::unknown_ptr) prov_fltmgr;
    
    // [PurgeStreamNameCache]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x39fcc, 0x2520 bytes
    // fltMgr.sys PAGE:0x3e970, 0x2428 bytes
    // fltMgr.sys PAGE:0x442b8, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e970, 0x2428 bytes
    //
    _w00(sdk::unknown_ptr) purge_stream_name_cache;
    
    // [QueryStandardLinkInformationFromInstance]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x311b4, 0x2520 bytes
    // fltMgr.sys PAGE:0x369f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e4f0, 0x2428 bytes
    // fltMgr.sys PAGE:0x369f0, 0x2428 bytes
    //
    _w01(sdk::unknown_ptr) query_standard_link_information_from_instance;
    
    // [RegInfoCompare]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x3c8f4, 0x2520 bytes
    // fltMgr.sys PAGE:0x4a600, 0x2428 bytes
    // fltMgr.sys PAGE:0x4b854, 0x2428 bytes
    // fltMgr.sys PAGE:0x4a600, 0x2428 bytes
    //
    _w02(sdk::unknown_ptr) reg_info_compare;
    
    // [SetContextIntoFileList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x9860, 0x2520 bytes
    // fltMgr.sys .text:0x1bb4, 0x2428 bytes
    // fltMgr.sys .text:0x1608, 0x2428 bytes
    // fltMgr.sys .text:0x1bb4, 0x2428 bytes
    //
    _w03(sdk::unknown_ptr) set_context_into_file_list;
    
    // [SetContextIntoStreamList]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x7cd0, 0x2520 bytes
    // fltMgr.sys .text:0x2920, 0x2428 bytes
    // fltMgr.sys .text:0x3700, 0x2428 bytes
    // fltMgr.sys .text:0x2920, 0x2428 bytes
    //
    _w04(sdk::unknown_ptr) set_context_into_stream_list;
    
    // [StRtlGetIoCacheIntention]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17a90, 0x2520 bytes
    // fltMgr.sys .text:0x1ad6c, 0x2428 bytes
    // fltMgr.sys .text:0x1b88c, 0x2428 bytes
    // fltMgr.sys .text:0x1ad6c, 0x2428 bytes
    //
    _w05(sdk::unknown_ptr) st_rtl_get_io_cache_intention;
    
    // [StRtlSetIoCacheIntention]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17ae4, 0x2520 bytes
    // fltMgr.sys .text:0x1adc8, 0x2428 bytes
    // fltMgr.sys .text:0x1b8e8, 0x2428 bytes
    // fltMgr.sys .text:0x1adc8, 0x2428 bytes
    //
    _w06(sdk::unknown_ptr) st_rtl_set_io_cache_intention;
    
    // [SupportedFeaturesRegValueName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18068, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c210, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c010, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c210, 0x2428 bytes
    //
    _w07(sdk::unknown_ptr) supported_features_reg_value_name;
    
    // [TargetedIOCtrlAttachAsFoCtx]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35ce8, 0x2520 bytes
    // fltMgr.sys PAGE:0x38400, 0x2428 bytes
    // fltMgr.sys PAGE:0x39bb0, 0x2428 bytes
    // fltMgr.sys PAGE:0x38400, 0x2428 bytes
    //
    _w08(sdk::unknown_ptr) targeted_io_ctrl_attach_as_fo_ctx;
    
    // [TargetedIOCtrlGenerateECP]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x35b28, 0x2520 bytes
    // fltMgr.sys PAGE:0x3ce58, 0x2428 bytes
    // fltMgr.sys PAGE:0x3e254, 0x2428 bytes
    // fltMgr.sys PAGE:0x3ce58, 0x2428 bytes
    //
    _w09(sdk::unknown_ptr) targeted_io_ctrl_generate_ecp;
    
    // [TreeFindNodeOrParent]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x87a0, 0x2520 bytes
    // fltMgr.sys .text:0x1f08, 0x2428 bytes
    // fltMgr.sys .text:0x2668, 0x2428 bytes
    // fltMgr.sys .text:0x1f08, 0x2428 bytes
    //
    _w10(sdk::unknown_ptr) tree_find_node_or_parent;
    
    // [TreeInsert]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x7c00, 0x2520 bytes
    // fltMgr.sys .text:0x2280, 0x2428 bytes
    // fltMgr.sys .text:0x30d0, 0x2428 bytes
    // fltMgr.sys .text:0x2280, 0x2428 bytes
    //
    _w11(sdk::unknown_ptr) tree_insert;
    
    // [TreeLookup]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x17408, 0x2520 bytes
    // fltMgr.sys .text:0x1e04, 0x2428 bytes
    // fltMgr.sys .text:0x2638, 0x2428 bytes
    // fltMgr.sys .text:0x1e04, 0x2428 bytes
    //
    _w12(sdk::unknown_ptr) tree_lookup;
    
    // [TreeTraversalMulti]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1742c, 0x2520 bytes
    // fltMgr.sys .text:0xd9f4, 0x2428 bytes
    // fltMgr.sys .text:0xda0c, 0x2428 bytes
    // fltMgr.sys .text:0xd9f4, 0x2428 bytes
    //
    _w13(sdk::unknown_ptr) tree_traversal_multi;
    
    // [TreeUnlink]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8e48, 0x2520 bytes
    // fltMgr.sys .text:0x18b4, 0x2428 bytes
    // fltMgr.sys .text:0x1e38, 0x2428 bytes
    // fltMgr.sys .text:0x18b4, 0x2428 bytes
    //
    _w14(sdk::unknown_ptr) tree_unlink;
    
    // [TreeUnlinkMulti]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x77e0, 0x2520 bytes
    // fltMgr.sys .text:0x8630, 0x2428 bytes
    // fltMgr.sys .text:0x31e0, 0x2428 bytes
    // fltMgr.sys .text:0x8630, 0x2428 bytes
    //
    _w15(sdk::unknown_ptr) tree_unlink_multi;
    
    // [TreeUnlinkMultiDoWalk]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0xb234, 0x2520 bytes
    // fltMgr.sys .text:0x1a5f8, 0x2428 bytes
    // fltMgr.sys .text:0x1b0c0, 0x2428 bytes
    // fltMgr.sys .text:0x1a5f8, 0x2428 bytes
    //
    _w16(sdk::unknown_ptr) tree_unlink_multi_do_walk;
    
    // [TreeUnlinkNextNode]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x8e14, 0x2520 bytes
    // fltMgr.sys .text:0x2128, 0x2428 bytes
    // fltMgr.sys .text:0x2b1c, 0x2428 bytes
    // fltMgr.sys .text:0x2128, 0x2428 bytes
    //
    _w17(sdk::unknown_ptr) tree_unlink_next_node;
    
    // [TxVolDisableNameCachingForStream]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGE:0x4c9a0, 0x2520 bytes
    // fltMgr.sys PAGE:0x47cac, 0x2428 bytes
    // fltMgr.sys PAGE:0x48c90, 0x2428 bytes
    // fltMgr.sys PAGE:0x47cac, 0x2428 bytes
    //
    _w18(sdk::unknown_ptr) tx_vol_disable_name_caching_for_stream;
    
    // [UnknownName]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x182e0, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c4d0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c500, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c4d0, 0x2428 bytes
    //
    _w19(sdk::unknown_ptr) unknown_name;
    
    // [ValidateIoParameters]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys PAGEVRF2:0x57910, 0x2520 bytes
    // fltMgr.sys PAGEVRF2:0x5fe68, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x611c4, 0x2428 bytes
    // fltMgr.sys PAGEVRF2:0x5fe68, 0x2428 bytes
    //
    _w20(sdk::unknown_ptr) validate_io_parameters;
    
    // [WPP_SF_dZZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14718, 0x2520 bytes
    // fltMgr.sys .text:0x179d8, 0x2428 bytes
    // fltMgr.sys .text:0x17914, 0x2428 bytes
    // fltMgr.sys .text:0x179d8, 0x2428 bytes
    //
    _w21(sdk::unknown_ptr) wpp_sf_d_zz;
    
    // [WPP_SF_dZZZZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14810, 0x2520 bytes
    // fltMgr.sys .text:0x17ae0, 0x2428 bytes
    // fltMgr.sys .text:0x17a14, 0x2428 bytes
    // fltMgr.sys .text:0x17ae0, 0x2428 bytes
    //
    _w22(sdk::unknown_ptr) wpp_sf_d_zzzz;
    
    // [WPP_SF_ddq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11a74, 0x2520 bytes
    // fltMgr.sys .text:0x1485c, 0x2428 bytes
    // fltMgr.sys .text:0x149e4, 0x2428 bytes
    // fltMgr.sys .text:0x1485c, 0x2428 bytes
    //
    _w23(sdk::unknown_ptr) wpp_sf_ddq;
    
    // [WPP_SF_dds]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13764, 0x2520 bytes
    // fltMgr.sys .text:0x16a14, 0x2428 bytes
    // fltMgr.sys .text:0x16908, 0x2428 bytes
    // fltMgr.sys .text:0x16a14, 0x2428 bytes
    //
    _w24(sdk::unknown_ptr) wpp_sf_dds;
    
    // [WPP_SF_ddsq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13804, 0x2520 bytes
    // fltMgr.sys .text:0x16ab4, 0x2428 bytes
    // fltMgr.sys .text:0x169a8, 0x2428 bytes
    // fltMgr.sys .text:0x16ab4, 0x2428 bytes
    //
    _w25(sdk::unknown_ptr) wpp_sf_ddsq;
    
    // [WPP_SF_dqq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11ad4, 0x2520 bytes
    // fltMgr.sys .text:0x148c4, 0x2428 bytes
    // fltMgr.sys .text:0x14a4c, 0x2428 bytes
    // fltMgr.sys .text:0x148c4, 0x2428 bytes
    //
    _w26(sdk::unknown_ptr) wpp_sf_dqq;
    
    // [WPP_SF_Dqqs]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x12628, 0x2520 bytes
    // fltMgr.sys .text:0x157c0, 0x2428 bytes
    // fltMgr.sys .text:0x15978, 0x2428 bytes
    // fltMgr.sys .text:0x157c0, 0x2428 bytes
    //
    _w27(sdk::unknown_ptr) wpp_sf_dqqs;
    
    // [WPP_SF_DZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1454c, 0x2520 bytes
    // fltMgr.sys .text:0x177f4, 0x2428 bytes
    // fltMgr.sys .text:0x17744, 0x2428 bytes
    // fltMgr.sys .text:0x177f4, 0x2428 bytes
    //
    _w28(sdk::unknown_ptr) wpp_sf_dz;
    
    // [WPP_SF_Pdd]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x145f4, 0x2520 bytes
    // fltMgr.sys .text:0x1789c, 0x2428 bytes
    // fltMgr.sys .text:0x177e0, 0x2428 bytes
    // fltMgr.sys .text:0x1789c, 0x2428 bytes
    //
    _w29(sdk::unknown_ptr) wpp_sf_pdd;
    
    // [WPP_SF_qDd]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13920, 0x2520 bytes
    // fltMgr.sys .text:0x16bd8, 0x2428 bytes
    // fltMgr.sys .text:0x16ad8, 0x2428 bytes
    // fltMgr.sys .text:0x16bd8, 0x2428 bytes
    //
    _w30(sdk::unknown_ptr) wpp_sf_q_dd;
    
    // [WPP_SF_qZZqZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x149c4, 0x2520 bytes
    // fltMgr.sys .text:0x17ca0, 0x2428 bytes
    // fltMgr.sys .text:0x17bdc, 0x2428 bytes
    // fltMgr.sys .text:0x17ca0, 0x2428 bytes
    //
    _w31(sdk::unknown_ptr) wpp_sf_q_z_zq_z;
    
    // [WPP_SF_qZqqZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14b3c, 0x2520 bytes
    // fltMgr.sys .text:0x17e24, 0x2428 bytes
    // fltMgr.sys .text:0x17d58, 0x2428 bytes
    // fltMgr.sys .text:0x17e24, 0x2428 bytes
    //
    _w32(sdk::unknown_ptr) wpp_sf_q_zqq_z;
    
    // [WPP_SF_qZqqZD]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14c74, 0x2520 bytes
    // fltMgr.sys .text:0x17f68, 0x2428 bytes
    // fltMgr.sys .text:0x17e8c, 0x2428 bytes
    // fltMgr.sys .text:0x17f68, 0x2428 bytes
    //
    _w33(sdk::unknown_ptr) wpp_sf_q_zqq_zd;
    
    // [WPP_SF_qdqqq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x178fc, 0x2520 bytes
    // fltMgr.sys .text:0x1abc4, 0x2428 bytes
    // fltMgr.sys .text:0x1b714, 0x2428 bytes
    // fltMgr.sys .text:0x1abc4, 0x2428 bytes
    //
    _w34(sdk::unknown_ptr) wpp_sf_qdqqq;
    
    // [WPP_SF_qdqqqd]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1797c, 0x2520 bytes
    // fltMgr.sys .text:0x1ac4c, 0x2428 bytes
    // fltMgr.sys .text:0x1b79c, 0x2428 bytes
    // fltMgr.sys .text:0x1ac4c, 0x2428 bytes
    //
    _w35(sdk::unknown_ptr) wpp_sf_qdqqqd;
    
    // [WPP_SF_qqDdZ]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x166e8, 0x2520 bytes
    // fltMgr.sys .text:0x1953c, 0x2428 bytes
    // fltMgr.sys .text:0x1a22c, 0x2428 bytes
    // fltMgr.sys .text:0x1953c, 0x2428 bytes
    //
    _w36(sdk::unknown_ptr) wpp_sf_qq_dd_z;
    
    // [WPP_SF_qqZDqq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13f4c, 0x2520 bytes
    // fltMgr.sys .text:0x17174, 0x2428 bytes
    // fltMgr.sys .text:0x170bc, 0x2428 bytes
    // fltMgr.sys .text:0x17174, 0x2428 bytes
    //
    _w37(sdk::unknown_ptr) wpp_sf_qq_z_dqq;
    
    // [WPP_SF_qqZD]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x13e6c, 0x2520 bytes
    // fltMgr.sys .text:0x1708c, 0x2428 bytes
    // fltMgr.sys .text:0x16fe4, 0x2428 bytes
    // fltMgr.sys .text:0x1708c, 0x2428 bytes
    //
    _w38(sdk::unknown_ptr) wpp_sf_qq_zd;
    
    // [WPP_SF_qqZs]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11d1c, 0x2520 bytes
    // fltMgr.sys .text:0x14b38, 0x2428 bytes
    // fltMgr.sys .text:0x14cb0, 0x2428 bytes
    // fltMgr.sys .text:0x14b38, 0x2428 bytes
    //
    _w39(sdk::unknown_ptr) wpp_sf_qq_zs;
    
    // [WPP_SF_qqZsD]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11e08, 0x2520 bytes
    // fltMgr.sys .text:0x14c18, 0x2428 bytes
    // fltMgr.sys .text:0x14dac, 0x2428 bytes
    // fltMgr.sys .text:0x14c18, 0x2428 bytes
    //
    _w40(sdk::unknown_ptr) wpp_sf_qq_zs_d;
    
    // [WPP_SF_qqZsDq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11f18, 0x2520 bytes
    // fltMgr.sys .text:0x14d18, 0x2428 bytes
    // fltMgr.sys .text:0x14ec4, 0x2428 bytes
    // fltMgr.sys .text:0x14d18, 0x2428 bytes
    //
    _w41(sdk::unknown_ptr) wpp_sf_qq_zs_dq;
    
    // [WPP_SF_qqZsq]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x1203c, 0x2520 bytes
    // fltMgr.sys .text:0x14e28, 0x2428 bytes
    // fltMgr.sys .text:0x14ff0, 0x2428 bytes
    // fltMgr.sys .text:0x14e28, 0x2428 bytes
    //
    _w42(sdk::unknown_ptr) wpp_sf_qq_zsq;
    
    // [WPP_SF_qqdd]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x11bec, 0x2520 bytes
    // fltMgr.sys .text:0x149f4, 0x2428 bytes
    // fltMgr.sys .text:0x14b7c, 0x2428 bytes
    // fltMgr.sys .text:0x149f4, 0x2428 bytes
    //
    _w43(sdk::unknown_ptr) wpp_sf_qqdd;
    
    // [WPP_SF_sqqZs]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14050, 0x2520 bytes
    // fltMgr.sys .text:0x17284, 0x2428 bytes
    // fltMgr.sys .text:0x171bc, 0x2428 bytes
    // fltMgr.sys .text:0x17284, 0x2428 bytes
    //
    _w44(sdk::unknown_ptr) wpp_sf_sqq_zs;
    
    // [WPP_SF_ZS]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .text:0x14654, 0x2520 bytes
    // fltMgr.sys .text:0x17904, 0x2428 bytes
    // fltMgr.sys .text:0x17848, 0x2428 bytes
    // fltMgr.sys .text:0x17904, 0x2428 bytes
    //
    _w45(sdk::unknown_ptr) wpp_sf_zs;
    
    // [WPP_ThisDir_CTLGUID_FltMgr]
    // Ldr = [fltMgr.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // fltMgr.sys .rdata:0x18670, 0x2520 bytes
    // fltMgr.sys .rdata:0x1c9c0, 0x2428 bytes
    // fltMgr.sys .rdata:0x1ca40, 0x2428 bytes
    // fltMgr.sys .rdata:0x1c9c0, 0x2428 bytes
    //
    _w46(sdk::unknown_ptr) wpp_this_dir_ctlguid_flt_mgr;
};
#include "magic/api.end.hpp"
