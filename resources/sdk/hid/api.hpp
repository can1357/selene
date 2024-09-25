#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "fdo_extension_t.hpp"
#include "../nt/event_filter_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace hid
{
    // [HidDeviceStartStop]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607
    // win32kfull.sys .text:0x1c2dc, 0x13864 bytes
    //
    _m00(sdk::unknown_ptr) device_start_stop;
    
    // [HidIsRequestedByThisProcess]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1ce76c, 0x13864 bytes
    // win32kfull.sys .text:0x1d5554, 0x1596d bytes
    // win32kfull.sys .text:0x1d30f8, 0x1659e bytes
    // win32kfull.sys .text:0x1d53f4, 0x1596d bytes
    //
    _m01(sdk::unknown_ptr) is_requested_by_this_process;
    
    // [HidRequestValidityCheck]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1c568, 0x13864 bytes
    // win32kfull.sys .text:0xfd7a0, 0x1596d bytes
    // win32kfull.sys .text:0xf9358, 0x1659e bytes
    // win32kfull.sys .text:0xfe6d0, 0x1596d bytes
    //
    _m02(sdk::unknown_ptr) request_validity_check;
    
    // [AllClientPDOsInitialized]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x35df0, 0x2bf0 bytes
    //
    _m03(sdk::unknown_ptr) all_client_pd_os_initialized;
    
    // [AnyClientPDOsInitialized]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x35ee4, 0x2bf0 bytes
    //
    _m04(sdk::unknown_ptr) any_client_pd_os_initialized;
    
    // [CompleteAllPendingReadsForCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0xd5e4, 0x1a48 bytes
    //
    _m05(sdk::unknown_ptr) complete_all_pending_reads_for_collection;
    
    // [CreateOneCollectionPdo]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys PAGE:0x317b0, 0x2bf0 bytes
    //
    _m06(sdk::unknown_ptr) create_one_collection_pdo;
    
    // [DequeueAllPdoPowerDelayedIrps]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x124f4, 0x1a48 bytes
    //
    _m07(sdk::unknown_ptr) dequeue_all_pdo_power_delayed_irps;
    
    // [GetDeviceRecorderLog]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x52d8, 0x1a48 bytes
    //
    _m08(sdk::unknown_ptr) get_device_recorder_log;
    
    // [GUID_SLEEPSTUDY_LIBRARY_UNSUPPORTED]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x25c90, 0x2bf0 bytes
    //
    _m09(struct nt::guid_t*) guid_sleepstudy_library_unsupported;
    
    // [HIDSM_CompletingIdleCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x14470, 0x1a48 bytes
    //
    _m10(sdk::unknown_ptr) hidsm_completing_idle_callback;
    
    // [HIDSM_CompletingIdleCallbackWithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x14470, 0x1a48 bytes
    //
    _m11(sdk::unknown_ptr) hidsm_completing_idle_callback_with_wake;
    
    // [HIDSM_CompletingS0IfFastResumeDisabled]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x13cd0, 0x2bf0 bytes
    //
    _m12(sdk::unknown_ptr) hidsm_completing_s0_if_fast_resume_disabled;
    
    // [HIDSM_Dx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    //
    _m13(sdk::unknown_ptr) hidsm_dx;
    
    // [HIDSM_SendingDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x4ea0, 0x1a48 bytes
    //
    _m14(sdk::unknown_ptr) hidsm_sending_dx;
    
    // [HIDSM_SendingDxWithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x4ea0, 0x1a48 bytes
    //
    _m15(sdk::unknown_ptr) hidsm_sending_dx_with_wake;
    
    // [HIDSM_WaitingForDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    //
    _m16(sdk::unknown_ptr) hidsm_waiting_for_dx;
    
    // [HIDSM_WaitingForDxWithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    //
    _m17(sdk::unknown_ptr) hidsm_waiting_for_dx_with_wake;
    
    // [HIDSM_WaitingForIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x146b0, 0x1a48 bytes
    //
    _m18(sdk::unknown_ptr) hidsm_waiting_for_idle_completion;
    
    // [HIDSM_WatingForPowerRequiredOnIdleCompletionWithNoCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    //
    _m19(sdk::unknown_ptr) hidsm_wating_for_power_required_on_idle_completion_with_no_callback;
    
    // [MicrosoftTelemetryAssertTriggeredArgsMsgKM]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x145c0, 0x2bf0 bytes
    //
    _m20(sdk::unknown_ptr) microsoft_telemetry_assert_triggered_args_msg_km;
    
    // [Microsoft_Windows_Input_HIDCLASSHandle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1b2b8, 0x1a48 bytes
    //
    _m21(sdk::unknown_ptr) microsoft_windows_input_hidclass_handle;
    
    // [SleepstudyHelperUnsupportedFriendlyName]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x23020, 0x2bf0 bytes
    //
    _m22(nt::unicode_view*) sleepstudy_helper_unsupported_friendly_name;
    
    // [SleepstudyHelperUnsupportedHandle]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .data:0x2b348, 0x2bf0 bytes
    //
    _m23(void**) sleepstudy_helper_unsupported_handle;
    
    // [HidSmStateEntryCompletingIdleCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1b040, 0x1a48 bytes
    //
    _m24(sdk::unknown_ptr) sm_state_entry_completing_idle_callback;
    
    // [HidSmStateEntryCompletingIdleCallbackWithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1af80, 0x1a48 bytes
    //
    _m25(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_with_wake;
    
    // [HidSmStateEntryCompletingS0IfFastResumeDisabled]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .data:0x2afe0, 0x2bf0 bytes
    //
    _m26(sdk::unknown_ptr) sm_state_entry_completing_s0_if_fast_resume_disabled;
    
    // [HidSmStateEntryDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1aeb0, 0x1a48 bytes
    //
    _m27(sdk::unknown_ptr) sm_state_entry_dx;
    
    // [HidSmStateEntrySendingDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1ab68, 0x1a48 bytes
    //
    _m28(sdk::unknown_ptr) sm_state_entry_sending_dx;
    
    // [HidSmStateEntrySendingDxWithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1ab08, 0x1a48 bytes
    //
    _m29(sdk::unknown_ptr) sm_state_entry_sending_dx_with_wake;
    
    // [HidSmStateEntryWaitingForDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1a718, 0x1a48 bytes
    //
    _m30(sdk::unknown_ptr) sm_state_entry_waiting_for_dx;
    
    // [HidSmStateEntryWaitingForDxWithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1a688, 0x1a48 bytes
    //
    _m31(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_with_wake;
    
    // [HidSmStateEntryWaitingForIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1a5d0, 0x1a48 bytes
    //
    _m32(sdk::unknown_ptr) sm_state_entry_waiting_for_idle_completion;
    
    // [HidSmStateEntryWatingForPowerRequiredOnIdleCompletionWithNoCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .data:0x1a2e0, 0x1a48 bytes
    //
    _m33(sdk::unknown_ptr) sm_state_entry_wating_for_power_required_on_idle_completion_with_no_callback;
    
    // [Template_phhhqb]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0xfac4, 0x1a48 bytes
    //
    _m34(sdk::unknown_ptr) template_phhhqb;
    
    // [WPP_05b06bb1a6e03441460e7f97d9ca83e8_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x162f8, 0x1a48 bytes
    //
    _m35(sdk::unknown_ptr) wpp_05b06bb1a6e03441460e7f97d9ca83e8_traceguids;
    
    // [WPP_07c993bb06613b1d34cf1757546d2056_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16120, 0x1a48 bytes
    //
    _m36(sdk::unknown_ptr) wpp_07c993bb06613b1d34cf1757546d2056_traceguids;
    
    // [WPP_0c3075560e1b37693c50d24ef513d07f_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x23760, 0x2bf0 bytes
    //
    _m37(sdk::unknown_ptr) wpp_0c3075560e1b37693c50d24ef513d07f_traceguids;
    
    // [WPP_1018a66fc5fc33317964828a10afe65a_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16140, 0x1a48 bytes
    //
    _m38(sdk::unknown_ptr) wpp_1018a66fc5fc33317964828a10afe65a_traceguids;
    
    // [WPP_14a1cfae3f66329f52734d5e5a483f2a_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x162e8, 0x1a48 bytes
    //
    _m39(sdk::unknown_ptr) wpp_14a1cfae3f66329f52734d5e5a483f2a_traceguids;
    
    // [WPP_15c9e22b41b136b74da9fe0f3a565e27_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x24ec8, 0x2bf0 bytes
    //
    _m40(sdk::unknown_ptr) wpp_15c9e22b41b136b74da9fe0f3a565e27_traceguids;
    
    // [WPP_33212a2010d935d8acb04538133ca1fc_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x231a0, 0x2bf0 bytes
    //
    _m41(sdk::unknown_ptr) wpp_33212a2010d935d8acb04538133ca1fc_traceguids;
    
    // [WPP_345b6046980437116a065442c6cd21f5_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16178, 0x1a48 bytes
    //
    _m42(sdk::unknown_ptr) wpp_345b6046980437116a065442c6cd21f5_traceguids;
    
    // [WPP_3c67c066a7ae3a4170fed66a74af4285_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16110, 0x1a48 bytes
    //
    _m43(sdk::unknown_ptr) wpp_3c67c066a7ae3a4170fed66a74af4285_traceguids;
    
    // [WPP_3e840fe13c4934188fcdd2e4e2a0f1d5_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16130, 0x1a48 bytes
    //
    _m44(sdk::unknown_ptr) wpp_3e840fe13c4934188fcdd2e4e2a0f1d5_traceguids;
    
    // [WPP_437d2f2c2c5033295bb0ff33621d4759_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x231d0, 0x2bf0 bytes
    //
    _m45(sdk::unknown_ptr) wpp_437d2f2c2c5033295bb0ff33621d4759_traceguids;
    
    // [WPP_50d10288d9d638b50026fcb920e5c824_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x24928, 0x2bf0 bytes
    //
    _m46(sdk::unknown_ptr) wpp_50d10288d9d638b50026fcb920e5c824_traceguids;
    
    // [WPP_5c4714c831393fbc5e0b4dccc0ae1bd4_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16df8, 0x1a48 bytes
    //
    _m47(sdk::unknown_ptr) wpp_5c4714c831393fbc5e0b4dccc0ae1bd4_traceguids;
    
    // [WPP_5ca1b34ef59930b9aa3688916a1d048f_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x231b0, 0x2bf0 bytes
    //
    _m48(sdk::unknown_ptr) wpp_5ca1b34ef59930b9aa3688916a1d048f_traceguids;
    
    // [WPP_6004f5b993b430fe25d89d1fffd368e6_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16100, 0x1a48 bytes
    //
    _m49(sdk::unknown_ptr) wpp_6004f5b993b430fe25d89d1fffd368e6_traceguids;
    
    // [WPP_8a5dddebd33c333acce575badb46a477_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16168, 0x1a48 bytes
    //
    _m50(sdk::unknown_ptr) wpp_8a5dddebd33c333acce575badb46a477_traceguids;
    
    // [WPP_98e243ae5b7a3b8a53fa9f291a141aaa_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x162a8, 0x1a48 bytes
    //
    _m51(sdk::unknown_ptr) wpp_98e243ae5b7a3b8a53fa9f291a141aaa_traceguids;
    
    // [WPP_b44b9c582a6d3a011072db7b2d15a10e_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x24e38, 0x2bf0 bytes
    //
    _m52(sdk::unknown_ptr) wpp_b44b9c582a6d3a011072db7b2d15a10e_traceguids;
    
    // [WPP_b6bdf67453b834f78bf201daad2da442_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x24ea8, 0x2bf0 bytes
    //
    _m53(sdk::unknown_ptr) wpp_b6bdf67453b834f78bf201daad2da442_traceguids;
    
    // [WPP_bd61c7f72cc836e51daeaa4d8e68466b_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x23b98, 0x2bf0 bytes
    //
    _m54(sdk::unknown_ptr) wpp_bd61c7f72cc836e51daeaa4d8e68466b_traceguids;
    
    // [WPP_be8b40151e513c314abd1d2d64861fb3_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16318, 0x1a48 bytes
    //
    _m55(sdk::unknown_ptr) wpp_be8b40151e513c314abd1d2d64861fb3_traceguids;
    
    // [WPP_ca18ba4d18e03c36d5db0100040448a8_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x162b8, 0x1a48 bytes
    //
    _m56(sdk::unknown_ptr) wpp_ca18ba4d18e03c36d5db0100040448a8_traceguids;
    
    // [WPP_d4784616578b32a4c485cebac23f322c_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x231c0, 0x2bf0 bytes
    //
    _m57(sdk::unknown_ptr) wpp_d4784616578b32a4c485cebac23f322c_traceguids;
    
    // [WPP_dc94d543565b3569da20d3713efc24db_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x232e0, 0x2bf0 bytes
    //
    _m58(sdk::unknown_ptr) wpp_dc94d543565b3569da20d3713efc24db_traceguids;
    
    // [WPP_e5f99db4f53d33f226ca95ed700793b5_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x231e0, 0x2bf0 bytes
    //
    _m59(sdk::unknown_ptr) wpp_e5f99db4f53d33f226ca95ed700793b5_traceguids;
    
    // [WPP_e8af7fa8e66b303a865596dc3c49b135_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16308, 0x1a48 bytes
    //
    _m60(sdk::unknown_ptr) wpp_e8af7fa8e66b303a865596dc3c49b135_traceguids;
    
    // [WPP_e9b26a831e343dfd63b5fa9adb02474f_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x23c00, 0x2bf0 bytes
    //
    _m61(sdk::unknown_ptr) wpp_e9b26a831e343dfd63b5fa9adb02474f_traceguids;
    
    // [WPP_ec65c1b7b39b3c57548d2aa13dbbeac1_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16238, 0x1a48 bytes
    //
    _m62(sdk::unknown_ptr) wpp_ec65c1b7b39b3c57548d2aa13dbbeac1_traceguids;
    
    // [WPP_f33e33053943332cc47e0fb2468cff69_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x23448, 0x2bf0 bytes
    //
    _m63(sdk::unknown_ptr) wpp_f33e33053943332cc47e0fb2468cff69_traceguids;
    
    // [WPP_f42040bb991b3e95d6c62b961b09000a_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .rdata:0x231f0, 0x2bf0 bytes
    //
    _m64(sdk::unknown_ptr) wpp_f42040bb991b3e95d6c62b961b09000a_traceguids;
    
    // [WPP_f4a7bd21cabd369598001be8ddc683aa_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .rdata:0x16e28, 0x1a48 bytes
    //
    _m65(sdk::unknown_ptr) wpp_f4a7bd21cabd369598001be8ddc683aa_traceguids;
    
    // [WPP_RECORDER_SF_dDd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x1073c, 0x1a48 bytes
    //
    _m66(sdk::unknown_ptr) wpp_recorder_sf_d_dd;
    
    // [WPP_RECORDER_SF_dDDD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x1027c, 0x1a48 bytes
    //
    _m67(sdk::unknown_ptr) wpp_recorder_sf_d_ddd;
    
    // [WPP_RECORDER_SF_dLd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x10828, 0x1a48 bytes
    //
    _m68(sdk::unknown_ptr) wpp_recorder_sf_d_ld;
    
    // [WPP_RECORDER_SF_dLq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x22a0, 0x1a48 bytes
    //
    _m69(sdk::unknown_ptr) wpp_recorder_sf_d_lq;
    
    // [WPP_RECORDER_SF_DDDddddd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x10384, 0x1a48 bytes
    //
    _m70(sdk::unknown_ptr) wpp_recorder_sf_dd_dddddd;
    
    // [WPP_RECORDER_SF_diDd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x10910, 0x1a48 bytes
    //
    _m71(sdk::unknown_ptr) wpp_recorder_sf_di_dd;
    
    // [WPP_RECORDER_SF_dqqs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x10a24, 0x1a48 bytes
    //
    _m72(sdk::unknown_ptr) wpp_recorder_sf_dqqs;
    
    // [WPP_RECORDER_SF_LLdddd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x10514, 0x1a48 bytes
    //
    _m73(sdk::unknown_ptr) wpp_recorder_sf_l_ldddd;
    
    // [WPP_RECORDER_SF_Lc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0xebf8, 0x1a48 bytes
    //
    _m74(sdk::unknown_ptr) wpp_recorder_sf_lc;
    
    // [WPP_RECORDER_SF_qLDDDDDLD]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x11294, 0x2bf0 bytes
    //
    _m75(sdk::unknown_ptr) wpp_recorder_sf_q_ldddddld;
    
    // [WPP_RECORDER_SF_qLLDDDDDDDDDDDLLLLLLL]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x11894, 0x2bf0 bytes
    //
    _m76(sdk::unknown_ptr) wpp_recorder_sf_q_lldddddddddddlllllll;
    
    // [WPP_RECORDER_SF_qSLd]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0xfcb4, 0x2bf0 bytes
    //
    _m77(sdk::unknown_ptr) wpp_recorder_sf_q_s_ld;
    
    // [WPP_RECORDER_SF_qSL]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0xfb2c, 0x2bf0 bytes
    //
    _m78(sdk::unknown_ptr) wpp_recorder_sf_q_sl;
    
    // [WPP_RECORDER_SF_qcd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x13520, 0x1a48 bytes
    //
    _m79(sdk::unknown_ptr) wpp_recorder_sf_qcd;
    
    // [WPP_RECORDER_SF_qcdd]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x121e0, 0x2bf0 bytes
    //
    _m80(sdk::unknown_ptr) wpp_recorder_sf_qcdd;
    
    // [WPP_RECORDER_SF_qdDDD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x1473c, 0x1a48 bytes
    //
    _m81(sdk::unknown_ptr) wpp_recorder_sf_qd_ddd;
    
    // [WPP_RECORDER_SF_qdLd]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x10a04, 0x2bf0 bytes
    //
    _m82(sdk::unknown_ptr) wpp_recorder_sf_qd_ld;
    
    // [WPP_RECORDER_SF_qdLDDL]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x12948, 0x2bf0 bytes
    //
    _m83(sdk::unknown_ptr) wpp_recorder_sf_qd_lddl;
    
    // [WPP_RECORDER_SF_qdi]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x11d0, 0x1a48 bytes
    //
    _m84(sdk::unknown_ptr) wpp_recorder_sf_qdi;
    
    // [WPP_RECORDER_SF_qdqLDq]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x1230c, 0x2bf0 bytes
    //
    _m85(sdk::unknown_ptr) wpp_recorder_sf_qdq_l_dq;
    
    // [WPP_RECORDER_SF_qdqLDqd]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x12460, 0x2bf0 bytes
    //
    _m86(sdk::unknown_ptr) wpp_recorder_sf_qdq_l_dqd;
    
    // [WPP_RECORDER_SF_qdqLdd]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0xff9c, 0x2bf0 bytes
    //
    _m87(sdk::unknown_ptr) wpp_recorder_sf_qdq_ldd;
    
    // [WPP_RECORDER_SF_qdqqcLdd]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x1024c, 0x2bf0 bytes
    //
    _m88(sdk::unknown_ptr) wpp_recorder_sf_qdqqc_ldd;
    
    // [WPP_RECORDER_SF_qdqqcq]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x125d8, 0x2bf0 bytes
    //
    _m89(sdk::unknown_ptr) wpp_recorder_sf_qdqqcq;
    
    // [WPP_RECORDER_SF_qdqqlllllL]
    // Ldr = [hidclass.sys]
    // => Windows 11
    // hidclass.sys .text:0x103fc, 0x2bf0 bytes
    //
    _m90(sdk::unknown_ptr) wpp_recorder_sf_qdqqlllll_l;
    
    // [WPP_RECORDER_SF_qdsq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x10bb4, 0x1a48 bytes
    //
    _m91(sdk::unknown_ptr) wpp_recorder_sf_qdsq;
    
    // [WPP_RECORDER_SF_qqLdl]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0xe630, 0x1a48 bytes
    //
    _m92(sdk::unknown_ptr) wpp_recorder_sf_qq_ldl;
    
    // [WPP_RECORDER_SF_qqqdq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x15634, 0x1a48 bytes
    //
    _m93(sdk::unknown_ptr) wpp_recorder_sf_qqqdq;
    
    // [WPP_RECORDER_SF_qsd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x5c5c, 0x1a48 bytes
    //
    _m94(sdk::unknown_ptr) wpp_recorder_sf_qsd;
    
    // [WPP_RECORDER_SF_sqqc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x5050, 0x1a48 bytes
    //
    _m95(sdk::unknown_ptr) wpp_recorder_sf_sqqc;
    
    // [WPP_RECORDER_SF_sqqcd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x3f50, 0x1a48 bytes
    //
    _m96(sdk::unknown_ptr) wpp_recorder_sf_sqqcd;
    
    // [WPP_RECORDER_SF_sqqcsD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607
    // hidclass.sys .text:0x4370, 0x1a48 bytes
    //
    _m97(sdk::unknown_ptr) wpp_recorder_sf_sqqcs_d;
    
    // [CopyDeviceRelations]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 11
    // hidclass.sys PAGE:0x20cd8, 0x1a48 bytes
    // hidclass.sys PAGE:0x35da0, 0x2bf0 bytes
    //
    _m98(sdk::unknown_ptr) copy_device_relations;
    
    // [__IMPORT_DESCRIPTOR_SleepStudyHelper]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .idata:0x2b490, 0x2bf0 bytes
    // hidclass.sys .idata:0x2b490, 0x2bf0 bytes
    //
    _m99(sdk::unknown_ptr) import_descriptor_sleep_study_helper;
    
    // [WPP_01a0356122913c168524eb83c8103556_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20928, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20928, 0x2bf0 bytes
    //
    _n00(sdk::unknown_ptr) wpp_01a0356122913c168524eb83c8103556_traceguids;
    
    // [WPP_0f597b2ead513fe8c07c8bdf89711e9e_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20198, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20198, 0x2bf0 bytes
    //
    _n01(sdk::unknown_ptr) wpp_0f597b2ead513fe8c07c8bdf89711e9e_traceguids;
    
    // [WPP_1ce1d0609c533ca142560f26a80f8f41_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x201b8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x201b8, 0x2bf0 bytes
    //
    _n02(sdk::unknown_ptr) wpp_1ce1d0609c533ca142560f26a80f8f41_traceguids;
    
    // [WPP_1f4ed73904893c554f67e96aacd5f52a_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20918, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20918, 0x2bf0 bytes
    //
    _n03(sdk::unknown_ptr) wpp_1f4ed73904893c554f67e96aacd5f52a_traceguids;
    
    // [WPP_239b18665bac34fc46950d4c525068f5_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x206b8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x206b8, 0x2bf0 bytes
    //
    _n04(sdk::unknown_ptr) wpp_239b18665bac34fc46950d4c525068f5_traceguids;
    
    // [WPP_8686d71db46e33e17062f10c6e689a3f_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20178, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20178, 0x2bf0 bytes
    //
    _n05(sdk::unknown_ptr) wpp_8686d71db46e33e17062f10c6e689a3f_traceguids;
    
    // [WPP_8c639fca7fcf3a46c12aec4dedea6330_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x201a8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x201a8, 0x2bf0 bytes
    //
    _n06(sdk::unknown_ptr) wpp_8c639fca7fcf3a46c12aec4dedea6330_traceguids;
    
    // [WPP_91b1c4e52bd13ab353d7563ac025e09d_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x21588, 0x2bf0 bytes
    // hidclass.sys .rdata:0x21588, 0x2bf0 bytes
    //
    _n07(sdk::unknown_ptr) wpp_91b1c4e52bd13ab353d7563ac025e09d_traceguids;
    
    // [WPP_9fd3685ccadf343f669b5d167151722c_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x21a38, 0x2bf0 bytes
    // hidclass.sys .rdata:0x21a38, 0x2bf0 bytes
    //
    _n08(sdk::unknown_ptr) wpp_9fd3685ccadf343f669b5d167151722c_traceguids;
    
    // [WPP_b6d3bed6e8213b12fb5fa3a910e09c77_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20188, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20188, 0x2bf0 bytes
    //
    _n09(sdk::unknown_ptr) wpp_b6d3bed6e8213b12fb5fa3a910e09c77_traceguids;
    
    // [WPP_b88d964d45453fc446f9a2b2c3717ec6_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20308, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20308, 0x2bf0 bytes
    //
    _n10(sdk::unknown_ptr) wpp_b88d964d45453fc446f9a2b2c3717ec6_traceguids;
    
    // [WPP_bd9ffe4a1abf318828cb8f03148328e8_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x21a10, 0x2bf0 bytes
    // hidclass.sys .rdata:0x21a10, 0x2bf0 bytes
    //
    _n11(sdk::unknown_ptr) wpp_bd9ffe4a1abf318828cb8f03148328e8_traceguids;
    
    // [WPP_cc8ea51e61ac3fad5d414c27e9dea495_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20208, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20208, 0x2bf0 bytes
    //
    _n12(sdk::unknown_ptr) wpp_cc8ea51e61ac3fad5d414c27e9dea495_traceguids;
    
    // [WPP_d270089e80f03a542e184efd226cfb25_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .rdata:0x20498, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20498, 0x2bf0 bytes
    //
    _n13(sdk::unknown_ptr) wpp_d270089e80f03a542e184efd226cfb25_traceguids;
    
    // [WPP_RECORDER_SF_qDDDDDDDDDDDDDLLDLLLLLLLLDD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x10548, 0x2bf0 bytes
    // hidclass.sys .text:0x10548, 0x2bf0 bytes
    //
    _n14(sdk::unknown_ptr) wpp_recorder_sf_q_dddddddddddddlldlllllllldd;
    
    // [WPP_RECORDER_SF_qSD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0xc730, 0x2bf0 bytes
    // hidclass.sys .text:0xc730, 0x2bf0 bytes
    //
    _n15(sdk::unknown_ptr) wpp_recorder_sf_q_sd;
    
    // [WPP_RECORDER_SF_qdqdLq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x19d04, 0x2bf0 bytes
    // hidclass.sys .text:0x19d04, 0x2bf0 bytes
    //
    _n16(sdk::unknown_ptr) wpp_recorder_sf_qdqd_lq;
    
    // [WPP_RECORDER_SF_qdqqlllll]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys .text:0x3520, 0x2bf0 bytes
    // hidclass.sys .text:0x3520, 0x2bf0 bytes
    //
    _n17(sdk::unknown_ptr) wpp_recorder_sf_qdqqlllll;
    
    // [AllocCollectionResources]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x223c0, 0x1a48 bytes
    // hidclass.sys PAGE:0x32150, 0x2bf0 bytes
    // hidclass.sys PAGE:0x32150, 0x2bf0 bytes
    //
    _n18(sdk::unknown_ptr) alloc_collection_resources;
    
    // [AllocDeviceResources]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x20228, 0x1a48 bytes
    // hidclass.sys PAGE:0x32b9c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x32b9c, 0x2bf0 bytes
    //
    _n19(sdk::unknown_ptr) alloc_device_resources;
    
    // [AllocateDeviceRecorderLog]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x2097c, 0x1a48 bytes
    // hidclass.sys PAGE:0x31280, 0x2bf0 bytes
    // hidclass.sys PAGE:0x31280, 0x2bf0 bytes
    //
    _n20(sdk::unknown_ptr) allocate_device_recorder_log;
    
    // [HidClassEtwEnableCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x10288, 0x2bf0 bytes
    // hidclass.sys .text:0x10b28, 0x2bf0 bytes
    // hidclass.sys .text:0x10288, 0x2bf0 bytes
    //
    _n21(sdk::function<void(const struct nt::guid_t*, uint32_t, uint8_t, uint64_t, uint64_t, struct nt::event_filter_descriptor_t*, void*)>*) class_etw_enable_callback;
    
    // [HidClassWppEnableCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x17ad8, 0x2bf0 bytes
    // hidclass.sys .text:0x1a8e4, 0x2bf0 bytes
    // hidclass.sys .text:0x17ad8, 0x2bf0 bytes
    //
    _n22(sdk::unknown_ptr) class_wpp_enable_callback;
    
    // [CompleteAllPendingReadsForPdo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1518c, 0x2bf0 bytes
    // hidclass.sys .text:0x17e48, 0x2bf0 bytes
    // hidclass.sys .text:0x1518c, 0x2bf0 bytes
    //
    _n23(sdk::unknown_ptr) complete_all_pending_reads_for_pdo;
    
    // [DequeueAllPowerDelayedIrpsForPdo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1bf20, 0x2bf0 bytes
    // hidclass.sys .text:0x1ece0, 0x2bf0 bytes
    // hidclass.sys .text:0x1bf20, 0x2bf0 bytes
    //
    _n24(sdk::unknown_ptr) dequeue_all_power_delayed_irps_for_pdo;
    
    // [EnqueueInterruptReport]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x178a4, 0x2bf0 bytes
    // hidclass.sys .text:0x1a6bc, 0x2bf0 bytes
    // hidclass.sys .text:0x178a4, 0x2bf0 bytes
    //
    _n25(sdk::unknown_ptr) enqueue_interrupt_report;
    
    // [EnqueueInterruptReportForCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1791c, 0x2bf0 bytes
    // hidclass.sys .text:0x1a734, 0x2bf0 bytes
    // hidclass.sys .text:0x1791c, 0x2bf0 bytes
    //
    _n26(sdk::unknown_ptr) enqueue_interrupt_report_for_collection;
    
    // [FreeCollectionResources]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x278a0, 0x1a48 bytes
    // hidclass.sys PAGE:0x35ae0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35ae0, 0x2bf0 bytes
    //
    _n27(sdk::unknown_ptr) free_collection_resources;
    
    // [FreeDeviceResources]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x27954, 0x1a48 bytes
    // hidclass.sys PAGE:0x35bf4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35bf4, 0x2bf0 bytes
    //
    _n28(sdk::unknown_ptr) free_device_resources;
    
    // [g_SleepstudyInitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x28428, 0x2bf0 bytes
    // hidclass.sys .data:0x2b5e0, 0x2bf0 bytes
    // hidclass.sys .data:0x28428, 0x2bf0 bytes
    //
    _n29(sdk::unknown_ptr) g_sleepstudy_initialized;
    
    // [g_SleepstudyLibraryHandle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x28410, 0x2bf0 bytes
    // hidclass.sys .data:0x2b5c8, 0x2bf0 bytes
    // hidclass.sys .data:0x28410, 0x2bf0 bytes
    //
    _n30(sdk::unknown_ptr) g_sleepstudy_library_handle;
    
    // [GetFdoExtension]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x17994, 0x2bf0 bytes
    // hidclass.sys .text:0x1a7b8, 0x2bf0 bytes
    // hidclass.sys .text:0x17994, 0x2bf0 bytes
    //
    _n31(sdk::unknown_ptr) get_fdo_extension;
    
    // [HIDCLASS_ETW_EVENT_DEVICE_INFORMATION_V1]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x20458, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23430, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20458, 0x2bf0 bytes
    //
    _n32(sdk::unknown_ptr) hidclass_etw_event_device_information_v1;
    
    // [HIDSM_CompletingIdleCallbackAfterIdleIrpFailed_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x13c90, 0x2bf0 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    //
    _n33(sdk::unknown_ptr) hidsm_completing_idle_callback_after_idle_irp_failed_no_wake;
    
    // [HIDSM_CompletingIdleCallback_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x13c90, 0x2bf0 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    //
    _n34(sdk::unknown_ptr) hidsm_completing_idle_callback_no_wake;
    
    // [HIDSM_CompletingIdleCallback_WithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x13c90, 0x2bf0 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    //
    _n35(sdk::unknown_ptr) hidsm_completing_idle_callback_with_wake_;
    
    // [HIDSM_Dx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _n36(sdk::unknown_ptr) hidsm_dx_no_wake;
    
    // [HIDSM_LogUnhandledEvent]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1df00, 0x2bf0 bytes
    // hidclass.sys .text:0x20bbc, 0x2bf0 bytes
    // hidclass.sys .text:0x1df00, 0x2bf0 bytes
    //
    _n37(sdk::unknown_ptr) hidsm_log_unhandled_event;
    
    // [HIDSM_SendingDx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    // hidclass.sys .text:0x5c20, 0x2bf0 bytes
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    //
    _n38(sdk::unknown_ptr) hidsm_sending_dx_no_wake;
    
    // [HIDSM_SendingDx_WithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    // hidclass.sys .text:0x5c20, 0x2bf0 bytes
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    //
    _n39(sdk::unknown_ptr) hidsm_sending_dx_with_wake_;
    
    // [HIDSM_WaitingForDxCompletionAfterIdleIrpFailed_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _n40(sdk::unknown_ptr) hidsm_waiting_for_dx_completion_after_idle_irp_failed_no_wake;
    
    // [HIDSM_WaitingForDxCompletion_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _n41(sdk::unknown_ptr) hidsm_waiting_for_dx_completion_no_wake;
    
    // [HIDSM_WaitingForDx_WithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _n42(sdk::unknown_ptr) hidsm_waiting_for_dx_with_wake_;
    
    // [HIDSM_WaitingForIdleIrpCompletion_Dx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfc00, 0x2bf0 bytes
    // hidclass.sys .text:0xf800, 0x2bf0 bytes
    // hidclass.sys .text:0xfc00, 0x2bf0 bytes
    //
    _n43(sdk::unknown_ptr) hidsm_waiting_for_idle_irp_completion_dx;
    
    // [HIDSM_WaitingForRequiredCallback_Dx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _n44(sdk::unknown_ptr) hidsm_waiting_for_required_callback_dx_no_wake;
    
    // [HIDSM_WaitingForRequiredCallbackOnIdleCompletionWithNoCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _n45(sdk::unknown_ptr) hidsm_waiting_for_required_callback_on_idle_completion_with_no_callback;
    
    // [InitializeCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // hidclass.sys PAGE:0x22830, 0x1a48 bytes
    // hidclass.sys PAGE:0x323d0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x323d0, 0x2bf0 bytes
    //
    _n46(sdk::unknown_ptr) initialize_collection;
    
    // [McTemplateK0phhhqbr4_EtwWriteTransfer]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11364, 0x2bf0 bytes
    // hidclass.sys .text:0x12884, 0x2bf0 bytes
    // hidclass.sys .text:0x11364, 0x2bf0 bytes
    //
    _n47(sdk::unknown_ptr) mc_template_k0phhhqbr4_etw_write_transfer;
    
    // [HidSmStateEntryCompletingIdleCallbackAfterIdleIrpFailed_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x28128, 0x2bf0 bytes
    // hidclass.sys .data:0x2b168, 0x2bf0 bytes
    // hidclass.sys .data:0x28128, 0x2bf0 bytes
    //
    _n48(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_after_idle_irp_failed_no_wake;
    
    // [HidSmStateEntryCompletingIdleCallback_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27408, 0x2bf0 bytes
    // hidclass.sys .data:0x2a418, 0x2bf0 bytes
    // hidclass.sys .data:0x27408, 0x2bf0 bytes
    //
    _n49(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_no_wake;
    
    // [HidSmStateEntryCompletingIdleCallback_WithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27688, 0x2bf0 bytes
    // hidclass.sys .data:0x2a698, 0x2bf0 bytes
    // hidclass.sys .data:0x27688, 0x2bf0 bytes
    //
    _n50(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_with_wake_;
    
    // [HidSmStateEntryDx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27840, 0x2bf0 bytes
    // hidclass.sys .data:0x2a850, 0x2bf0 bytes
    // hidclass.sys .data:0x27840, 0x2bf0 bytes
    //
    _n51(sdk::unknown_ptr) sm_state_entry_dx_no_wake;
    
    // [HidSmStateEntrySendingDx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27d10, 0x2bf0 bytes
    // hidclass.sys .data:0x2ad20, 0x2bf0 bytes
    // hidclass.sys .data:0x27d10, 0x2bf0 bytes
    //
    _n52(sdk::unknown_ptr) sm_state_entry_sending_dx_no_wake;
    
    // [HidSmStateEntrySendingDx_WithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27a50, 0x2bf0 bytes
    // hidclass.sys .data:0x2aa60, 0x2bf0 bytes
    // hidclass.sys .data:0x27a50, 0x2bf0 bytes
    //
    _n53(sdk::unknown_ptr) sm_state_entry_sending_dx_with_wake_;
    
    // [HidSmStateEntryWaitingForDxCompletionAfterIdleIrpFailed_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27a20, 0x2bf0 bytes
    // hidclass.sys .data:0x2aa30, 0x2bf0 bytes
    // hidclass.sys .data:0x27a20, 0x2bf0 bytes
    //
    _n54(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_completion_after_idle_irp_failed_no_wake;
    
    // [HidSmStateEntryWaitingForDxCompletion_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27f38, 0x2bf0 bytes
    // hidclass.sys .data:0x2af48, 0x2bf0 bytes
    // hidclass.sys .data:0x27f38, 0x2bf0 bytes
    //
    _n55(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_completion_no_wake;
    
    // [HidSmStateEntryWaitingForDx_WithWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27658, 0x2bf0 bytes
    // hidclass.sys .data:0x2a668, 0x2bf0 bytes
    // hidclass.sys .data:0x27658, 0x2bf0 bytes
    //
    _n56(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_with_wake_;
    
    // [HidSmStateEntryWaitingForIdleIrpCompletion_Dx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27360, 0x2bf0 bytes
    // hidclass.sys .data:0x2a370, 0x2bf0 bytes
    // hidclass.sys .data:0x27360, 0x2bf0 bytes
    //
    _n57(sdk::unknown_ptr) sm_state_entry_waiting_for_idle_irp_completion_dx;
    
    // [HidSmStateEntryWaitingForRequiredCallback_Dx_NoWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x274a8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a4b8, 0x2bf0 bytes
    // hidclass.sys .data:0x274a8, 0x2bf0 bytes
    //
    _n58(sdk::unknown_ptr) sm_state_entry_waiting_for_required_callback_dx_no_wake;
    
    // [HidSmStateEntryWaitingForRequiredCallbackOnIdleCompletionWithNoCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x27d40, 0x2bf0 bytes
    // hidclass.sys .data:0x2ad50, 0x2bf0 bytes
    // hidclass.sys .data:0x27d40, 0x2bf0 bytes
    //
    _n59(sdk::unknown_ptr) sm_state_entry_waiting_for_required_callback_on_idle_completion_with_no_callback;
    
    // [WPP_837a38db02ca3b2d8c6a7afed47f884b_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x21a48, 0x2bf0 bytes
    // hidclass.sys .rdata:0x24eb8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x21a48, 0x2bf0 bytes
    //
    _n60(sdk::unknown_ptr) wpp_837a38db02ca3b2d8c6a7afed47f884b_traceguids;
    
    // [WPP_8ae5e4a971393ff1b5e2f45cdb927a42_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x214a8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x247b8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x214a8, 0x2bf0 bytes
    //
    _n61(sdk::unknown_ptr) wpp_8ae5e4a971393ff1b5e2f45cdb927a42_traceguids;
    
    // [WPP_d3422704dcd235ea7c23ca0d62a7cccc_Traceguids]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x206c8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23770, 0x2bf0 bytes
    // hidclass.sys .rdata:0x206c8, 0x2bf0 bytes
    //
    _n62(sdk::unknown_ptr) wpp_d3422704dcd235ea7c23ca0d62a7cccc_traceguids;
    
    // [WPP_RECORDER_SF_dqZ]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xed5c, 0x2bf0 bytes
    // hidclass.sys .text:0xe5b0, 0x2bf0 bytes
    // hidclass.sys .text:0xed5c, 0x2bf0 bytes
    //
    _n63(sdk::unknown_ptr) wpp_recorder_sf_dq_z;
    
    // [WPP_RECORDER_SF__guid_idDd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1943c, 0x2bf0 bytes
    // hidclass.sys .text:0x1c424, 0x2bf0 bytes
    // hidclass.sys .text:0x1943c, 0x2bf0 bytes
    //
    _n64(sdk::unknown_ptr) wpp_recorder_sf_guid_id_dd;
    
    // [WPP_RECORDER_SF_qDddddd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x19760, 0x2bf0 bytes
    // hidclass.sys .text:0x1c79c, 0x2bf0 bytes
    // hidclass.sys .text:0x19760, 0x2bf0 bytes
    //
    _n65(sdk::unknown_ptr) wpp_recorder_sf_q_dddddd;
    
    // [WPP_RECORDER_SF_qDlll]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x9810, 0x2bf0 bytes
    // hidclass.sys .text:0x6510, 0x2bf0 bytes
    // hidclass.sys .text:0x9810, 0x2bf0 bytes
    //
    _n66(sdk::unknown_ptr) wpp_recorder_sf_q_dlll;
    
    // [WPP_RECORDER_SF_qLDqDLlll]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x81e0, 0x2bf0 bytes
    // hidclass.sys .text:0x8250, 0x2bf0 bytes
    // hidclass.sys .text:0x81e0, 0x2bf0 bytes
    //
    _n67(sdk::unknown_ptr) wpp_recorder_sf_q_l_dq_d_llll;
    
    // [WPP_RECORDER_SF_qLLdddd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x198e0, 0x2bf0 bytes
    // hidclass.sys .text:0x1c91c, 0x2bf0 bytes
    // hidclass.sys .text:0x198e0, 0x2bf0 bytes
    //
    _n68(sdk::unknown_ptr) wpp_recorder_sf_q_l_ldddd;
    
    // [WPP_RECORDER_SF_qLDDqldLLiIIIIIIi]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x109b4, 0x2bf0 bytes
    // hidclass.sys .text:0x11458, 0x2bf0 bytes
    // hidclass.sys .text:0x109b4, 0x2bf0 bytes
    //
    _n69(sdk::unknown_ptr) wpp_recorder_sf_q_ld_dqld_l_li_iiiii_ii;
    
    // [WPP_RECORDER_SF_qLDD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1dbf4, 0x2bf0 bytes
    // hidclass.sys .text:0x208b0, 0x2bf0 bytes
    // hidclass.sys .text:0x1dbf4, 0x2bf0 bytes
    //
    _n70(sdk::unknown_ptr) wpp_recorder_sf_q_ldd;
    
    // [WPP_RECORDER_SF_qLDDLlll]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x8b30, 0x2bf0 bytes
    // hidclass.sys .text:0x8c80, 0x2bf0 bytes
    // hidclass.sys .text:0x8b30, 0x2bf0 bytes
    //
    _n71(sdk::unknown_ptr) wpp_recorder_sf_q_ldd_llll;
    
    // [WPP_RECORDER_SF_qLDDLLDD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x8a00, 0x2bf0 bytes
    // hidclass.sys .text:0x8b50, 0x2bf0 bytes
    // hidclass.sys .text:0x8a00, 0x2bf0 bytes
    //
    _n72(sdk::unknown_ptr) wpp_recorder_sf_q_lddlldd;
    
    // [WPP_RECORDER_SF_qLidIIIII]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x10d94, 0x2bf0 bytes
    // hidclass.sys .text:0x11c10, 0x2bf0 bytes
    // hidclass.sys .text:0x10d94, 0x2bf0 bytes
    //
    _n73(sdk::unknown_ptr) wpp_recorder_sf_q_lid_iiiii;
    
    // [WPP_RECORDER_SF_qLLLLL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xcf1c, 0x2bf0 bytes
    // hidclass.sys .text:0xd0e0, 0x2bf0 bytes
    // hidclass.sys .text:0xcf1c, 0x2bf0 bytes
    //
    _n74(sdk::unknown_ptr) wpp_recorder_sf_q_lllll;
    
    // [WPP_RECORDER_SF_qSd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xc620, 0x2bf0 bytes
    // hidclass.sys .text:0xd2d0, 0x2bf0 bytes
    // hidclass.sys .text:0xc620, 0x2bf0 bytes
    //
    _n75(sdk::unknown_ptr) wpp_recorder_sf_q_sd_;
    
    // [WPP_RECORDER_SF_qSS]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x10f58, 0x2bf0 bytes
    // hidclass.sys .text:0x11dd4, 0x2bf0 bytes
    // hidclass.sys .text:0x10f58, 0x2bf0 bytes
    //
    _n76(sdk::unknown_ptr) wpp_recorder_sf_q_ss;
    
    // [WPP_RECORDER_SF_qSSS]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11128, 0x2bf0 bytes
    // hidclass.sys .text:0x11fa4, 0x2bf0 bytes
    // hidclass.sys .text:0x11128, 0x2bf0 bytes
    //
    _n77(sdk::unknown_ptr) wpp_recorder_sf_q_sss;
    
    // [WPP_RECORDER_SF_qdD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x19664, 0x2bf0 bytes
    // hidclass.sys .text:0x1c6a0, 0x2bf0 bytes
    // hidclass.sys .text:0x19664, 0x2bf0 bytes
    //
    _n78(sdk::unknown_ptr) wpp_recorder_sf_qd_d;
    
    // [WPP_RECORDER_SF_qdLLiiIIIIIIIII]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xffe4, 0x2bf0 bytes
    // hidclass.sys .text:0x10760, 0x2bf0 bytes
    // hidclass.sys .text:0xffe4, 0x2bf0 bytes
    //
    _n79(sdk::unknown_ptr) wpp_recorder_sf_qd_l_lii_iiiiiiiii;
    
    // [WPP_RECORDER_SF_qdiDd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x19a5c, 0x2bf0 bytes
    // hidclass.sys .text:0x1ca98, 0x2bf0 bytes
    // hidclass.sys .text:0x19a5c, 0x2bf0 bytes
    //
    _n80(sdk::unknown_ptr) wpp_recorder_sf_qdi_dd;
    
    // [WPP_RECORDER_SF_qdqD]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15c7c, 0x2bf0 bytes
    // hidclass.sys .text:0x189e0, 0x2bf0 bytes
    // hidclass.sys .text:0x15c7c, 0x2bf0 bytes
    //
    _n81(sdk::unknown_ptr) wpp_recorder_sf_qdq_d;
    
    // [WPP_RECORDER_SF_qdqL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15c7c, 0x2bf0 bytes
    // hidclass.sys .text:0x189e0, 0x2bf0 bytes
    // hidclass.sys .text:0x15c7c, 0x2bf0 bytes
    //
    _n82(sdk::unknown_ptr) wpp_recorder_sf_qdq_l;
    
    // [WPP_RECORDER_SF_qdqLc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x172b8, 0x2bf0 bytes
    // hidclass.sys .text:0x1a0b0, 0x2bf0 bytes
    // hidclass.sys .text:0x172b8, 0x2bf0 bytes
    //
    _n83(sdk::unknown_ptr) wpp_recorder_sf_qdq_lc;
    
    // [WPP_RECORDER_SF_qdqLd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15df8, 0x2bf0 bytes
    // hidclass.sys .text:0x18b5c, 0x2bf0 bytes
    // hidclass.sys .text:0x15df8, 0x2bf0 bytes
    //
    _n84(sdk::unknown_ptr) wpp_recorder_sf_qdq_ld;
    
    // [WPP_RECORDER_SF_qdqc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15fa8, 0x2bf0 bytes
    // hidclass.sys .text:0x18d0c, 0x2bf0 bytes
    // hidclass.sys .text:0x15fa8, 0x2bf0 bytes
    //
    _n85(sdk::unknown_ptr) wpp_recorder_sf_qdqc;
    
    // [WPP_RECORDER_SF_qdqcqq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfd10, 0x2bf0 bytes
    // hidclass.sys .text:0x100f0, 0x2bf0 bytes
    // hidclass.sys .text:0xfd10, 0x2bf0 bytes
    //
    _n86(sdk::unknown_ptr) wpp_recorder_sf_qdqcqq;
    
    // [WPP_RECORDER_SF_qdqdLLll]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x118f0, 0x2bf0 bytes
    // hidclass.sys .text:0x13654, 0x2bf0 bytes
    // hidclass.sys .text:0x118f0, 0x2bf0 bytes
    //
    _n87(sdk::unknown_ptr) wpp_recorder_sf_qdqd_l_lll;
    
    // [WPP_RECORDER_SF_qdqdLd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x19ba4, 0x2bf0 bytes
    // hidclass.sys .text:0x1cbe0, 0x2bf0 bytes
    // hidclass.sys .text:0x19ba4, 0x2bf0 bytes
    //
    _n88(sdk::unknown_ptr) wpp_recorder_sf_qdqd_ld;
    
    // [WPP_RECORDER_SF_qdqdd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x15df8, 0x2bf0 bytes
    // hidclass.sys .text:0x18b5c, 0x2bf0 bytes
    // hidclass.sys .text:0x15df8, 0x2bf0 bytes
    //
    _n89(sdk::unknown_ptr) wpp_recorder_sf_qdqdd;
    
    // [WPP_RECORDER_SF_qdql]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1dde4, 0x2bf0 bytes
    // hidclass.sys .text:0x20aa0, 0x2bf0 bytes
    // hidclass.sys .text:0x1dde4, 0x2bf0 bytes
    //
    _n90(sdk::unknown_ptr) wpp_recorder_sf_qdql;
    
    // [WPP_RECORDER_SF_qdqq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6570, 0x2bf0 bytes
    // hidclass.sys .text:0x9de0, 0x2bf0 bytes
    // hidclass.sys .text:0x6570, 0x2bf0 bytes
    //
    _n91(sdk::unknown_ptr) wpp_recorder_sf_qdqq;
    
    // [WPP_RECORDER_SF_qdqqLLlll]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x2380, 0x2bf0 bytes
    // hidclass.sys .text:0x1950, 0x2bf0 bytes
    // hidclass.sys .text:0x2380, 0x2bf0 bytes
    //
    _n92(sdk::unknown_ptr) wpp_recorder_sf_qdqq_l_llll;
    
    // [WPP_RECORDER_SF_qdqqLd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x160cc, 0x2bf0 bytes
    // hidclass.sys .text:0x18e30, 0x2bf0 bytes
    // hidclass.sys .text:0x160cc, 0x2bf0 bytes
    //
    _n93(sdk::unknown_ptr) wpp_recorder_sf_qdqq_ld;
    
    // [WPP_RECORDER_SF_qdqqLLLDL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x3670, 0x2bf0 bytes
    // hidclass.sys .text:0x2b40, 0x2bf0 bytes
    // hidclass.sys .text:0x3670, 0x2bf0 bytes
    //
    _n94(sdk::unknown_ptr) wpp_recorder_sf_qdqq_llldl;
    
    // [WPP_RECORDER_SF_qdqqc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1622c, 0x2bf0 bytes
    // hidclass.sys .text:0x18f90, 0x2bf0 bytes
    // hidclass.sys .text:0x1622c, 0x2bf0 bytes
    //
    _n95(sdk::unknown_ptr) wpp_recorder_sf_qdqqc;
    
    // [WPP_RECORDER_SF_qdqqcL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7b40, 0x2bf0 bytes
    // hidclass.sys .text:0x7be0, 0x2bf0 bytes
    // hidclass.sys .text:0x7b40, 0x2bf0 bytes
    //
    _n96(sdk::unknown_ptr) wpp_recorder_sf_qdqqc_l;
    
    // [WPP_RECORDER_SF_qdqqcLd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7a20, 0x2bf0 bytes
    // hidclass.sys .text:0x7ac0, 0x2bf0 bytes
    // hidclass.sys .text:0x7a20, 0x2bf0 bytes
    //
    _n97(sdk::unknown_ptr) wpp_recorder_sf_qdqqc_ld;
    
    // [WPP_RECORDER_SF_qdqqcLdl]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1637c, 0x2bf0 bytes
    // hidclass.sys .text:0x190e0, 0x2bf0 bytes
    // hidclass.sys .text:0x1637c, 0x2bf0 bytes
    //
    _n98(sdk::unknown_ptr) wpp_recorder_sf_qdqqc_ldl;
    
    // [WPP_RECORDER_SF_qdqqcc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x2860, 0x2bf0 bytes
    // hidclass.sys .text:0x1e30, 0x2bf0 bytes
    // hidclass.sys .text:0x2860, 0x2bf0 bytes
    //
    _n99(sdk::unknown_ptr) wpp_recorder_sf_qdqqcc;
    
    // [WPP_RECORDER_SF_qdqqccL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4b10, 0x2bf0 bytes
    // hidclass.sys .text:0x4bc0, 0x2bf0 bytes
    // hidclass.sys .text:0x4b10, 0x2bf0 bytes
    //
    _o00(sdk::unknown_ptr) wpp_recorder_sf_qdqqcc_l;
    
    // [WPP_RECORDER_SF_qdqqccd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1652c, 0x2bf0 bytes
    // hidclass.sys .text:0x19290, 0x2bf0 bytes
    // hidclass.sys .text:0x1652c, 0x2bf0 bytes
    //
    _o01(sdk::unknown_ptr) wpp_recorder_sf_qdqqccd;
    
    // [WPP_RECORDER_SF_qdqqcd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x16700, 0x2bf0 bytes
    // hidclass.sys .text:0x19464, 0x2bf0 bytes
    // hidclass.sys .text:0x16700, 0x2bf0 bytes
    //
    _o02(sdk::unknown_ptr) wpp_recorder_sf_qdqqcd;
    
    // [WPP_RECORDER_SF_qdqqd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5f50, 0x2bf0 bytes
    // hidclass.sys .text:0xa080, 0x2bf0 bytes
    // hidclass.sys .text:0x5f50, 0x2bf0 bytes
    //
    _o03(sdk::unknown_ptr) wpp_recorder_sf_qdqqd;
    
    // [WPP_RECORDER_SF_qdqqdHDd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x19e58, 0x2bf0 bytes
    // hidclass.sys .text:0x1cd40, 0x2bf0 bytes
    // hidclass.sys .text:0x19e58, 0x2bf0 bytes
    //
    _o04(sdk::unknown_ptr) wpp_recorder_sf_qdqqd_h_dd;
    
    // [WPP_RECORDER_SF_qdqqdI]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x9b60, 0x2bf0 bytes
    // hidclass.sys .text:0xa440, 0x2bf0 bytes
    // hidclass.sys .text:0x9b60, 0x2bf0 bytes
    //
    _o05(sdk::unknown_ptr) wpp_recorder_sf_qdqqd_i;
    
    // [WPP_RECORDER_SF_qdqqdL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xa290, 0x2bf0 bytes
    // hidclass.sys .text:0x6340, 0x2bf0 bytes
    // hidclass.sys .text:0xa290, 0x2bf0 bytes
    //
    _o06(sdk::unknown_ptr) wpp_recorder_sf_qdqqd_l;
    
    // [WPP_RECORDER_SF_qdqqdd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1a00c, 0x2bf0 bytes
    // hidclass.sys .text:0x1cef4, 0x2bf0 bytes
    // hidclass.sys .text:0x1a00c, 0x2bf0 bytes
    //
    _o07(sdk::unknown_ptr) wpp_recorder_sf_qdqqdd;
    
    // [WPP_RECORDER_SF_qdqqdq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1ee04, 0x2bf0 bytes
    // hidclass.sys .text:0x21b14, 0x2bf0 bytes
    // hidclass.sys .text:0x1ee04, 0x2bf0 bytes
    //
    _o08(sdk::unknown_ptr) wpp_recorder_sf_qdqqdq;
    
    // [WPP_RECORDER_SF_qdqqq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1d48c, 0x2bf0 bytes
    // hidclass.sys .text:0x20138, 0x2bf0 bytes
    // hidclass.sys .text:0x1d48c, 0x2bf0 bytes
    //
    _o09(sdk::unknown_ptr) wpp_recorder_sf_qdqqq;
    
    // [WPP_RECORDER_SF_qdqqqq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1685c, 0x2bf0 bytes
    // hidclass.sys .text:0x195c0, 0x2bf0 bytes
    // hidclass.sys .text:0x1685c, 0x2bf0 bytes
    //
    _o10(sdk::unknown_ptr) wpp_recorder_sf_qdqqqq;
    
    // [WPP_RECORDER_SF_qdqqqqd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfe6c, 0x2bf0 bytes
    // hidclass.sys .text:0x105e8, 0x2bf0 bytes
    // hidclass.sys .text:0xfe6c, 0x2bf0 bytes
    //
    _o11(sdk::unknown_ptr) wpp_recorder_sf_qdqqqqd;
    
    // [WPP_RECORDER_SF_qdqs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x1a1c4, 0x2bf0 bytes
    // hidclass.sys .text:0x1d0ac, 0x2bf0 bytes
    // hidclass.sys .text:0x1a1c4, 0x2bf0 bytes
    //
    _o12(sdk::unknown_ptr) wpp_recorder_sf_qdqs;
    
    // [WPP_RECORDER_SF_qdqsLLLL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11a94, 0x2bf0 bytes
    // hidclass.sys .text:0x137f8, 0x2bf0 bytes
    // hidclass.sys .text:0x11a94, 0x2bf0 bytes
    //
    _o13(sdk::unknown_ptr) wpp_recorder_sf_qdqs_llll;
    
    // [WPP_RECORDER_SF_qqLS]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xd000, 0x2bf0 bytes
    // hidclass.sys .text:0xd1c4, 0x2bf0 bytes
    // hidclass.sys .text:0xd000, 0x2bf0 bytes
    //
    _o14(sdk::unknown_ptr) wpp_recorder_sf_qq_ls;
    
    // [WPP_RECORDER_SF_qqcL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x9740, 0x2bf0 bytes
    // hidclass.sys .text:0x6440, 0x2bf0 bytes
    // hidclass.sys .text:0x9740, 0x2bf0 bytes
    //
    _o15(sdk::unknown_ptr) wpp_recorder_sf_qqc_l;
    
    // [WPP_RECORDER_SF_qqcc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf24c, 0x2bf0 bytes
    // hidclass.sys .text:0xeb60, 0x2bf0 bytes
    // hidclass.sys .text:0xf24c, 0x2bf0 bytes
    //
    _o16(sdk::unknown_ptr) wpp_recorder_sf_qqcc;
    
    // [WPP_RECORDER_SF_qqccL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4550, 0x2bf0 bytes
    // hidclass.sys .text:0x4570, 0x2bf0 bytes
    // hidclass.sys .text:0x4550, 0x2bf0 bytes
    //
    _o17(sdk::unknown_ptr) wpp_recorder_sf_qqcc_l;
    
    // [WPP_RECORDER_SF_qqccd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x16bcc, 0x2bf0 bytes
    // hidclass.sys .text:0x19930, 0x2bf0 bytes
    // hidclass.sys .text:0x16bcc, 0x2bf0 bytes
    //
    _o18(sdk::unknown_ptr) wpp_recorder_sf_qqccd;
    
    // [WPP_RECORDER_SF_qsL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x8c70, 0x2bf0 bytes
    // hidclass.sys .text:0x8dc0, 0x2bf0 bytes
    // hidclass.sys .text:0x8c70, 0x2bf0 bytes
    //
    _o19(sdk::unknown_ptr) wpp_recorder_sf_qs_l;
    
    // [allFdoExtensions]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b2b0, 0x1a48 bytes
    // hidclass.sys .data:0x28418, 0x2bf0 bytes
    // hidclass.sys .data:0x2b5d0, 0x2bf0 bytes
    // hidclass.sys .data:0x28418, 0x2bf0 bytes
    //
    _o20(sdk::unknown_ptr) all_fdo_extensions;
    
    // [allFdoExtensionsSpinLock]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b1c0, 0x1a48 bytes
    // hidclass.sys .data:0x282a0, 0x2bf0 bytes
    // hidclass.sys .data:0x2b350, 0x2bf0 bytes
    // hidclass.sys .data:0x282a0, 0x2bf0 bytes
    //
    _o21(sdk::unknown_ptr) all_fdo_extensions_spin_lock;
    
    // [AllocateGlobalRecorderLog]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x23320, 0x1a48 bytes
    // hidclass.sys PAGE:0x33de4, 0x2bf0 bytes
    // hidclass.sys PAGE:0x38c24, 0x2bf0 bytes
    // hidclass.sys PAGE:0x33de4, 0x2bf0 bytes
    //
    _o22(sdk::unknown_ptr) allocate_global_recorder_log;
    
    // [AynchronousReadCompletionWorker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xefa0, 0x1a48 bytes
    // hidclass.sys .text:0x17710, 0x2bf0 bytes
    // hidclass.sys .text:0x1a510, 0x2bf0 bytes
    // hidclass.sys .text:0x17710, 0x2bf0 bytes
    //
    _o23(sdk::unknown_ptr) aynchronous_read_completion_worker;
    
    // [BuildCompatibleID]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x215c0, 0x1a48 bytes
    // hidclass.sys PAGE:0x2e95c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35fd0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x2e95c, 0x2bf0 bytes
    //
    _o24(sdk::unknown_ptr) build_compatible_id;
    
    // [CancelAllPingPongIrps]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x49f4, 0x1a48 bytes
    // hidclass.sys .text:0x4cd0, 0x2bf0 bytes
    // hidclass.sys .text:0x4d80, 0x2bf0 bytes
    // hidclass.sys .text:0x4cd0, 0x2bf0 bytes
    //
    _o25(sdk::unknown_ptr) cancel_all_ping_pong_irps;
    
    // [CheckAndRecoverFromStopS0IdleLeak]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13864, 0x1a48 bytes
    // hidclass.sys .text:0x1d5c8, 0x2bf0 bytes
    // hidclass.sys .text:0x202e0, 0x2bf0 bytes
    // hidclass.sys .text:0x1d5c8, 0x2bf0 bytes
    //
    _o26(sdk::unknown_ptr) check_and_recover_from_stop_s0_idle_leak;
    
    // [CheckReportPowerEvent]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf2c4, 0x1a48 bytes
    // hidclass.sys .text:0xaf20, 0x2bf0 bytes
    // hidclass.sys .text:0xb1a0, 0x2bf0 bytes
    // hidclass.sys .text:0xaf20, 0x2bf0 bytes
    //
    _o27(sdk::unknown_ptr) check_report_power_event;
    
    // [CollectionPowerRequestCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4b70, 0x1a48 bytes
    // hidclass.sys .text:0x5490, 0x2bf0 bytes
    // hidclass.sys .text:0x5540, 0x2bf0 bytes
    // hidclass.sys .text:0x5490, 0x2bf0 bytes
    //
    _o28(sdk::unknown_ptr) collection_power_request_completion;
    
    // [CollectionWaitWakeIrpCancelRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12460, 0x1a48 bytes
    // hidclass.sys .text:0x1be70, 0x2bf0 bytes
    // hidclass.sys .text:0x1ec30, 0x2bf0 bytes
    // hidclass.sys .text:0x1be70, 0x2bf0 bytes
    //
    _o29(sdk::unknown_ptr) collection_wait_wake_irp_cancel_routine;
    
    // [CompleteAllCollectionWaitWakeIrps]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x496c, 0x1a48 bytes
    // hidclass.sys .text:0x4c2c, 0x2bf0 bytes
    // hidclass.sys .text:0x4cdc, 0x2bf0 bytes
    // hidclass.sys .text:0x4c2c, 0x2bf0 bytes
    //
    _o30(sdk::unknown_ptr) complete_all_collection_wait_wake_irps;
    
    // [CompleteQueuedIrpsForPolled]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x10e4c, 0x1a48 bytes
    // hidclass.sys .text:0x1a47c, 0x2bf0 bytes
    // hidclass.sys .text:0x1d364, 0x2bf0 bytes
    // hidclass.sys .text:0x1a47c, 0x2bf0 bytes
    //
    _o31(sdk::unknown_ptr) complete_queued_irps_for_polled;
    
    // [DequeueFdoExt]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf398, 0x1a48 bytes
    // hidclass.sys .text:0x177b8, 0x2bf0 bytes
    // hidclass.sys .text:0x1a5d0, 0x2bf0 bytes
    // hidclass.sys .text:0x177b8, 0x2bf0 bytes
    //
    _o32(sdk::unknown_ptr) dequeue_fdo_ext;
    
    // [DequeueInterruptReadIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xefd0, 0x1a48 bytes
    // hidclass.sys .text:0x5850, 0x2bf0 bytes
    // hidclass.sys .text:0x59a0, 0x2bf0 bytes
    // hidclass.sys .text:0x5850, 0x2bf0 bytes
    //
    _o33(sdk::unknown_ptr) dequeue_interrupt_read_irp;
    
    // [DequeueInterruptReport]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf414, 0x1a48 bytes
    // hidclass.sys .text:0x17840, 0x2bf0 bytes
    // hidclass.sys .text:0x1a658, 0x2bf0 bytes
    // hidclass.sys .text:0x17840, 0x2bf0 bytes
    //
    _o34(sdk::unknown_ptr) dequeue_interrupt_report;
    
    // [DequeuePolledReadIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x110b4, 0x1a48 bytes
    // hidclass.sys .text:0x1a6d0, 0x2bf0 bytes
    // hidclass.sys .text:0x1d5b8, 0x2bf0 bytes
    // hidclass.sys .text:0x1a6d0, 0x2bf0 bytes
    //
    _o35(sdk::unknown_ptr) dequeue_polled_read_irp;
    
    // [DequeuePolledReadSessionIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11154, 0x1a48 bytes
    // hidclass.sys .text:0x1a77c, 0x2bf0 bytes
    // hidclass.sys .text:0x1d664, 0x2bf0 bytes
    // hidclass.sys .text:0x1a77c, 0x2bf0 bytes
    //
    _o36(sdk::unknown_ptr) dequeue_polled_read_session_irp;
    
    // [DequeuePolledReadSystemIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11234, 0x1a48 bytes
    // hidclass.sys .text:0x1a870, 0x2bf0 bytes
    // hidclass.sys .text:0x1d758, 0x2bf0 bytes
    // hidclass.sys .text:0x1a870, 0x2bf0 bytes
    //
    _o37(sdk::unknown_ptr) dequeue_polled_read_system_irp;
    
    // [DequeuePowerDelayedIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5a28, 0x1a48 bytes
    // hidclass.sys .text:0x1c014, 0x2bf0 bytes
    // hidclass.sys .text:0x1edd4, 0x2bf0 bytes
    // hidclass.sys .text:0x1c014, 0x2bf0 bytes
    //
    _o38(sdk::unknown_ptr) dequeue_power_delayed_irp;
    
    // [DerefDriverExt]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x22b68, 0x1a48 bytes
    // hidclass.sys PAGE:0x303ec, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35f3c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x303ec, 0x2bf0 bytes
    //
    _o39(sdk::unknown_ptr) deref_driver_ext;
    
    // [DestroyPingPongs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xe8a8, 0x1a48 bytes
    // hidclass.sys .text:0x16e6c, 0x2bf0 bytes
    // hidclass.sys .text:0x19bd0, 0x2bf0 bytes
    // hidclass.sys .text:0x16e6c, 0x2bf0 bytes
    //
    _o40(sdk::unknown_ptr) destroy_ping_pongs;
    
    // [DllInitialize]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x235c0, 0x1a48 bytes
    // hidclass.sys PAGE:0x34190, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39120, 0x2bf0 bytes
    // hidclass.sys PAGE:0x34190, 0x2bf0 bytes
    //
    _o41(sdk::unknown_ptr) dll_initialize;
    
    // [driverExtList]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b230, 0x1a48 bytes
    // hidclass.sys .data:0x28310, 0x2bf0 bytes
    // hidclass.sys .data:0x2b3b0, 0x2bf0 bytes
    // hidclass.sys .data:0x28310, 0x2bf0 bytes
    //
    _o42(sdk::unknown_ptr) driver_ext_list;
    
    // [driverExtListMutex]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b240, 0x1a48 bytes
    // hidclass.sys .data:0x28320, 0x2bf0 bytes
    // hidclass.sys .data:0x2b3c0, 0x2bf0 bytes
    // hidclass.sys .data:0x28320, 0x2bf0 bytes
    //
    _o43(sdk::unknown_ptr) driver_ext_list_mutex;
    
    // [EnqueueCollectionWaitWakeIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x125e8, 0x1a48 bytes
    // hidclass.sys .text:0x1c0c4, 0x2bf0 bytes
    // hidclass.sys .text:0x1ee80, 0x2bf0 bytes
    // hidclass.sys .text:0x1c0c4, 0x2bf0 bytes
    //
    _o44(sdk::unknown_ptr) enqueue_collection_wait_wake_irp;
    
    // [EnqueueDriverExt]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x23184, 0x1a48 bytes
    // hidclass.sys PAGE:0x33b60, 0x2bf0 bytes
    // hidclass.sys PAGE:0x389ac, 0x2bf0 bytes
    // hidclass.sys PAGE:0x33b60, 0x2bf0 bytes
    //
    _o45(sdk::unknown_ptr) enqueue_driver_ext;
    
    // [EnqueueFdoExt]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5298, 0x1a48 bytes
    // hidclass.sys .text:0xd108, 0x2bf0 bytes
    // hidclass.sys .text:0xe140, 0x2bf0 bytes
    // hidclass.sys .text:0xd108, 0x2bf0 bytes
    //
    _o46(sdk::unknown_ptr) enqueue_fdo_ext;
    
    // [EnqueueInterruptReadIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf0c4, 0x1a48 bytes
    // hidclass.sys .text:0x3a38, 0x2bf0 bytes
    // hidclass.sys .text:0x3a64, 0x2bf0 bytes
    // hidclass.sys .text:0x3a38, 0x2bf0 bytes
    //
    _o47(sdk::unknown_ptr) enqueue_interrupt_read_irp;
    
    // [EnqueuePolledReadIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x112f4, 0x1a48 bytes
    // hidclass.sys .text:0x1a93c, 0x2bf0 bytes
    // hidclass.sys .text:0x1d824, 0x2bf0 bytes
    // hidclass.sys .text:0x1a93c, 0x2bf0 bytes
    //
    _o48(sdk::unknown_ptr) enqueue_polled_read_irp;
    
    // [HidFdoRunTimePolicyEngine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6b80, 0x1a48 bytes
    // hidclass.sys .text:0x8330, 0x2bf0 bytes
    // hidclass.sys .text:0x83a0, 0x2bf0 bytes
    // hidclass.sys .text:0x8330, 0x2bf0 bytes
    //
    _o49(sdk::unknown_ptr) fdo_run_time_policy_engine;
    
    // [HidFdoStartRunTimePolicyEngine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5368, 0x1a48 bytes
    // hidclass.sys .text:0xd1e4, 0x2bf0 bytes
    // hidclass.sys .text:0xd3d8, 0x2bf0 bytes
    // hidclass.sys .text:0xd1e4, 0x2bf0 bytes
    //
    _o50(sdk::unknown_ptr) fdo_start_run_time_policy_engine;
    
    // [HidFdoUpdateIdleEnabledInWmi]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x138cc, 0x1a48 bytes
    // hidclass.sys .text:0x1d65c, 0x2bf0 bytes
    // hidclass.sys .text:0x20374, 0x2bf0 bytes
    // hidclass.sys .text:0x1d65c, 0x2bf0 bytes
    //
    _o51(sdk::unknown_ptr) fdo_update_idle_enabled_in_wmi;
    
    // [HidFdoWmiGuidList]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16000, 0x1a48 bytes
    // hidclass.sys .rdata:0x20000, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23010, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20000, 0x2bf0 bytes
    //
    _o52(sdk::unknown_ptr) fdo_wmi_guid_list;
    
    // [g_HidId]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b2c0, 0x1a48 bytes
    // hidclass.sys .data:0x2842c, 0x2bf0 bytes
    // hidclass.sys .data:0x2b5e8, 0x2bf0 bytes
    // hidclass.sys .data:0x2842c, 0x2bf0 bytes
    //
    _o53(sdk::unknown_ptr) g_hid_id;
    
    // [g_RecorderLog]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b2c8, 0x1a48 bytes
    // hidclass.sys .data:0x28420, 0x2bf0 bytes
    // hidclass.sys .data:0x2b480, 0x2bf0 bytes
    // hidclass.sys .data:0x28420, 0x2bf0 bytes
    //
    _o54(sdk::unknown_ptr) g_recorder_log;
    
    // [g_WppInitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b2d0, 0x1a48 bytes
    // hidclass.sys .data:0x28430, 0x2bf0 bytes
    // hidclass.sys .data:0x2b5e4, 0x2bf0 bytes
    // hidclass.sys .data:0x28430, 0x2bf0 bytes
    //
    _o55(sdk::unknown_ptr) g_wpp_initialized;
    
    // [GetCollectionDesc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6940, 0x1a48 bytes
    // hidclass.sys .text:0xaf80, 0x2bf0 bytes
    // hidclass.sys .text:0xb200, 0x2bf0 bytes
    // hidclass.sys .text:0xaf80, 0x2bf0 bytes
    //
    _o56(sdk::unknown_ptr) get_collection_desc;
    
    // [GetHIDRawReportDescriptor]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x208ac, 0x1a48 bytes
    // hidclass.sys PAGE:0x32e8c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35a90, 0x2bf0 bytes
    // hidclass.sys PAGE:0x32e8c, 0x2bf0 bytes
    //
    _o57(sdk::unknown_ptr) get_hid_raw_report_descriptor;
    
    // [GetHidclassCollection]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x68d0, 0x1a48 bytes
    // hidclass.sys .text:0xb000, 0x2bf0 bytes
    // hidclass.sys .text:0xb280, 0x2bf0 bytes
    // hidclass.sys .text:0xb000, 0x2bf0 bytes
    //
    _o58(sdk::unknown_ptr) get_hidclass_collection;
    
    // [GetImageBase]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf478, 0x1a48 bytes
    // hidclass.sys .text:0x179ac, 0x2bf0 bytes
    // hidclass.sys .text:0x1a7d0, 0x2bf0 bytes
    // hidclass.sys .text:0x179ac, 0x2bf0 bytes
    //
    _o59(sdk::unknown_ptr) get_image_base;
    
    // [GetReportIdentifier]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xf590, 0x1a48 bytes
    // hidclass.sys .text:0xb06c, 0x2bf0 bytes
    // hidclass.sys .text:0xb2ec, 0x2bf0 bytes
    // hidclass.sys .text:0xb06c, 0x2bf0 bytes
    //
    _o60(sdk::unknown_ptr) get_report_identifier;
    
    // [GUID_DEVICE_SYS_BUTTON]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16e18, 0x1a48 bytes
    // hidclass.sys .rdata:0x22718, 0x2bf0 bytes
    // hidclass.sys .rdata:0x25b38, 0x2bf0 bytes
    // hidclass.sys .rdata:0x22718, 0x2bf0 bytes
    //
    _o61(struct nt::guid_t*) guid_device_sys_button;
    
    // [GUID_HID_INTERFACE_NOTIFY]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16198, 0x1a48 bytes
    // hidclass.sys .rdata:0x20550, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23550, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20550, 0x2bf0 bytes
    //
    _o62(sdk::unknown_ptr) guid_hid_interface_notify;
    
    // [GUID_POWER_DEVICE_ENABLE]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x163b0, 0x1a48 bytes
    // hidclass.sys .rdata:0x22708, 0x2bf0 bytes
    // hidclass.sys .rdata:0x25cb8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x22708, 0x2bf0 bytes
    //
    _o63(struct nt::guid_t*) guid_power_device_enable;
    
    // [HexToString]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x60d0, 0x1a48 bytes
    // hidclass.sys .text:0x3800, 0x2bf0 bytes
    // hidclass.sys .text:0x2cd0, 0x2bf0 bytes
    // hidclass.sys .text:0x3800, 0x2bf0 bytes
    //
    _o64(sdk::unknown_ptr) hex_to_string;
    
    // [HIDCLASS_ETW_EVENT_DEVICE_INFORMATION]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16de8, 0x1a48 bytes
    // hidclass.sys .rdata:0x20448, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23420, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20448, 0x2bf0 bytes
    //
    _o65(sdk::unknown_ptr) hidclass_etw_event_device_information;
    
    // [HIDCLASS_ETW_EVENT_RUNDOWN_COMPLETE]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16db0, 0x1a48 bytes
    // hidclass.sys .rdata:0x203c0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23398, 0x2bf0 bytes
    // hidclass.sys .rdata:0x203c0, 0x2bf0 bytes
    //
    _o66(sdk::unknown_ptr) hidclass_etw_event_rundown_complete;
    
    // [HIDCLASS_ETW_EVENT_RUNDOWN_START]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16da0, 0x1a48 bytes
    // hidclass.sys .rdata:0x20388, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23360, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20388, 0x2bf0 bytes
    //
    _o67(sdk::unknown_ptr) hidclass_etw_event_rundown_start;
    
    // [HIDSM_AckingPowerNotRequired]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14370, 0x1a48 bytes
    // hidclass.sys .text:0xf920, 0x2bf0 bytes
    // hidclass.sys .text:0xf550, 0x2bf0 bytes
    // hidclass.sys .text:0xf920, 0x2bf0 bytes
    //
    _o68(sdk::unknown_ptr) hidsm_acking_power_not_required;
    
    // [HIDSM_AckingPowerRequired]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4560, 0x1a48 bytes
    // hidclass.sys .text:0xc290, 0x2bf0 bytes
    // hidclass.sys .text:0xc730, 0x2bf0 bytes
    // hidclass.sys .text:0xc290, 0x2bf0 bytes
    //
    _o69(sdk::unknown_ptr) hidsm_acking_power_required;
    
    // [HIDSM_AckingPowerRequiredOnD0CompletedAfterS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4560, 0x1a48 bytes
    // hidclass.sys .text:0xc290, 0x2bf0 bytes
    // hidclass.sys .text:0xc730, 0x2bf0 bytes
    // hidclass.sys .text:0xc290, 0x2bf0 bytes
    //
    _o70(sdk::unknown_ptr) hidsm_acking_power_required_on_d0_completed_after_s0_idle;
    
    // [HIDSM_AcquiringPowerReference]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x143d0, 0x1a48 bytes
    // hidclass.sys .text:0x1e200, 0x2bf0 bytes
    // hidclass.sys .text:0x20e00, 0x2bf0 bytes
    // hidclass.sys .text:0x1e200, 0x2bf0 bytes
    //
    _o71(sdk::unknown_ptr) hidsm_acquiring_power_reference;
    
    // [HIDSM_AddEvent]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x53b0, 0x1a48 bytes
    // hidclass.sys .text:0xb0d0, 0x2bf0 bytes
    // hidclass.sys .text:0xb350, 0x2bf0 bytes
    // hidclass.sys .text:0xb0d0, 0x2bf0 bytes
    //
    _o72(sdk::unknown_ptr) hidsm_add_event;
    
    // [HIDSM_AddHidsmEvent]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x52ec, 0x1a48 bytes
    // hidclass.sys .text:0xed40, 0x2bf0 bytes
    // hidclass.sys .text:0xf398, 0x2bf0 bytes
    // hidclass.sys .text:0xed40, 0x2bf0 bytes
    //
    _o73(sdk::unknown_ptr) hidsm_add_hidsm_event;
    
    // [HIDSM_CheckingIfNeedToBeArmedForWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x143f0, 0x1a48 bytes
    // hidclass.sys .text:0x1e230, 0x2bf0 bytes
    // hidclass.sys .text:0x20e30, 0x2bf0 bytes
    // hidclass.sys .text:0x1e230, 0x2bf0 bytes
    //
    _o74(sdk::unknown_ptr) hidsm_checking_if_need_to_be_armed_for_wake;
    
    // [HIDSM_CheckingIfNeedToBeArmedForWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4db0, 0x1a48 bytes
    // hidclass.sys .text:0x3c50, 0x2bf0 bytes
    // hidclass.sys .text:0x3c70, 0x2bf0 bytes
    // hidclass.sys .text:0x3c50, 0x2bf0 bytes
    //
    _o75(sdk::unknown_ptr) hidsm_checking_if_need_to_be_armed_for_wake_on_sx;
    
    // [HIDSM_CompletingIdleCallbackAfterUnexpectedIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14470, 0x1a48 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x13c90, 0x2bf0 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    //
    _o76(sdk::unknown_ptr) hidsm_completing_idle_callback_after_unexpected_idle_completion;
    
    // [HIDSM_CompletingIdleCallbackDuringTransientPowerDown]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14470, 0x1a48 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x13c90, 0x2bf0 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    //
    _o77(sdk::unknown_ptr) hidsm_completing_idle_callback_during_transient_power_down;
    
    // [HIDSM_CompletingIdleCallbackInvokedInErrorPostIdleIrpCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14470, 0x1a48 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    // hidclass.sys .text:0x13c90, 0x2bf0 bytes
    // hidclass.sys .text:0x11ef0, 0x2bf0 bytes
    //
    _o78(sdk::unknown_ptr) hidsm_completing_idle_callback_invoked_in_error_post_idle_irp_completion;
    
    // [HIDSM_CompletingPnPEventOnSurpriseRemove]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x144a0, 0x1a48 bytes
    // hidclass.sys .text:0x1e250, 0x2bf0 bytes
    // hidclass.sys .text:0x20e50, 0x2bf0 bytes
    // hidclass.sys .text:0x1e250, 0x2bf0 bytes
    //
    _o79(sdk::unknown_ptr) hidsm_completing_pn_p_event_on_surprise_remove;
    
    // [HIDSM_D0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _o80(sdk::unknown_ptr) hidsm_d0;
    
    // [HIDSM_DxArmedForWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _o81(sdk::unknown_ptr) hidsm_dx_armed_for_wake;
    
    // [HIDSM_DxSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _o82(sdk::unknown_ptr) hidsm_dx_sx;
    
    // [HIDSM_DxSxArmedForWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _o83(sdk::unknown_ptr) hidsm_dx_sx_armed_for_wake;
    
    // [HIDSM_ExecuteEntryFunctionsAndPushPopStateMachinesForCurrentState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x55a0, 0x1a48 bytes
    // hidclass.sys .text:0x1248, 0x2bf0 bytes
    // hidclass.sys .text:0x3050, 0x2bf0 bytes
    // hidclass.sys .text:0x1248, 0x2bf0 bytes
    //
    _o84(sdk::unknown_ptr) hidsm_execute_entry_functions_and_push_pop_state_machines_for_current_state;
    
    // [HIDSM_Failed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x144d0, 0x1a48 bytes
    // hidclass.sys .text:0x1e290, 0x2bf0 bytes
    // hidclass.sys .text:0x20e90, 0x2bf0 bytes
    // hidclass.sys .text:0x1e290, 0x2bf0 bytes
    //
    _o85(sdk::unknown_ptr) hidsm_failed;
    
    // [HIDSM_FindAndSetTargetState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x56d0, 0x1a48 bytes
    // hidclass.sys .text:0x171c, 0x2bf0 bytes
    // hidclass.sys .text:0x352c, 0x2bf0 bytes
    // hidclass.sys .text:0x171c, 0x2bf0 bytes
    //
    _o86(sdk::unknown_ptr) hidsm_find_and_set_target_state;
    
    // [HIDSM_GetNextEvent]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x58bc, 0x1a48 bytes
    // hidclass.sys .text:0x1abc, 0x2bf0 bytes
    // hidclass.sys .text:0x38cc, 0x2bf0 bytes
    // hidclass.sys .text:0x1abc, 0x2bf0 bytes
    //
    _o87(sdk::unknown_ptr) hidsm_get_next_event;
    
    // [HIDSM_InitializingDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5990, 0x1a48 bytes
    // hidclass.sys .text:0xe600, 0x2bf0 bytes
    // hidclass.sys .text:0xe0c0, 0x2bf0 bytes
    // hidclass.sys .text:0xe600, 0x2bf0 bytes
    //
    _o88(sdk::unknown_ptr) hidsm_initializing_device;
    
    // [HIDSM_ReleasingPowerReference]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14500, 0x1a48 bytes
    // hidclass.sys .text:0x1e2d0, 0x2bf0 bytes
    // hidclass.sys .text:0x20ed0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e2d0, 0x2bf0 bytes
    //
    _o89(sdk::unknown_ptr) hidsm_releasing_power_reference;
    
    // [HIDSM_ReleasingPowerReferenceWithIdleIrpPending]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14500, 0x1a48 bytes
    // hidclass.sys .text:0x1e2d0, 0x2bf0 bytes
    // hidclass.sys .text:0x20ed0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e2d0, 0x2bf0 bytes
    //
    _o90(sdk::unknown_ptr) hidsm_releasing_power_reference_with_idle_irp_pending;
    
    // [HIDSM_ReleasingPowerReferenceWithWakePending]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14500, 0x1a48 bytes
    // hidclass.sys .text:0x1e2d0, 0x2bf0 bytes
    // hidclass.sys .text:0x20ed0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e2d0, 0x2bf0 bytes
    //
    _o91(sdk::unknown_ptr) hidsm_releasing_power_reference_with_wake_pending;
    
    // [HIDSM_Removed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x144d0, 0x1a48 bytes
    // hidclass.sys .text:0x1e290, 0x2bf0 bytes
    // hidclass.sys .text:0x20e90, 0x2bf0 bytes
    // hidclass.sys .text:0x1e290, 0x2bf0 bytes
    //
    _o92(sdk::unknown_ptr) hidsm_removed;
    
    // [HIDSM_RunStateMachine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x54a0, 0x1a48 bytes
    // hidclass.sys .text:0x1120, 0x2bf0 bytes
    // hidclass.sys .text:0x2ef8, 0x2bf0 bytes
    // hidclass.sys .text:0x1120, 0x2bf0 bytes
    //
    _o93(sdk::unknown_ptr) hidsm_run_state_machine;
    
    // [HIDSM_S0SurpriseRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14520, 0x1a48 bytes
    // hidclass.sys .text:0x1e300, 0x2bf0 bytes
    // hidclass.sys .text:0x13cd0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e300, 0x2bf0 bytes
    //
    _o94(sdk::unknown_ptr) hidsm_s0_surprise_removed;
    
    // [HIDSM_S0Uninitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14520, 0x1a48 bytes
    // hidclass.sys .text:0x1e300, 0x2bf0 bytes
    // hidclass.sys .text:0x13cd0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e300, 0x2bf0 bytes
    //
    _o95(sdk::unknown_ptr) hidsm_s0_uninitialized;
    
    // [HIDSM_SendDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14540, 0x1a48 bytes
    // hidclass.sys .text:0x1e330, 0x2bf0 bytes
    // hidclass.sys .text:0x20f00, 0x2bf0 bytes
    // hidclass.sys .text:0x1e330, 0x2bf0 bytes
    //
    _o96(sdk::unknown_ptr) hidsm_send_dx;
    
    // [HIDSM_SendingD0IrpsToAllPDOs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14560, 0x1a48 bytes
    // hidclass.sys .text:0x1e360, 0x2bf0 bytes
    // hidclass.sys .text:0x20f30, 0x2bf0 bytes
    // hidclass.sys .text:0x1e360, 0x2bf0 bytes
    //
    _o97(sdk::unknown_ptr) hidsm_sending_d0_irps_to_all_pd_os;
    
    // [HIDSM_SendingD0OnS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4f40, 0x1a48 bytes
    // hidclass.sys .text:0x5bd0, 0x2bf0 bytes
    // hidclass.sys .text:0x5d20, 0x2bf0 bytes
    // hidclass.sys .text:0x5bd0, 0x2bf0 bytes
    //
    _o98(sdk::unknown_ptr) hidsm_sending_d0_on_s0;
    
    // [HIDSM_SendingD0ResumingFromS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14580, 0x1a48 bytes
    // hidclass.sys .text:0x1e390, 0x2bf0 bytes
    // hidclass.sys .text:0x20f60, 0x2bf0 bytes
    // hidclass.sys .text:0x1e390, 0x2bf0 bytes
    //
    _o99(sdk::unknown_ptr) hidsm_sending_d0_resuming_from_s0_idle;
    
    // [HIDSM_SendingDxOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4ea0, 0x1a48 bytes
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    // hidclass.sys .text:0x5c20, 0x2bf0 bytes
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    //
    _p00(sdk::unknown_ptr) hidsm_sending_dx_on_sx;
    
    // [HIDSM_SendingDxWithWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4ea0, 0x1a48 bytes
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    // hidclass.sys .text:0x5c20, 0x2bf0 bytes
    // hidclass.sys .text:0x5ad0, 0x2bf0 bytes
    //
    _p01(sdk::unknown_ptr) hidsm_sending_dx_with_wake_on_sx;
    
    // [HIDSM_SendingWaitWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x145a0, 0x1a48 bytes
    // hidclass.sys .text:0x1e3c0, 0x2bf0 bytes
    // hidclass.sys .text:0x20f90, 0x2bf0 bytes
    // hidclass.sys .text:0x1e3c0, 0x2bf0 bytes
    //
    _p02(sdk::unknown_ptr) hidsm_sending_wait_wake;
    
    // [HIDSM_SendingWaitWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x145a0, 0x1a48 bytes
    // hidclass.sys .text:0x1e3c0, 0x2bf0 bytes
    // hidclass.sys .text:0x20f90, 0x2bf0 bytes
    // hidclass.sys .text:0x1e3c0, 0x2bf0 bytes
    //
    _p03(sdk::unknown_ptr) hidsm_sending_wait_wake_on_sx;
    
    // [HIDSM_SetTargetDxState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x145b0, 0x1a48 bytes
    // hidclass.sys .text:0x1e3e0, 0x2bf0 bytes
    // hidclass.sys .text:0x20fb0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e3e0, 0x2bf0 bytes
    //
    _p04(sdk::unknown_ptr) hidsm_set_target_dx_state;
    
    // [HIDSM_SettingIoStateToFail]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x145f0, 0x1a48 bytes
    // hidclass.sys .text:0x1e420, 0x2bf0 bytes
    // hidclass.sys .text:0x20ff0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e420, 0x2bf0 bytes
    //
    _p05(sdk::unknown_ptr) hidsm_setting_io_state_to_fail;
    
    // [HIDSM_SettingIoStateToFailAndFlushSentIoOnRemove]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14640, 0x1a48 bytes
    // hidclass.sys .text:0x1e480, 0x2bf0 bytes
    // hidclass.sys .text:0x21050, 0x2bf0 bytes
    // hidclass.sys .text:0x1e480, 0x2bf0 bytes
    //
    _p06(sdk::unknown_ptr) hidsm_setting_io_state_to_fail_and_flush_sent_io_on_remove;
    
    // [HIDSM_SettingIoStateToPass]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5030, 0x1a48 bytes
    // hidclass.sys .text:0xc3e0, 0x2bf0 bytes
    // hidclass.sys .text:0xc880, 0x2bf0 bytes
    // hidclass.sys .text:0xc3e0, 0x2bf0 bytes
    //
    _p07(sdk::unknown_ptr) hidsm_setting_io_state_to_pass;
    
    // [HIDSM_SettingIoStateToPassOnD0CompletedAfterS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5030, 0x1a48 bytes
    // hidclass.sys .text:0xc3e0, 0x2bf0 bytes
    // hidclass.sys .text:0xc880, 0x2bf0 bytes
    // hidclass.sys .text:0xc3e0, 0x2bf0 bytes
    //
    _p08(sdk::unknown_ptr) hidsm_setting_io_state_to_pass_on_d0_completed_after_s0_idle;
    
    // [HIDSM_SettingIoStateToPassOnStart]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x59a0, 0x1a48 bytes
    // hidclass.sys .text:0xf790, 0x2bf0 bytes
    // hidclass.sys .text:0xf3c0, 0x2bf0 bytes
    // hidclass.sys .text:0xf790, 0x2bf0 bytes
    //
    _p09(sdk::unknown_ptr) hidsm_setting_io_state_to_pass_on_start;
    
    // [HIDSM_SettingIoStateToQueueAndFlushSentIo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14650, 0x1a48 bytes
    // hidclass.sys .text:0x1e4a0, 0x2bf0 bytes
    // hidclass.sys .text:0x21070, 0x2bf0 bytes
    // hidclass.sys .text:0x1e4a0, 0x2bf0 bytes
    //
    _p10(sdk::unknown_ptr) hidsm_setting_io_state_to_queue_and_flush_sent_io;
    
    // [HIDSM_SettingIoStateToQueueAndFlushSentIoOnStop]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14650, 0x1a48 bytes
    // hidclass.sys .text:0x1e4a0, 0x2bf0 bytes
    // hidclass.sys .text:0x21070, 0x2bf0 bytes
    // hidclass.sys .text:0x1e4a0, 0x2bf0 bytes
    //
    _p11(sdk::unknown_ptr) hidsm_setting_io_state_to_queue_and_flush_sent_io_on_stop;
    
    // [HIDSM_SettingIoStateToQueueOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x4fa0, 0x1a48 bytes
    // hidclass.sys .text:0x5c60, 0x2bf0 bytes
    // hidclass.sys .text:0x5db0, 0x2bf0 bytes
    // hidclass.sys .text:0x5c60, 0x2bf0 bytes
    //
    _p12(sdk::unknown_ptr) hidsm_setting_io_state_to_queue_on_sx;
    
    // [HIDSM_SmWorker]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14230, 0x1a48 bytes
    // hidclass.sys .text:0x1df90, 0x2bf0 bytes
    // hidclass.sys .text:0x20c70, 0x2bf0 bytes
    // hidclass.sys .text:0x1df90, 0x2bf0 bytes
    //
    _p13(sdk::unknown_ptr) hidsm_sm_worker;
    
    // [HIDSMStateTable]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a0a0, 0x1a48 bytes
    // hidclass.sys .data:0x27090, 0x2bf0 bytes
    // hidclass.sys .data:0x2a090, 0x2bf0 bytes
    // hidclass.sys .data:0x27090, 0x2bf0 bytes
    //
    _p14(sdk::unknown_ptr) hidsm_state_table;
    
    // [HIDSM_Stopped]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x144d0, 0x1a48 bytes
    // hidclass.sys .text:0x1e290, 0x2bf0 bytes
    // hidclass.sys .text:0x20e90, 0x2bf0 bytes
    // hidclass.sys .text:0x1e290, 0x2bf0 bytes
    //
    _p15(sdk::unknown_ptr) hidsm_stopped;
    
    // [HIDSM_SurpriseRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p16(sdk::unknown_ptr) hidsm_surprise_removed;
    
    // [HIDSM_SxSurpriseRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14660, 0x1a48 bytes
    // hidclass.sys .text:0x1e4c0, 0x2bf0 bytes
    // hidclass.sys .text:0x21090, 0x2bf0 bytes
    // hidclass.sys .text:0x1e4c0, 0x2bf0 bytes
    //
    _p17(sdk::unknown_ptr) hidsm_sx_surprise_removed;
    
    // [HIDSM_SxUninitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14660, 0x1a48 bytes
    // hidclass.sys .text:0x1e4c0, 0x2bf0 bytes
    // hidclass.sys .text:0x21090, 0x2bf0 bytes
    // hidclass.sys .text:0x1e4c0, 0x2bf0 bytes
    //
    _p18(sdk::unknown_ptr) hidsm_sx_uninitialized;
    
    // [HIDSM_Uninitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p19(sdk::unknown_ptr) hidsm_uninitialized;
    
    // [HIDSM_WaitingForD0ToCompleteOnS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p20(sdk::unknown_ptr) hidsm_waiting_for_d0_to_complete_on_s0;
    
    // [HIDSM_WaitingForDxCompletionOnUnexpectedIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p21(sdk::unknown_ptr) hidsm_waiting_for_dx_completion_on_unexpected_idle_completion;
    
    // [HIDSM_WaitingForDxOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p22(sdk::unknown_ptr) hidsm_waiting_for_dx_on_sx;
    
    // [HIDSM_WaitingForDxWithWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p23(sdk::unknown_ptr) hidsm_waiting_for_dx_with_wake_on_sx;
    
    // [HIDSM_WaitingForIdleCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14690, 0x1a48 bytes
    // hidclass.sys .text:0xf9b0, 0x2bf0 bytes
    // hidclass.sys .text:0xf5e0, 0x2bf0 bytes
    // hidclass.sys .text:0xf9b0, 0x2bf0 bytes
    //
    _p24(sdk::unknown_ptr) hidsm_waiting_for_idle_callback;
    
    // [HIDSM_WaitingForIdleIrpCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x146b0, 0x1a48 bytes
    // hidclass.sys .text:0xfc00, 0x2bf0 bytes
    // hidclass.sys .text:0xf800, 0x2bf0 bytes
    // hidclass.sys .text:0xfc00, 0x2bf0 bytes
    //
    _p25(sdk::unknown_ptr) hidsm_waiting_for_idle_irp_completion;
    
    // [HIDSM_WaitingForIoToFlushOnRemove]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p26(sdk::unknown_ptr) hidsm_waiting_for_io_to_flush_on_remove;
    
    // [HIDSM_WaitingForIoToFlushOnSelectiveSuspend]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p27(sdk::unknown_ptr) hidsm_waiting_for_io_to_flush_on_selective_suspend;
    
    // [HIDSM_WaitingForIoToFlushOnStop]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p28(sdk::unknown_ptr) hidsm_waiting_for_io_to_flush_on_stop;
    
    // [HIDSM_WaitingForPDOsToPowerOff]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x146e0, 0x1a48 bytes
    // hidclass.sys .text:0x1e4f0, 0x2bf0 bytes
    // hidclass.sys .text:0x210c0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e4f0, 0x2bf0 bytes
    //
    _p29(sdk::unknown_ptr) hidsm_waiting_for_pd_os_to_power_off;
    
    // [HIDSM_WaitingForPDOsToPowerOn]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p30(sdk::unknown_ptr) hidsm_waiting_for_pd_os_to_power_on;
    
    // [HIDSM_WaitingForRequiredCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p31(sdk::unknown_ptr) hidsm_waiting_for_required_callback;
    
    // [HIDSM_WaitingForRequiredCallbackOrIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14700, 0x1a48 bytes
    // hidclass.sys .text:0x1e520, 0x2bf0 bytes
    // hidclass.sys .text:0x210f0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e520, 0x2bf0 bytes
    //
    _p32(sdk::unknown_ptr) hidsm_waiting_for_required_callback_or_idle_completion;
    
    // [HIDSM_WaitingForRequiredCallbackOrWaitWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14700, 0x1a48 bytes
    // hidclass.sys .text:0x1e520, 0x2bf0 bytes
    // hidclass.sys .text:0x210f0, 0x2bf0 bytes
    // hidclass.sys .text:0x1e520, 0x2bf0 bytes
    //
    _p33(sdk::unknown_ptr) hidsm_waiting_for_required_callback_or_wait_wake;
    
    // [HIDSM_WaitingForS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x7890, 0x1a48 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    // hidclass.sys .text:0x3c60, 0x2bf0 bytes
    // hidclass.sys .text:0x3c40, 0x2bf0 bytes
    //
    _p34(sdk::unknown_ptr) hidsm_waiting_for_s0;
    
    // [HIDSM_WaitingForWaitWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14720, 0x1a48 bytes
    // hidclass.sys .text:0x1e550, 0x2bf0 bytes
    // hidclass.sys .text:0x21120, 0x2bf0 bytes
    // hidclass.sys .text:0x1e550, 0x2bf0 bytes
    //
    _p35(sdk::unknown_ptr) hidsm_waiting_for_wait_wake;
    
    // [HIDSM_WaitingForWaitWakeOnS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x14720, 0x1a48 bytes
    // hidclass.sys .text:0x1e550, 0x2bf0 bytes
    // hidclass.sys .text:0x21120, 0x2bf0 bytes
    // hidclass.sys .text:0x1e550, 0x2bf0 bytes
    //
    _p36(sdk::unknown_ptr) hidsm_waiting_for_wait_wake_on_s0;
    
    // [HIDSM_WaitingForWaitWakeOrIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x146b0, 0x1a48 bytes
    // hidclass.sys .text:0xfc00, 0x2bf0 bytes
    // hidclass.sys .text:0xf800, 0x2bf0 bytes
    // hidclass.sys .text:0xfc00, 0x2bf0 bytes
    //
    _p37(sdk::unknown_ptr) hidsm_waiting_for_wait_wake_or_idle_completion;
    
    // [IdleWorkerTag]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16e58, 0x1a48 bytes
    // hidclass.sys .rdata:0x21978, 0x2bf0 bytes
    // hidclass.sys .rdata:0x24da8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x21978, 0x2bf0 bytes
    //
    _p38(sdk::unknown_ptr) idle_worker_tag;
    
    // [IsTraceLoggedRecently]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xfa00, 0x1a48 bytes
    // hidclass.sys .text:0x18c74, 0x2bf0 bytes
    // hidclass.sys .text:0x1ba24, 0x2bf0 bytes
    // hidclass.sys .text:0x18c74, 0x2bf0 bytes
    //
    _p39(sdk::function<uint8_t(struct hid::fdo_extension_t*)>*) is_trace_logged_recently;
    
    // [LogParserError]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27178, 0x1a48 bytes
    // hidclass.sys PAGE:0x35254, 0x2bf0 bytes
    // hidclass.sys PAGE:0x39f54, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35254, 0x2bf0 bytes
    //
    _p40(sdk::unknown_ptr) log_parser_error;
    
    // [MakeClientPDOName]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x214e0, 0x1a48 bytes
    // hidclass.sys PAGE:0x30300, 0x2bf0 bytes
    // hidclass.sys PAGE:0x35980, 0x2bf0 bytes
    // hidclass.sys PAGE:0x30300, 0x2bf0 bytes
    //
    _p41(sdk::unknown_ptr) make_client_pdo_name;
    
    // [MemDup]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x6190, 0x1a48 bytes
    // hidclass.sys .text:0x92a0, 0x2bf0 bytes
    // hidclass.sys .text:0xc6d0, 0x2bf0 bytes
    // hidclass.sys .text:0x92a0, 0x2bf0 bytes
    //
    _p42(sdk::unknown_ptr) mem_dup;
    
    // [Microsoft_Windows_Input_HIDCLASSEnableBits]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b278, 0x1a48 bytes
    // hidclass.sys .data:0x28358, 0x2bf0 bytes
    // hidclass.sys .data:0x2b3f8, 0x2bf0 bytes
    // hidclass.sys .data:0x28358, 0x2bf0 bytes
    //
    _p43(sdk::unknown_ptr) microsoft_windows_input_hidclass_enable_bits;
    
    // [Microsoft_Windows_Input_HIDCLASSKeywords]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x163c0, 0x1a48 bytes
    // hidclass.sys .rdata:0x226d0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x25ca0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x226d0, 0x2bf0 bytes
    //
    _p44(sdk::unknown_ptr) microsoft_windows_input_hidclass_keywords;
    
    // [Microsoft_Windows_Input_HIDCLASSLevels]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x163c8, 0x1a48 bytes
    // hidclass.sys .rdata:0x226d8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x25ca8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x226d8, 0x2bf0 bytes
    //
    _p45(sdk::unknown_ptr) microsoft_windows_input_hidclass_levels;
    
    // [MS_HIDCLASS_ETW_PROVIDER]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x162d8, 0x1a48 bytes
    // hidclass.sys .rdata:0x20428, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23400, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20428, 0x2bf0 bytes
    //
    _p46(sdk::unknown_ptr) ms_hidclass_etw_provider;
    
    // [MS_HIDCLASS_ETW_PROVIDER_Context]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a050, 0x1a48 bytes
    // hidclass.sys .data:0x27010, 0x2bf0 bytes
    // hidclass.sys .data:0x2a010, 0x2bf0 bytes
    // hidclass.sys .data:0x27010, 0x2bf0 bytes
    //
    _p47(sdk::unknown_ptr) ms_hidclass_etw_provider_context;
    
    // [HidNotifyPresence]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xccb0, 0x1a48 bytes
    // hidclass.sys .text:0x146e0, 0x2bf0 bytes
    // hidclass.sys .text:0x17440, 0x2bf0 bytes
    // hidclass.sys .text:0x146e0, 0x2bf0 bytes
    //
    _p48(sdk::unknown_ptr) notify_presence;
    
    // [HidPdoWmiGuidList]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x160e0, 0x1a48 bytes
    // hidclass.sys .rdata:0x20128, 0x2bf0 bytes
    // hidclass.sys .rdata:0x23000, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20128, 0x2bf0 bytes
    //
    _p49(sdk::unknown_ptr) pdo_wmi_guid_list;
    
    // [PolledReadCancelRoutine]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11690, 0x1a48 bytes
    // hidclass.sys .text:0x1ad70, 0x2bf0 bytes
    // hidclass.sys .text:0x1dc30, 0x2bf0 bytes
    // hidclass.sys .text:0x1ad70, 0x2bf0 bytes
    //
    _p50(sdk::unknown_ptr) polled_read_cancel_routine;
    
    // [QueuePowerEventIrp]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x13470, 0x1a48 bytes
    // hidclass.sys .text:0xf880, 0x2bf0 bytes
    // hidclass.sys .text:0xf4b0, 0x2bf0 bytes
    // hidclass.sys .text:0xf880, 0x2bf0 bytes
    //
    _p51(sdk::unknown_ptr) queue_power_event_irp;
    
    // [ReadPolledDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11778, 0x1a48 bytes
    // hidclass.sys .text:0x1ae94, 0x2bf0 bytes
    // hidclass.sys .text:0x1dd54, 0x2bf0 bytes
    // hidclass.sys .text:0x1ae94, 0x2bf0 bytes
    //
    _p52(sdk::unknown_ptr) read_polled_device;
    
    // [RefDriverExt]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x22bec, 0x1a48 bytes
    // hidclass.sys PAGE:0x30480, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3851c, 0x2bf0 bytes
    // hidclass.sys PAGE:0x30480, 0x2bf0 bytes
    //
    _p53(sdk::unknown_ptr) ref_driver_ext;
    
    // [HidRegisterMinidriver]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x22ec0, 0x1a48 bytes
    // hidclass.sys PAGE:0x33730, 0x2bf0 bytes
    // hidclass.sys PAGE:0x385a0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x33730, 0x2bf0 bytes
    //
    _p54(sdk::unknown_ptr) register_minidriver;
    
    // [SetPnpFailureDescription]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x27630, 0x1a48 bytes
    // hidclass.sys PAGE:0x357f0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x3a640, 0x2bf0 bytes
    // hidclass.sys PAGE:0x357f0, 0x2bf0 bytes
    //
    _p55(sdk::unknown_ptr) set_pnp_failure_description;
    
    // [HidSmStateEntryAckingPowerNotRequired]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b170, 0x1a48 bytes
    // hidclass.sys .data:0x279a8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a9b8, 0x2bf0 bytes
    // hidclass.sys .data:0x279a8, 0x2bf0 bytes
    //
    _p56(sdk::unknown_ptr) sm_state_entry_acking_power_not_required;
    
    // [HidSmStateEntryAckingPowerRequired]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b140, 0x1a48 bytes
    // hidclass.sys .data:0x27888, 0x2bf0 bytes
    // hidclass.sys .data:0x2a898, 0x2bf0 bytes
    // hidclass.sys .data:0x27888, 0x2bf0 bytes
    //
    _p57(sdk::unknown_ptr) sm_state_entry_acking_power_required;
    
    // [HidSmStateEntryAckingPowerRequiredOnD0CompletedAfterS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b110, 0x1a48 bytes
    // hidclass.sys .data:0x27558, 0x2bf0 bytes
    // hidclass.sys .data:0x2a568, 0x2bf0 bytes
    // hidclass.sys .data:0x27558, 0x2bf0 bytes
    //
    _p58(sdk::unknown_ptr) sm_state_entry_acking_power_required_on_d0_completed_after_s0_idle;
    
    // [HidSmStateEntryAcquiringPowerReference]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b0e0, 0x1a48 bytes
    // hidclass.sys .data:0x27d70, 0x2bf0 bytes
    // hidclass.sys .data:0x2ad80, 0x2bf0 bytes
    // hidclass.sys .data:0x27d70, 0x2bf0 bytes
    //
    _p59(sdk::unknown_ptr) sm_state_entry_acquiring_power_reference;
    
    // [HidSmStateEntryCheckingIfNeedToBeArmedForWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b0a8, 0x1a48 bytes
    // hidclass.sys .data:0x275e8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a5f8, 0x2bf0 bytes
    // hidclass.sys .data:0x275e8, 0x2bf0 bytes
    //
    _p60(sdk::unknown_ptr) sm_state_entry_checking_if_need_to_be_armed_for_wake;
    
    // [HidSmStateEntryCheckingIfNeedToBeArmedForWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b070, 0x1a48 bytes
    // hidclass.sys .data:0x273d0, 0x2bf0 bytes
    // hidclass.sys .data:0x2a3e0, 0x2bf0 bytes
    // hidclass.sys .data:0x273d0, 0x2bf0 bytes
    //
    _p61(sdk::unknown_ptr) sm_state_entry_checking_if_need_to_be_armed_for_wake_on_sx;
    
    // [HidSmStateEntryCompletingIdleCallbackAfterUnexpectedIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1b010, 0x1a48 bytes
    // hidclass.sys .data:0x28240, 0x2bf0 bytes
    // hidclass.sys .data:0x2b280, 0x2bf0 bytes
    // hidclass.sys .data:0x28240, 0x2bf0 bytes
    //
    _p62(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_after_unexpected_idle_completion;
    
    // [HidSmStateEntryCompletingIdleCallbackDuringTransientPowerDown]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1afe0, 0x1a48 bytes
    // hidclass.sys .data:0x27c80, 0x2bf0 bytes
    // hidclass.sys .data:0x2ac90, 0x2bf0 bytes
    // hidclass.sys .data:0x27c80, 0x2bf0 bytes
    //
    _p63(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_during_transient_power_down;
    
    // [HidSmStateEntryCompletingIdleCallbackInvokedInErrorPostIdleIrpCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1afb0, 0x1a48 bytes
    // hidclass.sys .data:0x28188, 0x2bf0 bytes
    // hidclass.sys .data:0x2b1c8, 0x2bf0 bytes
    // hidclass.sys .data:0x28188, 0x2bf0 bytes
    //
    _p64(sdk::unknown_ptr) sm_state_entry_completing_idle_callback_invoked_in_error_post_idle_irp_completion;
    
    // [HidSmStateEntryCompletingPnPEventOnSurpriseRemove]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1af50, 0x1a48 bytes
    // hidclass.sys .data:0x27810, 0x2bf0 bytes
    // hidclass.sys .data:0x2a820, 0x2bf0 bytes
    // hidclass.sys .data:0x27810, 0x2bf0 bytes
    //
    _p65(sdk::unknown_ptr) sm_state_entry_completing_pn_p_event_on_surprise_remove;
    
    // [HidSmStateEntryD0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aef0, 0x1a48 bytes
    // hidclass.sys .data:0x27720, 0x2bf0 bytes
    // hidclass.sys .data:0x2a730, 0x2bf0 bytes
    // hidclass.sys .data:0x27720, 0x2bf0 bytes
    //
    _p66(sdk::unknown_ptr) sm_state_entry_d0;
    
    // [HidSmStateEntryDxArmedForWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ae60, 0x1a48 bytes
    // hidclass.sys .data:0x281f0, 0x2bf0 bytes
    // hidclass.sys .data:0x2b230, 0x2bf0 bytes
    // hidclass.sys .data:0x281f0, 0x2bf0 bytes
    //
    _p67(sdk::unknown_ptr) sm_state_entry_dx_armed_for_wake;
    
    // [HidSmStateEntryDxSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ae28, 0x1a48 bytes
    // hidclass.sys .data:0x27cb0, 0x2bf0 bytes
    // hidclass.sys .data:0x2acc0, 0x2bf0 bytes
    // hidclass.sys .data:0x27cb0, 0x2bf0 bytes
    //
    _p68(sdk::unknown_ptr) sm_state_entry_dx_sx;
    
    // [HidSmStateEntryDxSxArmedForWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1adf0, 0x1a48 bytes
    // hidclass.sys .data:0x27fd0, 0x2bf0 bytes
    // hidclass.sys .data:0x2b010, 0x2bf0 bytes
    // hidclass.sys .data:0x27fd0, 0x2bf0 bytes
    //
    _p69(sdk::unknown_ptr) sm_state_entry_dx_sx_armed_for_wake;
    
    // [HidSmStateEntryFailed]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1adc0, 0x1a48 bytes
    // hidclass.sys .data:0x27c08, 0x2bf0 bytes
    // hidclass.sys .data:0x2ac18, 0x2bf0 bytes
    // hidclass.sys .data:0x27c08, 0x2bf0 bytes
    //
    _p70(sdk::unknown_ptr) sm_state_entry_failed;
    
    // [HidSmStateEntryInitializingDevice]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ad88, 0x1a48 bytes
    // hidclass.sys .data:0x27b70, 0x2bf0 bytes
    // hidclass.sys .data:0x2ab80, 0x2bf0 bytes
    // hidclass.sys .data:0x27b70, 0x2bf0 bytes
    //
    _p71(sdk::unknown_ptr) sm_state_entry_initializing_device;
    
    // [HidSmStateEntryReleasingPowerReference]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ad58, 0x1a48 bytes
    // hidclass.sys .data:0x277b0, 0x2bf0 bytes
    // hidclass.sys .data:0x2a7c0, 0x2bf0 bytes
    // hidclass.sys .data:0x277b0, 0x2bf0 bytes
    //
    _p72(sdk::unknown_ptr) sm_state_entry_releasing_power_reference;
    
    // [HidSmStateEntryReleasingPowerReferenceWithIdleIrpPending]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ad28, 0x1a48 bytes
    // hidclass.sys .data:0x278e8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a8f8, 0x2bf0 bytes
    // hidclass.sys .data:0x278e8, 0x2bf0 bytes
    //
    _p73(sdk::unknown_ptr) sm_state_entry_releasing_power_reference_with_idle_irp_pending;
    
    // [HidSmStateEntryReleasingPowerReferenceWithWakePending]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1acf8, 0x1a48 bytes
    // hidclass.sys .data:0x27ea8, 0x2bf0 bytes
    // hidclass.sys .data:0x2aeb8, 0x2bf0 bytes
    // hidclass.sys .data:0x27ea8, 0x2bf0 bytes
    //
    _p74(sdk::unknown_ptr) sm_state_entry_releasing_power_reference_with_wake_pending;
    
    // [HidSmStateEntryRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1acd0, 0x1a48 bytes
    // hidclass.sys .data:0x27438, 0x2bf0 bytes
    // hidclass.sys .data:0x2a448, 0x2bf0 bytes
    // hidclass.sys .data:0x27438, 0x2bf0 bytes
    //
    _p75(sdk::unknown_ptr) sm_state_entry_removed;
    
    // [HidSmStateEntryS0SurpriseRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aca0, 0x1a48 bytes
    // hidclass.sys .data:0x272e0, 0x2bf0 bytes
    // hidclass.sys .data:0x2a2f0, 0x2bf0 bytes
    // hidclass.sys .data:0x272e0, 0x2bf0 bytes
    //
    _p76(sdk::unknown_ptr) sm_state_entry_s0_surprise_removed;
    
    // [HidSmStateEntryS0Uninitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ac70, 0x1a48 bytes
    // hidclass.sys .data:0x28158, 0x2bf0 bytes
    // hidclass.sys .data:0x2b198, 0x2bf0 bytes
    // hidclass.sys .data:0x28158, 0x2bf0 bytes
    //
    _p77(sdk::unknown_ptr) sm_state_entry_s0_uninitialized;
    
    // [HidSmStateEntrySendDx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ac30, 0x1a48 bytes
    // hidclass.sys .data:0x27460, 0x2bf0 bytes
    // hidclass.sys .data:0x2a470, 0x2bf0 bytes
    // hidclass.sys .data:0x27460, 0x2bf0 bytes
    //
    _p78(sdk::unknown_ptr) sm_state_entry_send_dx;
    
    // [HidSmStateEntrySendingD0IrpsToAllPDOs]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1abf8, 0x1a48 bytes
    // hidclass.sys .data:0x276b8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a6c8, 0x2bf0 bytes
    // hidclass.sys .data:0x276b8, 0x2bf0 bytes
    //
    _p79(sdk::unknown_ptr) sm_state_entry_sending_d0_irps_to_all_pd_os;
    
    // [HidSmStateEntrySendingD0OnS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1abc8, 0x1a48 bytes
    // hidclass.sys .data:0x27f08, 0x2bf0 bytes
    // hidclass.sys .data:0x2af18, 0x2bf0 bytes
    // hidclass.sys .data:0x27f08, 0x2bf0 bytes
    //
    _p80(sdk::unknown_ptr) sm_state_entry_sending_d0_on_s0;
    
    // [HidSmStateEntrySendingD0ResumingFromS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ab98, 0x1a48 bytes
    // hidclass.sys .data:0x27fa0, 0x2bf0 bytes
    // hidclass.sys .data:0x2afb0, 0x2bf0 bytes
    // hidclass.sys .data:0x27fa0, 0x2bf0 bytes
    //
    _p81(sdk::unknown_ptr) sm_state_entry_sending_d0_resuming_from_s0_idle;
    
    // [HidSmStateEntrySendingDxOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1ab38, 0x1a48 bytes
    // hidclass.sys .data:0x27588, 0x2bf0 bytes
    // hidclass.sys .data:0x2a598, 0x2bf0 bytes
    // hidclass.sys .data:0x27588, 0x2bf0 bytes
    //
    _p82(sdk::unknown_ptr) sm_state_entry_sending_dx_on_sx;
    
    // [HidSmStateEntrySendingDxWithWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aad8, 0x1a48 bytes
    // hidclass.sys .data:0x27ed8, 0x2bf0 bytes
    // hidclass.sys .data:0x2aee8, 0x2bf0 bytes
    // hidclass.sys .data:0x27ed8, 0x2bf0 bytes
    //
    _p83(sdk::unknown_ptr) sm_state_entry_sending_dx_with_wake_on_sx;
    
    // [HidSmStateEntrySendingWaitWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aaa8, 0x1a48 bytes
    // hidclass.sys .data:0x27b10, 0x2bf0 bytes
    // hidclass.sys .data:0x2ab20, 0x2bf0 bytes
    // hidclass.sys .data:0x27b10, 0x2bf0 bytes
    //
    _p84(sdk::unknown_ptr) sm_state_entry_sending_wait_wake;
    
    // [HidSmStateEntrySendingWaitWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aa78, 0x1a48 bytes
    // hidclass.sys .data:0x27ba8, 0x2bf0 bytes
    // hidclass.sys .data:0x2abb8, 0x2bf0 bytes
    // hidclass.sys .data:0x27ba8, 0x2bf0 bytes
    //
    _p85(sdk::unknown_ptr) sm_state_entry_sending_wait_wake_on_sx;
    
    // [HidSmStateEntrySetTargetDxState]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aa48, 0x1a48 bytes
    // hidclass.sys .data:0x27948, 0x2bf0 bytes
    // hidclass.sys .data:0x2a958, 0x2bf0 bytes
    // hidclass.sys .data:0x27948, 0x2bf0 bytes
    //
    _p86(sdk::unknown_ptr) sm_state_entry_set_target_dx_state;
    
    // [HidSmStateEntrySettingIoStateToFail]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1aa18, 0x1a48 bytes
    // hidclass.sys .data:0x28008, 0x2bf0 bytes
    // hidclass.sys .data:0x2b048, 0x2bf0 bytes
    // hidclass.sys .data:0x28008, 0x2bf0 bytes
    //
    _p87(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_fail;
    
    // [HidSmStateEntrySettingIoStateToFailAndFlushSentIoOnRemove]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a9e0, 0x1a48 bytes
    // hidclass.sys .data:0x27620, 0x2bf0 bytes
    // hidclass.sys .data:0x2a630, 0x2bf0 bytes
    // hidclass.sys .data:0x27620, 0x2bf0 bytes
    //
    _p88(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_fail_and_flush_sent_io_on_remove;
    
    // [HidSmStateEntrySettingIoStateToPass]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a9b0, 0x1a48 bytes
    // hidclass.sys .data:0x27ce0, 0x2bf0 bytes
    // hidclass.sys .data:0x2acf0, 0x2bf0 bytes
    // hidclass.sys .data:0x27ce0, 0x2bf0 bytes
    //
    _p89(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_pass;
    
    // [HidSmStateEntrySettingIoStateToPassOnD0CompletedAfterS0Idle]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a980, 0x1a48 bytes
    // hidclass.sys .data:0x27918, 0x2bf0 bytes
    // hidclass.sys .data:0x2a928, 0x2bf0 bytes
    // hidclass.sys .data:0x27918, 0x2bf0 bytes
    //
    _p90(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_pass_on_d0_completed_after_s0_idle;
    
    // [HidSmStateEntrySettingIoStateToPassOnStart]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a950, 0x1a48 bytes
    // hidclass.sys .data:0x27a80, 0x2bf0 bytes
    // hidclass.sys .data:0x2aa90, 0x2bf0 bytes
    // hidclass.sys .data:0x27a80, 0x2bf0 bytes
    //
    _p91(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_pass_on_start;
    
    // [HidSmStateEntrySettingIoStateToQueueAndFlushSentIo]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a918, 0x1a48 bytes
    // hidclass.sys .data:0x280b8, 0x2bf0 bytes
    // hidclass.sys .data:0x2b0f8, 0x2bf0 bytes
    // hidclass.sys .data:0x280b8, 0x2bf0 bytes
    //
    _p92(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_queue_and_flush_sent_io;
    
    // [HidSmStateEntrySettingIoStateToQueueAndFlushSentIoOnStop]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a8e0, 0x1a48 bytes
    // hidclass.sys .data:0x274d8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a4e8, 0x2bf0 bytes
    // hidclass.sys .data:0x274d8, 0x2bf0 bytes
    //
    _p93(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_queue_and_flush_sent_io_on_stop;
    
    // [HidSmStateEntrySettingIoStateToQueueOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a8b0, 0x1a48 bytes
    // hidclass.sys .data:0x27ae0, 0x2bf0 bytes
    // hidclass.sys .data:0x2aaf0, 0x2bf0 bytes
    // hidclass.sys .data:0x27ae0, 0x2bf0 bytes
    //
    _p94(sdk::unknown_ptr) sm_state_entry_setting_io_state_to_queue_on_sx;
    
    // [HidSmStateEntryStopped]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a870, 0x1a48 bytes
    // hidclass.sys .data:0x279e0, 0x2bf0 bytes
    // hidclass.sys .data:0x2a9f0, 0x2bf0 bytes
    // hidclass.sys .data:0x279e0, 0x2bf0 bytes
    //
    _p95(sdk::unknown_ptr) sm_state_entry_stopped;
    
    // [HidSmStateEntrySurpriseRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a830, 0x1a48 bytes
    // hidclass.sys .data:0x27c40, 0x2bf0 bytes
    // hidclass.sys .data:0x2ac50, 0x2bf0 bytes
    // hidclass.sys .data:0x27c40, 0x2bf0 bytes
    //
    _p96(sdk::unknown_ptr) sm_state_entry_surprise_removed;
    
    // [HidSmStateEntrySxSurpriseRemoved]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a7f8, 0x1a48 bytes
    // hidclass.sys .data:0x27bd8, 0x2bf0 bytes
    // hidclass.sys .data:0x2abe8, 0x2bf0 bytes
    // hidclass.sys .data:0x27bd8, 0x2bf0 bytes
    //
    _p97(sdk::unknown_ptr) sm_state_entry_sx_surprise_removed;
    
    // [HidSmStateEntrySxUninitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a7c8, 0x1a48 bytes
    // hidclass.sys .data:0x278b8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a8c8, 0x2bf0 bytes
    // hidclass.sys .data:0x278b8, 0x2bf0 bytes
    //
    _p98(sdk::unknown_ptr) sm_state_entry_sx_uninitialized;
    
    // [HidSmStateEntryUninitialized]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a780, 0x1a48 bytes
    // hidclass.sys .data:0x27e20, 0x2bf0 bytes
    // hidclass.sys .data:0x2ae30, 0x2bf0 bytes
    // hidclass.sys .data:0x27e20, 0x2bf0 bytes
    //
    _p99(sdk::unknown_ptr) sm_state_entry_uninitialized;
    
    // [HidSmStateEntryWaitingForD0ToCompleteOnS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a748, 0x1a48 bytes
    // hidclass.sys .data:0x27ab0, 0x2bf0 bytes
    // hidclass.sys .data:0x2aac0, 0x2bf0 bytes
    // hidclass.sys .data:0x27ab0, 0x2bf0 bytes
    //
    _q00(sdk::unknown_ptr) sm_state_entry_waiting_for_d0_to_complete_on_s0;
    
    // [HidSmStateEntryWaitingForDxCompletionOnUnexpectedIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a6e8, 0x1a48 bytes
    // hidclass.sys .data:0x27f70, 0x2bf0 bytes
    // hidclass.sys .data:0x2af80, 0x2bf0 bytes
    // hidclass.sys .data:0x27f70, 0x2bf0 bytes
    //
    _q01(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_completion_on_unexpected_idle_completion;
    
    // [HidSmStateEntryWaitingForDxOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a6b8, 0x1a48 bytes
    // hidclass.sys .data:0x27978, 0x2bf0 bytes
    // hidclass.sys .data:0x2a988, 0x2bf0 bytes
    // hidclass.sys .data:0x27978, 0x2bf0 bytes
    //
    _q02(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_on_sx;
    
    // [HidSmStateEntryWaitingForDxWithWakeOnSx]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a658, 0x1a48 bytes
    // hidclass.sys .data:0x277e0, 0x2bf0 bytes
    // hidclass.sys .data:0x2a7f0, 0x2bf0 bytes
    // hidclass.sys .data:0x277e0, 0x2bf0 bytes
    //
    _q03(sdk::unknown_ptr) sm_state_entry_waiting_for_dx_with_wake_on_sx;
    
    // [HidSmStateEntryWaitingForIdleCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a610, 0x1a48 bytes
    // hidclass.sys .data:0x27310, 0x2bf0 bytes
    // hidclass.sys .data:0x2a320, 0x2bf0 bytes
    // hidclass.sys .data:0x27310, 0x2bf0 bytes
    //
    _q04(sdk::unknown_ptr) sm_state_entry_waiting_for_idle_callback;
    
    // [HidSmStateEntryWaitingForIdleIrpCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a590, 0x1a48 bytes
    // hidclass.sys .data:0x28070, 0x2bf0 bytes
    // hidclass.sys .data:0x2b0b0, 0x2bf0 bytes
    // hidclass.sys .data:0x28070, 0x2bf0 bytes
    //
    _q05(sdk::unknown_ptr) sm_state_entry_waiting_for_idle_irp_completion;
    
    // [HidSmStateEntryWaitingForIoToFlushOnRemove]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a558, 0x1a48 bytes
    // hidclass.sys .data:0x273a0, 0x2bf0 bytes
    // hidclass.sys .data:0x2a3b0, 0x2bf0 bytes
    // hidclass.sys .data:0x273a0, 0x2bf0 bytes
    //
    _q06(sdk::unknown_ptr) sm_state_entry_waiting_for_io_to_flush_on_remove;
    
    // [HidSmStateEntryWaitingForIoToFlushOnSelectiveSuspend]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a528, 0x1a48 bytes
    // hidclass.sys .data:0x281b8, 0x2bf0 bytes
    // hidclass.sys .data:0x2b1f8, 0x2bf0 bytes
    // hidclass.sys .data:0x281b8, 0x2bf0 bytes
    //
    _q07(sdk::unknown_ptr) sm_state_entry_waiting_for_io_to_flush_on_selective_suspend;
    
    // [HidSmStateEntryWaitingForIoToFlushOnStop]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a4f8, 0x1a48 bytes
    // hidclass.sys .data:0x275b8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a5c8, 0x2bf0 bytes
    // hidclass.sys .data:0x275b8, 0x2bf0 bytes
    //
    _q08(sdk::unknown_ptr) sm_state_entry_waiting_for_io_to_flush_on_stop;
    
    // [HidSmStateEntryWaitingForPDOsToPowerOff]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a4c8, 0x1a48 bytes
    // hidclass.sys .data:0x27b40, 0x2bf0 bytes
    // hidclass.sys .data:0x2ab50, 0x2bf0 bytes
    // hidclass.sys .data:0x27b40, 0x2bf0 bytes
    //
    _q09(sdk::unknown_ptr) sm_state_entry_waiting_for_pd_os_to_power_off;
    
    // [HidSmStateEntryWaitingForPDOsToPowerOn]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a490, 0x1a48 bytes
    // hidclass.sys .data:0x27e70, 0x2bf0 bytes
    // hidclass.sys .data:0x2ae80, 0x2bf0 bytes
    // hidclass.sys .data:0x27e70, 0x2bf0 bytes
    //
    _q10(sdk::unknown_ptr) sm_state_entry_waiting_for_pd_os_to_power_on;
    
    // [HidSmStateEntryWaitingForRequiredCallback]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a460, 0x1a48 bytes
    // hidclass.sys .data:0x276e8, 0x2bf0 bytes
    // hidclass.sys .data:0x2a6f8, 0x2bf0 bytes
    // hidclass.sys .data:0x276e8, 0x2bf0 bytes
    //
    _q11(sdk::unknown_ptr) sm_state_entry_waiting_for_required_callback;
    
    // [HidSmStateEntryWaitingForRequiredCallbackOrIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a420, 0x1a48 bytes
    // hidclass.sys .data:0x27510, 0x2bf0 bytes
    // hidclass.sys .data:0x2a520, 0x2bf0 bytes
    // hidclass.sys .data:0x27510, 0x2bf0 bytes
    //
    _q12(sdk::unknown_ptr) sm_state_entry_waiting_for_required_callback_or_idle_completion;
    
    // [HidSmStateEntryWaitingForRequiredCallbackOrWaitWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a3e0, 0x1a48 bytes
    // hidclass.sys .data:0x280f0, 0x2bf0 bytes
    // hidclass.sys .data:0x2b130, 0x2bf0 bytes
    // hidclass.sys .data:0x280f0, 0x2bf0 bytes
    //
    _q13(sdk::unknown_ptr) sm_state_entry_waiting_for_required_callback_or_wait_wake;
    
    // [HidSmStateEntryWaitingForS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a3b0, 0x1a48 bytes
    // hidclass.sys .data:0x27780, 0x2bf0 bytes
    // hidclass.sys .data:0x2a790, 0x2bf0 bytes
    // hidclass.sys .data:0x27780, 0x2bf0 bytes
    //
    _q14(sdk::unknown_ptr) sm_state_entry_waiting_for_s0;
    
    // [HidSmStateEntryWaitingForWaitWake]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a380, 0x1a48 bytes
    // hidclass.sys .data:0x28038, 0x2bf0 bytes
    // hidclass.sys .data:0x2b078, 0x2bf0 bytes
    // hidclass.sys .data:0x28038, 0x2bf0 bytes
    //
    _q15(sdk::unknown_ptr) sm_state_entry_waiting_for_wait_wake;
    
    // [HidSmStateEntryWaitingForWaitWakeOnS0]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a350, 0x1a48 bytes
    // hidclass.sys .data:0x27de8, 0x2bf0 bytes
    // hidclass.sys .data:0x2adf8, 0x2bf0 bytes
    // hidclass.sys .data:0x27de8, 0x2bf0 bytes
    //
    _q16(sdk::unknown_ptr) sm_state_entry_waiting_for_wait_wake_on_s0;
    
    // [HidSmStateEntryWaitingForWaitWakeOrIdleCompletion]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .data:0x1a310, 0x1a48 bytes
    // hidclass.sys .data:0x27da0, 0x2bf0 bytes
    // hidclass.sys .data:0x2adb0, 0x2bf0 bytes
    // hidclass.sys .data:0x27da0, 0x2bf0 bytes
    //
    _q17(sdk::unknown_ptr) sm_state_entry_waiting_for_wait_wake_or_idle_completion;
    
    // [StartPollingLoop]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x118cc, 0x1a48 bytes
    // hidclass.sys .text:0x1b018, 0x2bf0 bytes
    // hidclass.sys .text:0x1deb8, 0x2bf0 bytes
    // hidclass.sys .text:0x1b018, 0x2bf0 bytes
    //
    _q18(sdk::unknown_ptr) start_polling_loop;
    
    // [StateMachineTag]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x16150, 0x1a48 bytes
    // hidclass.sys .rdata:0x20160, 0x2bf0 bytes
    // hidclass.sys .rdata:0x24de0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x20160, 0x2bf0 bytes
    //
    _q19(sdk::unknown_ptr) state_machine_tag;
    
    // [StopPollingLoop]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x11994, 0x1a48 bytes
    // hidclass.sys .text:0x1b108, 0x2bf0 bytes
    // hidclass.sys .text:0x1dfa8, 0x2bf0 bytes
    // hidclass.sys .text:0x1b108, 0x2bf0 bytes
    //
    _q20(sdk::unknown_ptr) stop_polling_loop;
    
    // [SubstituteBusNames]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys PAGE:0x21ef0, 0x1a48 bytes
    // hidclass.sys PAGE:0x33410, 0x2bf0 bytes
    // hidclass.sys PAGE:0x374d0, 0x2bf0 bytes
    // hidclass.sys PAGE:0x33410, 0x2bf0 bytes
    //
    _q21(sdk::unknown_ptr) substitute_bus_names;
    
    // [WStrLen]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x60b0, 0x1a48 bytes
    // hidclass.sys .text:0x37d0, 0x2bf0 bytes
    // hidclass.sys .text:0x2ca0, 0x2bf0 bytes
    // hidclass.sys .text:0x37d0, 0x2bf0 bytes
    //
    _q22(sdk::unknown_ptr) w_str_len;
    
    // [WPP_RECORDER_SF_qLd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xe140, 0x1a48 bytes
    // hidclass.sys .text:0x171b8, 0x2bf0 bytes
    // hidclass.sys .text:0x19fb0, 0x2bf0 bytes
    // hidclass.sys .text:0x171b8, 0x2bf0 bytes
    //
    _q23(sdk::unknown_ptr) wpp_recorder_sf_q_ld;
    
    // [WPP_RECORDER_SF_qLLL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x5818, 0x1a48 bytes
    // hidclass.sys .text:0xb7c0, 0x2bf0 bytes
    // hidclass.sys .text:0xba50, 0x2bf0 bytes
    // hidclass.sys .text:0xb7c0, 0x2bf0 bytes
    //
    _q24(sdk::unknown_ptr) wpp_recorder_sf_q_lll;
    
    // [WPP_RECORDER_SF_qc]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xe288, 0x1a48 bytes
    // hidclass.sys .text:0x1dd0c, 0x2bf0 bytes
    // hidclass.sys .text:0x209c8, 0x2bf0 bytes
    // hidclass.sys .text:0x1dd0c, 0x2bf0 bytes
    //
    _q25(sdk::unknown_ptr) wpp_recorder_sf_qc;
    
    // [WPP_RECORDER_SF_qdL]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0x12374, 0x1a48 bytes
    // hidclass.sys .text:0x1bd78, 0x2bf0 bytes
    // hidclass.sys .text:0x11740, 0x2bf0 bytes
    // hidclass.sys .text:0x1bd78, 0x2bf0 bytes
    //
    _q26(sdk::unknown_ptr) wpp_recorder_sf_qd_l;
    
    // [WPP_RECORDER_SF_qdq]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xecc0, 0x1a48 bytes
    // hidclass.sys .text:0xe408, 0x2bf0 bytes
    // hidclass.sys .text:0xe4c0, 0x2bf0 bytes
    // hidclass.sys .text:0xe408, 0x2bf0 bytes
    //
    _q27(sdk::unknown_ptr) wpp_recorder_sf_qdq;
    
    // [WPP_RECORDER_SF_qqcd]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xe764, 0x1a48 bytes
    // hidclass.sys .text:0x9310, 0x2bf0 bytes
    // hidclass.sys .text:0xc5c0, 0x2bf0 bytes
    // hidclass.sys .text:0x9310, 0x2bf0 bytes
    //
    _q28(sdk::unknown_ptr) wpp_recorder_sf_qqcd;
    
    // [WPP_RECORDER_SF_qqds]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .text:0xee0c, 0x1a48 bytes
    // hidclass.sys .text:0x1752c, 0x2bf0 bytes
    // hidclass.sys .text:0x1a324, 0x2bf0 bytes
    // hidclass.sys .text:0x1752c, 0x2bf0 bytes
    //
    _q29(sdk::unknown_ptr) wpp_recorder_sf_qqds;
    
    // [WPP_ThisDir_CTLGUID_HidClassTraceGuid]
    // Ldr = [hidclass.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // hidclass.sys .rdata:0x162c8, 0x1a48 bytes
    // hidclass.sys .rdata:0x203e8, 0x2bf0 bytes
    // hidclass.sys .rdata:0x233c0, 0x2bf0 bytes
    // hidclass.sys .rdata:0x203e8, 0x2bf0 bytes
    //
    _q30(sdk::unknown_ptr) wpp_this_dir_ctlguid_hid_class_trace_guid;
};
#include "magic/api.end.hpp"
