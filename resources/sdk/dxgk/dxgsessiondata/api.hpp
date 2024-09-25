#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsessiondata
{
    // [AcquireSessionAdapterOrdinal@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x347eb8, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) acquire_session_adapter_ordinal;
    
    // [DecrementDesktopVidPnCount@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys .text:0x1cfd8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) decrement_desktop_vid_pn_count;
    
    // [GetOwnedDisplaySource@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x91bc8, 0x60098 bytes
    //
    _m2(sdk::unknown_ptr) get_owned_display_source;
    
    // [ReleaseSessionAdapterOrdinal@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x348cbc, 0x84380 bytes
    //
    _m3(sdk::unknown_ptr) release_session_adapter_ordinal;
    
    // [VailSendQueryStats@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x353828, 0x84380 bytes
    //
    _m4(sdk::unknown_ptr) vail_send_query_stats;
    
    // [VailSendCreateBundleObject@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b1ebc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2b1f5c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) vail_send_create_bundle_object;
    
    // [AcquireSessionGdiViewId@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x298d1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x347f78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x298dbc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) acquire_session_gdi_view_id;
    
    // [CacheIddDisplayConfigRequest@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x255970, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ec814, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x255ad0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) cache_idd_display_config_request;
    
    // [CanEnumerateAdapter@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x57fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1c984, 0x84380 bytes
    // dxgkrnl.sys .text:0x6b9c, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) can_enumerate_adapter;
    
    // [CleanCachedIddDisplayConfigRequest@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x48170, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5aa58, 0x84380 bytes
    // dxgkrnl.sys .text:0x483c8, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) clean_cached_idd_display_config_request;
    
    // [CommitSessionGdiViewIds@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x299024, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x34832c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2990c4, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) commit_session_gdi_view_ids;
    
    // [ConnectSessionDisplayBroker@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd6374, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1601f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x150480, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) connect_session_display_broker;
    
    // [FinishPnPTransitionOnSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1801c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x211af8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1832d8, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) finish_pn_p_transition_on_session;
    
    // [GetWddmRemoteSessionGdiViewRange@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2993d8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348718, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299478, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) get_wddm_remote_session_gdi_view_range;
    
    // [ReferenceCurrentProcessAsDwm@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1368, 0x762b0 bytes
    // dxgkrnl.sys .text:0x275c, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a1d4, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) reference_current_process_as_dwm;
    
    // [ReferenceDwmProcess@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3e1ec, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4b298, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e3dc, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) reference_dwm_process;
    
    // [ReleaseDwmProcessReference@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a10c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1f7f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a818, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) release_dwm_process_reference;
    
    // [ReleaseSessionGdiViewId@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2998dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348d7c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x29997c, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) release_session_gdi_view_id;
    
    // [ReleaseSessionModeChangeLock@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x18bb4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1dc18, 0x84380 bytes
    // dxgkrnl.sys .text:0x18f78, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) release_session_mode_change_lock;
    
    // [ReleaseVailGuestReference@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b0740, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3522a8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b07e0, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) release_vail_guest_reference;
    
    // [s_GlobalGdiViewId@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .data:0xb1598, 0x762b0 bytes
    // dxgkrnl.sys .data:0x132250, 0x84380 bytes
    // dxgkrnl.sys .data:0xb1598, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) s_global_gdi_view_id;
    
    // [SendCachedIddDisplayConfigRequest@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xd63e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x160264, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1504f0, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) send_cached_idd_display_config_request;
    
    // [SetDisplayConfigDone@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x40fa8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4ca98, 0x84380 bytes
    // dxgkrnl.sys .text:0x41198, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) set_display_config_done;
    
    // [StartPnPTransitionOnSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1634e0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f5380, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16dad0, 0x762b0 bytes
    //
    _o3(sdk::unknown_ptr) start_pn_p_transition_on_session;
    
    // [VailEnsureConnection@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b14c4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352458, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b1564, 0x762b0 bytes
    //
    _o4(sdk::unknown_ptr) vail_ensure_connection;
    
    // [VailGuestConnect@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b16a8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352648, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b1748, 0x762b0 bytes
    //
    _o5(sdk::unknown_ptr) vail_guest_connect;
    
    // [VailGuestDisconnect@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b17fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352788, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b189c, 0x762b0 bytes
    //
    _o6(sdk::unknown_ptr) vail_guest_disconnect;
    
    // [VailRegisterCompositionSurfaceProxy@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b1858, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3527e4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b18f8, 0x762b0 bytes
    //
    _o7(sdk::unknown_ptr) vail_register_composition_surface_proxy;
    
    // [VailSendBindCompositionSurface@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b1a70, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3529c8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b1b10, 0x762b0 bytes
    //
    _o8(sdk::unknown_ptr) vail_send_bind_composition_surface;
    
    // [VailSendCompositionObjectTestCommand@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b1c94, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352c38, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b1d34, 0x762b0 bytes
    //
    _o9(sdk::unknown_ptr) vail_send_composition_object_test_command;
    
    // [VailSendCreateBundleObjectByPointer@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b20d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x352edc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2170, 0x762b0 bytes
    //
    _p0(sdk::unknown_ptr) vail_send_create_bundle_object_by_pointer;
    
    // [VailSendCreateCompositionSurface@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b22e4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x353130, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2384, 0x762b0 bytes
    //
    _p1(sdk::unknown_ptr) vail_send_create_composition_surface;
    
    // [VailSendDestroyBundleObject@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b24f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x35337c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2590, 0x762b0 bytes
    //
    _p2(sdk::unknown_ptr) vail_send_destroy_bundle_object;
    
    // [VailSendEnqueueFlipExToken@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b26f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3535b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2794, 0x762b0 bytes
    //
    _p3(sdk::unknown_ptr) vail_send_enqueue_flip_ex_token;
    
    // [VailSendReleaseCompositionSurfaceReference@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b2910, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x353a78, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b29b0, 0x762b0 bytes
    //
    _p4(sdk::unknown_ptr) vail_send_release_composition_surface_reference;
    
    // [VailSendRemoteObjectTestCommand@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b2b14, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x353cc0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2bb4, 0x762b0 bytes
    //
    _p5(sdk::unknown_ptr) vail_send_remote_object_test_command;
    
    // [VailSendUnbindCompositionSurface@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b2d3c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x353f64, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2ddc, 0x762b0 bytes
    //
    _p6(sdk::unknown_ptr) vail_send_unbind_composition_surface;
    
    // [VailSendWnfToDwm@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b2f48, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3541b4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b2fe8, 0x762b0 bytes
    //
    _p7(sdk::unknown_ptr) vail_send_wnf_to_dwm;
    
    // [VailUnregisterCompositionSurfaceProxy@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b308c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x354318, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b312c, 0x762b0 bytes
    //
    _p8(sdk::unknown_ptr) vail_unregister_composition_surface_proxy;
    
    // [AddAdapterToSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91890, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d320, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db75c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6638, 0x762b0 bytes
    //
    _p9(sdk::unknown_ptr) add_adapter_to_session;
    
    // [AddSourceViewToSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91ad4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xde280, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1672c4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f340, 0x762b0 bytes
    //
    _q0(sdk::unknown_ptr) add_source_view_to_session;
    
    // [??0DXGSESSIONDATA@@QEAA@K@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91c7c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1554ec, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c6924, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158594, 0x762b0 bytes
    //
    _q1(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGSESSIONDATA@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91bec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x149a74, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e1458, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14cc64, 0x762b0 bytes
    //
    _q2(sdk::unknown_ptr) destroy_instance;
    
    // [GetSessionAdapterFromLuid@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91f44, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x116f50, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad2e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1234e0, 0x762b0 bytes
    //
    _q3(sdk::unknown_ptr) get_session_adapter_from_luid;
    
    // [GetSessionViewFromSource@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91f74, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x116eb8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ad270, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x123448, 0x762b0 bytes
    //
    _q4(sdk::unknown_ptr) get_session_view_from_source;
    
    // [GetUserRegistryPath@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x8140, 0x60098 bytes
    // dxgkrnl.sys .text:0xc080, 0x762b0 bytes
    // dxgkrnl.sys .text:0xdbc4, 0x84380 bytes
    // dxgkrnl.sys .text:0xc50c, 0x762b0 bytes
    //
    _q5(sdk::unknown_ptr) get_user_registry_path;
    
    // [RemoveAdapterFromSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x9181c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x14d45c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1db880, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xd6774, 0x762b0 bytes
    //
    _q6(sdk::unknown_ptr) remove_adapter_from_session;
    
    // [RemoveAllSourceViewFromSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x919b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xde468, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1674c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12f528, 0x762b0 bytes
    //
    _q7(sdk::unknown_ptr) remove_all_source_view_from_session;
    
    // [RemoveSourceViewFromSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91a18, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x154a90, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e3e44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x157d40, 0x762b0 bytes
    //
    _q8(sdk::unknown_ptr) remove_source_view_from_session;
    
    // [SetAdapterLuidInRemoteSession@DXGSESSIONDATA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xeda4, 0x60098 bytes
    // dxgkrnl.sys .text:0x1f098, 0x762b0 bytes
    // dxgkrnl.sys .text:0x24578, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f718, 0x762b0 bytes
    //
    _q9(sdk::unknown_ptr) set_adapter_luid_in_remote_session;
};
#include "magic/api.end.hpp"
