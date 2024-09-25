#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/in6_addr_t.hpp"
#include "../ndis/scope_id_t.hpp"
#include "../ndis/scope_level_t.hpp"
#include "../ndis/sockaddr_in6_t.hpp"
#include "../nt/event_descriptor_t.hpp"

#include "magic/api.start.hpp"
namespace afd
{
    // [AFD_ACCEPT_PAUSE]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4f780, 0x187f8 bytes
    //
    _m00(sdk::unknown_ptr) afd_accept_pause;
    
    // [AfdAllocateZeroedFromLookasideList]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x6514, 0x187f8 bytes
    //
    _m01(sdk::unknown_ptr) afd_allocate_zeroed_from_lookaside_list;
    
    // [AfdCleanup]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0xf730, 0x187f8 bytes
    //
    _m02(sdk::unknown_ptr) afd_cleanup;
    
    // [AfdCompleteBufferedSendsUnlock]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x8f50, 0x187f8 bytes
    //
    _m03(sdk::unknown_ptr) afd_complete_buffered_sends_unlock;
    
    // [AfdDereferenceEndpoint]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x87e0, 0x187f8 bytes
    //
    _m04(sdk::unknown_ptr) afd_dereference_endpoint;
    
    // [AFD_EVENT_NOTIFY_CQ]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4f700, 0x187f8 bytes
    //
    _m05(sdk::unknown_ptr) afd_event_notify_cq;
    
    // [AfdGetEndpointConnectDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0x3cf0, 0x15e38 bytes
    //
    _m06(sdk::unknown_ptr) afd_get_endpoint_connect_dispatch;
    
    // [AfdInitTimerWheel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys INIT:0x7a7f4, 0x15e38 bytes
    //
    _m07(sdk::unknown_ptr) afd_init_timer_wheel;
    
    // [AfdNotifyDestroyContext]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x35e1c, 0x187f8 bytes
    //
    _m08(sdk::unknown_ptr) afd_notify_destroy_context;
    
    // [AfdNotifyPacketCallback]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x35e90, 0x187f8 bytes
    //
    _m09(sdk::unknown_ptr) afd_notify_packet_callback;
    
    // [AfdNotifyPollEventsToNotifyEvents]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x35f70, 0x187f8 bytes
    //
    _m10(sdk::unknown_ptr) afd_notify_poll_events_to_notify_events;
    
    // [AfdNotifyPostEvents]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x35fdc, 0x187f8 bytes
    //
    _m11(sdk::unknown_ptr) afd_notify_post_events;
    
    // [AfdNotifyProcessRegistration]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x362a0, 0x187f8 bytes
    //
    _m12(sdk::unknown_ptr) afd_notify_process_registration;
    
    // [AfdNotifyRemoveIoCompletion]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys PAGE:0x6c64c, 0x187f8 bytes
    //
    _m13(sdk::unknown_ptr) afd_notify_remove_io_completion;
    
    // [AfdNotifySock]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys PAGE:0x6c960, 0x187f8 bytes
    //
    _m14(sdk::unknown_ptr) afd_notify_sock;
    
    // [AfdNotifySockEventsChanged]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x64b4, 0x187f8 bytes
    //
    _m15(sdk::unknown_ptr) afd_notify_sock_events_changed;
    
    // [AfdNotifySockEventsChangedUnderLock]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x365b4, 0x187f8 bytes
    //
    _m16(sdk::unknown_ptr) afd_notify_sock_events_changed_under_lock;
    
    // [AfdNotifySockIndicateEventsUnlock]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x8bd8, 0x187f8 bytes
    //
    _m17(sdk::unknown_ptr) afd_notify_sock_indicate_events_unlock;
    
    // [AfdPplBufferTagPool]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x57980, 0x187f8 bytes
    //
    _m18(sdk::unknown_ptr) afd_ppl_buffer_tag_pool;
    
    // [AfdPplHugeBufferPool]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x579a0, 0x187f8 bytes
    //
    _m19(sdk::unknown_ptr) afd_ppl_huge_buffer_pool;
    
    // [AfdPplHugeBufferSize]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x579c0, 0x187f8 bytes
    //
    _m20(sdk::unknown_ptr) afd_ppl_huge_buffer_size;
    
    // [AfdPplLargeBufferPool]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x57998, 0x187f8 bytes
    //
    _m21(sdk::unknown_ptr) afd_ppl_large_buffer_pool;
    
    // [AfdPplLargeBufferSize]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x579b8, 0x187f8 bytes
    //
    _m22(sdk::unknown_ptr) afd_ppl_large_buffer_size;
    
    // [AfdPplMediumBufferPool]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x57990, 0x187f8 bytes
    //
    _m23(sdk::unknown_ptr) afd_ppl_medium_buffer_pool;
    
    // [AfdPplMediumBufferSize]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x579b0, 0x187f8 bytes
    //
    _m24(sdk::unknown_ptr) afd_ppl_medium_buffer_size;
    
    // [AfdPplSmallBufferPool]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x57988, 0x187f8 bytes
    //
    _m25(sdk::unknown_ptr) afd_ppl_small_buffer_pool;
    
    // [AfdPplSmallBufferSize]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x579a8, 0x187f8 bytes
    //
    _m26(sdk::unknown_ptr) afd_ppl_small_buffer_size;
    
    // [AfdReceiveDatagramProbeAndLockPages]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x1157c, 0x187f8 bytes
    //
    _m27(sdk::unknown_ptr) afd_receive_datagram_probe_and_lock_pages;
    
    // [AfdReceiveDatagramUnlockPages]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x16384, 0x187f8 bytes
    //
    _m28(sdk::unknown_ptr) afd_receive_datagram_unlock_pages;
    
    // [AfdReferenceEndpoint]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x1a938, 0x187f8 bytes
    //
    _m29(sdk::unknown_ptr) afd_reference_endpoint;
    
    // [AfdReleaseReadLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0xb7c4, 0x15e38 bytes
    //
    _m30(sdk::unknown_ptr) afd_release_read_lock;
    
    // [AfdRioConnectionFullSendBacklog]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0x1ad34, 0x15e38 bytes
    //
    _m31(sdk::unknown_ptr) afd_rio_connection_full_send_backlog;
    
    // [AfdRioPendingSends]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0x4350, 0x15e38 bytes
    //
    _m32(sdk::unknown_ptr) afd_rio_pending_sends;
    
    // [AfdRioUnlockRegDomainFromDpcLevel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .text:0x1bfc4, 0x15e38 bytes
    //
    _m33(sdk::unknown_ptr) afd_rio_unlock_reg_domain_from_dpc_level;
    
    // [AfdSanInitEndpoint]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys PAGESAN:0x7bb8c, 0x187f8 bytes
    //
    _m34(sdk::unknown_ptr) afd_san_init_endpoint;
    
    // [AfdTLBufferedSendCompleteBatch]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x9330, 0x187f8 bytes
    //
    _m35(sdk::unknown_ptr) afd_tl_buffered_send_complete_batch;
    
    // [AfdTLPrepareConnectionForAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys PAGEAFD:0x54398, 0x15e38 bytes
    //
    _m36(sdk::unknown_ptr) afd_tl_prepare_connection_for_accept;
    
    // [AfdTrimLookasides]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x148d0, 0x187f8 bytes
    //
    _m37(sdk::unknown_ptr) afd_trim_lookasides;
    
    // [AfdTrimLookasidesWorkItem]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x57680, 0x187f8 bytes
    //
    _m38(sdk::unknown_ptr) afd_trim_lookasides_work_item;
    
    // [AfdUpdateBufferSendComplete]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x926c, 0x187f8 bytes
    //
    _m39(sdk::unknown_ptr) afd_update_buffer_send_complete;
    
    // [AfdUserProbeAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .data:0x274a0, 0x15e38 bytes
    //
    _m40(sdk::unknown_ptr) afd_user_probe_address;
    
    // [AfdWellKnownProviderDeviceNames]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4de20, 0x187f8 bytes
    //
    _m41(sdk::unknown_ptr) afd_well_known_provider_device_names;
    
    // [AfdWskCleanupClientPendingRequests]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x3e9fc, 0x187f8 bytes
    //
    _m42(sdk::unknown_ptr) afd_wsk_cleanup_client_pending_requests;
    
    // [AFDETW_RIO_TRACE_CQ_NOTIFY]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x44e28, 0x187f8 bytes
    //
    _m43(sdk::unknown_ptr) afdetw_rio_trace_cq_notify;
    
    // [AFDETW_TRACEACCEPTPAUSE]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x3216c, 0x187f8 bytes
    //
    _m44(sdk::unknown_ptr) afdetw_traceacceptpause;
    
    // [g_rgFastWppEnabledFlagsPerLevel]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .data:0x57420, 0x187f8 bytes
    //
    _m45(sdk::unknown_ptr) g_rg_fast_wpp_enabled_flags_per_level;
    
    // [PplTrimLookasideList]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .text:0x14970, 0x187f8 bytes
    //
    _m46(sdk::function<void(void*)>*) ppl_trim_lookaside_list;
    
    // [Symbol_StartLmhosts]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .rdata:0x1df78, 0x15e38 bytes
    //
    _m47(sdk::unknown_ptr) symbol_start_lmhosts;
    
    // [Symbol_StartLmhostsEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607
    // afd.sys .rdata:0x1eb40, 0x15e38 bytes
    //
    _m48(sdk::unknown_ptr) symbol_start_lmhosts_event;
    
    // [WPP_06b69eed1d283ff017021c31e811da0f_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fac0, 0x187f8 bytes
    //
    _m49(sdk::unknown_ptr) wpp_06b69eed1d283ff017021c31e811da0f_traceguids;
    
    // [WPP_0f7810d8c85f3e24ad364573eaf29502_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4e700, 0x187f8 bytes
    //
    _m50(sdk::unknown_ptr) wpp_0f7810d8c85f3e24ad364573eaf29502_traceguids;
    
    // [WPP_137f0a44ffde3c529799602d47aad7ca_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fe80, 0x187f8 bytes
    //
    _m51(sdk::unknown_ptr) wpp_137f0a44ffde3c529799602d47aad7ca_traceguids;
    
    // [WPP_17db59da58e73a681bfbf961fb8b30d6_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fe90, 0x187f8 bytes
    //
    _m52(sdk::unknown_ptr) wpp_17db59da58e73a681bfbf961fb8b30d6_traceguids;
    
    // [WPP_286a485d350b32c81a725abbed69f1fe_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4ff78, 0x187f8 bytes
    //
    _m53(sdk::unknown_ptr) wpp_286a485d350b32c81a725abbed69f1fe_traceguids;
    
    // [WPP_2b5c1669eced35f0abf60763486f9eaf_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4e710, 0x187f8 bytes
    //
    _m54(sdk::unknown_ptr) wpp_2b5c1669eced35f0abf60763486f9eaf_traceguids;
    
    // [WPP_311e0171b2033e595e3f8bee3fb23f16_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fed0, 0x187f8 bytes
    //
    _m55(sdk::unknown_ptr) wpp_311e0171b2033e595e3f8bee3fb23f16_traceguids;
    
    // [WPP_3beee3121df734ead9197e67d2968951_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fde0, 0x187f8 bytes
    //
    _m56(sdk::unknown_ptr) wpp_3beee3121df734ead9197e67d2968951_traceguids;
    
    // [WPP_48a2b4734bc23b0faec348d82c6e430e_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4faf8, 0x187f8 bytes
    //
    _m57(sdk::unknown_ptr) wpp_48a2b4734bc23b0faec348d82c6e430e_traceguids;
    
    // [WPP_4db37c00ae713f461e323756b7056b13_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fb08, 0x187f8 bytes
    //
    _m58(sdk::unknown_ptr) wpp_4db37c00ae713f461e323756b7056b13_traceguids;
    
    // [WPP_50d068d9840e38fa518b8f5354fd3bf1_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fbb0, 0x187f8 bytes
    //
    _m59(sdk::unknown_ptr) wpp_50d068d9840e38fa518b8f5354fd3bf1_traceguids;
    
    // [WPP_6277a91a99e5397be96d0e432e916ce9_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fbe8, 0x187f8 bytes
    //
    _m60(sdk::unknown_ptr) wpp_6277a91a99e5397be96d0e432e916ce9_traceguids;
    
    // [WPP_6fb0a353e61d3707f1ae6942515c85e8_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fdd0, 0x187f8 bytes
    //
    _m61(sdk::unknown_ptr) wpp_6fb0a353e61d3707f1ae6942515c85e8_traceguids;
    
    // [WPP_750cd5b025b73ac1a6ce4c47647b8469_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fc38, 0x187f8 bytes
    //
    _m62(sdk::unknown_ptr) wpp_750cd5b025b73ac1a6ce4c47647b8469_traceguids;
    
    // [WPP_784970fca43738b891f60c8cd1758339_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4e750, 0x187f8 bytes
    //
    _m63(sdk::unknown_ptr) wpp_784970fca43738b891f60c8cd1758339_traceguids;
    
    // [WPP_79b6950199933e7dc357564fdc14d4d9_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fb70, 0x187f8 bytes
    //
    _m64(sdk::unknown_ptr) wpp_79b6950199933e7dc357564fdc14d4d9_traceguids;
    
    // [WPP_7af0c5c5a36936344e4b8d884aca0931_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fca8, 0x187f8 bytes
    //
    _m65(sdk::unknown_ptr) wpp_7af0c5c5a36936344e4b8d884aca0931_traceguids;
    
    // [WPP_9119fce215a03832cabb01c8167f0254_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fd08, 0x187f8 bytes
    //
    _m66(sdk::unknown_ptr) wpp_9119fce215a03832cabb01c8167f0254_traceguids;
    
    // [WPP_9167d0bad43b3d2b6c515a117925d2a2_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4ff10, 0x187f8 bytes
    //
    _m67(sdk::unknown_ptr) wpp_9167d0bad43b3d2b6c515a117925d2a2_traceguids;
    
    // [WPP_931c2b5e34273bc9ea0c620d77a03410_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4ff48, 0x187f8 bytes
    //
    _m68(sdk::unknown_ptr) wpp_931c2b5e34273bc9ea0c620d77a03410_traceguids;
    
    // [WPP_969c7eb86c2136fb3e78e51d9740ff2e_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fae8, 0x187f8 bytes
    //
    _m69(sdk::unknown_ptr) wpp_969c7eb86c2136fb3e78e51d9740ff2e_traceguids;
    
    // [WPP_a52c7299be0c3a5d398924c321611acc_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fd58, 0x187f8 bytes
    //
    _m70(sdk::unknown_ptr) wpp_a52c7299be0c3a5d398924c321611acc_traceguids;
    
    // [WPP_aa7bbdcd69833c269187338144923a7e_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4f9e0, 0x187f8 bytes
    //
    _m71(sdk::unknown_ptr) wpp_aa7bbdcd69833c269187338144923a7e_traceguids;
    
    // [WPP_abcdd80ce5e434d6b5d4def9205add04_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fc28, 0x187f8 bytes
    //
    _m72(sdk::unknown_ptr) wpp_abcdd80ce5e434d6b5d4def9205add04_traceguids;
    
    // [WPP_ce604b2be9e035259e0c2bf5c4836f0b_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fe40, 0x187f8 bytes
    //
    _m73(sdk::unknown_ptr) wpp_ce604b2be9e035259e0c2bf5c4836f0b_traceguids;
    
    // [WPP_e027d1dfc90731c4a603fc084ab68b9f_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 11
    // afd.sys .rdata:0x4fdc0, 0x187f8 bytes
    //
    _m74(sdk::unknown_ptr) wpp_e027d1dfc90731c4a603fc084ab68b9f_traceguids;
    
    // [AfdCreateFastSendDgramBatchState]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69c08, 0x15fb8 bytes
    // afd.sys PAGEAFD:0x69c08, 0x15fb8 bytes
    //
    _m75(sdk::unknown_ptr) afd_create_fast_send_dgram_batch_state;
    
    // [AfdCreateSendDgramBatchState]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x3f7b8, 0x15fb8 bytes
    // afd.sys PAGE:0x3f7b8, 0x15fb8 bytes
    //
    _m76(sdk::unknown_ptr) afd_create_send_dgram_batch_state;
    
    // [AfdDestroyFastSendDgramBatchState]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x102dc, 0x15fb8 bytes
    // afd.sys .text:0x102dc, 0x15fb8 bytes
    //
    _m77(sdk::unknown_ptr) afd_destroy_fast_send_dgram_batch_state;
    
    // [AfdDestroySendDgramBatchState]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x10d68, 0x15fb8 bytes
    // afd.sys .text:0x10d68, 0x15fb8 bytes
    //
    _m78(sdk::unknown_ptr) afd_destroy_send_dgram_batch_state;
    
    // [AfdPnlHugeBufferPool]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27930, 0x15fb8 bytes
    // afd.sys .data:0x27930, 0x15fb8 bytes
    //
    _m79(sdk::unknown_ptr) afd_pnl_huge_buffer_pool;
    
    // [AfdPnlHugeBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27950, 0x15fb8 bytes
    // afd.sys .data:0x27950, 0x15fb8 bytes
    //
    _m80(sdk::unknown_ptr) afd_pnl_huge_buffer_size;
    
    // [AfdPnlSendDgramBatchStatePool]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27958, 0x15fb8 bytes
    // afd.sys .data:0x27958, 0x15fb8 bytes
    //
    _m81(sdk::unknown_ptr) afd_pnl_send_dgram_batch_state_pool;
    
    // [AfdSqmCreateStringStreamEntry]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x15480, 0x15fb8 bytes
    // afd.sys .text:0x15480, 0x15fb8 bytes
    //
    _m82(sdk::unknown_ptr) afd_sqm_create_string_stream_entry;
    
    // [AFDETW_START_ACTIVITY_FASTIO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 11
    // afd.sys .text:0x2d30, 0x15e38 bytes
    // afd.sys .text:0x113b8, 0x187f8 bytes
    //
    _m83(sdk::unknown_ptr) afdetw_start_activity_fastio;
    
    // [FastWppEnabledFlags]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x273c0, 0x15fb8 bytes
    // afd.sys .data:0x273c0, 0x15fb8 bytes
    //
    _m84(sdk::unknown_ptr) fast_wpp_enabled_flags;
    
    // [FastWppUnlockCodeSection]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x1cd38, 0x15fb8 bytes
    // afd.sys .text:0x1cd38, 0x15fb8 bytes
    //
    _m85(sdk::unknown_ptr) fast_wpp_unlock_code_section;
    
    // [WPP_13cc1b12f22d335fecfcf7a905270274_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f9e0, 0x15fb8 bytes
    // afd.sys .rdata:0x1f9e0, 0x15fb8 bytes
    //
    _m86(sdk::unknown_ptr) wpp_13cc1b12f22d335fecfcf7a905270274_traceguids;
    
    // [WPP_1721eb2b58a137c301c384b0a15a5cc9_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f878, 0x15fb8 bytes
    // afd.sys .rdata:0x1f878, 0x15fb8 bytes
    //
    _m87(sdk::unknown_ptr) wpp_1721eb2b58a137c301c384b0a15a5cc9_traceguids;
    
    // [WPP_20c281dd38aa3f2af57c190c6b759c64_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fd20, 0x15fb8 bytes
    // afd.sys .rdata:0x1fd20, 0x15fb8 bytes
    //
    _m88(sdk::unknown_ptr) wpp_20c281dd38aa3f2af57c190c6b759c64_traceguids;
    
    // [WPP_231b541e4d05389dbf898c72d4859540_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f8b8, 0x15fb8 bytes
    // afd.sys .rdata:0x1f8b8, 0x15fb8 bytes
    //
    _m89(sdk::unknown_ptr) wpp_231b541e4d05389dbf898c72d4859540_traceguids;
    
    // [WPP_261645d8607535d84786bf6ed5cc2b2e_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f7e8, 0x15fb8 bytes
    // afd.sys .rdata:0x1f7e8, 0x15fb8 bytes
    //
    _m90(sdk::unknown_ptr) wpp_261645d8607535d84786bf6ed5cc2b2e_traceguids;
    
    // [WPP_2dc11127ed4735ca21b8022d66ebb40c_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fcc0, 0x15fb8 bytes
    // afd.sys .rdata:0x1fcc0, 0x15fb8 bytes
    //
    _m91(sdk::unknown_ptr) wpp_2dc11127ed4735ca21b8022d66ebb40c_traceguids;
    
    // [WPP_38fa10261ed73b10a5231d430bb5d50b_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fa40, 0x15fb8 bytes
    // afd.sys .rdata:0x1fa40, 0x15fb8 bytes
    //
    _m92(sdk::unknown_ptr) wpp_38fa10261ed73b10a5231d430bb5d50b_traceguids;
    
    // [WPP_3aed74975fb633bd8bc5507e0c200ad6_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f7c0, 0x15fb8 bytes
    // afd.sys .rdata:0x1f7c0, 0x15fb8 bytes
    //
    _m93(sdk::unknown_ptr) wpp_3aed74975fb633bd8bc5507e0c200ad6_traceguids;
    
    // [WPP_66ef13b005473ef9b180d58c27106f9c_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fc10, 0x15fb8 bytes
    // afd.sys .rdata:0x1fc10, 0x15fb8 bytes
    //
    _m94(sdk::unknown_ptr) wpp_66ef13b005473ef9b180d58c27106f9c_traceguids;
    
    // [WPP_6a00a31bc07b3866bff1fa59db19efef_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f808, 0x15fb8 bytes
    // afd.sys .rdata:0x1f808, 0x15fb8 bytes
    //
    _m95(sdk::unknown_ptr) wpp_6a00a31bc07b3866bff1fa59db19efef_traceguids;
    
    // [WPP_78f49d0803d032747859a04cf36787a8_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fbc0, 0x15fb8 bytes
    // afd.sys .rdata:0x1fbc0, 0x15fb8 bytes
    //
    _m96(sdk::unknown_ptr) wpp_78f49d0803d032747859a04cf36787a8_traceguids;
    
    // [WPP_79dae969c1863a4eb8c041cc1dcf82ef_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f7f8, 0x15fb8 bytes
    // afd.sys .rdata:0x1f7f8, 0x15fb8 bytes
    //
    _m97(sdk::unknown_ptr) wpp_79dae969c1863a4eb8c041cc1dcf82ef_traceguids;
    
    // [WPP_878749efd7463d5cab4b460092e4cbba_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f6e8, 0x15fb8 bytes
    // afd.sys .rdata:0x1f6e8, 0x15fb8 bytes
    //
    _m98(sdk::unknown_ptr) wpp_878749efd7463d5cab4b460092e4cbba_traceguids;
    
    // [WPP_924da071f4a83c1755ab701d0586e6fc_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1e498, 0x15fb8 bytes
    // afd.sys .rdata:0x1e498, 0x15fb8 bytes
    //
    _m99(sdk::unknown_ptr) wpp_924da071f4a83c1755ab701d0586e6fc_traceguids;
    
    // [WPP_98e98d48379336ece3c4efea44bf014b_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1e4b8, 0x15fb8 bytes
    // afd.sys .rdata:0x1e4b8, 0x15fb8 bytes
    //
    _n00(sdk::unknown_ptr) wpp_98e98d48379336ece3c4efea44bf014b_traceguids;
    
    // [WPP_a30447f132f633a11da81bb2821aed24_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fb10, 0x15fb8 bytes
    // afd.sys .rdata:0x1fb10, 0x15fb8 bytes
    //
    _n01(sdk::unknown_ptr) wpp_a30447f132f633a11da81bb2821aed24_traceguids;
    
    // [WPP_a626eb216e0533826eef474d0cb2315d_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fbd0, 0x15fb8 bytes
    // afd.sys .rdata:0x1fbd0, 0x15fb8 bytes
    //
    _n02(sdk::unknown_ptr) wpp_a626eb216e0533826eef474d0cb2315d_traceguids;
    
    // [WPP_b65ab6fd40bc30b32beed37080837ec1_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f960, 0x15fb8 bytes
    // afd.sys .rdata:0x1f960, 0x15fb8 bytes
    //
    _n03(sdk::unknown_ptr) wpp_b65ab6fd40bc30b32beed37080837ec1_traceguids;
    
    // [WPP_c649f735e0113dacd46ac2cfac67cec7_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f970, 0x15fb8 bytes
    // afd.sys .rdata:0x1f970, 0x15fb8 bytes
    //
    _n04(sdk::unknown_ptr) wpp_c649f735e0113dacd46ac2cfac67cec7_traceguids;
    
    // [WPP_d66e75ad949335b8045c3cd6ba890b0f_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fc50, 0x15fb8 bytes
    // afd.sys .rdata:0x1fc50, 0x15fb8 bytes
    //
    _n05(sdk::unknown_ptr) wpp_d66e75ad949335b8045c3cd6ba890b0f_traceguids;
    
    // [WPP_d95a94d21e5b364708f6a02366a0286a_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1f920, 0x15fb8 bytes
    // afd.sys .rdata:0x1f920, 0x15fb8 bytes
    //
    _n06(sdk::unknown_ptr) wpp_d95a94d21e5b364708f6a02366a0286a_traceguids;
    
    // [WPP_e9741e0b8c5939cb34d5b9e32289a066_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fb00, 0x15fb8 bytes
    // afd.sys .rdata:0x1fb00, 0x15fb8 bytes
    //
    _n07(sdk::unknown_ptr) wpp_e9741e0b8c5939cb34d5b9e32289a066_traceguids;
    
    // [WPP_e99005e58b2b350cdc184517c4266c16_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fa98, 0x15fb8 bytes
    // afd.sys .rdata:0x1fa98, 0x15fb8 bytes
    //
    _n08(sdk::unknown_ptr) wpp_e99005e58b2b350cdc184517c4266c16_traceguids;
    
    // [WPP_f8bda3740a443c6eb942ff8655fa995d_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fb80, 0x15fb8 bytes
    // afd.sys .rdata:0x1fb80, 0x15fb8 bytes
    //
    _n09(sdk::unknown_ptr) wpp_f8bda3740a443c6eb942ff8655fa995d_traceguids;
    
    // [WPP_fbb7d71353323f7aab9ad7b86859c985_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1fb20, 0x15fb8 bytes
    // afd.sys .rdata:0x1fb20, 0x15fb8 bytes
    //
    _n10(sdk::unknown_ptr) wpp_fbb7d71353323f7aab9ad7b86859c985_traceguids;
    
    // [WPP_fcbe5a2781363d3d8587ff5ad4b10e46_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1e4a8, 0x15fb8 bytes
    // afd.sys .rdata:0x1e4a8, 0x15fb8 bytes
    //
    _n11(sdk::unknown_ptr) wpp_fcbe5a2781363d3d8587ff5ad4b10e46_traceguids;
    
    // [AfdAllocateConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x540bc, 0x15fb8 bytes
    // afd.sys .text:0x6e40, 0x187f8 bytes
    // afd.sys PAGEAFD:0x540bc, 0x15fb8 bytes
    //
    _n12(sdk::unknown_ptr) afd_allocate_connection;
    
    // [AfdBlockingSendCopyThreshold]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27268, 0x15e38 bytes
    // afd.sys .data:0x272a0, 0x15fb8 bytes
    // afd.sys .data:0x272a0, 0x15fb8 bytes
    //
    _n13(sdk::unknown_ptr) afd_blocking_send_copy_threshold;
    
    // [AfdBufferLengthForOnePage]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x2757c, 0x15e38 bytes
    // afd.sys .data:0x275fc, 0x15fb8 bytes
    // afd.sys .data:0x275fc, 0x15fb8 bytes
    //
    _n14(sdk::unknown_ptr) afd_buffer_length_for_one_page;
    
    // [AfdBufferOverhead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27580, 0x15e38 bytes
    // afd.sys .data:0x27600, 0x15fb8 bytes
    // afd.sys .data:0x27600, 0x15fb8 bytes
    //
    _n15(sdk::unknown_ptr) afd_buffer_overhead;
    
    // [AfdCheckAndReferenceEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x3a30, 0x15e38 bytes
    // afd.sys .text:0x2a70, 0x15fb8 bytes
    // afd.sys .text:0x2a70, 0x15fb8 bytes
    //
    _n16(sdk::unknown_ptr) afd_check_and_reference_endpoint;
    
    // [AfdDerefTLBaseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x2844, 0x15e38 bytes
    // afd.sys .text:0x3580, 0x15fb8 bytes
    // afd.sys .text:0x3580, 0x15fb8 bytes
    //
    _n17(sdk::unknown_ptr) afd_deref_tl_base_endpoint;
    
    // [AfdDereferenceEndpointInline]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x33bc, 0x15e38 bytes
    // afd.sys .text:0x3114, 0x15fb8 bytes
    // afd.sys .text:0x3114, 0x15fb8 bytes
    //
    _n18(sdk::unknown_ptr) afd_dereference_endpoint_inline;
    
    // [AfdDiscardableCodeHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x276c8, 0x15e38 bytes
    // afd.sys .data:0x27748, 0x15fb8 bytes
    // afd.sys .data:0x27748, 0x15fb8 bytes
    //
    _n19(sdk::unknown_ptr) afd_discardable_code_handle;
    
    // [AfdDisconnectReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33d50, 0x15fb8 bytes
    // afd.sys PAGE:0x601ac, 0x187f8 bytes
    // afd.sys PAGE:0x33d50, 0x15fb8 bytes
    //
    _n20(sdk::unknown_ptr) afd_disconnect_receive;
    
    // [AfdGetGroup]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x32c04, 0x15fb8 bytes
    // afd.sys PAGE:0x6226c, 0x187f8 bytes
    // afd.sys PAGE:0x32c04, 0x15fb8 bytes
    //
    _n21(sdk::unknown_ptr) afd_get_group;
    
    // [AfdHugeBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2728c, 0x15fb8 bytes
    // afd.sys .data:0x572d0, 0x187f8 bytes
    // afd.sys .data:0x2728c, 0x15fb8 bytes
    //
    _n22(sdk::unknown_ptr) afd_huge_buffer_size;
    
    // [AfdIgnoreOrderlyReleaseCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d080, 0x15fb8 bytes
    // afd.sys PAGE:0x6ae10, 0x187f8 bytes
    // afd.sys PAGE:0x3d080, 0x15fb8 bytes
    //
    _n23(sdk::unknown_ptr) afd_ignore_orderly_release_callback;
    
    // [AfdIgnoreOrderlyReleaseProcess]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27bd8, 0x15fb8 bytes
    // afd.sys .data:0x57c50, 0x187f8 bytes
    // afd.sys .data:0x27bd8, 0x15fb8 bytes
    //
    _n24(sdk::unknown_ptr) afd_ignore_orderly_release_process;
    
    // [AfdInitializeBufferTag]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEAFD:0x473ec, 0x15e38 bytes
    // afd.sys PAGEAFD:0x5848c, 0x15fb8 bytes
    // afd.sys PAGEAFD:0x5848c, 0x15fb8 bytes
    //
    _n25(sdk::unknown_ptr) afd_initialize_buffer_tag;
    
    // [AfdInsertNewEndpointInList]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x32b28, 0x15fb8 bytes
    // afd.sys PAGE:0x621b8, 0x187f8 bytes
    // afd.sys PAGE:0x32b28, 0x15fb8 bytes
    //
    _n26(sdk::unknown_ptr) afd_insert_new_endpoint_in_list;
    
    // [AfdIsValidTdiDeviceName]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x83ec, 0x15fb8 bytes
    // afd.sys .text:0x1a768, 0x187f8 bytes
    // afd.sys .text:0x83ec, 0x15fb8 bytes
    //
    _n27(sdk::unknown_ptr) afd_is_valid_tdi_device_name;
    
    // [AfdLoaded]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27780, 0x15e38 bytes
    // afd.sys .data:0x278f0, 0x15fb8 bytes
    // afd.sys .data:0x278f0, 0x15fb8 bytes
    //
    _n28(sdk::unknown_ptr) afd_loaded;
    
    // [AfdOpenRegistry]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys INIT:0x7ae84, 0x15e38 bytes
    // afd.sys INIT:0x85008, 0x15fb8 bytes
    // afd.sys INIT:0x85008, 0x15fb8 bytes
    //
    _n29(sdk::unknown_ptr) afd_open_registry;
    
    // [AfdPnlBufferTagPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27870, 0x15e38 bytes
    // afd.sys .data:0x27910, 0x15fb8 bytes
    // afd.sys .data:0x27910, 0x15fb8 bytes
    //
    _n30(sdk::unknown_ptr) afd_pnl_buffer_tag_pool;
    
    // [AfdPnlLargeBufferPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27888, 0x15e38 bytes
    // afd.sys .data:0x27928, 0x15fb8 bytes
    // afd.sys .data:0x27928, 0x15fb8 bytes
    //
    _n31(sdk::unknown_ptr) afd_pnl_large_buffer_pool;
    
    // [AfdPnlLargeBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x278a0, 0x15e38 bytes
    // afd.sys .data:0x27948, 0x15fb8 bytes
    // afd.sys .data:0x27948, 0x15fb8 bytes
    //
    _n32(sdk::unknown_ptr) afd_pnl_large_buffer_size;
    
    // [AfdPnlMediumBufferPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27880, 0x15e38 bytes
    // afd.sys .data:0x27920, 0x15fb8 bytes
    // afd.sys .data:0x27920, 0x15fb8 bytes
    //
    _n33(sdk::unknown_ptr) afd_pnl_medium_buffer_pool;
    
    // [AfdPnlMediumBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27898, 0x15e38 bytes
    // afd.sys .data:0x27940, 0x15fb8 bytes
    // afd.sys .data:0x27940, 0x15fb8 bytes
    //
    _n34(sdk::unknown_ptr) afd_pnl_medium_buffer_size;
    
    // [AfdPnlSmallBufferPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27878, 0x15e38 bytes
    // afd.sys .data:0x27918, 0x15fb8 bytes
    // afd.sys .data:0x27918, 0x15fb8 bytes
    //
    _n35(sdk::unknown_ptr) afd_pnl_small_buffer_pool;
    
    // [AfdPnlSmallBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27890, 0x15e38 bytes
    // afd.sys .data:0x27938, 0x15fb8 bytes
    // afd.sys .data:0x27938, 0x15fb8 bytes
    //
    _n36(sdk::unknown_ptr) afd_pnl_small_buffer_size;
    
    // [AfdPreventSecurityDescriptorSet]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x8768, 0x15fb8 bytes
    // afd.sys .text:0x35038, 0x187f8 bytes
    // afd.sys .text:0x8768, 0x15fb8 bytes
    //
    _n37(sdk::unknown_ptr) afd_prevent_security_descriptor_set;
    
    // [AfdReallowSecurityDescriptorSet]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x87cc, 0x15fb8 bytes
    // afd.sys .text:0x3509c, 0x187f8 bytes
    // afd.sys .text:0x87cc, 0x15fb8 bytes
    //
    _n38(sdk::unknown_ptr) afd_reallow_security_descriptor_set;
    
    // [AfdReleaseReadLockFromDpcLevel]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x86c4, 0x15fb8 bytes
    // afd.sys .text:0x1accc, 0x187f8 bytes
    // afd.sys .text:0x86c4, 0x15fb8 bytes
    //
    _n39(sdk::unknown_ptr) afd_release_read_lock_from_dpc_level;
    
    // [AfdRemoveEndpointFromList]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33224, 0x15fb8 bytes
    // afd.sys PAGE:0x61884, 0x187f8 bytes
    // afd.sys PAGE:0x33224, 0x15fb8 bytes
    //
    _n40(sdk::unknown_ptr) afd_remove_endpoint_from_list;
    
    // [AfdRioDereferenceBufferId]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x186cc, 0x15fb8 bytes
    // afd.sys .text:0x47a1c, 0x187f8 bytes
    // afd.sys .text:0x186cc, 0x15fb8 bytes
    //
    _n41(sdk::unknown_ptr) afd_rio_dereference_buffer_id;
    
    // [AfdRioFlushRq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x9eec, 0x15e38 bytes
    // afd.sys .text:0x19e24, 0x15fb8 bytes
    // afd.sys .text:0x19e24, 0x15fb8 bytes
    //
    _n42(sdk::unknown_ptr) afd_rio_flush_rq;
    
    // [AfdRioUpdateNotifyState]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1c668, 0x15fb8 bytes
    // afd.sys .text:0x4bb34, 0x187f8 bytes
    // afd.sys .text:0x1c668, 0x15fb8 bytes
    //
    _n43(sdk::unknown_ptr) afd_rio_update_notify_state;
    
    // [AfdRioValidateAndReferenceRequestBuffers]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1c694, 0x15fb8 bytes
    // afd.sys .text:0x4bb60, 0x187f8 bytes
    // afd.sys .text:0x1c694, 0x15fb8 bytes
    //
    _n44(sdk::unknown_ptr) afd_rio_validate_and_reference_request_buffers;
    
    // [AfdSanGetCompletionObjectTypePointer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x41bbc, 0x15e38 bytes
    // afd.sys PAGE:0x44180, 0x15fb8 bytes
    // afd.sys PAGE:0x44180, 0x15fb8 bytes
    //
    _n45(sdk::unknown_ptr) afd_san_get_completion_object_type_pointer;
    
    // [AfdSqmAddToStream]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x44b2c, 0x15e38 bytes
    // afd.sys PAGE:0x476b4, 0x15fb8 bytes
    // afd.sys PAGE:0x476b4, 0x15fb8 bytes
    //
    _n46(sdk::unknown_ptr) afd_sqm_add_to_stream;
    
    // [AfdSqmCreateTimer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x44cc0, 0x15e38 bytes
    // afd.sys PAGE:0x47874, 0x15fb8 bytes
    // afd.sys PAGE:0x47874, 0x15fb8 bytes
    //
    _n47(sdk::unknown_ptr) afd_sqm_create_timer;
    
    // [AfdSqmDeleteTimer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x44d20, 0x15e38 bytes
    // afd.sys PAGE:0x478ec, 0x15fb8 bytes
    // afd.sys PAGE:0x478ec, 0x15fb8 bytes
    //
    _n48(sdk::unknown_ptr) afd_sqm_delete_timer;
    
    // [AfdSqmEnabled]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79000, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83000, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83000, 0x15fb8 bytes
    //
    _n49(sdk::unknown_ptr) afd_sqm_enabled;
    
    // [AfdSqmEtwEnableCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x1a790, 0x15e38 bytes
    // afd.sys .text:0x154b0, 0x15fb8 bytes
    // afd.sys .text:0x154b0, 0x15fb8 bytes
    //
    _n50(sdk::unknown_ptr) afd_sqm_etw_enable_callback;
    
    // [AfdSqmEtwHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79018, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83018, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83018, 0x15fb8 bytes
    //
    _n51(sdk::unknown_ptr) afd_sqm_etw_handle;
    
    // [AfdSqmGlobalDeinit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x44d70, 0x15e38 bytes
    // afd.sys PAGE:0x47954, 0x15fb8 bytes
    // afd.sys PAGE:0x47954, 0x15fb8 bytes
    //
    _n52(sdk::unknown_ptr) afd_sqm_global_deinit;
    
    // [AfdSqmGlobalInit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys INIT:0x7a514, 0x15e38 bytes
    // afd.sys INIT:0x846d4, 0x15fb8 bytes
    // afd.sys INIT:0x846d4, 0x15fb8 bytes
    //
    _n53(sdk::unknown_ptr) afd_sqm_global_init;
    
    // [AfdSqmInitialized]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79001, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83001, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83001, 0x15fb8 bytes
    //
    _n54(sdk::unknown_ptr) afd_sqm_initialized;
    
    // [AfdSqmIntervalInMinutes]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79014, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83014, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83014, 0x15fb8 bytes
    //
    _n55(sdk::unknown_ptr) afd_sqm_interval_in_minutes;
    
    // [AfdSqmLogStreamRow]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x44e30, 0x15e38 bytes
    // afd.sys PAGE:0x47a44, 0x15fb8 bytes
    // afd.sys PAGE:0x47a44, 0x15fb8 bytes
    //
    _n56(sdk::unknown_ptr) afd_sqm_log_stream_row;
    
    // [AfdSqmLogTransportNames]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x44f80, 0x15e38 bytes
    // afd.sys PAGE:0x47b6c, 0x15fb8 bytes
    // afd.sys PAGE:0x47b6c, 0x15fb8 bytes
    //
    _n57(sdk::unknown_ptr) afd_sqm_log_transport_names;
    
    // [AfdSqmMergeStreamRows]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x4513c, 0x15e38 bytes
    // afd.sys PAGE:0x47d6c, 0x15fb8 bytes
    // afd.sys PAGE:0x47d6c, 0x15fb8 bytes
    //
    _n58(sdk::unknown_ptr) afd_sqm_merge_stream_rows;
    
    // [AfdSqmNodeCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79010, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83010, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83010, 0x15fb8 bytes
    //
    _n59(sdk::unknown_ptr) afd_sqm_node_count;
    
    // [AfdSqmNodeHashTable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79090, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83090, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83090, 0x15fb8 bytes
    //
    _n60(sdk::unknown_ptr) afd_sqm_node_hash_table;
    
    // [AfdSqmOptInChecked]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79002, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83002, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83002, 0x15fb8 bytes
    //
    _n61(sdk::unknown_ptr) afd_sqm_opt_in_checked;
    
    // [AfdSqmResource]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79008, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83008, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x83008, 0x15fb8 bytes
    //
    _n62(sdk::unknown_ptr) afd_sqm_resource;
    
    // [AfdSqmSetString]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x1a79c, 0x15e38 bytes
    // afd.sys .text:0x154c4, 0x15fb8 bytes
    // afd.sys .text:0x154c4, 0x15fb8 bytes
    //
    _n63(sdk::unknown_ptr) afd_sqm_set_string;
    
    // [AfdSqmSetTimer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x451b8, 0x15e38 bytes
    // afd.sys PAGE:0x47dec, 0x15fb8 bytes
    // afd.sys PAGE:0x47dec, 0x15fb8 bytes
    //
    _n64(sdk::unknown_ptr) afd_sqm_set_timer;
    
    // [AfdSqmStoreStreamRow]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x45240, 0x15e38 bytes
    // afd.sys PAGE:0x47e94, 0x15fb8 bytes
    // afd.sys PAGE:0x47e94, 0x15fb8 bytes
    //
    _n65(sdk::unknown_ptr) afd_sqm_store_stream_row;
    
    // [AfdSqmSweepNodeHashTable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x45384, 0x15e38 bytes
    // afd.sys PAGE:0x48000, 0x15fb8 bytes
    // afd.sys PAGE:0x48000, 0x15fb8 bytes
    //
    _n66(sdk::unknown_ptr) afd_sqm_sweep_node_hash_table;
    
    // [AfdSqmTimer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x27b38, 0x15e38 bytes
    // afd.sys .data:0x27c80, 0x15fb8 bytes
    // afd.sys .data:0x27c80, 0x15fb8 bytes
    //
    _n67(sdk::unknown_ptr) afd_sqm_timer;
    
    // [AfdSqmTimerDPCRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x1a890, 0x15e38 bytes
    // afd.sys .text:0x155b0, 0x15fb8 bytes
    // afd.sys .text:0x155b0, 0x15fb8 bytes
    //
    _n68(sdk::unknown_ptr) afd_sqm_timer_dpc_routine;
    
    // [AfdSqmTimerWorkerRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x45450, 0x15e38 bytes
    // afd.sys PAGE:0x480e0, 0x15fb8 bytes
    // afd.sys PAGE:0x480e0, 0x15fb8 bytes
    //
    _n69(sdk::unknown_ptr) afd_sqm_timer_worker_routine;
    
    // [AfdTdiInvalidDeviceNames]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de60, 0x15fb8 bytes
    // afd.sys .rdata:0x4de58, 0x187f8 bytes
    // afd.sys .rdata:0x1de60, 0x15fb8 bytes
    //
    _n70(sdk::unknown_ptr) afd_tdi_invalid_device_names;
    
    // [AfdTerminateWpp]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x485cc, 0x15fb8 bytes
    // afd.sys PAGE:0x7561c, 0x187f8 bytes
    // afd.sys PAGE:0x485cc, 0x15fb8 bytes
    //
    _n71(sdk::unknown_ptr) afd_terminate_wpp;
    
    // [AfdTlReferenceTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2d40, 0x15fb8 bytes
    // afd.sys .text:0x83e8, 0x187f8 bytes
    // afd.sys .text:0x2d40, 0x15fb8 bytes
    //
    _n72(sdk::unknown_ptr) afd_tl_reference_transport;
    
    // [AfdTLReleaseIndications]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x34c0, 0x15e38 bytes
    // afd.sys .text:0x56a0, 0x15fb8 bytes
    // afd.sys .text:0x56a0, 0x15fb8 bytes
    //
    _n73(sdk::unknown_ptr) afd_tl_release_indications;
    
    // [AfdUnloadWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .data:0x276e0, 0x15e38 bytes
    // afd.sys .data:0x27760, 0x15fb8 bytes
    // afd.sys .data:0x27760, 0x15fb8 bytes
    //
    _n74(sdk::unknown_ptr) afd_unload_worker;
    
    // [AfdUnlockDriver]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys PAGE:0x368c0, 0x15e38 bytes
    // afd.sys PAGE:0x37120, 0x15fb8 bytes
    // afd.sys PAGE:0x37120, 0x15fb8 bytes
    //
    _n75(sdk::unknown_ptr) afd_unlock_driver;
    
    // [AFDETW_RIO_TRACE_BUFFER_CLEANUP]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1566c, 0x15fb8 bytes
    // afd.sys .text:0x448f4, 0x187f8 bytes
    // afd.sys .text:0x1566c, 0x15fb8 bytes
    //
    _n76(sdk::unknown_ptr) afdetw_rio_trace_buffer_cleanup;
    
    // [AFDETW_RIO_TRACE_BUFFER_DEREGISTER]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15718, 0x15fb8 bytes
    // afd.sys .text:0x449a0, 0x187f8 bytes
    // afd.sys .text:0x15718, 0x15fb8 bytes
    //
    _n77(sdk::unknown_ptr) afdetw_rio_trace_buffer_deregister;
    
    // [AFDETW_RIO_TRACE_BUFFER_REGISTER]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x157ac, 0x15fb8 bytes
    // afd.sys .text:0x44a34, 0x187f8 bytes
    // afd.sys .text:0x157ac, 0x15fb8 bytes
    //
    _n78(sdk::unknown_ptr) afdetw_rio_trace_buffer_register;
    
    // [AFDETW_RIO_TRACE_CQ_CLEANUP]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x158d4, 0x15fb8 bytes
    // afd.sys .text:0x44b5c, 0x187f8 bytes
    // afd.sys .text:0x158d4, 0x15fb8 bytes
    //
    _n79(sdk::unknown_ptr) afdetw_rio_trace_cq_cleanup;
    
    // [AFDETW_RIO_TRACE_CQ_CLOSE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15980, 0x15fb8 bytes
    // afd.sys .text:0x44c08, 0x187f8 bytes
    // afd.sys .text:0x15980, 0x15fb8 bytes
    //
    _n80(sdk::unknown_ptr) afdetw_rio_trace_cq_close;
    
    // [AFDETW_RIO_TRACE_CQ_CREATE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15a14, 0x15fb8 bytes
    // afd.sys .text:0x44c9c, 0x187f8 bytes
    // afd.sys .text:0x15a14, 0x15fb8 bytes
    //
    _n81(sdk::unknown_ptr) afdetw_rio_trace_cq_create;
    
    // [AFDETW_RIO_TRACE_CQ_RESIZE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15ba0, 0x15fb8 bytes
    // afd.sys .text:0x44f30, 0x187f8 bytes
    // afd.sys .text:0x15ba0, 0x15fb8 bytes
    //
    _n82(sdk::unknown_ptr) afdetw_rio_trace_cq_resize;
    
    // [AFDETW_RIO_TRACE_REGDOMAIN_CLOSE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15f20, 0x15fb8 bytes
    // afd.sys .text:0x452b0, 0x187f8 bytes
    // afd.sys .text:0x15f20, 0x15fb8 bytes
    //
    _n83(sdk::unknown_ptr) afdetw_rio_trace_regdomain_close;
    
    // [AFDETW_RIO_TRACE_REGDOMAIN_CREATE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15fd0, 0x15fb8 bytes
    // afd.sys .text:0x45360, 0x187f8 bytes
    // afd.sys .text:0x15fd0, 0x15fb8 bytes
    //
    _n84(sdk::unknown_ptr) afdetw_rio_trace_regdomain_create;
    
    // [AFDETW_RIO_TRACE_RQ_CLEANUP]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1609c, 0x15fb8 bytes
    // afd.sys .text:0x45434, 0x187f8 bytes
    // afd.sys .text:0x1609c, 0x15fb8 bytes
    //
    _n85(sdk::unknown_ptr) afdetw_rio_trace_rq_cleanup;
    
    // [AFDETW_RIO_TRACE_RQ_CLOSE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16148, 0x15fb8 bytes
    // afd.sys .text:0x454e0, 0x187f8 bytes
    // afd.sys .text:0x16148, 0x15fb8 bytes
    //
    _n86(sdk::unknown_ptr) afdetw_rio_trace_rq_close;
    
    // [AFDETW_RIO_TRACE_RQ_CREATE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16224, 0x15fb8 bytes
    // afd.sys .text:0x455bc, 0x187f8 bytes
    // afd.sys .text:0x16224, 0x15fb8 bytes
    //
    _n87(sdk::unknown_ptr) afdetw_rio_trace_rq_create;
    
    // [AFDETW_TRACECLEANUP]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2af8, 0x15fb8 bytes
    // afd.sys .text:0xf6f4, 0x187f8 bytes
    // afd.sys .text:0x2af8, 0x15fb8 bytes
    //
    _n88(sdk::unknown_ptr) afdetw_tracecleanup;
    
    // [AFDETW_TRACECLOSE]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x321c, 0x15fb8 bytes
    // afd.sys .text:0x73f0, 0x187f8 bytes
    // afd.sys .text:0x321c, 0x15fb8 bytes
    //
    _n89(sdk::unknown_ptr) afdetw_traceclose;
    
    // [FastWppCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1cbf8, 0x15fb8 bytes
    // afd.sys .text:0x4c0c4, 0x187f8 bytes
    // afd.sys .text:0x1cbf8, 0x15fb8 bytes
    //
    _n90(sdk::unknown_ptr) fast_wpp_callback;
    
    // [FastWppLockCodeSection]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1cc88, 0x15fb8 bytes
    // afd.sys .text:0x4c164, 0x187f8 bytes
    // afd.sys .text:0x1cc88, 0x15fb8 bytes
    //
    _n91(sdk::unknown_ptr) fast_wpp_lock_code_section;
    
    // [FastWppPlaceholder]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77010, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76010, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77010, 0x15fb8 bytes
    //
    _n92(sdk::unknown_ptr) fast_wpp_placeholder;
    
    // [FastWppSectionHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27378, 0x15fb8 bytes
    // afd.sys .data:0x57400, 0x187f8 bytes
    // afd.sys .data:0x27378, 0x15fb8 bytes
    //
    _n93(sdk::unknown_ptr) fast_wpp_section_handle;
    
    // [FastWppSectionLocked]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27370, 0x15fb8 bytes
    // afd.sys .data:0x57408, 0x187f8 bytes
    // afd.sys .data:0x27370, 0x15fb8 bytes
    //
    _n94(sdk::unknown_ptr) fast_wpp_section_locked;
    
    // [FastWppTraceMessage]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ccec, 0x15fb8 bytes
    // afd.sys .text:0x4c1c8, 0x187f8 bytes
    // afd.sys .text:0x1ccec, 0x15fb8 bytes
    //
    _n95(sdk::unknown_ptr) fast_wpp_trace_message;
    
    // [PnlCreateLookasideList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0xb850, 0x15e38 bytes
    // afd.sys .text:0x7cd0, 0x15fb8 bytes
    // afd.sys .text:0x7cd0, 0x15fb8 bytes
    //
    _n96(sdk::unknown_ptr) pnl_create_lookaside_list;
    
    // [PnlDestroyLookasideList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .text:0x1c0e0, 0x15e38 bytes
    // afd.sys .text:0x1cdc0, 0x15fb8 bytes
    // afd.sys .text:0x1cdc0, 0x15fb8 bytes
    //
    _n97(sdk::unknown_ptr) pnl_destroy_lookaside_list;
    
    // [Symbol_StartNameRes]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e378, 0x15fb8 bytes
    // afd.sys .rdata:0x4e5b0, 0x187f8 bytes
    // afd.sys .rdata:0x1e378, 0x15fb8 bytes
    //
    _n98(sdk::unknown_ptr) symbol_start_name_res;
    
    // [Symbol_StartNameResEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1f5e8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f8f0, 0x187f8 bytes
    // afd.sys .rdata:0x1f5e8, 0x15fb8 bytes
    //
    _n99(sdk::unknown_ptr) symbol_start_name_res_event;
    
    // [WINSOCK_SQM]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1dee0, 0x15e38 bytes
    // afd.sys .rdata:0x1e358, 0x15fb8 bytes
    // afd.sys .rdata:0x1e358, 0x15fb8 bytes
    //
    _o00(sdk::unknown_ptr) winsock_sqm;
    
    // [WINSOCK_SQM_ADD_STREAMROW]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1e9a0, 0x15e38 bytes
    // afd.sys .rdata:0x1f4b8, 0x15fb8 bytes
    // afd.sys .rdata:0x1f4b8, 0x15fb8 bytes
    //
    _o01(sdk::unknown_ptr) winsock_sqm_add_streamrow;
    
    // [WINSOCK_SQM_SET_STRING]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // afd.sys .rdata:0x1eab0, 0x15e38 bytes
    // afd.sys .rdata:0x1f5f8, 0x15fb8 bytes
    // afd.sys .rdata:0x1f5f8, 0x15fb8 bytes
    //
    _o02(sdk::unknown_ptr) winsock_sqm_set_string;
    
    // [WPP_7666e162370e319e31d2f7ab18364c6d_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1fce0, 0x15fb8 bytes
    // afd.sys .rdata:0x4ff68, 0x187f8 bytes
    // afd.sys .rdata:0x1fce0, 0x15fb8 bytes
    //
    _o03(sdk::unknown_ptr) wpp_7666e162370e319e31d2f7ab18364c6d_traceguids;
    
    // [WPP_b3e4fcb4d9e0300beecbaab28111b712_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ff50, 0x15fb8 bytes
    // afd.sys .rdata:0x50080, 0x187f8 bytes
    // afd.sys .rdata:0x1ff50, 0x15fb8 bytes
    //
    _o04(sdk::unknown_ptr) wpp_b3e4fcb4d9e0300beecbaab28111b712_traceguids;
    
    // [WPP_dc03c24c58d83380f2a848fed94abe13_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1fd60, 0x15fb8 bytes
    // afd.sys .rdata:0x50030, 0x187f8 bytes
    // afd.sys .rdata:0x1fd60, 0x15fb8 bytes
    //
    _o05(sdk::unknown_ptr) wpp_dc03c24c58d83380f2a848fed94abe13_traceguids;
    
    // [WPP_f3cb9b8b22433cf821a3e7f1d62fcf31_Traceguids]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1fcd0, 0x15fb8 bytes
    // afd.sys .rdata:0x4ff58, 0x187f8 bytes
    // afd.sys .rdata:0x1fcd0, 0x15fb8 bytes
    //
    _o06(sdk::unknown_ptr) wpp_f3cb9b8b22433cf821a3e7f1d62fcf31_traceguids;
    
    // [WPP_SF_DDq]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77540, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76538, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77540, 0x15fb8 bytes
    //
    _o07(sdk::unknown_ptr) wpp_sf_d_dq;
    
    // [WPP_SF_Dl]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x7701c, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x7601c, 0x187f8 bytes
    // afd.sys PAGEWPP:0x7701c, 0x15fb8 bytes
    //
    _o08(sdk::unknown_ptr) wpp_sf_dl;
    
    // [WPP_SF_dldZ]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77938, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76948, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77938, 0x15fb8 bytes
    //
    _o09(sdk::unknown_ptr) wpp_sf_dld_z;
    
    // [WPP_SF_Dq]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x772a4, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x7629c, 0x187f8 bytes
    // afd.sys PAGEWPP:0x772a4, 0x15fb8 bytes
    //
    _o10(sdk::unknown_ptr) wpp_sf_dq;
    
    // [WPP_SF_lll]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77c10, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76c18, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77c10, 0x15fb8 bytes
    //
    _o11(sdk::unknown_ptr) wpp_sf_lll;
    
    // [WPP_SF_lllll]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77c64, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76c6c, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77c64, 0x15fb8 bytes
    //
    _o12(sdk::unknown_ptr) wpp_sf_lllll;
    
    // [WPP_SF_lq]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x772a4, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x7629c, 0x187f8 bytes
    // afd.sys PAGEWPP:0x772a4, 0x15fb8 bytes
    //
    _o13(sdk::unknown_ptr) wpp_sf_lq;
    
    // [WPP_SF_Lqqqq]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77af0, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76af8, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77af0, 0x15fb8 bytes
    //
    _o14(sdk::unknown_ptr) wpp_sf_lqqqq;
    
    // [WPP_SF_Lqsd]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77848, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76858, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77848, 0x15fb8 bytes
    //
    _o15(sdk::unknown_ptr) wpp_sf_lqsd;
    
    // [WPP_SF_lsq]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x772ec, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x762e4, 0x187f8 bytes
    // afd.sys PAGEWPP:0x772ec, 0x15fb8 bytes
    //
    _o16(sdk::unknown_ptr) wpp_sf_lsq;
    
    // [WPP_SF_qDDL]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x782a4, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x772ac, 0x187f8 bytes
    // afd.sys PAGEWPP:0x782a4, 0x15fb8 bytes
    //
    _o17(sdk::unknown_ptr) wpp_sf_q_ddl;
    
    // [WPP_SF_qLD]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77f24, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76f2c, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77f24, 0x15fb8 bytes
    //
    _o18(sdk::unknown_ptr) wpp_sf_q_ld;
    
    // [WPP_SF_qiii]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x7736c, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76364, 0x187f8 bytes
    // afd.sys PAGEWPP:0x7736c, 0x15fb8 bytes
    //
    _o19(sdk::unknown_ptr) wpp_sf_qiii;
    
    // [WPP_SF_qllll]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77cd0, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76cd8, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77cd0, 0x15fb8 bytes
    //
    _o20(sdk::unknown_ptr) wpp_sf_qllll;
    
    // [WPP_SF_qlllls]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77d3c, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76d44, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77d3c, 0x15fb8 bytes
    //
    _o21(sdk::unknown_ptr) wpp_sf_qlllls;
    
    // [WPP_SF_qqLPq]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x78030, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x77038, 0x187f8 bytes
    // afd.sys PAGEWPP:0x78030, 0x15fb8 bytes
    //
    _o22(sdk::unknown_ptr) wpp_sf_qq_l_pq;
    
    // [WPP_SF_qqLLL]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x774d4, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x764cc, 0x187f8 bytes
    // afd.sys PAGEWPP:0x774d4, 0x15fb8 bytes
    //
    _o23(sdk::unknown_ptr) wpp_sf_qq_lll;
    
    // [WPP_SF_qqLP]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77f78, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76f80, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77f78, 0x15fb8 bytes
    //
    _o24(sdk::unknown_ptr) wpp_sf_qq_lp;
    
    // [WPP_SF_qqi]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x780a0, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x770a8, 0x187f8 bytes
    // afd.sys PAGEWPP:0x780a0, 0x15fb8 bytes
    //
    _o25(sdk::unknown_ptr) wpp_sf_qqi;
    
    // [WPP_SF_qqlLL]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77b5c, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76b64, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77b5c, 0x15fb8 bytes
    //
    _o26(sdk::unknown_ptr) wpp_sf_qql_ll;
    
    // [WPP_SF_qqll]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77a90, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76a98, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77a90, 0x15fb8 bytes
    //
    _o27(sdk::unknown_ptr) wpp_sf_qqll;
    
    // [WPP_SF_qqqLi]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x78160, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x77168, 0x187f8 bytes
    // afd.sys PAGEWPP:0x78160, 0x15fb8 bytes
    //
    _o28(sdk::unknown_ptr) wpp_sf_qqq_li;
    
    // [WPP_SF_qqqiL]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x781d0, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x771d8, 0x187f8 bytes
    // afd.sys PAGEWPP:0x781d0, 0x15fb8 bytes
    //
    _o29(sdk::unknown_ptr) wpp_sf_qqqi_l;
    
    // [WPP_SF_qqql]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x78240, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x77248, 0x187f8 bytes
    // afd.sys PAGEWPP:0x78240, 0x15fb8 bytes
    //
    _o30(sdk::unknown_ptr) wpp_sf_qqql;
    
    // [WPP_SF_qslll]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77750, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76760, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77750, 0x15fb8 bytes
    //
    _o31(sdk::unknown_ptr) wpp_sf_qslll;
    
    // [WPP_SF_SLsL]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77598, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76590, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77598, 0x15fb8 bytes
    //
    _o32(sdk::unknown_ptr) wpp_sf_s_ls_l;
    
    // [WPP_SF_SL]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x78350, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x77358, 0x187f8 bytes
    // afd.sys PAGEWPP:0x78350, 0x15fb8 bytes
    //
    _o33(sdk::unknown_ptr) wpp_sf_sl;
    
    // [WPP_SF_SlP]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x77660, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x76658, 0x187f8 bytes
    // afd.sys PAGEWPP:0x77660, 0x15fb8 bytes
    //
    _o34(sdk::unknown_ptr) wpp_sf_sl_p;
    
    // [WPP_SF_Sll]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEWPP:0x776cc, 0x15fb8 bytes
    // afd.sys PAGEWPP:0x766dc, 0x187f8 bytes
    // afd.sys PAGEWPP:0x776cc, 0x15fb8 bytes
    //
    _o35(sdk::unknown_ptr) wpp_sf_sll;
    
    // [WPP_ThisDir_CTLGUID_AfdWppGuid]
    // Ldr = [afd.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dfe0, 0x15fb8 bytes
    // afd.sys .rdata:0x4e300, 0x187f8 bytes
    // afd.sys .rdata:0x1dfe0, 0x15fb8 bytes
    //
    _o36(sdk::unknown_ptr) wpp_this_dir_ctlguid_afd_wpp_guid;
    
    // [ActivityStart]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dfa8, 0x15e38 bytes
    // afd.sys .rdata:0x1e4c8, 0x15fb8 bytes
    // afd.sys .rdata:0x4e760, 0x187f8 bytes
    // afd.sys .rdata:0x1e4c8, 0x15fb8 bytes
    //
    _o37(struct nt::event_descriptor_t*) activity_start;
    
    // [ActivityStop]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dfc8, 0x15e38 bytes
    // afd.sys .rdata:0x1e4e8, 0x15fb8 bytes
    // afd.sys .rdata:0x4e780, 0x187f8 bytes
    // afd.sys .rdata:0x1e4e8, 0x15fb8 bytes
    //
    _o38(struct nt::event_descriptor_t*) activity_stop;
    
    // [AfdAbortConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65a44, 0x15e38 bytes
    // afd.sys PAGEAFD:0x699c0, 0x15fb8 bytes
    // afd.sys .text:0x31694, 0x187f8 bytes
    // afd.sys PAGEAFD:0x699c0, 0x15fb8 bytes
    //
    _o39(sdk::unknown_ptr) afd_abort_connection;
    
    // [AfdAbortTPackets]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c9c4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72548, 0x15fb8 bytes
    // afd.sys .text:0x3b02c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72548, 0x15fb8 bytes
    //
    _o40(sdk::unknown_ptr) afd_abort_t_packets;
    
    // [AfdAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x543d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49270, 0x15fb8 bytes
    // afd.sys .text:0x19c0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49270, 0x15fb8 bytes
    //
    _o41(sdk::unknown_ptr) afd_accept;
    
    // [AfdAcceptCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x56f4, 0x15e38 bytes
    // afd.sys .text:0x11ec, 0x15fb8 bytes
    // afd.sys .text:0x1ed8, 0x187f8 bytes
    // afd.sys .text:0x11ec, 0x15fb8 bytes
    //
    _o42(sdk::unknown_ptr) afd_accept_core;
    
    // [AfdAcquireReadLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1662c, 0x15e38 bytes
    // afd.sys .text:0x10e20, 0x15fb8 bytes
    // afd.sys .text:0x3e840, 0x187f8 bytes
    // afd.sys .text:0x10e20, 0x15fb8 bytes
    //
    _o43(sdk::unknown_ptr) afd_acquire_read_lock;
    
    // [AfdAcquireReadLockAtDpcLevel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9b68, 0x15e38 bytes
    // afd.sys .text:0x2cbc, 0x15fb8 bytes
    // afd.sys .text:0x8364, 0x187f8 bytes
    // afd.sys .text:0x2cbc, 0x15fb8 bytes
    //
    _o44(sdk::unknown_ptr) afd_acquire_read_lock_at_dpc_level;
    
    // [AfdAcquireWriteLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb4e0, 0x15e38 bytes
    // afd.sys .text:0x839c, 0x15fb8 bytes
    // afd.sys .text:0x1a42c, 0x187f8 bytes
    // afd.sys .text:0x839c, 0x15fb8 bytes
    //
    _o45(sdk::unknown_ptr) afd_acquire_write_lock;
    
    // [AfdActiveTransmitFileCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275a8, 0x15e38 bytes
    // afd.sys .data:0x27628, 0x15fb8 bytes
    // afd.sys .data:0x576d8, 0x187f8 bytes
    // afd.sys .data:0x27628, 0x15fb8 bytes
    //
    _o46(sdk::unknown_ptr) afd_active_transmit_file_count;
    
    // [AfdAddAddressHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35930, 0x15e38 bytes
    // afd.sys PAGE:0x355c0, 0x15fb8 bytes
    // afd.sys PAGE:0x63460, 0x187f8 bytes
    // afd.sys PAGE:0x355c0, 0x15fb8 bytes
    //
    _o47(sdk::unknown_ptr) afd_add_address_handler;
    
    // [AfdAddConnectedReference]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x467a4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53f08, 0x15fb8 bytes
    // afd.sys .text:0x51a4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53f08, 0x15fb8 bytes
    //
    _o48(sdk::unknown_ptr) afd_add_connected_reference;
    
    // [AfdAddConnectionToTimerWheel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xab20, 0x15e38 bytes
    // afd.sys .text:0x6a8c, 0x15fb8 bytes
    // afd.sys .text:0x19200, 0x187f8 bytes
    // afd.sys .text:0x6a8c, 0x15fb8 bytes
    //
    _o49(sdk::unknown_ptr) afd_add_connection_to_timer_wheel;
    
    // [AfdAddFreeConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3b5ec, 0x15e38 bytes
    // afd.sys PAGE:0x3c2a4, 0x15fb8 bytes
    // afd.sys PAGE:0x6a0bc, 0x187f8 bytes
    // afd.sys PAGE:0x3c2a4, 0x15fb8 bytes
    //
    _o50(sdk::unknown_ptr) afd_add_free_connection;
    
    // [AfdAddressListChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x520a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x55b50, 0x15fb8 bytes
    // afd.sys .text:0x3260, 0x187f8 bytes
    // afd.sys PAGEAFD:0x55b50, 0x15fb8 bytes
    //
    _o51(sdk::unknown_ptr) afd_address_list_change;
    
    // [AfdAddressListQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33a70, 0x15e38 bytes
    // afd.sys PAGE:0x33730, 0x15fb8 bytes
    // afd.sys PAGE:0x608a0, 0x187f8 bytes
    // afd.sys PAGE:0x33730, 0x15fb8 bytes
    //
    _o52(sdk::unknown_ptr) afd_address_list_query;
    
    // [AfdAdminSecurityDescriptor]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27860, 0x15e38 bytes
    // afd.sys .data:0x27900, 0x15fb8 bytes
    // afd.sys .data:0x57970, 0x187f8 bytes
    // afd.sys .data:0x27900, 0x15fb8 bytes
    //
    _o53(sdk::unknown_ptr) afd_admin_security_descriptor;
    
    // [AfdAdvanceMdlChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x552d8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c704, 0x15fb8 bytes
    // afd.sys .text:0x33ce0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c704, 0x15fb8 bytes
    //
    _o54(sdk::unknown_ptr) afd_advance_mdl_chain;
    
    // [AfdAlignmentOverhead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2758c, 0x15e38 bytes
    // afd.sys .data:0x2760c, 0x15fb8 bytes
    // afd.sys .data:0x57660, 0x187f8 bytes
    // afd.sys .data:0x2760c, 0x15fb8 bytes
    //
    _o55(sdk::unknown_ptr) afd_alignment_overhead;
    
    // [AfdAlignmentTableSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27588, 0x15e38 bytes
    // afd.sys .data:0x27608, 0x15fb8 bytes
    // afd.sys .data:0x5765c, 0x187f8 bytes
    // afd.sys .data:0x27608, 0x15fb8 bytes
    //
    _o56(sdk::unknown_ptr) afd_alignment_table_size;
    
    // [AfdAllocateBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47d70, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56910, 0x15fb8 bytes
    // afd.sys .text:0x14b50, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56910, 0x15fb8 bytes
    //
    _o57(sdk::unknown_ptr) afd_allocate_buffer;
    
    // [AfdAllocateBufferTag]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x473c0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58450, 0x15fb8 bytes
    // afd.sys .text:0x16690, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58450, 0x15fb8 bytes
    //
    _o58(sdk::unknown_ptr) afd_allocate_buffer_tag;
    
    // [AfdAllocateEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30df0, 0x15e38 bytes
    // afd.sys PAGE:0x32840, 0x15fb8 bytes
    // afd.sys PAGE:0x61ee0, 0x187f8 bytes
    // afd.sys PAGE:0x32840, 0x15fb8 bytes
    //
    _o59(sdk::unknown_ptr) afd_allocate_endpoint;
    
    // [AfdAllocateMdlChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4db00, 0x15e38 bytes
    // afd.sys PAGEAFD:0x51e80, 0x15fb8 bytes
    // afd.sys .text:0x11040, 0x187f8 bytes
    // afd.sys PAGEAFD:0x51e80, 0x15fb8 bytes
    //
    _o60(sdk::unknown_ptr) afd_allocate_mdl_chain;
    
    // [AfdAllocateMdlChain32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x529c4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58220, 0x15fb8 bytes
    // afd.sys .text:0x12310, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58220, 0x15fb8 bytes
    //
    _o61(sdk::unknown_ptr) afd_allocate_mdl_chain32;
    
    // [AfdAllocateRemoteAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46000, 0x15e38 bytes
    // afd.sys PAGEAFD:0x586d0, 0x15fb8 bytes
    // afd.sys .text:0x17250, 0x187f8 bytes
    // afd.sys PAGEAFD:0x586d0, 0x15fb8 bytes
    //
    _o62(sdk::unknown_ptr) afd_allocate_remote_address;
    
    // [AfdAllocateTpInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6cbb0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x727b0, 0x15fb8 bytes
    // afd.sys .text:0x3b2a0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x727b0, 0x15fb8 bytes
    //
    _o63(sdk::unknown_ptr) afd_allocate_tp_info;
    
    // [AfdAllowedUserIOControlRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4978, 0x15e38 bytes
    // afd.sys .text:0x30d0, 0x15fb8 bytes
    // afd.sys .text:0x8050, 0x187f8 bytes
    // afd.sys .text:0x30d0, 0x15fb8 bytes
    //
    _o64(sdk::unknown_ptr) afd_allowed_user_io_control_request;
    
    // [AfdAreTransportAddressesEqual]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64a34, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6886c, 0x15fb8 bytes
    // afd.sys .text:0x2fbec, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6886c, 0x15fb8 bytes
    //
    _o65(sdk::unknown_ptr) afd_are_transport_addresses_equal;
    
    // [AfdBChainedReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b1c0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70470, 0x15fb8 bytes
    // afd.sys .text:0x389d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70470, 0x15fb8 bytes
    //
    _o66(sdk::unknown_ptr) afd_b_chained_receive_event_handler;
    
    // [AfdBCleanupRecvIrpUponDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b240, 0x15e38 bytes
    // afd.sys PAGEAFD:0x704f0, 0x15fb8 bytes
    // afd.sys .text:0x38a50, 0x187f8 bytes
    // afd.sys PAGEAFD:0x704f0, 0x15fb8 bytes
    //
    _o67(sdk::unknown_ptr) afd_b_cleanup_recv_irp_upon_disconnect;
    
    // [AfdBCommonChainedReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4bc10, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c990, 0x15fb8 bytes
    // afd.sys .text:0xddc0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c990, 0x15fb8 bytes
    //
    _o68(sdk::unknown_ptr) afd_b_common_chained_receive_event_handler;
    
    // [AfdBFillPendingIrps]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4c330, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c6fc, 0x15fb8 bytes
    // afd.sys .text:0xe460, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c6fc, 0x15fb8 bytes
    //
    _o69(sdk::unknown_ptr) afd_b_fill_pending_irps;
    
    // [AfdBInitDrainBytesInTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x535e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x583ec, 0x15fb8 bytes
    // afd.sys .text:0x19e1c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x583ec, 0x15fb8 bytes
    //
    _o70(sdk::unknown_ptr) afd_b_init_drain_bytes_in_transport;
    
    // [AfdBPostDrainReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53560, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58198, 0x15fb8 bytes
    // afd.sys .text:0x19d94, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58198, 0x15fb8 bytes
    //
    _o71(sdk::unknown_ptr) afd_b_post_drain_receive;
    
    // [AfdBReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4dc90, 0x15e38 bytes
    // afd.sys PAGEAFD:0x50c80, 0x15fb8 bytes
    // afd.sys .text:0xfe00, 0x187f8 bytes
    // afd.sys PAGEAFD:0x50c80, 0x15fb8 bytes
    //
    _o72(sdk::unknown_ptr) afd_b_receive;
    
    // [AfdBReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x566e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70520, 0x15fb8 bytes
    // afd.sys .text:0x38a80, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70520, 0x15fb8 bytes
    //
    _o73(sdk::unknown_ptr) afd_b_receive_event_handler;
    
    // [AfdBReceiveExpeditedEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b270, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70db0, 0x15fb8 bytes
    // afd.sys .text:0x39310, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70db0, 0x15fb8 bytes
    //
    _o74(sdk::unknown_ptr) afd_b_receive_expedited_event_handler;
    
    // [AfdBeginAbort]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x482f0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4aa80, 0x15fb8 bytes
    // afd.sys .text:0x124bc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4aa80, 0x15fb8 bytes
    //
    _o75(sdk::unknown_ptr) afd_begin_abort;
    
    // [AfdBeginDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4725c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x54978, 0x15fb8 bytes
    // afd.sys .text:0x431c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x54978, 0x15fb8 bytes
    //
    _o76(sdk::unknown_ptr) afd_begin_disconnect;
    
    // [AfdBind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x336c0, 0x15e38 bytes
    // afd.sys PAGE:0x30210, 0x15fb8 bytes
    // afd.sys PAGE:0x60db0, 0x187f8 bytes
    // afd.sys PAGE:0x30210, 0x15fb8 bytes
    //
    _o77(sdk::unknown_ptr) afd_bind;
    
    // [AfdBufferAlignment]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27584, 0x15e38 bytes
    // afd.sys .data:0x27604, 0x15fb8 bytes
    // afd.sys .data:0x57658, 0x187f8 bytes
    // afd.sys .data:0x27604, 0x15fb8 bytes
    //
    _o78(sdk::unknown_ptr) afd_buffer_alignment;
    
    // [AfdBufferReceiveDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x29a4, 0x15e38 bytes
    // afd.sys .text:0x28c0, 0x15fb8 bytes
    // afd.sys .text:0xd310, 0x187f8 bytes
    // afd.sys .text:0x28c0, 0x15fb8 bytes
    //
    _o79(sdk::unknown_ptr) afd_buffer_receive_datagram;
    
    // [AfdBufferTagSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b00, 0x15e38 bytes
    // afd.sys .data:0x27c54, 0x15fb8 bytes
    // afd.sys .data:0x57cc4, 0x187f8 bytes
    // afd.sys .data:0x27c54, 0x15fb8 bytes
    //
    _o80(sdk::unknown_ptr) afd_buffer_tag_size;
    
    // [AfdBuildDeviceAcl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7b24c, 0x15e38 bytes
    // afd.sys INIT:0x854ec, 0x15fb8 bytes
    // afd.sys INIT:0x84344, 0x187f8 bytes
    // afd.sys INIT:0x854ec, 0x15fb8 bytes
    //
    _o81(sdk::unknown_ptr) afd_build_device_acl;
    
    // [AfdBuildPacketChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e348, 0x15e38 bytes
    // afd.sys PAGE:0x3fab8, 0x15fb8 bytes
    // afd.sys PAGE:0x6dc30, 0x187f8 bytes
    // afd.sys PAGE:0x3fab8, 0x15fb8 bytes
    //
    _o82(sdk::unknown_ptr) afd_build_packet_chain;
    
    // [AfdBuildSendMsgTracker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34f38, 0x15e38 bytes
    // afd.sys PAGE:0x35330, 0x15fb8 bytes
    // afd.sys PAGE:0x64d1c, 0x187f8 bytes
    // afd.sys PAGE:0x35330, 0x15fb8 bytes
    //
    _o83(sdk::unknown_ptr) afd_build_send_msg_tracker;
    
    // [AfdCachedPollDerefFileObjects]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6a068, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6ee70, 0x15fb8 bytes
    // afd.sys .text:0x379fc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6ee70, 0x15fb8 bytes
    //
    _o84(sdk::unknown_ptr) afd_cached_poll_deref_file_objects;
    
    // [AfdCalcBufferArrayByteLength]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34508, 0x15e38 bytes
    // afd.sys PAGE:0x301cc, 0x15fb8 bytes
    // afd.sys .text:0x89a0, 0x187f8 bytes
    // afd.sys PAGE:0x301cc, 0x15fb8 bytes
    //
    _o85(sdk::unknown_ptr) afd_calc_buffer_array_byte_length;
    
    // [AfdCalculateBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47cd0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56cbc, 0x15fb8 bytes
    // afd.sys .text:0x14ee4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56cbc, 0x15fb8 bytes
    //
    _o86(sdk::unknown_ptr) afd_calculate_buffer_size;
    
    // [AfdCancelAddressListChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55330, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e1a0, 0x15fb8 bytes
    // afd.sys .text:0x365e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e1a0, 0x15fb8 bytes
    //
    _o87(sdk::unknown_ptr) afd_cancel_address_list_change;
    
    // [AfdCancelIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67cc4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c79c, 0x15fb8 bytes
    // afd.sys .text:0x33d7c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c79c, 0x15fb8 bytes
    //
    _o88(sdk::unknown_ptr) afd_cancel_irp;
    
    // [AfdCancelISBChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f1d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75d00, 0x15fb8 bytes
    // afd.sys .text:0x430f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75d00, 0x15fb8 bytes
    //
    _o89(sdk::unknown_ptr) afd_cancel_isb_change;
    
    // [AfdCancelPoll]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55520, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6eed0, 0x15fb8 bytes
    // afd.sys .text:0x37a60, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6eed0, 0x15fb8 bytes
    //
    _o90(sdk::unknown_ptr) afd_cancel_poll;
    
    // [AfdCancelReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b280, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70e00, 0x15fb8 bytes
    // afd.sys .text:0x39360, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70e00, 0x15fb8 bytes
    //
    _o91(sdk::unknown_ptr) afd_cancel_receive;
    
    // [AfdCancelReceiveDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ace0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58c00, 0x15fb8 bytes
    // afd.sys .text:0x17680, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58c00, 0x15fb8 bytes
    //
    _o92(sdk::unknown_ptr) afd_cancel_receive_datagram;
    
    // [AfdCancelRouteChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69220, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e3b0, 0x15fb8 bytes
    // afd.sys .text:0x367e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e3b0, 0x15fb8 bytes
    //
    _o93(sdk::unknown_ptr) afd_cancel_route_change;
    
    // [AfdCancelSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b890, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71430, 0x15fb8 bytes
    // afd.sys .text:0x39b10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71430, 0x15fb8 bytes
    //
    _o94(sdk::unknown_ptr) afd_cancel_send;
    
    // [AfdCancelSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x63e50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58580, 0x15fb8 bytes
    // afd.sys .text:0x17740, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58580, 0x15fb8 bytes
    //
    _o95(sdk::unknown_ptr) afd_cancel_super_accept;
    
    // [AfdCancelTPackets]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6cbf0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x727f0, 0x15fb8 bytes
    // afd.sys .text:0x3b2e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x727f0, 0x15fb8 bytes
    //
    _o96(sdk::unknown_ptr) afd_cancel_t_packets;
    
    // [AfdCancelWaitForListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65f50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6a1b0, 0x15fb8 bytes
    // afd.sys .text:0x322b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6a1b0, 0x15fb8 bytes
    //
    _o97(sdk::unknown_ptr) afd_cancel_wait_for_listen;
    
    // [AfdCaptureCreatorSD]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bd00, 0x15e38 bytes
    // afd.sys PAGE:0x32c5c, 0x15fb8 bytes
    // afd.sys PAGE:0x622c4, 0x187f8 bytes
    // afd.sys PAGE:0x32c5c, 0x15fb8 bytes
    //
    _o98(sdk::unknown_ptr) afd_capture_creator_sd;
    
    // [AfdCheckAndReferenceConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3ad0, 0x15e38 bytes
    // afd.sys .text:0x20f4, 0x15fb8 bytes
    // afd.sys .text:0xe40c, 0x187f8 bytes
    // afd.sys .text:0x20f4, 0x15fb8 bytes
    //
    _o99(sdk::unknown_ptr) afd_check_and_reference_connection;
    
    // [AfdCheckISBEvents]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51fbc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x550f8, 0x15fb8 bytes
    // afd.sys .text:0x3ed4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x550f8, 0x15fb8 bytes
    //
    _p00(sdk::unknown_ptr) afd_check_isb_events;
    
    // [AfdCheckPollEvents]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x509f0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57514, 0x15fb8 bytes
    // afd.sys .text:0x15794, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57514, 0x15fb8 bytes
    //
    _p01(sdk::unknown_ptr) afd_check_poll_events;
    
    // [AfdCheckTDIFilter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2f60, 0x15e38 bytes
    // afd.sys .text:0x331c, 0x15fb8 bytes
    // afd.sys .text:0x7144, 0x187f8 bytes
    // afd.sys .text:0x331c, 0x15fb8 bytes
    //
    _p02(sdk::unknown_ptr) afd_check_tdi_filter;
    
    // [AfdCleanupAddressListChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4bf0, 0x15e38 bytes
    // afd.sys .text:0x1010, 0x15fb8 bytes
    // afd.sys .text:0x16b60, 0x187f8 bytes
    // afd.sys .text:0x1010, 0x15fb8 bytes
    //
    _p03(sdk::unknown_ptr) afd_cleanup_address_list_change;
    
    // [AfdCleanupCompartment]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bc3c, 0x15e38 bytes
    // afd.sys PAGE:0x3ca2c, 0x15fb8 bytes
    // afd.sys PAGE:0x6a7b8, 0x187f8 bytes
    // afd.sys PAGE:0x3ca2c, 0x15fb8 bytes
    //
    _p04(sdk::unknown_ptr) afd_cleanup_compartment;
    
    // [AfdCleanupCompartmentWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bcc0, 0x15e38 bytes
    // afd.sys PAGE:0x3cae0, 0x15fb8 bytes
    // afd.sys PAGE:0x6a860, 0x187f8 bytes
    // afd.sys PAGE:0x3cae0, 0x15fb8 bytes
    //
    _p05(sdk::unknown_ptr) afd_cleanup_compartment_worker;
    
    // [AfdCleanupConnectionTimerWheelEntry]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x330c, 0x15e38 bytes
    // afd.sys .text:0x5744, 0x15fb8 bytes
    // afd.sys .text:0x11f14, 0x187f8 bytes
    // afd.sys .text:0x5744, 0x15fb8 bytes
    //
    _p06(sdk::unknown_ptr) afd_cleanup_connection_timer_wheel_entry;
    
    // [AfdCleanupCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x486c0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4f46c, 0x15fb8 bytes
    // afd.sys .text:0xef48, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4f46c, 0x15fb8 bytes
    //
    _p07(sdk::unknown_ptr) afd_cleanup_core;
    
    // [AfdCleanupISBChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f280, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75de0, 0x15fb8 bytes
    // afd.sys .text:0x431d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75de0, 0x15fb8 bytes
    //
    _p08(sdk::unknown_ptr) afd_cleanup_isb_change;
    
    // [AfdCleanupPacketChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ce10, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72af8, 0x15fb8 bytes
    // afd.sys .text:0x3b5e4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72af8, 0x15fb8 bytes
    //
    _p09(sdk::unknown_ptr) afd_cleanup_packet_chain;
    
    // [AfdCleanupReceiveDatagramIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53030, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57bb0, 0x15fb8 bytes
    // afd.sys .text:0x162e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57bb0, 0x15fb8 bytes
    //
    _p10(sdk::unknown_ptr) afd_cleanup_receive_datagram_irp;
    
    // [AfdCleanupRouteChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x692e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e4b0, 0x15fb8 bytes
    // afd.sys .text:0x368e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e4b0, 0x15fb8 bytes
    //
    _p11(sdk::unknown_ptr) afd_cleanup_route_change;
    
    // [AfdCleanupSendIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x165a0, 0x15e38 bytes
    // afd.sys .text:0x10d50, 0x15fb8 bytes
    // afd.sys .text:0x39bf0, 0x187f8 bytes
    // afd.sys .text:0x10d50, 0x15fb8 bytes
    //
    _p12(sdk::unknown_ptr) afd_cleanup_send_irp;
    
    // [AfdCleanupSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x5546c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x585f0, 0x15fb8 bytes
    // afd.sys .text:0x177b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x585f0, 0x15fb8 bytes
    //
    _p13(sdk::unknown_ptr) afd_cleanup_super_accept;
    
    // [AfdClose]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x31178, 0x15e38 bytes
    // afd.sys PAGE:0x322e4, 0x15fb8 bytes
    // afd.sys PAGE:0x61998, 0x187f8 bytes
    // afd.sys PAGE:0x322e4, 0x15fb8 bytes
    //
    _p14(sdk::unknown_ptr) afd_close;
    
    // [AfdCloseConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48d54, 0x15e38 bytes
    // afd.sys PAGEAFD:0x5292c, 0x15fb8 bytes
    // afd.sys .text:0x65f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x5292c, 0x15fb8 bytes
    //
    _p15(sdk::unknown_ptr) afd_close_connection;
    
    // [AfdCloseCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x311c0, 0x15e38 bytes
    // afd.sys PAGE:0x32330, 0x15fb8 bytes
    // afd.sys PAGE:0x619e4, 0x187f8 bytes
    // afd.sys PAGE:0x32330, 0x15fb8 bytes
    //
    _p16(sdk::unknown_ptr) afd_close_core;
    
    // [AfdCloseRouteChangeNotifyHandles]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d638, 0x15e38 bytes
    // afd.sys PAGE:0x3e984, 0x15fb8 bytes
    // afd.sys PAGE:0x6cc48, 0x187f8 bytes
    // afd.sys PAGE:0x3e984, 0x15fb8 bytes
    //
    _p17(sdk::unknown_ptr) afd_close_route_change_notify_handles;
    
    // [AfdCloseTransportEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30790, 0x15e38 bytes
    // afd.sys PAGE:0x32d38, 0x15fb8 bytes
    // afd.sys PAGE:0x6143c, 0x187f8 bytes
    // afd.sys PAGE:0x32d38, 0x15fb8 bytes
    //
    _p18(sdk::unknown_ptr) afd_close_transport_endpoint;
    
    // [AfdCommonAddAddressHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35f2c, 0x15e38 bytes
    // afd.sys PAGE:0x35bd0, 0x15fb8 bytes
    // afd.sys PAGE:0x6390c, 0x187f8 bytes
    // afd.sys PAGE:0x35bd0, 0x15fb8 bytes
    //
    _p19(sdk::unknown_ptr) afd_common_add_address_handler;
    
    // [AfdCommonDelAddressHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35968, 0x15e38 bytes
    // afd.sys PAGE:0x35600, 0x15fb8 bytes
    // afd.sys PAGE:0x631c0, 0x187f8 bytes
    // afd.sys PAGE:0x35600, 0x15fb8 bytes
    //
    _p20(sdk::unknown_ptr) afd_common_del_address_handler;
    
    // [AfdCommonDisconnectEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4fb40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4aecc, 0x15fb8 bytes
    // afd.sys .text:0x11fac, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4aecc, 0x15fb8 bytes
    //
    _p21(sdk::unknown_ptr) afd_common_disconnect_event_handler;
    
    // [AfdCommonRestartAbort]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55018, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4a06c, 0x15fb8 bytes
    // afd.sys .text:0x12de0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4a06c, 0x15fb8 bytes
    //
    _p22(sdk::unknown_ptr) afd_common_restart_abort;
    
    // [AfdCommonRestartBufferReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53318, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49d08, 0x15fb8 bytes
    // afd.sys .text:0x19868, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49d08, 0x15fb8 bytes
    //
    _p23(sdk::unknown_ptr) afd_common_restart_buffer_receive;
    
    // [AfdCommonRestartDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52618, 0x15e38 bytes
    // afd.sys PAGEAFD:0x554a8, 0x15fb8 bytes
    // afd.sys .text:0x3fe8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x554a8, 0x15fb8 bytes
    //
    _p24(sdk::unknown_ptr) afd_common_restart_disconnect;
    
    // [AfdCommonRestartTPacketsSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6cfd8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72db0, 0x15fb8 bytes
    // afd.sys .text:0x3b8a4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72db0, 0x15fb8 bytes
    //
    _p25(sdk::unknown_ptr) afd_common_restart_t_packets_send;
    
    // [AfdCommonRestartTPDetachedSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6cf50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72d20, 0x15fb8 bytes
    // afd.sys .text:0x3b814, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72d20, 0x15fb8 bytes
    //
    _p26(sdk::unknown_ptr) afd_common_restart_tp_detached_send;
    
    // [AfdCompareAddresses]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67d24, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c810, 0x15fb8 bytes
    // afd.sys .text:0x33df0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c810, 0x15fb8 bytes
    //
    _p27(sdk::unknown_ptr) afd_compare_addresses;
    
    // [AfdCompartmentList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275f0, 0x15e38 bytes
    // afd.sys .data:0x27670, 0x15fb8 bytes
    // afd.sys .data:0x57730, 0x187f8 bytes
    // afd.sys .data:0x27670, 0x15fb8 bytes
    //
    _p28(sdk::unknown_ptr) afd_compartment_list;
    
    // [AfdCompleteClosePendedTPackets]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6d1cc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72fb4, 0x15fb8 bytes
    // afd.sys .text:0x3baac, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72fb4, 0x15fb8 bytes
    //
    _p29(sdk::unknown_ptr) afd_complete_close_pended_t_packets;
    
    // [AfdCompleteIrpList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53250, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4add4, 0x15fb8 bytes
    // afd.sys .text:0x11400, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4add4, 0x15fb8 bytes
    //
    _p30(sdk::unknown_ptr) afd_complete_irp_list;
    
    // [AfdCompleteIrpListEx]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3230, 0x15e38 bytes
    // afd.sys .text:0x1da8, 0x15fb8 bytes
    // afd.sys .text:0x1148c, 0x187f8 bytes
    // afd.sys .text:0x1da8, 0x15fb8 bytes
    //
    _p31(sdk::unknown_ptr) afd_complete_irp_list_ex;
    
    // [AfdCompleteISBChangeRequests]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x532bc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49614, 0x15fb8 bytes
    // afd.sys .text:0x1264, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49614, 0x15fb8 bytes
    //
    _p32(sdk::unknown_ptr) afd_complete_isb_change_requests;
    
    // [AfdCompletePollIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51834, 0x15e38 bytes
    // afd.sys PAGEAFD:0x5770c, 0x15fb8 bytes
    // afd.sys .text:0x159bc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x5770c, 0x15fb8 bytes
    //
    _p33(sdk::unknown_ptr) afd_complete_poll_irp;
    
    // [AfdCompleteTPackets]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54eb0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x73140, 0x15fb8 bytes
    // afd.sys .text:0x3bc30, 0x187f8 bytes
    // afd.sys PAGEAFD:0x73140, 0x15fb8 bytes
    //
    _p34(sdk::unknown_ptr) afd_complete_t_packets;
    
    // [AfdCompleteTLEndpCreate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47e34, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4fb1c, 0x15fb8 bytes
    // afd.sys .text:0x8088, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4fb1c, 0x15fb8 bytes
    //
    _p35(sdk::unknown_ptr) afd_complete_tl_endp_create;
    
    // [AfdCompleteTliIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4ff80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x52260, 0x15fb8 bytes
    // afd.sys .text:0x8520, 0x187f8 bytes
    // afd.sys PAGEAFD:0x52260, 0x15fb8 bytes
    //
    _p36(sdk::unknown_ptr) afd_complete_tli_io_control;
    
    // [AfdCompleteTliIoControlCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4ffe0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x522e8, 0x15fb8 bytes
    // afd.sys .text:0x85a8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x522e8, 0x15fb8 bytes
    //
    _p37(sdk::unknown_ptr) afd_complete_tli_io_control_core;
    
    // [AfdComputeCMSGLength]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15fdc, 0x15e38 bytes
    // afd.sys .text:0x103f8, 0x15fb8 bytes
    // afd.sys .text:0x33ef0, 0x187f8 bytes
    // afd.sys .text:0x103f8, 0x15fb8 bytes
    //
    _p38(sdk::unknown_ptr) afd_compute_cmsg_length;
    
    // [AfdComputeCMSGLength32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16058, 0x15e38 bytes
    // afd.sys .text:0x10478, 0x15fb8 bytes
    // afd.sys .text:0x33f70, 0x187f8 bytes
    // afd.sys .text:0x10478, 0x15fb8 bytes
    //
    _p39(sdk::unknown_ptr) afd_compute_cmsg_length32;
    
    // [AfdConfigInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEDATA:0x791c0, 0x15e38 bytes
    // afd.sys PAGEDATA:0x831c0, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x82050, 0x187f8 bytes
    // afd.sys PAGEDATA:0x831c0, 0x15fb8 bytes
    //
    _p40(sdk::unknown_ptr) afd_config_info;
    
    // [AfdConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46a30, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4a1a0, 0x15fb8 bytes
    // afd.sys .text:0x5980, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4a1a0, 0x15fb8 bytes
    //
    _p41(sdk::unknown_ptr) afd_connect;
    
    // [AfdConnectApcKernelRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30710, 0x15e38 bytes
    // afd.sys PAGE:0x34d60, 0x15fb8 bytes
    // afd.sys PAGE:0x62f70, 0x187f8 bytes
    // afd.sys PAGE:0x34d60, 0x15fb8 bytes
    //
    _p42(sdk::unknown_ptr) afd_connect_apc_kernel_routine;
    
    // [AfdConnectApcRundownRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bcd0, 0x15e38 bytes
    // afd.sys PAGE:0x3cb00, 0x15fb8 bytes
    // afd.sys PAGE:0x6a880, 0x187f8 bytes
    // afd.sys PAGE:0x3cb00, 0x15fb8 bytes
    //
    _p43(sdk::unknown_ptr) afd_connect_apc_rundown_routine;
    
    // [AfdConnectEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x66040, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6a300, 0x15fb8 bytes
    // afd.sys .text:0x32400, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6a300, 0x15fb8 bytes
    //
    _p44(sdk::unknown_ptr) afd_connect_event_handler;
    
    // [AfdConnectionsFreeing]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27a90, 0x15e38 bytes
    // afd.sys .data:0x27c50, 0x15fb8 bytes
    // afd.sys .data:0x57cc0, 0x187f8 bytes
    // afd.sys .data:0x27c50, 0x15fb8 bytes
    //
    _p45(sdk::unknown_ptr) afd_connections_freeing;
    
    // [AfdConstrainedEndpointListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274f0, 0x15e38 bytes
    // afd.sys .data:0x27560, 0x15fb8 bytes
    // afd.sys .data:0x575c0, 0x187f8 bytes
    // afd.sys .data:0x27560, 0x15fb8 bytes
    //
    _p46(sdk::unknown_ptr) afd_constrained_endpoint_list_head;
    
    // [AfdContextWaitEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27540, 0x15e38 bytes
    // afd.sys .data:0x275c0, 0x15fb8 bytes
    // afd.sys .data:0x57620, 0x187f8 bytes
    // afd.sys .data:0x275c0, 0x15fb8 bytes
    //
    _p47(sdk::unknown_ptr) afd_context_wait_event;
    
    // [AfdContinueSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53ca0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x561ac, 0x15fb8 bytes
    // afd.sys .text:0x232c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x561ac, 0x15fb8 bytes
    //
    _p48(sdk::unknown_ptr) afd_continue_super_accept;
    
    // [AfdControlGuid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb80, 0x15e38 bytes
    // afd.sys .rdata:0x1f6f8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f9f0, 0x187f8 bytes
    // afd.sys .rdata:0x1f6f8, 0x15fb8 bytes
    //
    _p49(sdk::unknown_ptr) afd_control_guid;
    
    // [AfdCopyBufferArrayToBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x331b0, 0x15e38 bytes
    // afd.sys PAGE:0x32020, 0x15fb8 bytes
    // afd.sys .text:0x33fa8, 0x187f8 bytes
    // afd.sys PAGE:0x32020, 0x15fb8 bytes
    //
    _p50(sdk::unknown_ptr) afd_copy_buffer_array_to_buffer;
    
    // [AfdCopyCMSGBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16090, 0x15e38 bytes
    // afd.sys .text:0x104b0, 0x15fb8 bytes
    // afd.sys .text:0x34074, 0x187f8 bytes
    // afd.sys .text:0x104b0, 0x15fb8 bytes
    //
    _p51(sdk::unknown_ptr) afd_copy_cmsg_buffer;
    
    // [AfdCopyCMSGBuffer32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16150, 0x15e38 bytes
    // afd.sys .text:0x10580, 0x15fb8 bytes
    // afd.sys .text:0x34140, 0x187f8 bytes
    // afd.sys .text:0x10580, 0x15fb8 bytes
    //
    _p52(sdk::unknown_ptr) afd_copy_cmsg_buffer32;
    
    // [AfdCopyMdlChainToBufferArray]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33270, 0x15e38 bytes
    // afd.sys PAGE:0x32100, 0x15fb8 bytes
    // afd.sys .text:0xec1c, 0x187f8 bytes
    // afd.sys PAGE:0x32100, 0x15fb8 bytes
    //
    _p53(sdk::unknown_ptr) afd_copy_mdl_chain_to_buffer_array;
    
    // [AfdCopyMdlChainToBufferAvoidMapping]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3d08, 0x15e38 bytes
    // afd.sys .text:0x6054, 0x15fb8 bytes
    // afd.sys .text:0x1008, 0x187f8 bytes
    // afd.sys .text:0x6054, 0x15fb8 bytes
    //
    _p54(sdk::unknown_ptr) afd_copy_mdl_chain_to_buffer_avoid_mapping;
    
    // [AfdCopyMdlChainToMdlChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x478b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4e8f0, 0x15fb8 bytes
    // afd.sys .text:0x12d80, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4e8f0, 0x15fb8 bytes
    //
    _p55(sdk::unknown_ptr) afd_copy_mdl_chain_to_mdl_chain;
    
    // [AfdCreate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x308d0, 0x15e38 bytes
    // afd.sys PAGE:0x323e8, 0x15fb8 bytes
    // afd.sys PAGE:0x61a98, 0x187f8 bytes
    // afd.sys PAGE:0x323e8, 0x15fb8 bytes
    //
    _p56(sdk::unknown_ptr) afd_create;
    
    // [AfdCreateConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x475a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53f70, 0x15fb8 bytes
    // afd.sys .text:0x6c7c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53f70, 0x15fb8 bytes
    //
    _p57(sdk::unknown_ptr) afd_create_connection;
    
    // [AfdCreateSecurityDescriptor]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7b0e4, 0x15e38 bytes
    // afd.sys INIT:0x85334, 0x15fb8 bytes
    // afd.sys INIT:0x8418c, 0x187f8 bytes
    // afd.sys INIT:0x85334, 0x15fb8 bytes
    //
    _p58(sdk::unknown_ptr) afd_create_security_descriptor;
    
    // [AfdDefaultCompartment]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27768, 0x15e38 bytes
    // afd.sys .data:0x27868, 0x15fb8 bytes
    // afd.sys .data:0x57900, 0x187f8 bytes
    // afd.sys .data:0x27868, 0x15fb8 bytes
    //
    _p59(sdk::unknown_ptr) afd_default_compartment;
    
    // [AfdDefaultQos]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27290, 0x15e38 bytes
    // afd.sys .data:0x272b0, 0x15fb8 bytes
    // afd.sys .data:0x572f0, 0x187f8 bytes
    // afd.sys .data:0x272b0, 0x15fb8 bytes
    //
    _p60(sdk::unknown_ptr) afd_default_qos;
    
    // [AfdDefaultQos32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x272e0, 0x15e38 bytes
    // afd.sys .data:0x27300, 0x15fb8 bytes
    // afd.sys .data:0x57340, 0x187f8 bytes
    // afd.sys .data:0x27300, 0x15fb8 bytes
    //
    _p61(sdk::unknown_ptr) afd_default_qos32;
    
    // [AfdDefaultTpInfoElementCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27278, 0x15e38 bytes
    // afd.sys .data:0x27290, 0x15fb8 bytes
    // afd.sys .data:0x572d4, 0x187f8 bytes
    // afd.sys .data:0x27290, 0x15fb8 bytes
    //
    _p62(sdk::unknown_ptr) afd_default_tp_info_element_count;
    
    // [AfdDefaultTransmitWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27284, 0x15e38 bytes
    // afd.sys .data:0x272a4, 0x15fb8 bytes
    // afd.sys .data:0x572e4, 0x187f8 bytes
    // afd.sys .data:0x272a4, 0x15fb8 bytes
    //
    _p63(sdk::unknown_ptr) afd_default_transmit_worker;
    
    // [AfdDeferAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x63ec0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x67c40, 0x15fb8 bytes
    // afd.sys .text:0x2f140, 0x187f8 bytes
    // afd.sys PAGEAFD:0x67c40, 0x15fb8 bytes
    //
    _p64(sdk::unknown_ptr) afd_defer_accept;
    
    // [AfdDelAddressHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x358f0, 0x15e38 bytes
    // afd.sys PAGE:0x35580, 0x15fb8 bytes
    // afd.sys PAGE:0x63180, 0x187f8 bytes
    // afd.sys PAGE:0x35580, 0x15fb8 bytes
    //
    _p65(sdk::unknown_ptr) afd_del_address_handler;
    
    // [AfdDelayedAcceptListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x66970, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6ae4c, 0x15fb8 bytes
    // afd.sys .text:0x32ec0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6ae4c, 0x15fb8 bytes
    //
    _p66(sdk::unknown_ptr) afd_delayed_accept_listen;
    
    // [AfdDeleteConnectedReference]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48ecc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4b190, 0x15fb8 bytes
    // afd.sys .text:0x11dfc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4b190, 0x15fb8 bytes
    //
    _p67(sdk::unknown_ptr) afd_delete_connected_reference;
    
    // [AfdDequeueISBChangeRequests]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x532ec, 0x15e38 bytes
    // afd.sys PAGEAFD:0x495f8, 0x15fb8 bytes
    // afd.sys .text:0x129c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x495f8, 0x15fb8 bytes
    //
    _p68(sdk::unknown_ptr) afd_dequeue_isb_change_requests;
    
    // [AfdDerefPollInfoFileObjects]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x5190c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x577c0, 0x15fb8 bytes
    // afd.sys .text:0x15a94, 0x187f8 bytes
    // afd.sys PAGEAFD:0x577c0, 0x15fb8 bytes
    //
    _p69(sdk::unknown_ptr) afd_deref_poll_info_file_objects;
    
    // [AfdDereferenceCompartment]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4a28, 0x15e38 bytes
    // afd.sys .text:0x36c4, 0x15fb8 bytes
    // afd.sys .text:0x65a4, 0x187f8 bytes
    // afd.sys .text:0x36c4, 0x15fb8 bytes
    //
    _p70(sdk::unknown_ptr) afd_dereference_compartment;
    
    // [AfdDereferenceGroup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c0c0, 0x15e38 bytes
    // afd.sys PAGE:0x3ceb4, 0x15fb8 bytes
    // afd.sys PAGE:0x6ac44, 0x187f8 bytes
    // afd.sys PAGE:0x3ceb4, 0x15fb8 bytes
    //
    _p71(sdk::unknown_ptr) afd_dereference_group;
    
    // [AfdDeregisterPnPHandlers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d6a4, 0x15e38 bytes
    // afd.sys PAGE:0x3ea08, 0x15fb8 bytes
    // afd.sys PAGE:0x6cccc, 0x187f8 bytes
    // afd.sys PAGE:0x3ea08, 0x15fb8 bytes
    //
    _p72(sdk::unknown_ptr) afd_deregister_pn_p_handlers;
    
    // [AfdDestroyMdlChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4e34, 0x15e38 bytes
    // afd.sys .text:0x621c, 0x15fb8 bytes
    // afd.sys .text:0x10d8, 0x187f8 bytes
    // afd.sys .text:0x621c, 0x15fb8 bytes
    //
    _p73(sdk::unknown_ptr) afd_destroy_mdl_chain;
    
    // [AfdDeviceObject]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27750, 0x15e38 bytes
    // afd.sys .data:0x277d0, 0x15fb8 bytes
    // afd.sys .data:0x57850, 0x187f8 bytes
    // afd.sys .data:0x277d0, 0x15fb8 bytes
    //
    _p74(sdk::unknown_ptr) afd_device_object;
    
    // [AfdDisableChainedReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27859, 0x15e38 bytes
    // afd.sys .data:0x278f8, 0x15fb8 bytes
    // afd.sys .data:0x57969, 0x187f8 bytes
    // afd.sys .data:0x278f8, 0x15fb8 bytes
    //
    _p75(sdk::unknown_ptr) afd_disable_chained_receive;
    
    // [AfdDisableDirectSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27790, 0x15e38 bytes
    // afd.sys .data:0x278c0, 0x15fb8 bytes
    // afd.sys .data:0x57950, 0x187f8 bytes
    // afd.sys .data:0x278c0, 0x15fb8 bytes
    //
    _p76(sdk::unknown_ptr) afd_disable_direct_super_accept;
    
    // [AfdDisableRawSecurity]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2785a, 0x15e38 bytes
    // afd.sys .data:0x278f9, 0x15fb8 bytes
    // afd.sys .data:0x5796a, 0x187f8 bytes
    // afd.sys .data:0x278f9, 0x15fb8 bytes
    //
    _p77(sdk::unknown_ptr) afd_disable_raw_security;
    
    // [AfdDisconnectEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65b60, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69b00, 0x15fb8 bytes
    // afd.sys .text:0x317d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69b00, 0x15fb8 bytes
    //
    _p78(sdk::unknown_ptr) afd_disconnect_event_handler;
    
    // [AfdDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47e90, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4fb80, 0x15fb8 bytes
    // afd.sys .text:0x80e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4fb80, 0x15fb8 bytes
    //
    _p79(sdk::unknown_ptr) afd_dispatch;
    
    // [AfdDispatchDeviceControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4d460, 0x15e38 bytes
    // afd.sys PAGEAFD:0x567a0, 0x15fb8 bytes
    // afd.sys .text:0x13730, 0x187f8 bytes
    // afd.sys PAGEAFD:0x567a0, 0x15fb8 bytes
    //
    _p80(sdk::unknown_ptr) afd_dispatch_device_control;
    
    // [AfdDispatchImmediateIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15cc0, 0x15e38 bytes
    // afd.sys .text:0xfe00, 0x15fb8 bytes
    // afd.sys .text:0x319f0, 0x187f8 bytes
    // afd.sys .text:0xfe00, 0x15fb8 bytes
    //
    _p81(sdk::unknown_ptr) afd_dispatch_immediate_irp;
    
    // [AfdDoDatagramConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55bd0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x5937c, 0x15fb8 bytes
    // afd.sys .text:0x2c08, 0x187f8 bytes
    // afd.sys PAGEAFD:0x5937c, 0x15fb8 bytes
    //
    _p82(sdk::unknown_ptr) afd_do_datagram_connect;
    
    // [AfdDoListenBacklogReplenish]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x640c0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x67ec0, 0x15fb8 bytes
    // afd.sys .text:0x2f3d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x67ec0, 0x15fb8 bytes
    //
    _p83(sdk::unknown_ptr) afd_do_listen_backlog_replenish;
    
    // [AfdDoMdlReadComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e9e0, 0x15e38 bytes
    // afd.sys PAGE:0x404b0, 0x15fb8 bytes
    // afd.sys PAGE:0x6e610, 0x187f8 bytes
    // afd.sys PAGE:0x404b0, 0x15fb8 bytes
    //
    _p84(sdk::unknown_ptr) afd_do_mdl_read_complete;
    
    // [AfdDoNotHoldNICBuffers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2786c, 0x15e38 bytes
    // afd.sys .data:0x2790c, 0x15fb8 bytes
    // afd.sys .data:0x5797c, 0x187f8 bytes
    // afd.sys .data:0x2790c, 0x15fb8 bytes
    //
    _p85(sdk::unknown_ptr) afd_do_not_hold_nic_buffers;
    
    // [AfdDoWork]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2e50, 0x15e38 bytes
    // afd.sys .text:0x53f0, 0x15fb8 bytes
    // afd.sys .text:0x15b60, 0x187f8 bytes
    // afd.sys .text:0x53f0, 0x15fb8 bytes
    //
    _p86(sdk::unknown_ptr) afd_do_work;
    
    // [AfdDontCareIoStatus]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27600, 0x15e38 bytes
    // afd.sys .data:0x27680, 0x15fb8 bytes
    // afd.sys .data:0x57740, 0x187f8 bytes
    // afd.sys .data:0x27680, 0x15fb8 bytes
    //
    _p87(sdk::unknown_ptr) afd_dont_care_io_status;
    
    // [AfdDynamicSendBufferDisabled]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27aa0, 0x15e38 bytes
    // afd.sys .data:0x27be0, 0x15fb8 bytes
    // afd.sys .data:0x57c60, 0x187f8 bytes
    // afd.sys .data:0x27be0, 0x15fb8 bytes
    //
    _p88(sdk::unknown_ptr) afd_dynamic_send_buffer_disabled;
    
    // [AfdEmptySd]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275c0, 0x15e38 bytes
    // afd.sys .data:0x27640, 0x15fb8 bytes
    // afd.sys .data:0x57700, 0x187f8 bytes
    // afd.sys .data:0x27640, 0x15fb8 bytes
    //
    _p89(sdk::unknown_ptr) afd_empty_sd;
    
    // [AfdEnableFailedConnectEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x467dc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53ea0, 0x15fb8 bytes
    // afd.sys .text:0x6a34, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53ea0, 0x15fb8 bytes
    //
    _p90(sdk::unknown_ptr) afd_enable_failed_connect_event;
    
    // [AfdEndpointCreateGuid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ebb0, 0x15e38 bytes
    // afd.sys .rdata:0x1fd30, 0x15fb8 bytes
    // afd.sys .rdata:0x4ff88, 0x187f8 bytes
    // afd.sys .rdata:0x1fd30, 0x15fb8 bytes
    //
    _p91(sdk::unknown_ptr) afd_endpoint_create_guid;
    
    // [AfdEndpointListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274e0, 0x15e38 bytes
    // afd.sys .data:0x27550, 0x15fb8 bytes
    // afd.sys .data:0x575b0, 0x187f8 bytes
    // afd.sys .data:0x27550, 0x15fb8 bytes
    //
    _p92(sdk::unknown_ptr) afd_endpoint_list_head;
    
    // [AfdEndpointsCleanedUp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278e4, 0x15e38 bytes
    // afd.sys .data:0x27998, 0x15fb8 bytes
    // afd.sys .data:0x57a10, 0x187f8 bytes
    // afd.sys .data:0x27998, 0x15fb8 bytes
    //
    _p93(sdk::unknown_ptr) afd_endpoints_cleaned_up;
    
    // [AfdEndpointsClosed]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278e0, 0x15e38 bytes
    // afd.sys .data:0x27994, 0x15fb8 bytes
    // afd.sys .data:0x57a0c, 0x187f8 bytes
    // afd.sys .data:0x27994, 0x15fb8 bytes
    //
    _p94(sdk::unknown_ptr) afd_endpoints_closed;
    
    // [AfdEndpointsFreeing]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278ec, 0x15e38 bytes
    // afd.sys .data:0x27990, 0x15fb8 bytes
    // afd.sys .data:0x57a08, 0x187f8 bytes
    // afd.sys .data:0x27990, 0x15fb8 bytes
    //
    _p95(sdk::unknown_ptr) afd_endpoints_freeing;
    
    // [AfdEndpointsOpened]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278e8, 0x15e38 bytes
    // afd.sys .data:0x2799c, 0x15fb8 bytes
    // afd.sys .data:0x57a14, 0x187f8 bytes
    // afd.sys .data:0x2799c, 0x15fb8 bytes
    //
    _p96(sdk::unknown_ptr) afd_endpoints_opened;
    
    // [AfdEnqueueTPacketsIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6d2d8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x737b8, 0x15fb8 bytes
    // afd.sys .text:0x3c2a4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x737b8, 0x15fb8 bytes
    //
    _p97(sdk::unknown_ptr) afd_enqueue_t_packets_irp;
    
    // [AfdEnqueueTpSendIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6d37c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x73884, 0x15fb8 bytes
    // afd.sys .text:0x3c370, 0x187f8 bytes
    // afd.sys PAGEAFD:0x73884, 0x15fb8 bytes
    //
    _p98(sdk::unknown_ptr) afd_enqueue_tp_send_irp;
    
    // [AfdEnumNetworkEvents]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52d50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x59190, 0x15fb8 bytes
    // afd.sys .text:0x15c80, 0x187f8 bytes
    // afd.sys PAGEAFD:0x59190, 0x15fb8 bytes
    //
    _p99(sdk::unknown_ptr) afd_enum_network_events;
    
    // [AfdEqualPrefixBits]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x163fc, 0x15e38 bytes
    // afd.sys .text:0x108f0, 0x15fb8 bytes
    // afd.sys .text:0x36970, 0x187f8 bytes
    // afd.sys .text:0x108f0, 0x15fb8 bytes
    //
    _q00(sdk::unknown_ptr) afd_equal_prefix_bits;
    
    // [AfdErrorEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67e20, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c910, 0x15fb8 bytes
    // afd.sys .text:0x341e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c910, 0x15fb8 bytes
    //
    _q01(sdk::unknown_ptr) afd_error_event_handler;
    
    // [AfdErrorExEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67e70, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c990, 0x15fb8 bytes
    // afd.sys .text:0x34280, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c990, 0x15fb8 bytes
    //
    _q02(sdk::unknown_ptr) afd_error_ex_event_handler;
    
    // [AfdEtwDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43ec0, 0x15e38 bytes
    // afd.sys PAGE:0x468f0, 0x15fb8 bytes
    // afd.sys PAGE:0x74880, 0x187f8 bytes
    // afd.sys PAGE:0x468f0, 0x15fb8 bytes
    //
    _q03(sdk::unknown_ptr) afd_etw_dispatch;
    
    // [AfdEtwEventCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43f80, 0x15e38 bytes
    // afd.sys PAGE:0x469c0, 0x15fb8 bytes
    // afd.sys PAGE:0x74950, 0x187f8 bytes
    // afd.sys PAGE:0x469c0, 0x15fb8 bytes
    //
    _q04(sdk::unknown_ptr) afd_etw_event_callback;
    
    // [AfdEtwInitLog]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x355f4, 0x15e38 bytes
    // afd.sys PAGE:0x363fc, 0x15fb8 bytes
    // afd.sys PAGE:0x640ec, 0x187f8 bytes
    // afd.sys PAGE:0x363fc, 0x15fb8 bytes
    //
    _q05(sdk::unknown_ptr) afd_etw_init_log;
    
    // [AfdEtwRegisterGuids]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43f90, 0x15e38 bytes
    // afd.sys PAGE:0x469d8, 0x15fb8 bytes
    // afd.sys PAGE:0x74968, 0x187f8 bytes
    // afd.sys PAGE:0x469d8, 0x15fb8 bytes
    //
    _q06(sdk::unknown_ptr) afd_etw_register_guids;
    
    // [AfdEtwTraceEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19b5c, 0x15e38 bytes
    // afd.sys .text:0x1464c, 0x15fb8 bytes
    // afd.sys .text:0x437e8, 0x187f8 bytes
    // afd.sys .text:0x1464c, 0x15fb8 bytes
    //
    _q07(sdk::unknown_ptr) afd_etw_trace_event;
    
    // [AfdEtwTransGuid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df98, 0x15e38 bytes
    // afd.sys .rdata:0x1f708, 0x15fb8 bytes
    // afd.sys .rdata:0x4fa00, 0x187f8 bytes
    // afd.sys .rdata:0x1f708, 0x15fb8 bytes
    //
    _q08(sdk::unknown_ptr) afd_etw_trans_guid;
    
    // [AfdEtwUnRegisterLog]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x440c4, 0x15e38 bytes
    // afd.sys PAGE:0x46b14, 0x15fb8 bytes
    // afd.sys PAGE:0x74aa4, 0x187f8 bytes
    // afd.sys PAGE:0x46b14, 0x15fb8 bytes
    //
    _q09(sdk::unknown_ptr) afd_etw_un_register_log;
    
    // [AFD_EVENT_ABORT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e068, 0x15e38 bytes
    // afd.sys .rdata:0x1f3b8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f6a0, 0x187f8 bytes
    // afd.sys .rdata:0x1f3b8, 0x15fb8 bytes
    //
    _q10(sdk::unknown_ptr) afd_event_abort;
    
    // [AFD_EVENT_ACCEPT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e9c0, 0x15e38 bytes
    // afd.sys .rdata:0x1f4e8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f7f0, 0x187f8 bytes
    // afd.sys .rdata:0x1f4e8, 0x15fb8 bytes
    //
    _q11(sdk::unknown_ptr) afd_event_accept;
    
    // [AFD_EVENT_ACCEPT_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb30, 0x15e38 bytes
    // afd.sys .rdata:0x1f678, 0x15fb8 bytes
    // afd.sys .rdata:0x4f970, 0x187f8 bytes
    // afd.sys .rdata:0x1f678, 0x15fb8 bytes
    //
    _q12(sdk::unknown_ptr) afd_event_accept_addr;
    
    // [AFD_EVENT_ACCEPTEX]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e098, 0x15e38 bytes
    // afd.sys .rdata:0x1f468, 0x15fb8 bytes
    // afd.sys .rdata:0x4f770, 0x187f8 bytes
    // afd.sys .rdata:0x1f468, 0x15fb8 bytes
    //
    _q13(sdk::unknown_ptr) afd_event_acceptex;
    
    // [AFD_EVENT_ACCEPTEX_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e0b8, 0x15e38 bytes
    // afd.sys .rdata:0x1f588, 0x15fb8 bytes
    // afd.sys .rdata:0x4f890, 0x187f8 bytes
    // afd.sys .rdata:0x1f588, 0x15fb8 bytes
    //
    _q14(sdk::unknown_ptr) afd_event_acceptex_addr;
    
    // [AFD_EVENT_BIND]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e980, 0x15e38 bytes
    // afd.sys .rdata:0x1f498, 0x15fb8 bytes
    // afd.sys .rdata:0x4f7b0, 0x187f8 bytes
    // afd.sys .rdata:0x1f498, 0x15fb8 bytes
    //
    _q15(sdk::unknown_ptr) afd_event_bind;
    
    // [AFD_EVENT_BIND_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e990, 0x15e38 bytes
    // afd.sys .rdata:0x1f4a8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f7c0, 0x187f8 bytes
    // afd.sys .rdata:0x1f4a8, 0x15fb8 bytes
    //
    _q16(sdk::unknown_ptr) afd_event_bind_addr;
    
    // [AFD_EVENT_CLEANUP]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e088, 0x15e38 bytes
    // afd.sys .rdata:0x1e5b0, 0x15fb8 bytes
    // afd.sys .rdata:0x4f740, 0x187f8 bytes
    // afd.sys .rdata:0x1e5b0, 0x15fb8 bytes
    //
    _q17(sdk::unknown_ptr) afd_event_cleanup;
    
    // [AFD_EVENT_CLEANUP_BUFFER]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb60, 0x15e38 bytes
    // afd.sys .rdata:0x1f698, 0x15fb8 bytes
    // afd.sys .rdata:0x4f990, 0x187f8 bytes
    // afd.sys .rdata:0x1f698, 0x15fb8 bytes
    //
    _q18(sdk::unknown_ptr) afd_event_cleanup_buffer;
    
    // [AFD_EVENT_CLEANUP_CQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea90, 0x15e38 bytes
    // afd.sys .rdata:0x1f5c8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f8d0, 0x187f8 bytes
    // afd.sys .rdata:0x1f5c8, 0x15fb8 bytes
    //
    _q19(sdk::unknown_ptr) afd_event_cleanup_cq;
    
    // [AFD_EVENT_CLEANUP_RQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e950, 0x15e38 bytes
    // afd.sys .rdata:0x1f458, 0x15fb8 bytes
    // afd.sys .rdata:0x4f760, 0x187f8 bytes
    // afd.sys .rdata:0x1f458, 0x15fb8 bytes
    //
    _q20(sdk::unknown_ptr) afd_event_cleanup_rq;
    
    // [AFD_EVENT_CLOSE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e0a8, 0x15e38 bytes
    // afd.sys .rdata:0x1f4c8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f7d0, 0x187f8 bytes
    // afd.sys .rdata:0x1f4c8, 0x15fb8 bytes
    //
    _q21(sdk::unknown_ptr) afd_event_close;
    
    // [AFD_EVENT_CLOSE_CQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e940, 0x15e38 bytes
    // afd.sys .rdata:0x1f448, 0x15fb8 bytes
    // afd.sys .rdata:0x4f750, 0x187f8 bytes
    // afd.sys .rdata:0x1f448, 0x15fb8 bytes
    //
    _q22(sdk::unknown_ptr) afd_event_close_cq;
    
    // [AFD_EVENT_CLOSE_REG_DOMAIN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb20, 0x15e38 bytes
    // afd.sys .rdata:0x1f668, 0x15fb8 bytes
    // afd.sys .rdata:0x4f960, 0x187f8 bytes
    // afd.sys .rdata:0x1f668, 0x15fb8 bytes
    //
    _q23(sdk::unknown_ptr) afd_event_close_reg_domain;
    
    // [AFD_EVENT_CLOSE_RQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb50, 0x15e38 bytes
    // afd.sys .rdata:0x1f688, 0x15fb8 bytes
    // afd.sys .rdata:0x4f980, 0x187f8 bytes
    // afd.sys .rdata:0x1f688, 0x15fb8 bytes
    //
    _q24(sdk::unknown_ptr) afd_event_close_rq;
    
    // [AFD_EVENT_CONNECT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb70, 0x15e38 bytes
    // afd.sys .rdata:0x1f6a8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f9a0, 0x187f8 bytes
    // afd.sys .rdata:0x1f6a8, 0x15fb8 bytes
    //
    _q25(sdk::unknown_ptr) afd_event_connect;
    
    // [AFD_EVENT_CONNECT_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea40, 0x15e38 bytes
    // afd.sys .rdata:0x1f568, 0x15fb8 bytes
    // afd.sys .rdata:0x4f870, 0x187f8 bytes
    // afd.sys .rdata:0x1f568, 0x15fb8 bytes
    //
    _q26(sdk::unknown_ptr) afd_event_connect_addr;
    
    // [AFD_EVENT_CONNECT_INDICATION]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e970, 0x15e38 bytes
    // afd.sys .rdata:0x1f488, 0x15fb8 bytes
    // afd.sys .rdata:0x4f7a0, 0x187f8 bytes
    // afd.sys .rdata:0x1f488, 0x15fb8 bytes
    //
    _q27(sdk::unknown_ptr) afd_event_connect_indication;
    
    // [AFD_EVENT_CONNECT_INDICATION_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e9e0, 0x15e38 bytes
    // afd.sys .rdata:0x1f508, 0x15fb8 bytes
    // afd.sys .rdata:0x4f810, 0x187f8 bytes
    // afd.sys .rdata:0x1f508, 0x15fb8 bytes
    //
    _q28(sdk::unknown_ptr) afd_event_connect_indication_addr;
    
    // [AFD_EVENT_CONNECTEX]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eaf0, 0x15e38 bytes
    // afd.sys .rdata:0x1f638, 0x15fb8 bytes
    // afd.sys .rdata:0x4f930, 0x187f8 bytes
    // afd.sys .rdata:0x1f638, 0x15fb8 bytes
    //
    _q29(sdk::unknown_ptr) afd_event_connectex;
    
    // [AFD_EVENT_CONNECTEX_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea30, 0x15e38 bytes
    // afd.sys .rdata:0x1f558, 0x15fb8 bytes
    // afd.sys .rdata:0x4f860, 0x187f8 bytes
    // afd.sys .rdata:0x1f558, 0x15fb8 bytes
    //
    _q30(sdk::unknown_ptr) afd_event_connectex_addr;
    
    // [AFD_EVENT_CREATE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e960, 0x15e38 bytes
    // afd.sys .rdata:0x1f478, 0x15fb8 bytes
    // afd.sys .rdata:0x4f790, 0x187f8 bytes
    // afd.sys .rdata:0x1f478, 0x15fb8 bytes
    //
    _q31(sdk::unknown_ptr) afd_event_create;
    
    // [AFD_EVENT_CREATE_CQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e9b0, 0x15e38 bytes
    // afd.sys .rdata:0x1f4d8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f7e0, 0x187f8 bytes
    // afd.sys .rdata:0x1f4d8, 0x15fb8 bytes
    //
    _q32(sdk::unknown_ptr) afd_event_create_cq;
    
    // [AFD_EVENT_CREATE_REG_DOMAIN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e8f0, 0x15e38 bytes
    // afd.sys .rdata:0x1f3e8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f6d0, 0x187f8 bytes
    // afd.sys .rdata:0x1f3e8, 0x15fb8 bytes
    //
    _q33(sdk::unknown_ptr) afd_event_create_reg_domain;
    
    // [AFD_EVENT_CREATE_RQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e920, 0x15e38 bytes
    // afd.sys .rdata:0x1f418, 0x15fb8 bytes
    // afd.sys .rdata:0x4f710, 0x187f8 bytes
    // afd.sys .rdata:0x1f418, 0x15fb8 bytes
    //
    _q34(sdk::unknown_ptr) afd_event_create_rq;
    
    // [AFD_EVENT_DATA_INDICATION]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e910, 0x15e38 bytes
    // afd.sys .rdata:0x1f408, 0x15fb8 bytes
    // afd.sys .rdata:0x4f6f0, 0x187f8 bytes
    // afd.sys .rdata:0x1f408, 0x15fb8 bytes
    //
    _q35(sdk::unknown_ptr) afd_event_data_indication;
    
    // [AFD_EVENT_DATA_INDICATION_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eaa0, 0x15e38 bytes
    // afd.sys .rdata:0x1f5d8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f8e0, 0x187f8 bytes
    // afd.sys .rdata:0x1f5d8, 0x15fb8 bytes
    //
    _q36(sdk::unknown_ptr) afd_event_data_indication_addr;
    
    // [AFD_EVENT_DATAGRAM_DROP_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eae0, 0x15e38 bytes
    // afd.sys .rdata:0x1f628, 0x15fb8 bytes
    // afd.sys .rdata:0x4f920, 0x187f8 bytes
    // afd.sys .rdata:0x1f628, 0x15fb8 bytes
    //
    _q37(sdk::unknown_ptr) afd_event_datagram_drop_addr;
    
    // [AFD_EVENT_DEREGISTER_BUFFER]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea50, 0x15e38 bytes
    // afd.sys .rdata:0x1f578, 0x15fb8 bytes
    // afd.sys .rdata:0x4f880, 0x187f8 bytes
    // afd.sys .rdata:0x1f578, 0x15fb8 bytes
    //
    _q38(sdk::unknown_ptr) afd_event_deregister_buffer;
    
    // [AFD_EVENT_DISCONNECT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e078, 0x15e38 bytes
    // afd.sys .rdata:0x1f428, 0x15fb8 bytes
    // afd.sys .rdata:0x4f720, 0x187f8 bytes
    // afd.sys .rdata:0x1f428, 0x15fb8 bytes
    //
    _q39(sdk::unknown_ptr) afd_event_disconnect;
    
    // [AFD_EVENT_INVALID_BUFFER_ID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e9d0, 0x15e38 bytes
    // afd.sys .rdata:0x1f4f8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f800, 0x187f8 bytes
    // afd.sys .rdata:0x1f4f8, 0x15fb8 bytes
    //
    _q40(sdk::unknown_ptr) afd_event_invalid_buffer_id;
    
    // [AFD_EVENT_INVALID_BUFFER_RANGE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea10, 0x15e38 bytes
    // afd.sys .rdata:0x1f538, 0x15fb8 bytes
    // afd.sys .rdata:0x4f840, 0x187f8 bytes
    // afd.sys .rdata:0x1f538, 0x15fb8 bytes
    //
    _q41(sdk::unknown_ptr) afd_event_invalid_buffer_range;
    
    // [AFD_EVENT_INVALID_BUFFER_SIZE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e900, 0x15e38 bytes
    // afd.sys .rdata:0x1f3f8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f6e0, 0x187f8 bytes
    // afd.sys .rdata:0x1f3f8, 0x15fb8 bytes
    //
    _q42(sdk::unknown_ptr) afd_event_invalid_buffer_size;
    
    // [AFD_EVENT_LISTEN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e930, 0x15e38 bytes
    // afd.sys .rdata:0x1f438, 0x15fb8 bytes
    // afd.sys .rdata:0x4f730, 0x187f8 bytes
    // afd.sys .rdata:0x1f438, 0x15fb8 bytes
    //
    _q43(sdk::unknown_ptr) afd_event_listen;
    
    // [AFD_EVENT_NRT_CLOSE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e8b0, 0x15e38 bytes
    // afd.sys .rdata:0x1f398, 0x15fb8 bytes
    // afd.sys .rdata:0x4f680, 0x187f8 bytes
    // afd.sys .rdata:0x1f398, 0x15fb8 bytes
    //
    _q44(sdk::unknown_ptr) afd_event_nrt_close;
    
    // [AFD_EVENT_NRT_CREATE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e8d0, 0x15e38 bytes
    // afd.sys .rdata:0x1f3c8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f6b0, 0x187f8 bytes
    // afd.sys .rdata:0x1f3c8, 0x15fb8 bytes
    //
    _q45(sdk::unknown_ptr) afd_event_nrt_create;
    
    // [AFD_EVENT_OPTION]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eac0, 0x15e38 bytes
    // afd.sys .rdata:0x1f608, 0x15fb8 bytes
    // afd.sys .rdata:0x4f900, 0x187f8 bytes
    // afd.sys .rdata:0x1f608, 0x15fb8 bytes
    //
    _q46(sdk::unknown_ptr) afd_event_option;
    
    // [AFD_EVENT_RECV]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e0d8, 0x15e38 bytes
    // afd.sys .rdata:0x1e5d0, 0x15fb8 bytes
    // afd.sys .rdata:0x4ee10, 0x187f8 bytes
    // afd.sys .rdata:0x1e5d0, 0x15fb8 bytes
    //
    _q47(sdk::unknown_ptr) afd_event_recv;
    
    // [AFD_EVENT_RECVFROM]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb10, 0x15e38 bytes
    // afd.sys .rdata:0x1f658, 0x15fb8 bytes
    // afd.sys .rdata:0x4f950, 0x187f8 bytes
    // afd.sys .rdata:0x1f658, 0x15fb8 bytes
    //
    _q48(sdk::unknown_ptr) afd_event_recvfrom;
    
    // [AFD_EVENT_RECVFROM_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ead0, 0x15e38 bytes
    // afd.sys .rdata:0x1f618, 0x15fb8 bytes
    // afd.sys .rdata:0x4f910, 0x187f8 bytes
    // afd.sys .rdata:0x1f618, 0x15fb8 bytes
    //
    _q49(sdk::unknown_ptr) afd_event_recvfrom_addr;
    
    // [AFD_EVENT_RECVMSG]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea00, 0x15e38 bytes
    // afd.sys .rdata:0x1f528, 0x15fb8 bytes
    // afd.sys .rdata:0x4f830, 0x187f8 bytes
    // afd.sys .rdata:0x1f528, 0x15fb8 bytes
    //
    _q50(sdk::unknown_ptr) afd_event_recvmsg;
    
    // [AFD_EVENT_RECVMSG_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e9f0, 0x15e38 bytes
    // afd.sys .rdata:0x1f518, 0x15fb8 bytes
    // afd.sys .rdata:0x4f820, 0x187f8 bytes
    // afd.sys .rdata:0x1f518, 0x15fb8 bytes
    //
    _q51(sdk::unknown_ptr) afd_event_recvmsg_addr;
    
    // [AFD_EVENT_REGISTER_BUFFER]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea60, 0x15e38 bytes
    // afd.sys .rdata:0x1f598, 0x15fb8 bytes
    // afd.sys .rdata:0x4f8a0, 0x187f8 bytes
    // afd.sys .rdata:0x1f598, 0x15fb8 bytes
    //
    _q52(sdk::unknown_ptr) afd_event_register_buffer;
    
    // [AFD_EVENT_RESIZE_CQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e8e0, 0x15e38 bytes
    // afd.sys .rdata:0x1f3d8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f6c0, 0x187f8 bytes
    // afd.sys .rdata:0x1f3d8, 0x15fb8 bytes
    //
    _q53(sdk::unknown_ptr) afd_event_resize_cq;
    
    // [AFD_EVENT_RESIZE_RQ]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea80, 0x15e38 bytes
    // afd.sys .rdata:0x1f5b8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f8c0, 0x187f8 bytes
    // afd.sys .rdata:0x1f5b8, 0x15fb8 bytes
    //
    _q54(sdk::unknown_ptr) afd_event_resize_rq;
    
    // [AfdEventSelect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52b50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57950, 0x15fb8 bytes
    // afd.sys .text:0x15e70, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57950, 0x15fb8 bytes
    //
    _q55(sdk::unknown_ptr) afd_event_select;
    
    // [AFD_EVENT_SEND]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e0c8, 0x15e38 bytes
    // afd.sys .rdata:0x1e5c0, 0x15fb8 bytes
    // afd.sys .rdata:0x4ee00, 0x187f8 bytes
    // afd.sys .rdata:0x1e5c0, 0x15fb8 bytes
    //
    _q56(sdk::unknown_ptr) afd_event_send;
    
    // [AFD_EVENT_SENDBACKLOG]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea70, 0x15e38 bytes
    // afd.sys .rdata:0x1f5a8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f8b0, 0x187f8 bytes
    // afd.sys .rdata:0x1f5a8, 0x15fb8 bytes
    //
    _q57(sdk::unknown_ptr) afd_event_sendbacklog;
    
    // [AFD_EVENT_SENDMSG]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e890, 0x15e38 bytes
    // afd.sys .rdata:0x1f378, 0x15fb8 bytes
    // afd.sys .rdata:0x4f660, 0x187f8 bytes
    // afd.sys .rdata:0x1f378, 0x15fb8 bytes
    //
    _q58(sdk::unknown_ptr) afd_event_sendmsg;
    
    // [AFD_EVENT_SENDMSG_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ea20, 0x15e38 bytes
    // afd.sys .rdata:0x1f548, 0x15fb8 bytes
    // afd.sys .rdata:0x4f850, 0x187f8 bytes
    // afd.sys .rdata:0x1f548, 0x15fb8 bytes
    //
    _q59(sdk::unknown_ptr) afd_event_sendmsg_addr;
    
    // [AFD_EVENT_SENDTO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e8a0, 0x15e38 bytes
    // afd.sys .rdata:0x1f388, 0x15fb8 bytes
    // afd.sys .rdata:0x4f670, 0x187f8 bytes
    // afd.sys .rdata:0x1f388, 0x15fb8 bytes
    //
    _q60(sdk::unknown_ptr) afd_event_sendto;
    
    // [AFD_EVENT_SENDTO_ADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e8c0, 0x15e38 bytes
    // afd.sys .rdata:0x1f3a8, 0x15fb8 bytes
    // afd.sys .rdata:0x4f690, 0x187f8 bytes
    // afd.sys .rdata:0x1f3a8, 0x15fb8 bytes
    //
    _q61(sdk::unknown_ptr) afd_event_sendto_addr;
    
    // [AFD_EVENT_WAITFORLISTEN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb00, 0x15e38 bytes
    // afd.sys .rdata:0x1f648, 0x15fb8 bytes
    // afd.sys .rdata:0x4f940, 0x187f8 bytes
    // afd.sys .rdata:0x1f648, 0x15fb8 bytes
    //
    _q62(sdk::unknown_ptr) afd_event_waitforlisten;
    
    // [AfdExceptionFilter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c6a0, 0x15e38 bytes
    // afd.sys PAGE:0x3d6b4, 0x15fb8 bytes
    // afd.sys PAGE:0x6b380, 0x187f8 bytes
    // afd.sys PAGE:0x3d6b4, 0x15fb8 bytes
    //
    _q63(sdk::unknown_ptr) afd_exception_filter;
    
    // [AfdExtractAfdSendMsgInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34c8c, 0x15e38 bytes
    // afd.sys PAGE:0x34ff4, 0x15fb8 bytes
    // afd.sys PAGE:0x64a1c, 0x187f8 bytes
    // afd.sys PAGE:0x34ff4, 0x15fb8 bytes
    //
    _q64(sdk::unknown_ptr) afd_extract_afd_send_msg_info;
    
    // [AfdFastConnectionReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4a6b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4ead0, 0x15fb8 bytes
    // afd.sys .text:0xe4f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4ead0, 0x15fb8 bytes
    //
    _q65(sdk::unknown_ptr) afd_fast_connection_receive;
    
    // [AfdFastConnectionSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4a120, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4bc58, 0x15fb8 bytes
    // afd.sys .text:0xd600, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4bc58, 0x15fb8 bytes
    //
    _q66(sdk::unknown_ptr) afd_fast_connection_send;
    
    // [AfdFastDatagramReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x49250, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4e2a0, 0x15fb8 bytes
    // afd.sys .text:0xbb50, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4e2a0, 0x15fb8 bytes
    //
    _q67(sdk::unknown_ptr) afd_fast_datagram_receive;
    
    // [AfdFastDatagramSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x49980, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4d240, 0x15fb8 bytes
    // afd.sys .text:0xb020, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4d240, 0x15fb8 bytes
    //
    _q68(sdk::unknown_ptr) afd_fast_datagram_send;
    
    // [AfdFastIoDeviceControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x31ab0, 0x15e38 bytes
    // afd.sys PAGE:0x30790, 0x15fb8 bytes
    // afd.sys .text:0x97d0, 0x187f8 bytes
    // afd.sys PAGE:0x30790, 0x15fb8 bytes
    //
    _q69(sdk::unknown_ptr) afd_fast_io_device_control;
    
    // [AfdFastIoDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27150, 0x15e38 bytes
    // afd.sys .data:0x27160, 0x15fb8 bytes
    // afd.sys .data:0x57160, 0x187f8 bytes
    // afd.sys .data:0x27160, 0x15fb8 bytes
    //
    _q70(sdk::unknown_ptr) afd_fast_io_dispatch;
    
    // [AfdFastIoRead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bed0, 0x15e38 bytes
    // afd.sys PAGE:0x3cc80, 0x15fb8 bytes
    // afd.sys PAGE:0x6aa00, 0x187f8 bytes
    // afd.sys PAGE:0x3cc80, 0x15fb8 bytes
    //
    _q71(sdk::unknown_ptr) afd_fast_io_read;
    
    // [AfdFastIoWrite]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bfd0, 0x15e38 bytes
    // afd.sys PAGE:0x3cd90, 0x15fb8 bytes
    // afd.sys PAGE:0x6ab20, 0x187f8 bytes
    // afd.sys PAGE:0x3cd90, 0x15fb8 bytes
    //
    _q72(sdk::unknown_ptr) afd_fast_io_write;
    
    // [AfdFastSendDatagramThreshold]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27264, 0x15e38 bytes
    // afd.sys .data:0x27280, 0x15fb8 bytes
    // afd.sys .data:0x572c0, 0x187f8 bytes
    // afd.sys .data:0x27280, 0x15fb8 bytes
    //
    _q73(sdk::unknown_ptr) afd_fast_send_datagram_threshold;
    
    // [AfdFastTransmitApcKernelRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ea60, 0x15e38 bytes
    // afd.sys PAGE:0x40540, 0x15fb8 bytes
    // afd.sys PAGE:0x6e6a0, 0x187f8 bytes
    // afd.sys PAGE:0x40540, 0x15fb8 bytes
    //
    _q74(sdk::unknown_ptr) afd_fast_transmit_apc_kernel_routine;
    
    // [AfdFastTransmitApcRundownRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ea70, 0x15e38 bytes
    // afd.sys PAGE:0x40560, 0x15fb8 bytes
    // afd.sys PAGE:0x6e6c0, 0x187f8 bytes
    // afd.sys PAGE:0x40560, 0x15fb8 bytes
    //
    _q75(sdk::unknown_ptr) afd_fast_transmit_apc_rundown_routine;
    
    // [AfdFastTransmitFile]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6d480, 0x15e38 bytes
    // afd.sys PAGEAFD:0x739b8, 0x15fb8 bytes
    // afd.sys .text:0x3c4a4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x739b8, 0x15fb8 bytes
    //
    _q76(sdk::unknown_ptr) afd_fast_transmit_file;
    
    // [AfdFindAddressInList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x360f8, 0x15e38 bytes
    // afd.sys PAGE:0x35de8, 0x15fb8 bytes
    // afd.sys PAGE:0x63b34, 0x187f8 bytes
    // afd.sys PAGE:0x35de8, 0x15fb8 bytes
    //
    _q77(sdk::unknown_ptr) afd_find_address_in_list;
    
    // [AfdFindReturnedConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64f08, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68de0, 0x15fb8 bytes
    // afd.sys .text:0x302e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68de0, 0x15fb8 bytes
    //
    _q78(sdk::unknown_ptr) afd_find_returned_connection;
    
    // [AfdFinishConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46598, 0x15e38 bytes
    // afd.sys PAGEAFD:0x541ac, 0x15fb8 bytes
    // afd.sys .text:0x678c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x541ac, 0x15fb8 bytes
    //
    _q79(sdk::unknown_ptr) afd_finish_connect;
    
    // [AfdFinishSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35018, 0x15e38 bytes
    // afd.sys PAGE:0x30034, 0x15fb8 bytes
    // afd.sys PAGE:0x60034, 0x187f8 bytes
    // afd.sys PAGE:0x30034, 0x15fb8 bytes
    //
    _q80(sdk::unknown_ptr) afd_finish_super_accept;
    
    // [AfdFinishSuperAcceptWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35000, 0x15e38 bytes
    // afd.sys PAGE:0x361e0, 0x15fb8 bytes
    // afd.sys PAGE:0x63f10, 0x187f8 bytes
    // afd.sys PAGE:0x361e0, 0x15fb8 bytes
    //
    _q81(sdk::unknown_ptr) afd_finish_super_accept_worker;
    
    // [AfdFreeBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47df0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57890, 0x15fb8 bytes
    // afd.sys .text:0x15c20, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57890, 0x15fb8 bytes
    //
    _q82(sdk::unknown_ptr) afd_free_buffer;
    
    // [AfdFreeBufferTag]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x473b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x59890, 0x15fb8 bytes
    // afd.sys .text:0x17140, 0x187f8 bytes
    // afd.sys PAGEAFD:0x59890, 0x15fb8 bytes
    //
    _q83(sdk::unknown_ptr) afd_free_buffer_tag;
    
    // [AfdFreeConnectDataBuffers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67ec4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6ca00, 0x15fb8 bytes
    // afd.sys .text:0x34300, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6ca00, 0x15fb8 bytes
    //
    _q84(sdk::unknown_ptr) afd_free_connect_data_buffers;
    
    // [AfdFreeConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3b740, 0x15e38 bytes
    // afd.sys PAGE:0x3c3f0, 0x15fb8 bytes
    // afd.sys PAGE:0x657a0, 0x187f8 bytes
    // afd.sys PAGE:0x3c3f0, 0x15fb8 bytes
    //
    _q85(sdk::unknown_ptr) afd_free_connection;
    
    // [AfdFreeConnectionEx]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2890, 0x15e38 bytes
    // afd.sys .text:0x3490, 0x15fb8 bytes
    // afd.sys .text:0x6bd0, 0x187f8 bytes
    // afd.sys .text:0x3490, 0x15fb8 bytes
    //
    _q86(sdk::unknown_ptr) afd_free_connection_ex;
    
    // [AfdFreeConnectionResources]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47440, 0x15e38 bytes
    // afd.sys PAGEAFD:0x527fc, 0x15fb8 bytes
    // afd.sys .text:0x6aa8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x527fc, 0x15fb8 bytes
    //
    _q87(sdk::unknown_ptr) afd_free_connection_resources;
    
    // [AfdFreeEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30830, 0x15e38 bytes
    // afd.sys PAGE:0x32e30, 0x15fb8 bytes
    // afd.sys PAGE:0x61910, 0x187f8 bytes
    // afd.sys PAGE:0x32e30, 0x15fb8 bytes
    //
    _q88(sdk::unknown_ptr) afd_free_endpoint;
    
    // [AfdFreeEndpointResources]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x31390, 0x15e38 bytes
    // afd.sys PAGE:0x32ed8, 0x15fb8 bytes
    // afd.sys PAGE:0x61528, 0x187f8 bytes
    // afd.sys PAGE:0x32ed8, 0x15fb8 bytes
    //
    _q89(sdk::unknown_ptr) afd_free_endpoint_resources;
    
    // [AfdFreeEndpointTditl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3b8c0, 0x15e38 bytes
    // afd.sys PAGE:0x3c590, 0x15fb8 bytes
    // afd.sys PAGE:0x6a360, 0x187f8 bytes
    // afd.sys PAGE:0x3c590, 0x15fb8 bytes
    //
    _q90(sdk::unknown_ptr) afd_free_endpoint_tditl;
    
    // [AfdFreeGroupList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274c0, 0x15e38 bytes
    // afd.sys .data:0x27530, 0x15fb8 bytes
    // afd.sys .data:0x57590, 0x187f8 bytes
    // afd.sys .data:0x27530, 0x15fb8 bytes
    //
    _q91(sdk::unknown_ptr) afd_free_group_list;
    
    // [AfdFreeNPConnectionResources]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64f28, 0x15e38 bytes
    // afd.sys PAGEAFD:0x528b0, 0x15fb8 bytes
    // afd.sys .text:0x6b54, 0x187f8 bytes
    // afd.sys PAGEAFD:0x528b0, 0x15fb8 bytes
    //
    _q92(sdk::unknown_ptr) afd_free_np_connection_resources;
    
    // [AfdFreePollInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50c3c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57830, 0x15fb8 bytes
    // afd.sys .text:0x15b00, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57830, 0x15fb8 bytes
    //
    _q93(sdk::unknown_ptr) afd_free_poll_info;
    
    // [AfdFreeQueuedConnections]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53638, 0x15e38 bytes
    // afd.sys PAGEAFD:0x563fc, 0x15fb8 bytes
    // afd.sys .text:0x190cc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x563fc, 0x15fb8 bytes
    //
    _q94(sdk::unknown_ptr) afd_free_queued_connections;
    
    // [AfdFreeRemoteAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x551a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69090, 0x15fb8 bytes
    // afd.sys .text:0x17170, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69090, 0x15fb8 bytes
    //
    _q95(sdk::unknown_ptr) afd_free_remote_address;
    
    // [AfdFreeSendMsgTracker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b930, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71504, 0x15fb8 bytes
    // afd.sys .text:0x39c08, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71504, 0x15fb8 bytes
    //
    _q96(sdk::unknown_ptr) afd_free_send_msg_tracker;
    
    // [AfdFreeTpInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6dae0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74100, 0x15fb8 bytes
    // afd.sys .text:0x3cbd0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74100, 0x15fb8 bytes
    //
    _q97(sdk::unknown_ptr) afd_free_tp_info;
    
    // [AfdFreeTransportInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x348b8, 0x15e38 bytes
    // afd.sys PAGE:0x36ef8, 0x15fb8 bytes
    // afd.sys PAGE:0x65318, 0x187f8 bytes
    // afd.sys PAGE:0x36ef8, 0x15fb8 bytes
    //
    _q98(sdk::unknown_ptr) afd_free_transport_info;
    
    // [AfdGetAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33fa0, 0x15e38 bytes
    // afd.sys PAGE:0x33480, 0x15fb8 bytes
    // afd.sys PAGE:0x605f0, 0x187f8 bytes
    // afd.sys PAGE:0x33480, 0x15fb8 bytes
    //
    _q99(sdk::unknown_ptr) afd_get_address;
    
    // [AfdGetAddressFileReference]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64c28, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68a68, 0x15fb8 bytes
    // afd.sys .text:0x2fde8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68a68, 0x15fb8 bytes
    //
    _r00(sdk::unknown_ptr) afd_get_address_file_reference;
    
    // [AfdGetBufferFast]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47780, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4e960, 0x15fb8 bytes
    // afd.sys .text:0xdc58, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4e960, 0x15fb8 bytes
    //
    _r01(sdk::unknown_ptr) afd_get_buffer_fast;
    
    // [AfdGetBufferSlow]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x47900, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56834, 0x15fb8 bytes
    // afd.sys .text:0x14a54, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56834, 0x15fb8 bytes
    //
    _r02(sdk::unknown_ptr) afd_get_buffer_slow;
    
    // [AfdGetBufferTag]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54c38, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4b904, 0x15fb8 bytes
    // afd.sys .text:0x6f0c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4b904, 0x15fb8 bytes
    //
    _r03(sdk::unknown_ptr) afd_get_buffer_tag;
    
    // [AfdGetCompartment]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33ea4, 0x15e38 bytes
    // afd.sys PAGE:0x33c48, 0x15fb8 bytes
    // afd.sys PAGE:0x61328, 0x187f8 bytes
    // afd.sys PAGE:0x33c48, 0x15fb8 bytes
    //
    _r04(sdk::unknown_ptr) afd_get_compartment;
    
    // [AfdGetConnectData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67f80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6caf0, 0x15fb8 bytes
    // afd.sys .text:0x343f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6caf0, 0x15fb8 bytes
    //
    _r05(sdk::unknown_ptr) afd_get_connect_data;
    
    // [AfdGetConnectionReferenceFromEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51568, 0x15e38 bytes
    // afd.sys PAGEAFD:0x54600, 0x15fb8 bytes
    // afd.sys .text:0x5130, 0x187f8 bytes
    // afd.sys PAGEAFD:0x54600, 0x15fb8 bytes
    //
    _r06(sdk::unknown_ptr) afd_get_connection_reference_from_endpoint;
    
    // [AfdGetContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x366e0, 0x15e38 bytes
    // afd.sys PAGE:0x35480, 0x15fb8 bytes
    // afd.sys PAGE:0x63330, 0x187f8 bytes
    // afd.sys PAGE:0x35480, 0x15fb8 bytes
    //
    _r07(sdk::unknown_ptr) afd_get_context;
    
    // [AfdGetDeliveryStatus]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x683b8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6cfd8, 0x15fb8 bytes
    // afd.sys .text:0x348d8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6cfd8, 0x15fb8 bytes
    //
    _r08(sdk::unknown_ptr) afd_get_delivery_status;
    
    // [AfdGetFreeConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55a80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x5553c, 0x15fb8 bytes
    // afd.sys .text:0x2a2c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x5553c, 0x15fb8 bytes
    //
    _r09(sdk::unknown_ptr) afd_get_free_connection;
    
    // [AfdGetInformation]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34220, 0x15e38 bytes
    // afd.sys PAGE:0x34780, 0x15fb8 bytes
    // afd.sys PAGE:0x62ad0, 0x187f8 bytes
    // afd.sys PAGE:0x34780, 0x15fb8 bytes
    //
    _r10(sdk::unknown_ptr) afd_get_information;
    
    // [AfdGetQos]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c6e0, 0x15e38 bytes
    // afd.sys PAGE:0x3d770, 0x15fb8 bytes
    // afd.sys PAGE:0x6b430, 0x187f8 bytes
    // afd.sys PAGE:0x3d770, 0x15fb8 bytes
    //
    _r11(sdk::unknown_ptr) afd_get_qos;
    
    // [AfdGetQos32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c788, 0x15e38 bytes
    // afd.sys PAGE:0x3d82c, 0x15fb8 bytes
    // afd.sys PAGE:0x6b4ec, 0x187f8 bytes
    // afd.sys PAGE:0x3d82c, 0x15fb8 bytes
    //
    _r12(sdk::unknown_ptr) afd_get_qos32;
    
    // [AfdGetReceiveBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52fc4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x578e8, 0x15fb8 bytes
    // afd.sys .text:0x105a8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x578e8, 0x15fb8 bytes
    //
    _r13(sdk::unknown_ptr) afd_get_receive_buffer;
    
    // [AfdGetRemoteAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x31770, 0x15e38 bytes
    // afd.sys PAGE:0x33370, 0x15fb8 bytes
    // afd.sys PAGE:0x60200, 0x187f8 bytes
    // afd.sys PAGE:0x33370, 0x15fb8 bytes
    //
    _r14(sdk::unknown_ptr) afd_get_remote_address;
    
    // [AfdGetReturnedConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53764, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56528, 0x15fb8 bytes
    // afd.sys .text:0x21fc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56528, 0x15fb8 bytes
    //
    _r15(sdk::unknown_ptr) afd_get_returned_connection;
    
    // [AfdGetSecurity]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c7dc, 0x15e38 bytes
    // afd.sys PAGE:0x3d888, 0x15fb8 bytes
    // afd.sys PAGE:0x6b548, 0x187f8 bytes
    // afd.sys PAGE:0x3d888, 0x15fb8 bytes
    //
    _r16(sdk::unknown_ptr) afd_get_security;
    
    // [AfdGetTPacketsReference]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6daec, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74124, 0x15fb8 bytes
    // afd.sys .text:0x3cbf4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74124, 0x15fb8 bytes
    //
    _r17(sdk::unknown_ptr) afd_get_t_packets_reference;
    
    // [AfdGetTransportInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34670, 0x15e38 bytes
    // afd.sys PAGE:0x36534, 0x15fb8 bytes
    // afd.sys PAGE:0x644c0, 0x187f8 bytes
    // afd.sys PAGE:0x36534, 0x15fb8 bytes
    //
    _r18(sdk::unknown_ptr) afd_get_transport_info;
    
    // [AfdGetUnacceptedConnectData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x684e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d130, 0x15fb8 bytes
    // afd.sys .text:0x34a30, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d130, 0x15fb8 bytes
    //
    _r19(sdk::unknown_ptr) afd_get_unaccepted_connect_data;
    
    // [AfdGetUnacceptedConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x537a8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56574, 0x15fb8 bytes
    // afd.sys .text:0x15d8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56574, 0x15fb8 bytes
    //
    _r20(sdk::unknown_ptr) afd_get_unaccepted_connection;
    
    // [AfdGetWorkerByRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55110, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d510, 0x15fb8 bytes
    // afd.sys .text:0x34e10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d510, 0x15fb8 bytes
    //
    _r21(sdk::unknown_ptr) afd_get_worker_by_routine;
    
    // [AfdGlobalData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27758, 0x15e38 bytes
    // afd.sys .data:0x277d8, 0x15fb8 bytes
    // afd.sys .data:0x57858, 0x187f8 bytes
    // afd.sys .data:0x277d8, 0x15fb8 bytes
    //
    _r22(sdk::unknown_ptr) afd_global_data;
    
    // [AfdGlobalTriageBlock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27250, 0x15e38 bytes
    // afd.sys .data:0x27270, 0x15fb8 bytes
    // afd.sys .data:0x572b0, 0x187f8 bytes
    // afd.sys .data:0x27270, 0x15fb8 bytes
    //
    _r23(sdk::unknown_ptr) afd_global_triage_block;
    
    // [AfdGroupTable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274b0, 0x15e38 bytes
    // afd.sys .data:0x27528, 0x15fb8 bytes
    // afd.sys .data:0x57588, 0x187f8 bytes
    // afd.sys .data:0x27528, 0x15fb8 bytes
    //
    _r24(sdk::unknown_ptr) afd_group_table;
    
    // [AfdGroupTableResource]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274a8, 0x15e38 bytes
    // afd.sys .data:0x27520, 0x15fb8 bytes
    // afd.sys .data:0x57580, 0x187f8 bytes
    // afd.sys .data:0x27520, 0x15fb8 bytes
    //
    _r25(sdk::unknown_ptr) afd_group_table_resource;
    
    // [AfdGroupTableSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274d0, 0x15e38 bytes
    // afd.sys .data:0x27540, 0x15fb8 bytes
    // afd.sys .data:0x575a0, 0x187f8 bytes
    // afd.sys .data:0x27540, 0x15fb8 bytes
    //
    _r26(sdk::unknown_ptr) afd_group_table_size;
    
    // [AfdHandleAddressChangeFailure]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d834, 0x15e38 bytes
    // afd.sys PAGE:0x3ebe8, 0x15fb8 bytes
    // afd.sys PAGE:0x6ceac, 0x187f8 bytes
    // afd.sys PAGE:0x3ebe8, 0x15fb8 bytes
    //
    _r27(sdk::unknown_ptr) afd_handle_address_change_failure;
    
    // [AfdHandleAddressChangeFailureWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d880, 0x15e38 bytes
    // afd.sys PAGE:0x3ec30, 0x15fb8 bytes
    // afd.sys PAGE:0x6cf00, 0x187f8 bytes
    // afd.sys PAGE:0x3ec30, 0x15fb8 bytes
    //
    _r28(sdk::unknown_ptr) afd_handle_address_change_failure_worker;
    
    // [AfdHandleIcmpError]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54a08, 0x15e38 bytes
    // afd.sys PAGEAFD:0x598b4, 0x15fb8 bytes
    // afd.sys .text:0x19bb0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x598b4, 0x15fb8 bytes
    //
    _r29(sdk::unknown_ptr) afd_handle_icmp_error;
    
    // [AfdHandleISBIoctls]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f2d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75e4c, 0x15fb8 bytes
    // afd.sys .text:0x4323c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75e4c, 0x15fb8 bytes
    //
    _r30(sdk::unknown_ptr) afd_handle_isb_ioctls;
    
    // [AfdHasHeldPacketsFromNic]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6934c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58bb8, 0x15fb8 bytes
    // afd.sys .text:0x36a0c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58bb8, 0x15fb8 bytes
    //
    _r31(sdk::unknown_ptr) afd_has_held_packets_from_nic;
    
    // [AfdHungCloseRequestTimeout]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x274d8, 0x15e38 bytes
    // afd.sys .data:0x27548, 0x15fb8 bytes
    // afd.sys .data:0x575a8, 0x187f8 bytes
    // afd.sys .data:0x27548, 0x15fb8 bytes
    //
    _r32(sdk::unknown_ptr) afd_hung_close_request_timeout;
    
    // [AfdIgnorePushBitOnReceives]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27868, 0x15e38 bytes
    // afd.sys .data:0x27908, 0x15fb8 bytes
    // afd.sys .data:0x57978, 0x187f8 bytes
    // afd.sys .data:0x27908, 0x15fb8 bytes
    //
    _r33(sdk::unknown_ptr) afd_ignore_push_bit_on_receives;
    
    // [AfdImmediateCallDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d390, 0x15e38 bytes
    // afd.sys .rdata:0x1d450, 0x15fb8 bytes
    // afd.sys .rdata:0x4d410, 0x187f8 bytes
    // afd.sys .rdata:0x1d450, 0x15fb8 bytes
    //
    _r34(sdk::unknown_ptr) afd_immediate_call_dispatch;
    
    // [AfdIndicateEventSelectEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3670, 0x15e38 bytes
    // afd.sys .text:0x25f0, 0x15fb8 bytes
    // afd.sys .text:0x89f0, 0x187f8 bytes
    // afd.sys .text:0x25f0, 0x15fb8 bytes
    //
    _r35(sdk::unknown_ptr) afd_indicate_event_select_event;
    
    // [AfdIndicatePollEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4b890, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4e0c0, 0x15fb8 bytes
    // afd.sys .text:0xd140, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4e0c0, 0x15fb8 bytes
    //
    _r36(sdk::unknown_ptr) afd_indicate_poll_event;
    
    // [AfdInfiniteTimeout]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e218, 0x15e38 bytes
    // afd.sys .rdata:0x1e708, 0x15fb8 bytes
    // afd.sys .rdata:0x4ef48, 0x187f8 bytes
    // afd.sys .rdata:0x1e708, 0x15fb8 bytes
    //
    _r37(sdk::unknown_ptr) afd_infinite_timeout;
    
    // [AfdInitializeAddressList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x356f8, 0x15e38 bytes
    // afd.sys PAGE:0x36ccc, 0x15fb8 bytes
    // afd.sys PAGE:0x650cc, 0x187f8 bytes
    // afd.sys PAGE:0x36ccc, 0x15fb8 bytes
    //
    _r38(sdk::unknown_ptr) afd_initialize_address_list;
    
    // [AfdInitializeBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x479c8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x569a8, 0x15fb8 bytes
    // afd.sys .text:0x14be8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x569a8, 0x15fb8 bytes
    //
    _r39(sdk::unknown_ptr) afd_initialize_buffer;
    
    // [AfdInitializeBufferManager]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7a984, 0x15e38 bytes
    // afd.sys INIT:0x84aac, 0x15fb8 bytes
    // afd.sys INIT:0x83acc, 0x187f8 bytes
    // afd.sys INIT:0x84aac, 0x15fb8 bytes
    //
    _r40(sdk::unknown_ptr) afd_initialize_buffer_manager;
    
    // [AfdInitializeData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7af5c, 0x15e38 bytes
    // afd.sys INIT:0x85110, 0x15fb8 bytes
    // afd.sys INIT:0x83fa0, 0x187f8 bytes
    // afd.sys INIT:0x85110, 0x15fb8 bytes
    //
    _r41(sdk::unknown_ptr) afd_initialize_data;
    
    // [AfdInitializeGroup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7a924, 0x15e38 bytes
    // afd.sys INIT:0x84a38, 0x15fb8 bytes
    // afd.sys INIT:0x83a3c, 0x187f8 bytes
    // afd.sys INIT:0x84a38, 0x15fb8 bytes
    //
    _r42(sdk::unknown_ptr) afd_initialize_group;
    
    // [AfdInitializeRWLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xbc00, 0x15e38 bytes
    // afd.sys .text:0x80d8, 0x15fb8 bytes
    // afd.sys .text:0x1a174, 0x187f8 bytes
    // afd.sys .text:0x80d8, 0x15fb8 bytes
    //
    _r43(sdk::unknown_ptr) afd_initialize_rw_lock;
    
    // [AfdInitializeTpInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6db10, 0x15e38 bytes
    // afd.sys PAGEAFD:0x7414c, 0x15fb8 bytes
    // afd.sys .text:0x3cc1c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x7414c, 0x15fb8 bytes
    //
    _r44(sdk::unknown_ptr) afd_initialize_tp_info;
    
    // [AfdInitiateListenBacklogReplenish]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64114, 0x15e38 bytes
    // afd.sys PAGEAFD:0x67f34, 0x15fb8 bytes
    // afd.sys .text:0x2f444, 0x187f8 bytes
    // afd.sys PAGEAFD:0x67f34, 0x15fb8 bytes
    //
    _r45(sdk::unknown_ptr) afd_initiate_listen_backlog_replenish;
    
    // [AfdIoctlTable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e0f0, 0x15e38 bytes
    // afd.sys .rdata:0x1e5e0, 0x15fb8 bytes
    // afd.sys .rdata:0x4ee20, 0x187f8 bytes
    // afd.sys .rdata:0x1e5e0, 0x15fb8 bytes
    //
    _r46(sdk::unknown_ptr) afd_ioctl_table;
    
    // [AfdIrpCallDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d5e0, 0x15e38 bytes
    // afd.sys .rdata:0x1d6a0, 0x15fb8 bytes
    // afd.sys .rdata:0x4d660, 0x187f8 bytes
    // afd.sys .rdata:0x1d6a0, 0x15fb8 bytes
    //
    _r47(sdk::unknown_ptr) afd_irp_call_dispatch;
    
    // [AfdIrpStackSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27233, 0x15e38 bytes
    // afd.sys .data:0x27253, 0x15fb8 bytes
    // afd.sys .data:0x57293, 0x187f8 bytes
    // afd.sys .data:0x27253, 0x15fb8 bytes
    //
    _r48(sdk::unknown_ptr) afd_irp_stack_size;
    
    // [AfdIsAddressInUse]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x39ec0, 0x15e38 bytes
    // afd.sys PAGE:0x3a648, 0x15fb8 bytes
    // afd.sys PAGE:0x68498, 0x187f8 bytes
    // afd.sys PAGE:0x3a648, 0x15fb8 bytes
    //
    _r49(sdk::unknown_ptr) afd_is_address_in_use;
    
    // [AfdIssueDeviceControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ca74, 0x15e38 bytes
    // afd.sys PAGE:0x3db7c, 0x15fb8 bytes
    // afd.sys PAGE:0x6b834, 0x187f8 bytes
    // afd.sys PAGE:0x3db7c, 0x15fb8 bytes
    //
    _r50(sdk::unknown_ptr) afd_issue_device_control;
    
    // [AfdJoinInviteSetup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x652cc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x690b4, 0x15fb8 bytes
    // afd.sys .text:0x30d20, 0x187f8 bytes
    // afd.sys PAGEAFD:0x690b4, 0x15fb8 bytes
    //
    _r51(sdk::unknown_ptr) afd_join_invite_setup;
    
    // [AfdLargeBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27578, 0x15e38 bytes
    // afd.sys .data:0x275f8, 0x15fb8 bytes
    // afd.sys .data:0x572cc, 0x187f8 bytes
    // afd.sys .data:0x275f8, 0x15fb8 bytes
    //
    _r52(sdk::unknown_ptr) afd_large_buffer_size;
    
    // [AfdLastRemoveTime]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b18, 0x15e38 bytes
    // afd.sys .data:0x27880, 0x15fb8 bytes
    // afd.sys .data:0x57cd8, 0x187f8 bytes
    // afd.sys .data:0x27880, 0x15fb8 bytes
    //
    _r53(sdk::unknown_ptr) afd_last_remove_time;
    
    // [AfdLastRemovedPdo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278b0, 0x15e38 bytes
    // afd.sys .data:0x27888, 0x15fb8 bytes
    // afd.sys .data:0x57918, 0x187f8 bytes
    // afd.sys .data:0x27888, 0x15fb8 bytes
    //
    _r54(sdk::unknown_ptr) afd_last_removed_pdo;
    
    // [AfdLockEndpointContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x306a0, 0x15e38 bytes
    // afd.sys PAGE:0x33318, 0x15fb8 bytes
    // afd.sys PAGE:0x60560, 0x187f8 bytes
    // afd.sys PAGE:0x33318, 0x15fb8 bytes
    //
    _r55(sdk::unknown_ptr) afd_lock_endpoint_context;
    
    // [AfdLogSystemEventForHungClose]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ba9c, 0x15e38 bytes
    // afd.sys PAGE:0x3c874, 0x15fb8 bytes
    // afd.sys PAGE:0x6a600, 0x187f8 bytes
    // afd.sys PAGE:0x3c874, 0x15fb8 bytes
    //
    _r56(sdk::unknown_ptr) afd_log_system_event_for_hung_close;
    
    // [AfdLogTdiFilter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x44110, 0x15e38 bytes
    // afd.sys PAGE:0x46b74, 0x15fb8 bytes
    // afd.sys PAGE:0x74b04, 0x187f8 bytes
    // afd.sys PAGE:0x46b74, 0x15fb8 bytes
    //
    _r57(sdk::unknown_ptr) afd_log_tdi_filter;
    
    // [AfdLRFileMdlList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27940, 0x15e38 bytes
    // afd.sys .data:0x27a80, 0x15fb8 bytes
    // afd.sys .data:0x57b00, 0x187f8 bytes
    // afd.sys .data:0x27a80, 0x15fb8 bytes
    //
    _r58(sdk::unknown_ptr) afd_lr_file_mdl_list;
    
    // [AfdLRFileMdlListItem]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27ae0, 0x15e38 bytes
    // afd.sys .data:0x27c30, 0x15fb8 bytes
    // afd.sys .data:0x57ca0, 0x187f8 bytes
    // afd.sys .data:0x27c30, 0x15fb8 bytes
    //
    _r59(sdk::unknown_ptr) afd_lr_file_mdl_list_item;
    
    // [AfdLRList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27950, 0x15e38 bytes
    // afd.sys .data:0x27a90, 0x15fb8 bytes
    // afd.sys .data:0x57b10, 0x187f8 bytes
    // afd.sys .data:0x27a90, 0x15fb8 bytes
    //
    _r60(sdk::unknown_ptr) afd_lr_list;
    
    // [AfdLRListAddItem]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x68828, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d5bc, 0x15fb8 bytes
    // afd.sys .text:0x34ebc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d5bc, 0x15fb8 bytes
    //
    _r61(sdk::unknown_ptr) afd_lr_list_add_item;
    
    // [AfdLRListCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x276c0, 0x15e38 bytes
    // afd.sys .data:0x27740, 0x15fb8 bytes
    // afd.sys .data:0x57800, 0x187f8 bytes
    // afd.sys .data:0x27740, 0x15fb8 bytes
    //
    _r62(sdk::unknown_ptr) afd_lr_list_count;
    
    // [AfdLRListDpc]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27620, 0x15e38 bytes
    // afd.sys .data:0x276a0, 0x15fb8 bytes
    // afd.sys .data:0x57760, 0x187f8 bytes
    // afd.sys .data:0x276a0, 0x15fb8 bytes
    //
    _r63(sdk::unknown_ptr) afd_lr_list_dpc;
    
    // [AfdLRListTimeout]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x68860, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d600, 0x15fb8 bytes
    // afd.sys .text:0x34f00, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d600, 0x15fb8 bytes
    //
    _r64(sdk::unknown_ptr) afd_lr_list_timeout;
    
    // [AfdLRListTimer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27660, 0x15e38 bytes
    // afd.sys .data:0x276e0, 0x15fb8 bytes
    // afd.sys .data:0x577a0, 0x187f8 bytes
    // afd.sys .data:0x276e0, 0x15fb8 bytes
    //
    _r65(sdk::unknown_ptr) afd_lr_list_timer;
    
    // [AfdLRListWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x276a0, 0x15e38 bytes
    // afd.sys .data:0x27720, 0x15fb8 bytes
    // afd.sys .data:0x577e0, 0x187f8 bytes
    // afd.sys .data:0x27720, 0x15fb8 bytes
    //
    _r66(sdk::unknown_ptr) afd_lr_list_worker;
    
    // [AfdLRMdlReadComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ea9c, 0x15e38 bytes
    // afd.sys PAGE:0x405a0, 0x15fb8 bytes
    // afd.sys PAGE:0x6e700, 0x187f8 bytes
    // afd.sys PAGE:0x405a0, 0x15fb8 bytes
    //
    _r67(sdk::unknown_ptr) afd_lr_mdl_read_complete;
    
    // [AfdLRProcessFileMdlList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ead0, 0x15e38 bytes
    // afd.sys PAGE:0x405e0, 0x15fb8 bytes
    // afd.sys PAGE:0x6e740, 0x187f8 bytes
    // afd.sys PAGE:0x405e0, 0x15fb8 bytes
    //
    _r68(sdk::unknown_ptr) afd_lr_process_file_mdl_list;
    
    // [AfdLRRepostReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b340, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70ef0, 0x15fb8 bytes
    // afd.sys .text:0x39450, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70ef0, 0x15fb8 bytes
    //
    _r69(sdk::unknown_ptr) afd_lr_repost_receive;
    
    // [AfdLRStartTimer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x68874, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d624, 0x15fb8 bytes
    // afd.sys .text:0x34f24, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d624, 0x15fb8 bytes
    //
    _r70(sdk::unknown_ptr) afd_lr_start_timer;
    
    // [AfdMapGroupToEntry]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c13c, 0x15e38 bytes
    // afd.sys PAGE:0x3cf2c, 0x15fb8 bytes
    // afd.sys PAGE:0x6acbc, 0x187f8 bytes
    // afd.sys PAGE:0x3cf2c, 0x15fb8 bytes
    //
    _r71(sdk::unknown_ptr) afd_map_group_to_entry;
    
    // [AfdMapMdlChain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52f6c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4b75c, 0x15fb8 bytes
    // afd.sys .text:0x12d1c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4b75c, 0x15fb8 bytes
    //
    _r72(sdk::unknown_ptr) afd_map_mdl_chain;
    
    // [AfdMaxActiveTransmitFileCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275ac, 0x15e38 bytes
    // afd.sys .data:0x2762c, 0x15fb8 bytes
    // afd.sys .data:0x576dc, 0x187f8 bytes
    // afd.sys .data:0x2762c, 0x15fb8 bytes
    //
    _r73(sdk::unknown_ptr) afd_max_active_transmit_file_count;
    
    // [AfdMaxFastCopyTransmit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2727c, 0x15e38 bytes
    // afd.sys .data:0x27294, 0x15fb8 bytes
    // afd.sys .data:0x572d8, 0x187f8 bytes
    // afd.sys .data:0x27294, 0x15fb8 bytes
    //
    _r74(sdk::unknown_ptr) afd_max_fast_copy_transmit;
    
    // [AfdMaxFastTransmit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27280, 0x15e38 bytes
    // afd.sys .data:0x27298, 0x15fb8 bytes
    // afd.sys .data:0x572dc, 0x187f8 bytes
    // afd.sys .data:0x27298, 0x15fb8 bytes
    //
    _r75(sdk::unknown_ptr) afd_max_fast_transmit;
    
    // [AfdMdlReadComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ebb8, 0x15e38 bytes
    // afd.sys PAGE:0x406d8, 0x15fb8 bytes
    // afd.sys PAGE:0x6e838, 0x187f8 bytes
    // afd.sys PAGE:0x406d8, 0x15fb8 bytes
    //
    _r76(sdk::unknown_ptr) afd_mdl_read_complete;
    
    // [AfdMediumBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27270, 0x15e38 bytes
    // afd.sys .data:0x27288, 0x15fb8 bytes
    // afd.sys .data:0x572c8, 0x187f8 bytes
    // afd.sys .data:0x27288, 0x15fb8 bytes
    //
    _r77(sdk::unknown_ptr) afd_medium_buffer_size;
    
    // [AfdNdkTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278b8, 0x15e38 bytes
    // afd.sys .data:0x27968, 0x15fb8 bytes
    // afd.sys .data:0x579e0, 0x187f8 bytes
    // afd.sys .data:0x27968, 0x15fb8 bytes
    //
    _r78(sdk::unknown_ptr) afd_ndk_transport;
    
    // [AfdNetworkMgrFirstAddressArrivalGuid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df38, 0x15e38 bytes
    // afd.sys .rdata:0x1dfa0, 0x15fb8 bytes
    // afd.sys .rdata:0x4e2c0, 0x187f8 bytes
    // afd.sys .rdata:0x1dfa0, 0x15fb8 bytes
    //
    _r79(sdk::unknown_ptr) afd_network_mgr_first_address_arrival_guid;
    
    // [AfdNetworkMgrLastAddressRemovalGuid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df58, 0x15e38 bytes
    // afd.sys .rdata:0x1dfb0, 0x15fb8 bytes
    // afd.sys .rdata:0x4e2d0, 0x187f8 bytes
    // afd.sys .rdata:0x1dfb0, 0x15fb8 bytes
    //
    _r80(sdk::unknown_ptr) afd_network_mgr_last_address_removal_guid;
    
    // [AfdNoOperation]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3cc30, 0x15e38 bytes
    // afd.sys PAGE:0x3dde0, 0x15fb8 bytes
    // afd.sys PAGE:0x6baa0, 0x187f8 bytes
    // afd.sys PAGE:0x3dde0, 0x15fb8 bytes
    //
    _r81(sdk::unknown_ptr) afd_no_operation;
    
    // [AfdNoOperation32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3cd20, 0x15e38 bytes
    // afd.sys PAGE:0x3defc, 0x15fb8 bytes
    // afd.sys PAGE:0x6bbbc, 0x187f8 bytes
    // afd.sys PAGE:0x3defc, 0x15fb8 bytes
    //
    _r82(sdk::unknown_ptr) afd_no_operation32;
    
    // [AfdNotifyIPAvailabilityConsumers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x361b4, 0x15e38 bytes
    // afd.sys PAGE:0x35eb0, 0x15fb8 bytes
    // afd.sys PAGE:0x63bfc, 0x187f8 bytes
    // afd.sys PAGE:0x35eb0, 0x15fb8 bytes
    //
    _r83(sdk::unknown_ptr) afd_notify_ip_availability_consumers;
    
    // [AfdNsiAddressChangeEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56230, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58dc0, 0x15fb8 bytes
    // afd.sys .text:0x182e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58dc0, 0x15fb8 bytes
    //
    _r84(sdk::unknown_ptr) afd_nsi_address_change_event;
    
    // [AfdNsiAddressChangeEventAtPassive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35aac, 0x15e38 bytes
    // afd.sys PAGE:0x35790, 0x15fb8 bytes
    // afd.sys PAGE:0x634a0, 0x187f8 bytes
    // afd.sys PAGE:0x35790, 0x15fb8 bytes
    //
    _r85(sdk::unknown_ptr) afd_nsi_address_change_event_at_passive;
    
    // [AfdNsiAddressChangeEventWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d8b0, 0x15e38 bytes
    // afd.sys PAGE:0x3ec60, 0x15fb8 bytes
    // afd.sys PAGE:0x6cf30, 0x187f8 bytes
    // afd.sys PAGE:0x3ec60, 0x15fb8 bytes
    //
    _r86(sdk::unknown_ptr) afd_nsi_address_change_event_worker;
    
    // [AfdNsiGetAddressProperties]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35d90, 0x15e38 bytes
    // afd.sys PAGE:0x35a3c, 0x15fb8 bytes
    // afd.sys PAGE:0x63778, 0x187f8 bytes
    // afd.sys PAGE:0x35a3c, 0x15fb8 bytes
    //
    _r87(sdk::unknown_ptr) afd_nsi_get_address_properties;
    
    // [AfdNsiGetBestIPv4RouteHelper]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d8ec, 0x15e38 bytes
    // afd.sys PAGE:0x3eca8, 0x15fb8 bytes
    // afd.sys PAGE:0x6cf78, 0x187f8 bytes
    // afd.sys PAGE:0x3eca8, 0x15fb8 bytes
    //
    _r88(sdk::unknown_ptr) afd_nsi_get_best_i_pv4_route_helper;
    
    // [AfdNsiGetBestIPv6Route]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d9b8, 0x15e38 bytes
    // afd.sys PAGE:0x3ed9c, 0x15fb8 bytes
    // afd.sys PAGE:0x6d06c, 0x187f8 bytes
    // afd.sys PAGE:0x3ed9c, 0x15fb8 bytes
    //
    _r89(sdk::unknown_ptr) afd_nsi_get_best_i_pv6_route;
    
    // [AfdNsiRouteChangeCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x693b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e540, 0x15fb8 bytes
    // afd.sys .text:0x36ab0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e540, 0x15fb8 bytes
    //
    _r90(sdk::unknown_ptr) afd_nsi_route_change_callback;
    
    // [AfdParametersNotifyHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27700, 0x15e38 bytes
    // afd.sys .data:0x27780, 0x15fb8 bytes
    // afd.sys .data:0x57808, 0x187f8 bytes
    // afd.sys .data:0x27780, 0x15fb8 bytes
    //
    _r91(sdk::unknown_ptr) afd_parameters_notify_handle;
    
    // [AfdParametersNotifyWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27720, 0x15e38 bytes
    // afd.sys .data:0x277a0, 0x15fb8 bytes
    // afd.sys .data:0x57820, 0x187f8 bytes
    // afd.sys .data:0x277a0, 0x15fb8 bytes
    //
    _r92(sdk::unknown_ptr) afd_parameters_notify_worker;
    
    // [AfdParametersUnloadEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27ad8, 0x15e38 bytes
    // afd.sys .data:0x27c20, 0x15fb8 bytes
    // afd.sys .data:0x57c98, 0x187f8 bytes
    // afd.sys .data:0x27c20, 0x15fb8 bytes
    //
    _r93(sdk::unknown_ptr) afd_parameters_unload_event;
    
    // [AfdPartialDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48fa0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x54680, 0x15fb8 bytes
    // afd.sys .text:0x4de0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x54680, 0x15fb8 bytes
    //
    _r94(sdk::unknown_ptr) afd_partial_disconnect;
    
    // [AfdPassQueryDeviceRelation]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3db04, 0x15e38 bytes
    // afd.sys PAGE:0x3eef8, 0x15fb8 bytes
    // afd.sys PAGE:0x6d1c8, 0x187f8 bytes
    // afd.sys PAGE:0x3eef8, 0x15fb8 bytes
    //
    _r95(sdk::unknown_ptr) afd_pass_query_device_relation;
    
    // [AfdPcwCleanup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x456e8, 0x15e38 bytes
    // afd.sys PAGE:0x48400, 0x15fb8 bytes
    // afd.sys PAGE:0x75448, 0x187f8 bytes
    // afd.sys PAGE:0x48400, 0x15fb8 bytes
    //
    _r96(sdk::unknown_ptr) afd_pcw_cleanup;
    
    // [AfdPcwGlobalCounterSet]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278d8, 0x15e38 bytes
    // afd.sys .data:0x27988, 0x15fb8 bytes
    // afd.sys .data:0x57a00, 0x187f8 bytes
    // afd.sys .data:0x27988, 0x15fb8 bytes
    //
    _r97(sdk::unknown_ptr) afd_pcw_global_counter_set;
    
    // [AFD_PCW_INCREMENT_DROPPED_DATAGRAMS]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x76fc, 0x15e38 bytes
    // afd.sys .text:0x10d1c, 0x15fb8 bytes
    // afd.sys .text:0x1d3da, 0x187f8 bytes
    // afd.sys .text:0x10d1c, 0x15fb8 bytes
    //
    _r98(sdk::unknown_ptr) afd_pcw_increment_dropped_datagrams;
    
    // [AFD_PCW_INCREMENT_REJECTED_CONNECTIONS]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1525c, 0x15e38 bytes
    // afd.sys .text:0xf404, 0x15fb8 bytes
    // afd.sys .text:0x302ac, 0x187f8 bytes
    // afd.sys .text:0xf404, 0x15fb8 bytes
    //
    _r99(sdk::unknown_ptr) afd_pcw_increment_rejected_connections;
    
    // [AfdPcwInit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7a578, 0x15e38 bytes
    // afd.sys INIT:0x84750, 0x15fb8 bytes
    // afd.sys INIT:0x83750, 0x187f8 bytes
    // afd.sys INIT:0x84750, 0x15fb8 bytes
    //
    _s00(sdk::unknown_ptr) afd_pcw_init;
    
    // [AfdPcwProviderCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x45720, 0x15e38 bytes
    // afd.sys PAGE:0x48450, 0x15fb8 bytes
    // afd.sys PAGE:0x754a0, 0x187f8 bytes
    // afd.sys PAGE:0x48450, 0x15fb8 bytes
    //
    _s01(sdk::unknown_ptr) afd_pcw_provider_callback;
    
    // [AfdPcwTLQueryTCPRejectedConnectionCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x457dc, 0x15e38 bytes
    // afd.sys PAGE:0x48524, 0x15fb8 bytes
    // afd.sys PAGE:0x75574, 0x187f8 bytes
    // afd.sys PAGE:0x48524, 0x15fb8 bytes
    //
    _s02(sdk::unknown_ptr) afd_pcw_tl_query_tcp_rejected_connection_count;
    
    // [AfdPerProcCounterSet]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x277b0, 0x15e38 bytes
    // afd.sys .data:0x278e0, 0x15fb8 bytes
    // afd.sys .data:0x57960, 0x187f8 bytes
    // afd.sys .data:0x278e0, 0x15fb8 bytes
    //
    _s03(sdk::unknown_ptr) afd_per_proc_counter_set;
    
    // [AfdPerformSecurityCheck]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3bdb8, 0x15e38 bytes
    // afd.sys PAGE:0x3cb3c, 0x15fb8 bytes
    // afd.sys PAGE:0x6a8bc, 0x187f8 bytes
    // afd.sys PAGE:0x3cb3c, 0x15fb8 bytes
    //
    _s04(sdk::unknown_ptr) afd_perform_security_check;
    
    // [AfdPerformTpDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54fe8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x742b4, 0x15fb8 bytes
    // afd.sys .text:0x3cd84, 0x187f8 bytes
    // afd.sys PAGEAFD:0x742b4, 0x15fb8 bytes
    //
    _s05(sdk::unknown_ptr) afd_perform_tp_disconnect;
    
    // [AfdPnPPowerChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34910, 0x15e38 bytes
    // afd.sys PAGE:0x35410, 0x15fb8 bytes
    // afd.sys PAGE:0x63430, 0x187f8 bytes
    // afd.sys PAGE:0x35410, 0x15fb8 bytes
    //
    _s06(sdk::unknown_ptr) afd_pn_p_power_change;
    
    // [AfdPnpPower]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3dbc4, 0x15e38 bytes
    // afd.sys PAGE:0x3efdc, 0x15fb8 bytes
    // afd.sys PAGE:0x6d2ac, 0x187f8 bytes
    // afd.sys PAGE:0x3efdc, 0x15fb8 bytes
    //
    _s07(sdk::unknown_ptr) afd_pnp_power;
    
    // [AfdPodAttachThread]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x364e0, 0x15e38 bytes
    // afd.sys PAGE:0x36c78, 0x15fb8 bytes
    // afd.sys PAGE:0x6507c, 0x187f8 bytes
    // afd.sys PAGE:0x36c78, 0x15fb8 bytes
    //
    _s08(sdk::unknown_ptr) afd_pod_attach_thread;
    
    // [AfdPodDeinit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3df58, 0x15e38 bytes
    // afd.sys PAGE:0x3f494, 0x15fb8 bytes
    // afd.sys PAGE:0x6d758, 0x187f8 bytes
    // afd.sys PAGE:0x3f494, 0x15fb8 bytes
    //
    _s09(sdk::unknown_ptr) afd_pod_deinit;
    
    // [AfdPodDetachThread]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x36414, 0x15e38 bytes
    // afd.sys PAGE:0x36b78, 0x15fb8 bytes
    // afd.sys PAGE:0x64f80, 0x187f8 bytes
    // afd.sys PAGE:0x36b78, 0x15fb8 bytes
    //
    _s10(sdk::unknown_ptr) afd_pod_detach_thread;
    
    // [AfdPodGetCurrent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x30348, 0x15e38 bytes
    // afd.sys PAGE:0x3447c, 0x15fb8 bytes
    // afd.sys PAGE:0x62a64, 0x187f8 bytes
    // afd.sys PAGE:0x3447c, 0x15fb8 bytes
    //
    _s11(sdk::unknown_ptr) afd_pod_get_current;
    
    // [AfdPodInit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7a6c4, 0x15e38 bytes
    // afd.sys INIT:0x848c4, 0x15fb8 bytes
    // afd.sys INIT:0x838b0, 0x187f8 bytes
    // afd.sys INIT:0x848c4, 0x15fb8 bytes
    //
    _s12(sdk::unknown_ptr) afd_pod_init;
    
    // [AfdPodModuleRundown]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27498, 0x15e38 bytes
    // afd.sys .data:0x27518, 0x15fb8 bytes
    // afd.sys .data:0x57578, 0x187f8 bytes
    // afd.sys .data:0x27518, 0x15fb8 bytes
    //
    _s13(sdk::unknown_ptr) afd_pod_module_rundown;
    
    // [AfdPodMonitor]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27490, 0x15e38 bytes
    // afd.sys .data:0x27510, 0x15fb8 bytes
    // afd.sys .data:0x57570, 0x187f8 bytes
    // afd.sys .data:0x27510, 0x15fb8 bytes
    //
    _s14(sdk::unknown_ptr) afd_pod_monitor;
    
    // [AfdPodShutdownModules]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3df98, 0x15e38 bytes
    // afd.sys PAGE:0x3f4ec, 0x15fb8 bytes
    // afd.sys PAGE:0x6d7b0, 0x187f8 bytes
    // afd.sys PAGE:0x3f4ec, 0x15fb8 bytes
    //
    _s15(sdk::unknown_ptr) afd_pod_shutdown_modules;
    
    // [AfdPodSiloCleanupCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e010, 0x15e38 bytes
    // afd.sys PAGE:0x3f570, 0x15fb8 bytes
    // afd.sys PAGE:0x6d840, 0x187f8 bytes
    // afd.sys PAGE:0x3f570, 0x15fb8 bytes
    //
    _s16(sdk::unknown_ptr) afd_pod_silo_cleanup_callback;
    
    // [AfdPodSiloCreateCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x362c0, 0x15e38 bytes
    // afd.sys PAGE:0x369b0, 0x15fb8 bytes
    // afd.sys PAGE:0x64dc0, 0x187f8 bytes
    // afd.sys PAGE:0x369b0, 0x15fb8 bytes
    //
    _s17(sdk::unknown_ptr) afd_pod_silo_create_callback;
    
    // [AfdPodSiloTerminateCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e030, 0x15e38 bytes
    // afd.sys PAGE:0x3f5f0, 0x15fb8 bytes
    // afd.sys PAGE:0x6d8b0, 0x187f8 bytes
    // afd.sys PAGE:0x3f5f0, 0x15fb8 bytes
    //
    _s18(sdk::unknown_ptr) afd_pod_silo_terminate_callback;
    
    // [AfdPodStartModules]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x363b0, 0x15e38 bytes
    // afd.sys PAGE:0x36af4, 0x15fb8 bytes
    // afd.sys PAGE:0x64efc, 0x187f8 bytes
    // afd.sys PAGE:0x36af4, 0x15fb8 bytes
    //
    _s19(sdk::unknown_ptr) afd_pod_start_modules;
    
    // [AfdPoll]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50210, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56d60, 0x15fb8 bytes
    // afd.sys .text:0x14fe0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56d60, 0x15fb8 bytes
    //
    _s20(sdk::unknown_ptr) afd_poll;
    
    // [AfdPoll32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6a0b8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6ef6c, 0x15fb8 bytes
    // afd.sys .text:0x17ce8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6ef6c, 0x15fb8 bytes
    //
    _s21(sdk::unknown_ptr) afd_poll32;
    
    // [AfdPoll64]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50250, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56da4, 0x15fb8 bytes
    // afd.sys .text:0x15024, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56da4, 0x15fb8 bytes
    //
    _s22(sdk::unknown_ptr) afd_poll64;
    
    // [AfdPollGetInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50bfc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x576c0, 0x15fb8 bytes
    // afd.sys .text:0x15970, 0x187f8 bytes
    // afd.sys PAGEAFD:0x576c0, 0x15fb8 bytes
    //
    _s23(sdk::unknown_ptr) afd_poll_get_info;
    
    // [AfdPollListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27500, 0x15e38 bytes
    // afd.sys .data:0x27570, 0x15fb8 bytes
    // afd.sys .data:0x575d0, 0x187f8 bytes
    // afd.sys .data:0x27570, 0x15fb8 bytes
    //
    _s24(sdk::unknown_ptr) afd_poll_list_head;
    
    // [AfdPollListLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27510, 0x15e38 bytes
    // afd.sys .data:0x27580, 0x15fb8 bytes
    // afd.sys .data:0x575e0, 0x187f8 bytes
    // afd.sys .data:0x27580, 0x15fb8 bytes
    //
    _s25(sdk::unknown_ptr) afd_poll_list_lock;
    
    // [AfdPreventUnbind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3e6c, 0x15e38 bytes
    // afd.sys .text:0x3738, 0x15fb8 bytes
    // afd.sys .text:0x583c, 0x187f8 bytes
    // afd.sys .text:0x3738, 0x15fb8 bytes
    //
    _s26(sdk::unknown_ptr) afd_prevent_unbind;
    
    // [AfdPriorityBoost]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27230, 0x15e38 bytes
    // afd.sys .data:0x27250, 0x15fb8 bytes
    // afd.sys .data:0x57290, 0x187f8 bytes
    // afd.sys .data:0x27250, 0x15fb8 bytes
    //
    _s27(sdk::unknown_ptr) afd_priority_boost;
    
    // [AfdProcessAddressChangeList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56298, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58e34, 0x15fb8 bytes
    // afd.sys .text:0x18360, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58e34, 0x15fb8 bytes
    //
    _s28(sdk::unknown_ptr) afd_process_address_change_list;
    
    // [AfdProcessBufferSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4b5a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c330, 0x15fb8 bytes
    // afd.sys .text:0x39c30, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c330, 0x15fb8 bytes
    //
    _s29(sdk::unknown_ptr) afd_process_buffer_send;
    
    // [AfdProcessLRList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3cdd0, 0x15e38 bytes
    // afd.sys PAGE:0x3dfd0, 0x15fb8 bytes
    // afd.sys PAGE:0x6bc90, 0x187f8 bytes
    // afd.sys PAGE:0x3dfd0, 0x15fb8 bytes
    //
    _s30(sdk::unknown_ptr) afd_process_lr_list;
    
    // [AfdQueryCompartmentId]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33d70, 0x15e38 bytes
    // afd.sys PAGE:0x33b08, 0x15fb8 bytes
    // afd.sys PAGE:0x60c6c, 0x187f8 bytes
    // afd.sys PAGE:0x33b08, 0x15fb8 bytes
    //
    _s31(sdk::unknown_ptr) afd_query_compartment_id;
    
    // [AfdQueryHandles]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x318b0, 0x15e38 bytes
    // afd.sys PAGE:0x349d0, 0x15fb8 bytes
    // afd.sys PAGE:0x62d30, 0x187f8 bytes
    // afd.sys PAGE:0x349d0, 0x15fb8 bytes
    //
    _s32(sdk::unknown_ptr) afd_query_handles;
    
    // [AfdQueryISB]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x437c0, 0x15e38 bytes
    // afd.sys PAGE:0x46158, 0x15fb8 bytes
    // afd.sys PAGE:0x740fc, 0x187f8 bytes
    // afd.sys PAGE:0x46158, 0x15fb8 bytes
    //
    _s33(sdk::unknown_ptr) afd_query_isb;
    
    // [AfdQueryProviderInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34800, 0x15e38 bytes
    // afd.sys PAGE:0x36738, 0x15fb8 bytes
    // afd.sys PAGE:0x646cc, 0x187f8 bytes
    // afd.sys PAGE:0x36738, 0x15fb8 bytes
    //
    _s34(sdk::unknown_ptr) afd_query_provider_info;
    
    // [AfdQueryReceiveInformation]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53160, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58700, 0x15fb8 bytes
    // afd.sys .text:0x18920, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58700, 0x15fb8 bytes
    //
    _s35(sdk::unknown_ptr) afd_query_receive_information;
    
    // [AfdQueueTransmit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6dc7c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74344, 0x15fb8 bytes
    // afd.sys .text:0x3ce0c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74344, 0x15fb8 bytes
    //
    _s36(sdk::unknown_ptr) afd_queue_transmit;
    
    // [AfdQueueWorkItem]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2dc0, 0x15e38 bytes
    // afd.sys .text:0x326c, 0x15fb8 bytes
    // afd.sys .text:0x7340, 0x187f8 bytes
    // afd.sys .text:0x326c, 0x15fb8 bytes
    //
    _s37(sdk::unknown_ptr) afd_queue_work_item;
    
    // [AfdQueuedTransmitFileListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27590, 0x15e38 bytes
    // afd.sys .data:0x27610, 0x15fb8 bytes
    // afd.sys .data:0x576c0, 0x187f8 bytes
    // afd.sys .data:0x27610, 0x15fb8 bytes
    //
    _s38(sdk::unknown_ptr) afd_queued_transmit_file_list_head;
    
    // [AfdQueuedTransmitFileSpinLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275a0, 0x15e38 bytes
    // afd.sys .data:0x27620, 0x15fb8 bytes
    // afd.sys .data:0x576d0, 0x187f8 bytes
    // afd.sys .data:0x27620, 0x15fb8 bytes
    //
    _s39(sdk::unknown_ptr) afd_queued_transmit_file_spin_lock;
    
    // [AfdReadPerProcCounter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1c09c, 0x15e38 bytes
    // afd.sys .text:0x1cbc0, 0x15fb8 bytes
    // afd.sys .text:0x4c08c, 0x187f8 bytes
    // afd.sys .text:0x1cbc0, 0x15fb8 bytes
    //
    _s40(sdk::unknown_ptr) afd_read_per_proc_counter;
    
    // [AfdReadRegistry]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7ab8c, 0x15e38 bytes
    // afd.sys INIT:0x84ccc, 0x15fb8 bytes
    // afd.sys INIT:0x83ca0, 0x187f8 bytes
    // afd.sys INIT:0x84ccc, 0x15fb8 bytes
    //
    _s41(sdk::unknown_ptr) afd_read_registry;
    
    // [AfdReadSingleParameter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35674, 0x15e38 bytes
    // afd.sys PAGE:0x36490, 0x15fb8 bytes
    // afd.sys PAGE:0x64180, 0x187f8 bytes
    // afd.sys PAGE:0x36490, 0x15fb8 bytes
    //
    _s42(sdk::unknown_ptr) afd_read_single_parameter;
    
    // [AfdReadVolatileParameters]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c260, 0x15e38 bytes
    // afd.sys PAGE:0x3d110, 0x15fb8 bytes
    // afd.sys PAGE:0x6aea0, 0x187f8 bytes
    // afd.sys PAGE:0x3d110, 0x15fb8 bytes
    //
    _s43(sdk::unknown_ptr) afd_read_volatile_parameters;
    
    // [AfdReallowUnbind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3e3c, 0x15e38 bytes
    // afd.sys .text:0x36e8, 0x15fb8 bytes
    // afd.sys .text:0x57ec, 0x187f8 bytes
    // afd.sys .text:0x36e8, 0x15fb8 bytes
    //
    _s44(sdk::unknown_ptr) afd_reallow_unbind;
    
    // [AfdReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4d4c0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x50730, 0x15fb8 bytes
    // afd.sys .text:0xf8e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x50730, 0x15fb8 bytes
    //
    _s45(sdk::unknown_ptr) afd_receive;
    
    // [AfdReceiveDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4c8b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x529f0, 0x15fb8 bytes
    // afd.sys .text:0x11b70, 0x187f8 bytes
    // afd.sys PAGEAFD:0x529f0, 0x15fb8 bytes
    //
    _s46(sdk::unknown_ptr) afd_receive_datagram;
    
    // [AfdReceiveDatagramEventCommonHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3720, 0x15e38 bytes
    // afd.sys .text:0x2130, 0x15fb8 bytes
    // afd.sys .text:0xc710, 0x187f8 bytes
    // afd.sys .text:0x2130, 0x15fb8 bytes
    //
    _s47(sdk::unknown_ptr) afd_receive_datagram_event_common_handler;
    
    // [AfdReceiveDatagramEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ad80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6ffd0, 0x15fb8 bytes
    // afd.sys .text:0x384f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6ffd0, 0x15fb8 bytes
    //
    _s48(sdk::unknown_ptr) afd_receive_datagram_event_handler;
    
    // [AfdReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6a890, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6f8e0, 0x15fb8 bytes
    // afd.sys .text:0x37b00, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6f8e0, 0x15fb8 bytes
    //
    _s49(sdk::unknown_ptr) afd_receive_event_handler;
    
    // [AfdReceiveExpeditedEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6a9d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6fab0, 0x15fb8 bytes
    // afd.sys .text:0x37d10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6fab0, 0x15fb8 bytes
    //
    _s50(sdk::unknown_ptr) afd_receive_expedited_event_handler;
    
    // [AfdReceiveWindowSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275b0, 0x15e38 bytes
    // afd.sys .data:0x27630, 0x15fb8 bytes
    // afd.sys .data:0x576e0, 0x187f8 bytes
    // afd.sys .data:0x27630, 0x15fb8 bytes
    //
    _s51(sdk::unknown_ptr) afd_receive_window_size;
    
    // [AfdRefTLBaseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2824, 0x15e38 bytes
    // afd.sys .text:0x35a8, 0x15fb8 bytes
    // afd.sys .text:0x579c, 0x187f8 bytes
    // afd.sys .text:0x35a8, 0x15fb8 bytes
    //
    _s52(sdk::unknown_ptr) afd_ref_tl_base_endpoint;
    
    // [AfdReferenceCompartment]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3e1c, 0x15e38 bytes
    // afd.sys .text:0x369c, 0x15fb8 bytes
    // afd.sys .text:0x57c4, 0x187f8 bytes
    // afd.sys .text:0x369c, 0x15fb8 bytes
    //
    _s53(sdk::unknown_ptr) afd_reference_compartment;
    
    // [AfdReferenceGroup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c18c, 0x15e38 bytes
    // afd.sys PAGE:0x3cf90, 0x15fb8 bytes
    // afd.sys PAGE:0x6ad20, 0x187f8 bytes
    // afd.sys PAGE:0x3cf90, 0x15fb8 bytes
    //
    _s54(sdk::unknown_ptr) afd_reference_group;
    
    // [AfdRefreshConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64ff0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68e08, 0x15fb8 bytes
    // afd.sys .text:0x30308, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68e08, 0x15fb8 bytes
    //
    _s55(sdk::unknown_ptr) afd_refresh_connection;
    
    // [AfdRefreshEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65128, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68f64, 0x15fb8 bytes
    // afd.sys .text:0x3047c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68f64, 0x15fb8 bytes
    //
    _s56(sdk::unknown_ptr) afd_refresh_endpoint;
    
    // [AfdReleaseRegistryHandleWait]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c360, 0x15e38 bytes
    // afd.sys PAGE:0x3d240, 0x15fb8 bytes
    // afd.sys PAGE:0x6afd0, 0x187f8 bytes
    // afd.sys PAGE:0x3d240, 0x15fb8 bytes
    //
    _s57(sdk::unknown_ptr) afd_release_registry_handle_wait;
    
    // [AfdRemoveConnectionFromTimerWheel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa5c0, 0x15e38 bytes
    // afd.sys .text:0x716c, 0x15fb8 bytes
    // afd.sys .text:0x1982c, 0x187f8 bytes
    // afd.sys .text:0x716c, 0x15fb8 bytes
    //
    _s58(sdk::unknown_ptr) afd_remove_connection_from_timer_wheel;
    
    // [AfdReplenishListenBacklog]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x39de8, 0x15e38 bytes
    // afd.sys PAGE:0x3a534, 0x15fb8 bytes
    // afd.sys PAGE:0x68380, 0x187f8 bytes
    // afd.sys PAGE:0x3a534, 0x15fb8 bytes
    //
    _s59(sdk::unknown_ptr) afd_replenish_listen_backlog;
    
    // [AfdReportConnectionAllocationFailure]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64164, 0x15e38 bytes
    // afd.sys PAGEAFD:0x67fa8, 0x15fb8 bytes
    // afd.sys .text:0x2f4d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x67fa8, 0x15fb8 bytes
    //
    _s60(sdk::unknown_ptr) afd_report_connection_allocation_failure;
    
    // [AfdRestartAbort]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65bf0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69b90, 0x15fb8 bytes
    // afd.sys .text:0x31860, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69b90, 0x15fb8 bytes
    //
    _s61(sdk::unknown_ptr) afd_restart_abort;
    
    // [AfdRestartAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54050, 0x15e38 bytes
    // afd.sys PAGEAFD:0x490b0, 0x15fb8 bytes
    // afd.sys .text:0x1670, 0x187f8 bytes
    // afd.sys PAGEAFD:0x490b0, 0x15fb8 bytes
    //
    _s62(sdk::unknown_ptr) afd_restart_accept;
    
    // [AfdRestartBindGetAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64c70, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68ad0, 0x15fb8 bytes
    // afd.sys .text:0x2fe50, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68ad0, 0x15fb8 bytes
    //
    _s63(sdk::unknown_ptr) afd_restart_bind_get_address;
    
    // [AfdRestartBufferReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b610, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71230, 0x15fb8 bytes
    // afd.sys .text:0x39790, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71230, 0x15fb8 bytes
    //
    _s64(sdk::unknown_ptr) afd_restart_buffer_receive;
    
    // [AfdRestartBufferReceiveDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6aee0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70160, 0x15fb8 bytes
    // afd.sys .text:0x386a0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70160, 0x15fb8 bytes
    //
    _s65(sdk::unknown_ptr) afd_restart_buffer_receive_datagram;
    
    // [AfdRestartBufferReceiveWithUserIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52800, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4f310, 0x15fb8 bytes
    // afd.sys .text:0xf780, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4f310, 0x15fb8 bytes
    //
    _s66(sdk::unknown_ptr) afd_restart_buffer_receive_with_user_irp;
    
    // [AfdRestartBufferSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b950, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c660, 0x15fb8 bytes
    // afd.sys .text:0x39ca0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c660, 0x15fb8 bytes
    //
    _s67(sdk::unknown_ptr) afd_restart_buffer_send;
    
    // [AfdRestartConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65360, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69170, 0x15fb8 bytes
    // afd.sys .text:0x30df0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69170, 0x15fb8 bytes
    //
    _s68(sdk::unknown_ptr) afd_restart_connect;
    
    // [AfdRestartDelayedAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64290, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68110, 0x15fb8 bytes
    // afd.sys .text:0x179d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68110, 0x15fb8 bytes
    //
    _s69(sdk::unknown_ptr) afd_restart_delayed_accept;
    
    // [AfdRestartDelayedAcceptListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x66c00, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6b130, 0x15fb8 bytes
    // afd.sys .text:0x33150, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6b130, 0x15fb8 bytes
    //
    _s70(sdk::unknown_ptr) afd_restart_delayed_accept_listen;
    
    // [AfdRestartDelayedSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64410, 0x15e38 bytes
    // afd.sys PAGEAFD:0x682c0, 0x15fb8 bytes
    // afd.sys .text:0x2f640, 0x187f8 bytes
    // afd.sys PAGEAFD:0x682c0, 0x15fb8 bytes
    //
    _s71(sdk::unknown_ptr) afd_restart_delayed_super_accept;
    
    // [AfdRestartDeviceControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x161e0, 0x15e38 bytes
    // afd.sys .text:0x10620, 0x15fb8 bytes
    // afd.sys .text:0x350f0, 0x187f8 bytes
    // afd.sys .text:0x10620, 0x15fb8 bytes
    //
    _s72(sdk::unknown_ptr) afd_restart_device_control;
    
    // [AfdRestartDgConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x655a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69440, 0x15fb8 bytes
    // afd.sys .text:0x310c0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69440, 0x15fb8 bytes
    //
    _s73(sdk::unknown_ptr) afd_restart_dg_connect;
    
    // [AfdRestartDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65c20, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69bd0, 0x15fb8 bytes
    // afd.sys .text:0x318a0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69bd0, 0x15fb8 bytes
    //
    _s74(sdk::unknown_ptr) afd_restart_disconnect;
    
    // [AfdRestartFastDatagramSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65c50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69e90, 0x15fb8 bytes
    // afd.sys .text:0x31de0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69e90, 0x15fb8 bytes
    //
    _s75(sdk::unknown_ptr) afd_restart_fast_datagram_send;
    
    // [AfdRestartFastTransmitSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6dd50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74480, 0x15fb8 bytes
    // afd.sys .text:0x3cf40, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74480, 0x15fb8 bytes
    //
    _s76(sdk::unknown_ptr) afd_restart_fast_transmit_send;
    
    // [AfdRestartGetAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64dd0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68c80, 0x15fb8 bytes
    // afd.sys .text:0x30000, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68c80, 0x15fb8 bytes
    //
    _s77(sdk::unknown_ptr) afd_restart_get_address;
    
    // [AfdRestartMdlReadComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6de60, 0x15e38 bytes
    // afd.sys PAGEAFD:0x745e0, 0x15fb8 bytes
    // afd.sys .text:0x3d0a0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x745e0, 0x15fb8 bytes
    //
    _s78(sdk::unknown_ptr) afd_restart_mdl_read_complete;
    
    // [AfdRestartQueryDeviceRelation]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69470, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e5f0, 0x15fb8 bytes
    // afd.sys .text:0x36b60, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e5f0, 0x15fb8 bytes
    //
    _s79(sdk::unknown_ptr) afd_restart_query_device_relation;
    
    // [AfdRestartReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ab00, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6fc80, 0x15fb8 bytes
    // afd.sys .text:0x37f10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6fc80, 0x15fb8 bytes
    //
    _s80(sdk::unknown_ptr) afd_restart_receive;
    
    // [AfdRestartReceiveDatagramWithUserIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b150, 0x15e38 bytes
    // afd.sys PAGEAFD:0x70400, 0x15fb8 bytes
    // afd.sys .text:0x38960, 0x187f8 bytes
    // afd.sys PAGEAFD:0x70400, 0x15fb8 bytes
    //
    _s81(sdk::unknown_ptr) afd_restart_receive_datagram_with_user_irp;
    
    // [AfdRestartSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x49840, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c1f0, 0x15fb8 bytes
    // afd.sys .text:0x8d40, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c1f0, 0x15fb8 bytes
    //
    _s82(sdk::unknown_ptr) afd_restart_send;
    
    // [AfdRestartSendConnDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b9f0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71530, 0x15fb8 bytes
    // afd.sys .text:0x39d40, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71530, 0x15fb8 bytes
    //
    _s83(sdk::unknown_ptr) afd_restart_send_conn_datagram;
    
    // [AfdRestartSendDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ba80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71600, 0x15fb8 bytes
    // afd.sys .text:0x39e10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71600, 0x15fb8 bytes
    //
    _s84(sdk::unknown_ptr) afd_restart_send_datagram;
    
    // [AfdRestartSendTdiConnDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6bb20, 0x15e38 bytes
    // afd.sys PAGEAFD:0x716d0, 0x15fb8 bytes
    // afd.sys .text:0x39ee0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x716d0, 0x15fb8 bytes
    //
    _s85(sdk::unknown_ptr) afd_restart_send_tdi_conn_datagram;
    
    // [AfdRestartSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64570, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56320, 0x15fb8 bytes
    // afd.sys .text:0x2250, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56320, 0x15fb8 bytes
    //
    _s86(sdk::unknown_ptr) afd_restart_super_accept;
    
    // [AfdRestartSuperAcceptGetAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x646e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68470, 0x15fb8 bytes
    // afd.sys .text:0x2f7f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68470, 0x15fb8 bytes
    //
    _s87(sdk::unknown_ptr) afd_restart_super_accept_get_address;
    
    // [AfdRestartSuperAcceptListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54938, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68634, 0x15fb8 bytes
    // afd.sys .text:0x2f9b4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68634, 0x15fb8 bytes
    //
    _s88(sdk::unknown_ptr) afd_restart_super_accept_listen;
    
    // [AfdRestartSuperAcceptReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x64880, 0x15e38 bytes
    // afd.sys PAGEAFD:0x68690, 0x15fb8 bytes
    // afd.sys .text:0x2fa10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x68690, 0x15fb8 bytes
    //
    _s89(sdk::unknown_ptr) afd_restart_super_accept_receive;
    
    // [AfdRestartSuperConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x656a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69590, 0x15fb8 bytes
    // afd.sys .text:0x31230, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69590, 0x15fb8 bytes
    //
    _s90(sdk::unknown_ptr) afd_restart_super_connect;
    
    // [AfdRestartTPacketsBufferRead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6deb0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x746a0, 0x15fb8 bytes
    // afd.sys .text:0x3d160, 0x187f8 bytes
    // afd.sys PAGEAFD:0x746a0, 0x15fb8 bytes
    //
    _s91(sdk::unknown_ptr) afd_restart_t_packets_buffer_read;
    
    // [AfdRestartTPacketsMdlRead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6df80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x747c0, 0x15fb8 bytes
    // afd.sys .text:0x3d280, 0x187f8 bytes
    // afd.sys PAGEAFD:0x747c0, 0x15fb8 bytes
    //
    _s92(sdk::unknown_ptr) afd_restart_t_packets_mdl_read;
    
    // [AfdRestartTPacketsSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e0b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74930, 0x15fb8 bytes
    // afd.sys .text:0x3d3f0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74930, 0x15fb8 bytes
    //
    _s93(sdk::unknown_ptr) afd_restart_t_packets_send;
    
    // [AfdRestartTPDetachedSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6de90, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74650, 0x15fb8 bytes
    // afd.sys .text:0x3d110, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74650, 0x15fb8 bytes
    //
    _s94(sdk::unknown_ptr) afd_restart_tp_detached_send;
    
    // [AfdReturnBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4b2b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4de40, 0x15fb8 bytes
    // afd.sys .text:0xce30, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4de40, 0x15fb8 bytes
    //
    _s95(sdk::unknown_ptr) afd_return_buffer;
    
    // [AfdReturnNicsPackets]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69484, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58980, 0x15fb8 bytes
    // afd.sys .text:0x36b84, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58980, 0x15fb8 bytes
    //
    _s96(sdk::unknown_ptr) afd_return_nics_packets;
    
    // [AfdReturnTpInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e0c8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x749a0, 0x15fb8 bytes
    // afd.sys .text:0x3d45c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x749a0, 0x15fb8 bytes
    //
    _s97(sdk::unknown_ptr) afd_return_tp_info;
    
    // [AfdReuseConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3b754, 0x15e38 bytes
    // afd.sys PAGE:0x3c414, 0x15fb8 bytes
    // afd.sys PAGE:0x6a204, 0x187f8 bytes
    // afd.sys PAGE:0x3c414, 0x15fb8 bytes
    //
    _s98(sdk::unknown_ptr) afd_reuse_connection;
    
    // [AfdReuseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35340, 0x15e38 bytes
    // afd.sys PAGE:0x3c638, 0x15fb8 bytes
    // afd.sys PAGE:0x6a3e8, 0x187f8 bytes
    // afd.sys PAGE:0x3c638, 0x15fb8 bytes
    //
    _s99(sdk::unknown_ptr) afd_reuse_endpoint;
    
    // [AfdRio]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ad10, 0x15e38 bytes
    // afd.sys .text:0x165b0, 0x15fb8 bytes
    // afd.sys .text:0x45950, 0x187f8 bytes
    // afd.sys .text:0x165b0, 0x15fb8 bytes
    //
    _t00(sdk::unknown_ptr) afd_rio;
    
    // [AfdRioAllocateRioState]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9c24, 0x15e38 bytes
    // afd.sys .text:0x165e0, 0x15fb8 bytes
    // afd.sys .text:0x45980, 0x187f8 bytes
    // afd.sys .text:0x165e0, 0x15fb8 bytes
    //
    _t01(sdk::unknown_ptr) afd_rio_allocate_rio_state;
    
    // [AfdRioCheckRqBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9bfc, 0x15e38 bytes
    // afd.sys .text:0x167c0, 0x15fb8 bytes
    // afd.sys .text:0x45b28, 0x187f8 bytes
    // afd.sys .text:0x167c0, 0x15fb8 bytes
    //
    _t02(sdk::unknown_ptr) afd_rio_check_rq_buffer_size;
    
    // [AfdRioCleanupBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x6778, 0x15e38 bytes
    // afd.sys .text:0x167ec, 0x15fb8 bytes
    // afd.sys .text:0x45b54, 0x187f8 bytes
    // afd.sys .text:0x167ec, 0x15fb8 bytes
    //
    _t03(sdk::unknown_ptr) afd_rio_cleanup_buffer;
    
    // [AfdRioCleanupCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5944, 0x15e38 bytes
    // afd.sys .text:0x1685c, 0x15fb8 bytes
    // afd.sys .text:0x45bc4, 0x187f8 bytes
    // afd.sys .text:0x1685c, 0x15fb8 bytes
    //
    _t04(sdk::unknown_ptr) afd_rio_cleanup_cq;
    
    // [AfdRioCleanupQueueContextCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7824, 0x15e38 bytes
    // afd.sys .text:0x168b4, 0x15fb8 bytes
    // afd.sys .text:0x45c1c, 0x187f8 bytes
    // afd.sys .text:0x168b4, 0x15fb8 bytes
    //
    _t05(sdk::unknown_ptr) afd_rio_cleanup_queue_context_cq;
    
    // [AfdRioCleanupQueueContextRq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9ec4, 0x15e38 bytes
    // afd.sys .text:0x1692c, 0x15fb8 bytes
    // afd.sys .text:0x45c94, 0x187f8 bytes
    // afd.sys .text:0x1692c, 0x15fb8 bytes
    //
    _t06(sdk::unknown_ptr) afd_rio_cleanup_queue_context_rq;
    
    // [AfdRioCleanupRegistrationDomain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x6590, 0x15e38 bytes
    // afd.sys .text:0x16968, 0x15fb8 bytes
    // afd.sys .text:0x45cd0, 0x187f8 bytes
    // afd.sys .text:0x16968, 0x15fb8 bytes
    //
    _t07(sdk::unknown_ptr) afd_rio_cleanup_registration_domain;
    
    // [AfdRioCleanupRioState]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7720, 0x15e38 bytes
    // afd.sys .text:0x16a10, 0x15fb8 bytes
    // afd.sys .text:0x45d80, 0x187f8 bytes
    // afd.sys .text:0x16a10, 0x15fb8 bytes
    //
    _t08(sdk::unknown_ptr) afd_rio_cleanup_rio_state;
    
    // [AfdRioCloseRegistrationDomain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb274, 0x15e38 bytes
    // afd.sys .text:0x16b0c, 0x15fb8 bytes
    // afd.sys .text:0x45e7c, 0x187f8 bytes
    // afd.sys .text:0x16b0c, 0x15fb8 bytes
    //
    _t09(sdk::unknown_ptr) afd_rio_close_registration_domain;
    
    // [AfdRioCloseRioState]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9de4, 0x15e38 bytes
    // afd.sys .text:0x16b54, 0x15fb8 bytes
    // afd.sys .text:0x45ec8, 0x187f8 bytes
    // afd.sys .text:0x16b54, 0x15fb8 bytes
    //
    _t10(sdk::unknown_ptr) afd_rio_close_rio_state;
    
    // [AfdRioConnectedReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x6910, 0x15e38 bytes
    // afd.sys .text:0x16bf0, 0x15fb8 bytes
    // afd.sys .text:0x45f60, 0x187f8 bytes
    // afd.sys .text:0x16bf0, 0x15fb8 bytes
    //
    _t11(sdk::unknown_ptr) afd_rio_connected_receive_event_handler;
    
    // [AfdRioConnectionSendWorkRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ad60, 0x15e38 bytes
    // afd.sys .text:0x16ff0, 0x15fb8 bytes
    // afd.sys .text:0x46360, 0x187f8 bytes
    // afd.sys .text:0x16ff0, 0x15fb8 bytes
    //
    _t12(sdk::unknown_ptr) afd_rio_connection_send_work_routine;
    
    // [AfdRioCreateCompletionQueue]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x59b0, 0x15e38 bytes
    // afd.sys .text:0x17060, 0x15fb8 bytes
    // afd.sys .text:0x463d0, 0x187f8 bytes
    // afd.sys .text:0x17060, 0x15fb8 bytes
    //
    _t13(sdk::unknown_ptr) afd_rio_create_completion_queue;
    
    // [AfdRioCreateCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5d2c, 0x15e38 bytes
    // afd.sys .text:0x174e8, 0x15fb8 bytes
    // afd.sys .text:0x46828, 0x187f8 bytes
    // afd.sys .text:0x174e8, 0x15fb8 bytes
    //
    _t14(sdk::unknown_ptr) afd_rio_create_cq;
    
    // [AfdRioCreateRegisteredBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x921c, 0x15e38 bytes
    // afd.sys .text:0x178cc, 0x15fb8 bytes
    // afd.sys .text:0x46c0c, 0x187f8 bytes
    // afd.sys .text:0x178cc, 0x15fb8 bytes
    //
    _t15(sdk::unknown_ptr) afd_rio_create_registered_buffer;
    
    // [AfdRioCreateRegistrationDomain]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb0ec, 0x15e38 bytes
    // afd.sys .text:0x17a64, 0x15fb8 bytes
    // afd.sys .text:0x46da4, 0x187f8 bytes
    // afd.sys .text:0x17a64, 0x15fb8 bytes
    //
    _t16(sdk::unknown_ptr) afd_rio_create_registration_domain;
    
    // [AfdRioCreateRqPair]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x937c, 0x15e38 bytes
    // afd.sys .text:0x17c40, 0x15fb8 bytes
    // afd.sys .text:0x46f64, 0x187f8 bytes
    // afd.sys .text:0x17c40, 0x15fb8 bytes
    //
    _t17(sdk::unknown_ptr) afd_rio_create_rq_pair;
    
    // [AfdRioDequeueNotifyRequests]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa28c, 0x15e38 bytes
    // afd.sys .text:0x185d0, 0x15fb8 bytes
    // afd.sys .text:0x478f4, 0x187f8 bytes
    // afd.sys .text:0x185d0, 0x15fb8 bytes
    //
    _t18(sdk::unknown_ptr) afd_rio_dequeue_notify_requests;
    
    // [AfdRioDereferenceBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x6718, 0x15e38 bytes
    // afd.sys .text:0x18648, 0x15fb8 bytes
    // afd.sys .text:0x47998, 0x187f8 bytes
    // afd.sys .text:0x18648, 0x15fb8 bytes
    //
    _t19(sdk::unknown_ptr) afd_rio_dereference_buffer;
    
    // [AfdRioDereferenceCachedBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa56c, 0x15e38 bytes
    // afd.sys .text:0x18744, 0x15fb8 bytes
    // afd.sys .text:0x47a94, 0x187f8 bytes
    // afd.sys .text:0x18744, 0x15fb8 bytes
    //
    _t20(sdk::unknown_ptr) afd_rio_dereference_cached_buffer;
    
    // [AfdRioDereferenceRequestBuffers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa524, 0x15e38 bytes
    // afd.sys .text:0x187a4, 0x15fb8 bytes
    // afd.sys .text:0x47af4, 0x187f8 bytes
    // afd.sys .text:0x187a4, 0x15fb8 bytes
    //
    _t21(sdk::unknown_ptr) afd_rio_dereference_request_buffers;
    
    // [AfdRioDeregisterBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1adb0, 0x15e38 bytes
    // afd.sys .text:0x1883c, 0x15fb8 bytes
    // afd.sys .text:0x47b8c, 0x187f8 bytes
    // afd.sys .text:0x1883c, 0x15fb8 bytes
    //
    _t22(sdk::unknown_ptr) afd_rio_deregister_buffer;
    
    // [AfdRioDestroyCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ae50, 0x15e38 bytes
    // afd.sys .text:0x188fc, 0x15fb8 bytes
    // afd.sys .text:0x47c4c, 0x187f8 bytes
    // afd.sys .text:0x188fc, 0x15fb8 bytes
    //
    _t23(sdk::unknown_ptr) afd_rio_destroy_cq;
    
    // [AfdRioEvictCachedBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x78f8, 0x15e38 bytes
    // afd.sys .text:0x189b4, 0x15fb8 bytes
    // afd.sys .text:0x47d04, 0x187f8 bytes
    // afd.sys .text:0x189b4, 0x15fb8 bytes
    //
    _t24(sdk::unknown_ptr) afd_rio_evict_cached_buffer;
    
    // [AfdRioFastIo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7940, 0x15e38 bytes
    // afd.sys .text:0x18a04, 0x15fb8 bytes
    // afd.sys .text:0x47d54, 0x187f8 bytes
    // afd.sys .text:0x18a04, 0x15fb8 bytes
    //
    _t25(sdk::unknown_ptr) afd_rio_fast_io;
    
    // [AfdRioFindAndReferenceCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9af0, 0x15e38 bytes
    // afd.sys .text:0x190a0, 0x15fb8 bytes
    // afd.sys .text:0x48430, 0x187f8 bytes
    // afd.sys .text:0x190a0, 0x15fb8 bytes
    //
    _t26(sdk::unknown_ptr) afd_rio_find_and_reference_cq;
    
    // [AfdRioFindCqUnderLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9bcc, 0x15e38 bytes
    // afd.sys .text:0x19114, 0x15fb8 bytes
    // afd.sys .text:0x484a4, 0x187f8 bytes
    // afd.sys .text:0x19114, 0x15fb8 bytes
    //
    _t27(sdk::unknown_ptr) afd_rio_find_cq_under_lock;
    
    // [AfdRioFlushConnectionSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x81e0, 0x15e38 bytes
    // afd.sys .text:0x19148, 0x15fb8 bytes
    // afd.sys .text:0x484dc, 0x187f8 bytes
    // afd.sys .text:0x19148, 0x15fb8 bytes
    //
    _t28(sdk::unknown_ptr) afd_rio_flush_connection_send;
    
    // [AfdRioFlushDgramSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x8900, 0x15e38 bytes
    // afd.sys .text:0x194f4, 0x15fb8 bytes
    // afd.sys .text:0x488c4, 0x187f8 bytes
    // afd.sys .text:0x194f4, 0x15fb8 bytes
    //
    _t29(sdk::unknown_ptr) afd_rio_flush_dgram_send;
    
    // [AfdRioFlushReceiveQueue]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9fbc, 0x15e38 bytes
    // afd.sys .text:0x19c08, 0x15fb8 bytes
    // afd.sys .text:0x49000, 0x187f8 bytes
    // afd.sys .text:0x19c08, 0x15fb8 bytes
    //
    _t30(sdk::unknown_ptr) afd_rio_flush_receive_queue;
    
    // [AfdRioFlushSendQueue]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9f14, 0x15e38 bytes
    // afd.sys .text:0x19e54, 0x15fb8 bytes
    // afd.sys .text:0x4921c, 0x187f8 bytes
    // afd.sys .text:0x19e54, 0x15fb8 bytes
    //
    _t31(sdk::unknown_ptr) afd_rio_flush_send_queue;
    
    // [AfdRioGetAndCacheBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x787c, 0x15e38 bytes
    // afd.sys .text:0x1a0d8, 0x15fb8 bytes
    // afd.sys .text:0x494c4, 0x187f8 bytes
    // afd.sys .text:0x1a0d8, 0x15fb8 bytes
    //
    _t32(sdk::unknown_ptr) afd_rio_get_and_cache_buffer;
    
    // [AfdRioGetCachedBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1aee8, 0x15e38 bytes
    // afd.sys .text:0x1a15c, 0x15fb8 bytes
    // afd.sys .text:0x4954c, 0x187f8 bytes
    // afd.sys .text:0x1a15c, 0x15fb8 bytes
    //
    _t33(sdk::unknown_ptr) afd_rio_get_cached_buffer;
    
    // [AfdRioGetNextQueuedSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa428, 0x15e38 bytes
    // afd.sys .text:0x1a1f4, 0x15fb8 bytes
    // afd.sys .text:0x495e4, 0x187f8 bytes
    // afd.sys .text:0x1a1f4, 0x15fb8 bytes
    //
    _t34(sdk::unknown_ptr) afd_rio_get_next_queued_send;
    
    // [AfdRioGrowTable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa464, 0x15e38 bytes
    // afd.sys .text:0x1a270, 0x15fb8 bytes
    // afd.sys .text:0x49660, 0x187f8 bytes
    // afd.sys .text:0x1a270, 0x15fb8 bytes
    //
    _t35(sdk::unknown_ptr) afd_rio_grow_table;
    
    // [AfdRioHandleDgramReceiveRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7280, 0x15e38 bytes
    // afd.sys .text:0x1a34c, 0x15fb8 bytes
    // afd.sys .text:0x49724, 0x187f8 bytes
    // afd.sys .text:0x1a34c, 0x15fb8 bytes
    //
    _t36(sdk::unknown_ptr) afd_rio_handle_dgram_receive_request;
    
    // [AfdRioInsertCompletionQueue]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5cc0, 0x15e38 bytes
    // afd.sys .text:0x1a684, 0x15fb8 bytes
    // afd.sys .text:0x49a4c, 0x187f8 bytes
    // afd.sys .text:0x1a684, 0x15fb8 bytes
    //
    _t37(sdk::unknown_ptr) afd_rio_insert_completion_queue;
    
    // [AfdRioInvalidateBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x6648, 0x15e38 bytes
    // afd.sys .text:0x1a720, 0x15fb8 bytes
    // afd.sys .text:0x49af8, 0x187f8 bytes
    // afd.sys .text:0x1a720, 0x15fb8 bytes
    //
    _t38(sdk::unknown_ptr) afd_rio_invalidate_buffer;
    
    // [AfdRioInvalidateCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x67f0, 0x15e38 bytes
    // afd.sys .text:0x1a80c, 0x15fb8 bytes
    // afd.sys .text:0x49be4, 0x187f8 bytes
    // afd.sys .text:0x1a80c, 0x15fb8 bytes
    //
    _t39(sdk::unknown_ptr) afd_rio_invalidate_cq;
    
    // [AfdRioMiniPacketCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5920, 0x15e38 bytes
    // afd.sys .text:0x1a950, 0x15fb8 bytes
    // afd.sys .text:0x49d20, 0x187f8 bytes
    // afd.sys .text:0x1a950, 0x15fb8 bytes
    //
    _t40(sdk::unknown_ptr) afd_rio_mini_packet_completion;
    
    // [AfdRioQueueConnectedSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1af7c, 0x15e38 bytes
    // afd.sys .text:0x1a97c, 0x15fb8 bytes
    // afd.sys .text:0x49d4c, 0x187f8 bytes
    // afd.sys .text:0x1a97c, 0x15fb8 bytes
    //
    _t41(sdk::unknown_ptr) afd_rio_queue_connected_send;
    
    // [AfdRioQueueReceiveCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa19c, 0x15e38 bytes
    // afd.sys .text:0x1a9d0, 0x15fb8 bytes
    // afd.sys .text:0x49db4, 0x187f8 bytes
    // afd.sys .text:0x1a9d0, 0x15fb8 bytes
    //
    _t42(sdk::unknown_ptr) afd_rio_queue_receive_completion;
    
    // [AfdRioQueueSendCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1afc4, 0x15e38 bytes
    // afd.sys .text:0x1aae4, 0x15fb8 bytes
    // afd.sys .text:0x49ec8, 0x187f8 bytes
    // afd.sys .text:0x1aae4, 0x15fb8 bytes
    //
    _t43(sdk::unknown_ptr) afd_rio_queue_send_completion;
    
    // [AfdRioReferenceRegDomainByHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x9d5c, 0x15e38 bytes
    // afd.sys .text:0x1abd8, 0x15fb8 bytes
    // afd.sys .text:0x4a0a8, 0x187f8 bytes
    // afd.sys .text:0x1abd8, 0x15fb8 bytes
    //
    _t44(sdk::unknown_ptr) afd_rio_reference_reg_domain_by_handle;
    
    // [AfdRioRegisterBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x8f40, 0x15e38 bytes
    // afd.sys .text:0x1ac8c, 0x15fb8 bytes
    // afd.sys .text:0x4a174, 0x187f8 bytes
    // afd.sys .text:0x1ac8c, 0x15fb8 bytes
    //
    _t45(sdk::unknown_ptr) afd_rio_register_buffer;
    
    // [AfdRioResizeCq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x60bc, 0x15e38 bytes
    // afd.sys .text:0x1afbc, 0x15fb8 bytes
    // afd.sys .text:0x4a4a4, 0x187f8 bytes
    // afd.sys .text:0x1afbc, 0x15fb8 bytes
    //
    _t46(sdk::unknown_ptr) afd_rio_resize_cq;
    
    // [AfdRioResizeRqPair]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1b0bc, 0x15e38 bytes
    // afd.sys .text:0x1b530, 0x15fb8 bytes
    // afd.sys .text:0x4aa18, 0x187f8 bytes
    // afd.sys .text:0x1b530, 0x15fb8 bytes
    //
    _t47(sdk::unknown_ptr) afd_rio_resize_rq_pair;
    
    // [AfdRioSendComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x7f10, 0x15e38 bytes
    // afd.sys .text:0x1c4e0, 0x15fb8 bytes
    // afd.sys .text:0x4b9a0, 0x187f8 bytes
    // afd.sys .text:0x1c4e0, 0x15fb8 bytes
    //
    _t48(sdk::unknown_ptr) afd_rio_send_complete;
    
    // [AfdRioTlClientConnectDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d120, 0x15e38 bytes
    // afd.sys .rdata:0x1d128, 0x15fb8 bytes
    // afd.sys .rdata:0x4d000, 0x187f8 bytes
    // afd.sys .rdata:0x1d128, 0x15fb8 bytes
    //
    _t49(sdk::unknown_ptr) afd_rio_tl_client_connect_dispatch;
    
    // [AfdRioValidateRequestBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1c000, 0x15e38 bytes
    // afd.sys .text:0x1c7f0, 0x15fb8 bytes
    // afd.sys .text:0x4bcbc, 0x187f8 bytes
    // afd.sys .text:0x1c7f0, 0x15fb8 bytes
    //
    _t50(sdk::unknown_ptr) afd_rio_validate_request_buffer;
    
    // [AfdRouteChangeCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69970, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e614, 0x15fb8 bytes
    // afd.sys .text:0x37098, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e614, 0x15fb8 bytes
    //
    _t51(sdk::unknown_ptr) afd_route_change_callback;
    
    // [AfdRouteChangeMatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16490, 0x15e38 bytes
    // afd.sys .text:0x1098c, 0x15fb8 bytes
    // afd.sys .text:0x37264, 0x187f8 bytes
    // afd.sys .text:0x1098c, 0x15fb8 bytes
    //
    _t52(sdk::unknown_ptr) afd_route_change_match;
    
    // [AfdRoutingInterfaceChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69b00, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6e7e0, 0x15fb8 bytes
    // afd.sys .text:0x37300, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6e7e0, 0x15fb8 bytes
    //
    _t53(sdk::unknown_ptr) afd_routing_interface_change;
    
    // [AfdRoutingInterfaceQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3dca0, 0x15e38 bytes
    // afd.sys PAGE:0x3f0c0, 0x15fb8 bytes
    // afd.sys PAGE:0x6d390, 0x187f8 bytes
    // afd.sys PAGE:0x3f0c0, 0x15fb8 bytes
    //
    _t54(sdk::unknown_ptr) afd_routing_interface_query;
    
    // [AfdSanAbortConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x75000, 0x15e38 bytes
    // afd.sys PAGESAN:0x79008, 0x15fb8 bytes
    // afd.sys PAGESAN:0x78008, 0x187f8 bytes
    // afd.sys PAGESAN:0x79008, 0x15fb8 bytes
    //
    _t55(sdk::unknown_ptr) afd_san_abort_connection;
    
    // [AfdSanAcceptCore]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x7508c, 0x15e38 bytes
    // afd.sys PAGESAN:0x790cc, 0x15fb8 bytes
    // afd.sys PAGESAN:0x780cc, 0x187f8 bytes
    // afd.sys PAGESAN:0x790cc, 0x15fb8 bytes
    //
    _t56(sdk::unknown_ptr) afd_san_accept_core;
    
    // [AfdSanAcquireContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x755e0, 0x15e38 bytes
    // afd.sys PAGESAN:0x79720, 0x15fb8 bytes
    // afd.sys PAGESAN:0x786e0, 0x187f8 bytes
    // afd.sys PAGESAN:0x79720, 0x15fb8 bytes
    //
    _t57(sdk::unknown_ptr) afd_san_acquire_context;
    
    // [AfdSanAddrListChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x40a90, 0x15e38 bytes
    // afd.sys PAGE:0x42c10, 0x15fb8 bytes
    // afd.sys PAGE:0x70d80, 0x187f8 bytes
    // afd.sys PAGE:0x42c10, 0x15fb8 bytes
    //
    _t58(sdk::unknown_ptr) afd_san_addr_list_change;
    
    // [AfdSanCancelAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x75d10, 0x15e38 bytes
    // afd.sys PAGESAN:0x79ff0, 0x15fb8 bytes
    // afd.sys PAGESAN:0x78fb0, 0x187f8 bytes
    // afd.sys PAGESAN:0x79ff0, 0x15fb8 bytes
    //
    _t59(sdk::unknown_ptr) afd_san_cancel_accept;
    
    // [AfdSanCancelConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x75e20, 0x15e38 bytes
    // afd.sys PAGESAN:0x7a160, 0x15fb8 bytes
    // afd.sys PAGESAN:0x79120, 0x187f8 bytes
    // afd.sys PAGESAN:0x7a160, 0x15fb8 bytes
    //
    _t60(sdk::unknown_ptr) afd_san_cancel_connect;
    
    // [AfdSanCancelRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x75f00, 0x15e38 bytes
    // afd.sys PAGESAN:0x7a2a0, 0x15fb8 bytes
    // afd.sys PAGESAN:0x79260, 0x187f8 bytes
    // afd.sys PAGESAN:0x7a2a0, 0x15fb8 bytes
    //
    _t61(sdk::unknown_ptr) afd_san_cancel_request;
    
    // [AfdSanCleanupHelper]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x40b34, 0x15e38 bytes
    // afd.sys PAGE:0x42cd4, 0x15fb8 bytes
    // afd.sys PAGE:0x70e4c, 0x187f8 bytes
    // afd.sys PAGE:0x42cd4, 0x15fb8 bytes
    //
    _t62(sdk::unknown_ptr) afd_san_cleanup_helper;
    
    // [AfdSanCodeHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27ad0, 0x15e38 bytes
    // afd.sys .data:0x27c18, 0x15fb8 bytes
    // afd.sys .data:0x57c90, 0x187f8 bytes
    // afd.sys .data:0x27c18, 0x15fb8 bytes
    //
    _t63(sdk::unknown_ptr) afd_san_code_handle;
    
    // [AfdSanConnectHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x76010, 0x15e38 bytes
    // afd.sys PAGESAN:0x7a410, 0x15fb8 bytes
    // afd.sys PAGESAN:0x793d0, 0x187f8 bytes
    // afd.sys PAGESAN:0x7a410, 0x15fb8 bytes
    //
    _t64(sdk::unknown_ptr) afd_san_connect_handler;
    
    // [AfdSanCreateHelper]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x40ba0, 0x15e38 bytes
    // afd.sys PAGE:0x42d60, 0x15fb8 bytes
    // afd.sys PAGE:0x70ed8, 0x187f8 bytes
    // afd.sys PAGE:0x42d60, 0x15fb8 bytes
    //
    _t65(sdk::unknown_ptr) afd_san_create_helper;
    
    // [AfdSanDequeueRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x76c7c, 0x15e38 bytes
    // afd.sys PAGESAN:0x7b34c, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7a244, 0x187f8 bytes
    // afd.sys PAGESAN:0x7b34c, 0x15fb8 bytes
    //
    _t66(sdk::unknown_ptr) afd_san_dequeue_request;
    
    // [AfdSanDupEndpointIntoServiceProcess]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x40dac, 0x15e38 bytes
    // afd.sys PAGE:0x43034, 0x15fb8 bytes
    // afd.sys PAGE:0x7117c, 0x187f8 bytes
    // afd.sys PAGE:0x43034, 0x15fb8 bytes
    //
    _t67(sdk::unknown_ptr) afd_san_dup_endpoint_into_service_process;
    
    // [AfdSanFastCementEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x76d60, 0x15e38 bytes
    // afd.sys PAGESAN:0x7b460, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7a360, 0x187f8 bytes
    // afd.sys PAGESAN:0x7b460, 0x15fb8 bytes
    //
    _t68(sdk::unknown_ptr) afd_san_fast_cement_endpoint;
    
    // [AfdSanFastCompleteAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x77070, 0x15e38 bytes
    // afd.sys PAGESAN:0x7b800, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7a6c0, 0x187f8 bytes
    // afd.sys PAGESAN:0x7b800, 0x15fb8 bytes
    //
    _t69(sdk::unknown_ptr) afd_san_fast_complete_accept;
    
    // [AfdSanFastCompleteIo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x40f60, 0x15e38 bytes
    // afd.sys PAGE:0x43230, 0x15fb8 bytes
    // afd.sys PAGE:0x71370, 0x187f8 bytes
    // afd.sys PAGE:0x43230, 0x15fb8 bytes
    //
    _t70(sdk::unknown_ptr) afd_san_fast_complete_io;
    
    // [AfdSanFastCompleteRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x77470, 0x15e38 bytes
    // afd.sys PAGESAN:0x7bce0, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7abb0, 0x187f8 bytes
    // afd.sys PAGESAN:0x7bce0, 0x15fb8 bytes
    //
    _t71(sdk::unknown_ptr) afd_san_fast_complete_request;
    
    // [AfdSanFastGetPhysicalAddr]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x36910, 0x15e38 bytes
    // afd.sys PAGE:0x34df0, 0x15fb8 bytes
    // afd.sys PAGE:0x63150, 0x187f8 bytes
    // afd.sys PAGE:0x34df0, 0x15fb8 bytes
    //
    _t72(sdk::unknown_ptr) afd_san_fast_get_physical_addr;
    
    // [AfdSanFastGetServicePid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41060, 0x15e38 bytes
    // afd.sys PAGE:0x43370, 0x15fb8 bytes
    // afd.sys PAGE:0x714b0, 0x187f8 bytes
    // afd.sys PAGE:0x43370, 0x15fb8 bytes
    //
    _t73(sdk::unknown_ptr) afd_san_fast_get_service_pid;
    
    // [AfdSanFastProviderChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x410b0, 0x15e38 bytes
    // afd.sys PAGE:0x433d0, 0x15fb8 bytes
    // afd.sys PAGE:0x71510, 0x187f8 bytes
    // afd.sys PAGE:0x433d0, 0x15fb8 bytes
    //
    _t74(sdk::unknown_ptr) afd_san_fast_provider_change;
    
    // [AfdSanFastRefreshEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x778c0, 0x15e38 bytes
    // afd.sys PAGESAN:0x7c250, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7b120, 0x187f8 bytes
    // afd.sys PAGESAN:0x7c250, 0x15fb8 bytes
    //
    _t75(sdk::unknown_ptr) afd_san_fast_refresh_endpoint;
    
    // [AfdSanFastResetEvents]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x77c20, 0x15e38 bytes
    // afd.sys PAGESAN:0x7c610, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7b4f0, 0x187f8 bytes
    // afd.sys PAGESAN:0x7c610, 0x15fb8 bytes
    //
    _t76(sdk::unknown_ptr) afd_san_fast_reset_events;
    
    // [AfdSanFastSetEvents]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x77e70, 0x15e38 bytes
    // afd.sys PAGESAN:0x7c930, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7b810, 0x187f8 bytes
    // afd.sys PAGESAN:0x7c930, 0x15fb8 bytes
    //
    _t77(sdk::unknown_ptr) afd_san_fast_set_events;
    
    // [AfdSanFastSetServiceProcess]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41100, 0x15e38 bytes
    // afd.sys PAGE:0x43430, 0x15fb8 bytes
    // afd.sys PAGE:0x71570, 0x187f8 bytes
    // afd.sys PAGE:0x43430, 0x15fb8 bytes
    //
    _t78(sdk::unknown_ptr) afd_san_fast_set_service_process;
    
    // [AfdSanFastTransferCtx]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x411a0, 0x15e38 bytes
    // afd.sys PAGE:0x434f0, 0x15fb8 bytes
    // afd.sys PAGE:0x71630, 0x187f8 bytes
    // afd.sys PAGE:0x434f0, 0x15fb8 bytes
    //
    _t79(sdk::unknown_ptr) afd_san_fast_transfer_ctx;
    
    // [AfdSanFastUnlockAll]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41900, 0x15e38 bytes
    // afd.sys PAGE:0x43d70, 0x15fb8 bytes
    // afd.sys PAGE:0x71e90, 0x187f8 bytes
    // afd.sys PAGE:0x43d70, 0x15fb8 bytes
    //
    _t80(sdk::unknown_ptr) afd_san_fast_unlock_all;
    
    // [AfdSanFindSwitchSocketByProcessContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41a90, 0x15e38 bytes
    // afd.sys PAGE:0x44034, 0x15fb8 bytes
    // afd.sys PAGE:0x72158, 0x187f8 bytes
    // afd.sys PAGE:0x44034, 0x15fb8 bytes
    //
    _t81(sdk::unknown_ptr) afd_san_find_switch_socket_by_process_context;
    
    // [AfdSanHelperCleanup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41c9c, 0x15e38 bytes
    // afd.sys PAGE:0x442a4, 0x15fb8 bytes
    // afd.sys PAGE:0x722a4, 0x187f8 bytes
    // afd.sys PAGE:0x442a4, 0x15fb8 bytes
    //
    _t82(sdk::unknown_ptr) afd_san_helper_cleanup;
    
    // [AfdSanHelperList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27740, 0x15e38 bytes
    // afd.sys .data:0x277c0, 0x15fb8 bytes
    // afd.sys .data:0x57840, 0x187f8 bytes
    // afd.sys .data:0x277c0, 0x15fb8 bytes
    //
    _t83(sdk::unknown_ptr) afd_san_helper_list;
    
    // [AfdSanNotifyRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41d60, 0x15e38 bytes
    // afd.sys PAGE:0x44388, 0x15fb8 bytes
    // afd.sys PAGE:0x7238c, 0x187f8 bytes
    // afd.sys PAGE:0x44388, 0x15fb8 bytes
    //
    _t84(sdk::unknown_ptr) afd_san_notify_request;
    
    // [AfdSanPollApcKernelRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e080, 0x15e38 bytes
    // afd.sys PAGE:0x3f6a0, 0x15fb8 bytes
    // afd.sys PAGE:0x6d960, 0x187f8 bytes
    // afd.sys PAGE:0x3f6a0, 0x15fb8 bytes
    //
    _t85(sdk::unknown_ptr) afd_san_poll_apc_kernel_routine;
    
    // [AfdSanPollApcRundownRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e100, 0x15e38 bytes
    // afd.sys PAGE:0x3f730, 0x15fb8 bytes
    // afd.sys PAGE:0x6d9f0, 0x187f8 bytes
    // afd.sys PAGE:0x3f730, 0x15fb8 bytes
    //
    _t86(sdk::unknown_ptr) afd_san_poll_apc_rundown_routine;
    
    // [AfdSanPollBegin]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41e04, 0x15e38 bytes
    // afd.sys PAGE:0x44438, 0x15fb8 bytes
    // afd.sys PAGE:0x72440, 0x187f8 bytes
    // afd.sys PAGE:0x44438, 0x15fb8 bytes
    //
    _t87(sdk::unknown_ptr) afd_san_poll_begin;
    
    // [AfdSanPollEnd]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41f14, 0x15e38 bytes
    // afd.sys PAGE:0x44570, 0x15fb8 bytes
    // afd.sys PAGE:0x72578, 0x187f8 bytes
    // afd.sys PAGE:0x44570, 0x15fb8 bytes
    //
    _t88(sdk::unknown_ptr) afd_san_poll_end;
    
    // [AfdSanPollMerge]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x41fcc, 0x15e38 bytes
    // afd.sys PAGE:0x44668, 0x15fb8 bytes
    // afd.sys PAGE:0x72670, 0x187f8 bytes
    // afd.sys PAGE:0x44668, 0x15fb8 bytes
    //
    _t89(sdk::unknown_ptr) afd_san_poll_merge;
    
    // [AfdSanPollUpdate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x78114, 0x15e38 bytes
    // afd.sys PAGESAN:0x7ccb0, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7bbf0, 0x187f8 bytes
    // afd.sys PAGESAN:0x7ccb0, 0x15fb8 bytes
    //
    _t90(sdk::unknown_ptr) afd_san_poll_update;
    
    // [AfdSanProcessAddrListForProviderChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x7813c, 0x15e38 bytes
    // afd.sys PAGESAN:0x7cce0, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7bc20, 0x187f8 bytes
    // afd.sys PAGESAN:0x7cce0, 0x15fb8 bytes
    //
    _t91(sdk::unknown_ptr) afd_san_process_addr_list_for_provider_change;
    
    // [AfdSanProviderListSeqNum]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27ac0, 0x15e38 bytes
    // afd.sys .data:0x27c00, 0x15fb8 bytes
    // afd.sys .data:0x57c80, 0x187f8 bytes
    // afd.sys .data:0x27c00, 0x15fb8 bytes
    //
    _t92(sdk::unknown_ptr) afd_san_provider_list_seq_num;
    
    // [AfdSanRedirectRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x78354, 0x15e38 bytes
    // afd.sys PAGESAN:0x7cf48, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7be88, 0x187f8 bytes
    // afd.sys PAGESAN:0x7cf48, 0x15fb8 bytes
    //
    _t93(sdk::unknown_ptr) afd_san_redirect_request;
    
    // [AfdSanReferenceEndpointObject]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x78520, 0x15e38 bytes
    // afd.sys PAGESAN:0x7d184, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7c0c4, 0x187f8 bytes
    // afd.sys PAGESAN:0x7d184, 0x15fb8 bytes
    //
    _t94(sdk::unknown_ptr) afd_san_reference_endpoint_object;
    
    // [AfdSanReferenceSwitchSocketByHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42024, 0x15e38 bytes
    // afd.sys PAGE:0x446d4, 0x15fb8 bytes
    // afd.sys PAGE:0x726dc, 0x187f8 bytes
    // afd.sys PAGE:0x446d4, 0x15fb8 bytes
    //
    _t95(sdk::unknown_ptr) afd_san_reference_switch_socket_by_handle;
    
    // [AfdSanReleaseConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x78570, 0x15e38 bytes
    // afd.sys PAGESAN:0x7d1fc, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7c13c, 0x187f8 bytes
    // afd.sys PAGESAN:0x7d1fc, 0x15fb8 bytes
    //
    _t96(sdk::unknown_ptr) afd_san_release_connection;
    
    // [AfdSanRestartRequestProcessing]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x78634, 0x15e38 bytes
    // afd.sys PAGESAN:0x7d2cc, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7c210, 0x187f8 bytes
    // afd.sys PAGESAN:0x7d2cc, 0x15fb8 bytes
    //
    _t97(sdk::unknown_ptr) afd_san_restart_request_processing;
    
    // [AfdSanServiceHelper]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27a98, 0x15e38 bytes
    // afd.sys .data:0x27bc8, 0x15fb8 bytes
    // afd.sys .data:0x57c58, 0x187f8 bytes
    // afd.sys .data:0x27bc8, 0x15fb8 bytes
    //
    _t98(sdk::unknown_ptr) afd_san_service_helper;
    
    // [AfdSanServicePid]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27ac8, 0x15e38 bytes
    // afd.sys .data:0x27c10, 0x15fb8 bytes
    // afd.sys .data:0x57c88, 0x187f8 bytes
    // afd.sys .data:0x27c10, 0x15fb8 bytes
    //
    _t99(sdk::unknown_ptr) afd_san_service_pid;
    
    // [AfdSanSetAskDupeToServiceState]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x788b4, 0x15e38 bytes
    // afd.sys PAGESAN:0x7d5bc, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7c524, 0x187f8 bytes
    // afd.sys PAGESAN:0x7d5bc, 0x15fb8 bytes
    //
    _u00(sdk::unknown_ptr) afd_san_set_ask_dupe_to_service_state;
    
    // [AfdSanSetDupingToServiceState]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGESAN:0x788fc, 0x15e38 bytes
    // afd.sys PAGESAN:0x7d628, 0x15fb8 bytes
    // afd.sys PAGESAN:0x7c590, 0x187f8 bytes
    // afd.sys PAGESAN:0x7d628, 0x15fb8 bytes
    //
    _u01(sdk::unknown_ptr) afd_san_set_duping_to_service_state;
    
    // [AfdSaveReceivedConnectData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x688d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d738, 0x15fb8 bytes
    // afd.sys .text:0x35134, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d738, 0x15fb8 bytes
    //
    _u02(sdk::unknown_ptr) afd_save_received_connect_data;
    
    // [AfdSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4e5d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x51440, 0x15fb8 bytes
    // afd.sys .text:0x10610, 0x187f8 bytes
    // afd.sys PAGEAFD:0x51440, 0x15fb8 bytes
    //
    _u03(sdk::unknown_ptr) afd_send;
    
    // [AfdSendDatagram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6bba0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71780, 0x15fb8 bytes
    // afd.sys .text:0x39f90, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71780, 0x15fb8 bytes
    //
    _u04(sdk::unknown_ptr) afd_send_datagram;
    
    // [AfdSendMessageDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34ac0, 0x15e38 bytes
    // afd.sys PAGE:0x34e00, 0x15fb8 bytes
    // afd.sys PAGE:0x64840, 0x187f8 bytes
    // afd.sys PAGE:0x34e00, 0x15fb8 bytes
    //
    _u05(sdk::unknown_ptr) afd_send_message_dispatch;
    
    // [AfdSendPossibleEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c2d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72080, 0x15fb8 bytes
    // afd.sys .text:0x3a7c0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72080, 0x15fb8 bytes
    //
    _u06(sdk::unknown_ptr) afd_send_possible_event_handler;
    
    // [AfdSendQueuedTPSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e220, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74b30, 0x15fb8 bytes
    // afd.sys .text:0x3d5ec, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74b30, 0x15fb8 bytes
    //
    _u07(sdk::unknown_ptr) afd_send_queued_tp_send;
    
    // [AfdSendWindowSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275b4, 0x15e38 bytes
    // afd.sys .data:0x27634, 0x15fb8 bytes
    // afd.sys .data:0x576e4, 0x187f8 bytes
    // afd.sys .data:0x27634, 0x15fb8 bytes
    //
    _u08(sdk::unknown_ptr) afd_send_window_size;
    
    // [AfdServiceSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x541c8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49208, 0x15fb8 bytes
    // afd.sys .text:0x183c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49208, 0x15fb8 bytes
    //
    _u09(sdk::unknown_ptr) afd_service_super_accept;
    
    // [AfdServiceWaitForListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x546fc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x56668, 0x15fb8 bytes
    // afd.sys .text:0x1360, 0x187f8 bytes
    // afd.sys PAGEAFD:0x56668, 0x15fb8 bytes
    //
    _u10(sdk::unknown_ptr) afd_service_wait_for_listen;
    
    // [AfdSetConnectData]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x689f0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6d870, 0x15fb8 bytes
    // afd.sys .text:0x35290, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6d870, 0x15fb8 bytes
    //
    _u11(sdk::unknown_ptr) afd_set_connect_data;
    
    // [AfdSetContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x33450, 0x15e38 bytes
    // afd.sys PAGE:0x344e0, 0x15fb8 bytes
    // afd.sys PAGE:0x60310, 0x187f8 bytes
    // afd.sys PAGE:0x344e0, 0x15fb8 bytes
    //
    _u12(sdk::unknown_ptr) afd_set_context;
    
    // [AfdSetEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ce58, 0x15e38 bytes
    // afd.sys PAGE:0x3e090, 0x15fb8 bytes
    // afd.sys PAGE:0x6bd4c, 0x187f8 bytes
    // afd.sys PAGE:0x3e090, 0x15fb8 bytes
    //
    _u13(sdk::unknown_ptr) afd_set_event_handler;
    
    // [AfdSetInLineMode]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ce88, 0x15e38 bytes
    // afd.sys PAGE:0x3e0cc, 0x15fb8 bytes
    // afd.sys PAGE:0x6bd90, 0x187f8 bytes
    // afd.sys PAGE:0x3e0cc, 0x15fb8 bytes
    //
    _u14(sdk::unknown_ptr) afd_set_in_line_mode;
    
    // [AfdSetInformation]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51960, 0x15e38 bytes
    // afd.sys PAGEAFD:0x54b40, 0x15fb8 bytes
    // afd.sys .text:0x38b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x54b40, 0x15fb8 bytes
    //
    _u15(sdk::unknown_ptr) afd_set_information;
    
    // [AfdSetQos]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x68e40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6dd30, 0x15fb8 bytes
    // afd.sys .text:0x35730, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6dd30, 0x15fb8 bytes
    //
    _u16(sdk::unknown_ptr) afd_set_qos;
    
    // [AfdSetQos32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x68f38, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6de60, 0x15fb8 bytes
    // afd.sys .text:0x35860, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6de60, 0x15fb8 bytes
    //
    _u17(sdk::unknown_ptr) afd_set_qos32;
    
    // [AfdSetSecurity]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3cfe4, 0x15e38 bytes
    // afd.sys PAGE:0x3e254, 0x15fb8 bytes
    // afd.sys PAGE:0x6bf14, 0x187f8 bytes
    // afd.sys PAGE:0x3e254, 0x15fb8 bytes
    //
    _u18(sdk::unknown_ptr) afd_set_security;
    
    // [AfdSetupAcceptEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53e00, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49770, 0x15fb8 bytes
    // afd.sys .text:0x20b8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49770, 0x15fb8 bytes
    //
    _u19(sdk::unknown_ptr) afd_setup_accept_endpoint;
    
    // [AfdSetupConnectDataBuffers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6592c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x69884, 0x15fb8 bytes
    // afd.sys .text:0x31520, 0x187f8 bytes
    // afd.sys PAGEAFD:0x69884, 0x15fb8 bytes
    //
    _u20(sdk::unknown_ptr) afd_setup_connect_data_buffers;
    
    // [AfdSetupReceiveDatagramIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4c3b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4b2b0, 0x15fb8 bytes
    // afd.sys .text:0x12858, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4b2b0, 0x15fb8 bytes
    //
    _u21(sdk::unknown_ptr) afd_setup_receive_datagram_irp;
    
    // [AfdShouldSendBlock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65dc8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4bfd8, 0x15fb8 bytes
    // afd.sys .text:0xdb00, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4bfd8, 0x15fb8 bytes
    //
    _u22(sdk::unknown_ptr) afd_should_send_block;
    
    // [AfdSmallBufferSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2726c, 0x15e38 bytes
    // afd.sys .data:0x27284, 0x15fb8 bytes
    // afd.sys .data:0x572c4, 0x187f8 bytes
    // afd.sys .data:0x27284, 0x15fb8 bytes
    //
    _u23(sdk::unknown_ptr) afd_small_buffer_size;
    
    // [AfdSocketTransferBegin]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56610, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58d40, 0x15fb8 bytes
    // afd.sys .text:0x17950, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58d40, 0x15fb8 bytes
    //
    _u24(sdk::unknown_ptr) afd_socket_transfer_begin;
    
    // [AfdSocketTransferEnd]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x565a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58cc0, 0x15fb8 bytes
    // afd.sys .text:0x178d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58cc0, 0x15fb8 bytes
    //
    _u25(sdk::unknown_ptr) afd_socket_transfer_end;
    
    // [AfdSqm]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x44940, 0x15e38 bytes
    // afd.sys PAGE:0x474a0, 0x15fb8 bytes
    // afd.sys PAGE:0x63160, 0x187f8 bytes
    // afd.sys PAGE:0x474a0, 0x15fb8 bytes
    //
    _u26(sdk::unknown_ptr) afd_sqm;
    
    // [AfdStandardAddressLength]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x2725c, 0x15e38 bytes
    // afd.sys .data:0x2727c, 0x15fb8 bytes
    // afd.sys .data:0x572bc, 0x187f8 bytes
    // afd.sys .data:0x2727c, 0x15fb8 bytes
    //
    _u27(sdk::unknown_ptr) afd_standard_address_length;
    
    // [AfdStartListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55ee0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57d20, 0x15fb8 bytes
    // afd.sys .text:0x18be0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57d20, 0x15fb8 bytes
    //
    _u28(sdk::unknown_ptr) afd_start_listen;
    
    // [AfdStartNextQueuedTransmit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e49c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74dc4, 0x15fb8 bytes
    // afd.sys .text:0x3d86c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74dc4, 0x15fb8 bytes
    //
    _u29(sdk::unknown_ptr) afd_start_next_queued_transmit;
    
    // [AfdStartNextTPacketsIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e538, 0x15e38 bytes
    // afd.sys PAGEAFD:0x74e90, 0x15fb8 bytes
    // afd.sys .text:0x3d938, 0x187f8 bytes
    // afd.sys PAGEAFD:0x74e90, 0x15fb8 bytes
    //
    _u30(sdk::unknown_ptr) afd_start_next_t_packets_irp;
    
    // [AfdStartTPacketsWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e680, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75010, 0x15fb8 bytes
    // afd.sys .text:0x3dab8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75010, 0x15fb8 bytes
    //
    _u31(sdk::unknown_ptr) afd_start_t_packets_worker;
    
    // [AfdStopTimerWheel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d244, 0x15e38 bytes
    // afd.sys PAGE:0x3e534, 0x15fb8 bytes
    // afd.sys PAGE:0x6c200, 0x187f8 bytes
    // afd.sys PAGE:0x3e534, 0x15fb8 bytes
    //
    _u32(sdk::unknown_ptr) afd_stop_timer_wheel;
    
    // [AfdSuperAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55590, 0x15e38 bytes
    // afd.sys PAGEAFD:0x556b0, 0x15fb8 bytes
    // afd.sys .text:0x2580, 0x187f8 bytes
    // afd.sys PAGEAFD:0x556b0, 0x15fb8 bytes
    //
    _u33(sdk::unknown_ptr) afd_super_accept;
    
    // [AfdSuperAcceptApcKernelRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34940, 0x15e38 bytes
    // afd.sys PAGE:0x30010, 0x15fb8 bytes
    // afd.sys PAGE:0x60010, 0x187f8 bytes
    // afd.sys PAGE:0x30010, 0x15fb8 bytes
    //
    _u34(sdk::unknown_ptr) afd_super_accept_apc_kernel_routine;
    
    // [AfdSuperAcceptApcRundownRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x39e60, 0x15e38 bytes
    // afd.sys PAGE:0x3a5d0, 0x15fb8 bytes
    // afd.sys PAGE:0x68420, 0x187f8 bytes
    // afd.sys PAGE:0x3a5d0, 0x15fb8 bytes
    //
    _u35(sdk::unknown_ptr) afd_super_accept_apc_rundown_routine;
    
    // [AfdSuperConnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46010, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53370, 0x15fb8 bytes
    // afd.sys .text:0x4560, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53370, 0x15fb8 bytes
    //
    _u36(sdk::unknown_ptr) afd_super_connect;
    
    // [AfdSuperDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x35190, 0x15e38 bytes
    // afd.sys PAGE:0x40810, 0x15fb8 bytes
    // afd.sys PAGE:0x6e960, 0x187f8 bytes
    // afd.sys PAGE:0x40810, 0x15fb8 bytes
    //
    _u37(sdk::unknown_ptr) afd_super_disconnect;
    
    // [AfdSynchronousTlCloseRequestComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19ae0, 0x15e38 bytes
    // afd.sys .text:0x14590, 0x15fb8 bytes
    // afd.sys .text:0x436d0, 0x187f8 bytes
    // afd.sys .text:0x14590, 0x15fb8 bytes
    //
    _u38(sdk::unknown_ptr) afd_synchronous_tl_close_request_complete;
    
    // [AfdSynchronousTlCreateRequestComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19b00, 0x15e38 bytes
    // afd.sys .text:0x145c0, 0x15fb8 bytes
    // afd.sys .text:0x1d410, 0x187f8 bytes
    // afd.sys .text:0x145c0, 0x15fb8 bytes
    //
    _u39(sdk::unknown_ptr) afd_synchronous_tl_create_request_complete;
    
    // [AfdSynchronousTlIORequestComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19b20, 0x15e38 bytes
    // afd.sys .text:0x145f0, 0x15fb8 bytes
    // afd.sys .text:0x43700, 0x187f8 bytes
    // afd.sys .text:0x145f0, 0x15fb8 bytes
    //
    _u40(sdk::unknown_ptr) afd_synchronous_tl_io_request_complete;
    
    // [AfdTPacketsApcKernelRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3eca0, 0x15e38 bytes
    // afd.sys PAGE:0x40a90, 0x15fb8 bytes
    // afd.sys PAGE:0x6ebe0, 0x187f8 bytes
    // afd.sys PAGE:0x40a90, 0x15fb8 bytes
    //
    _u41(sdk::unknown_ptr) afd_t_packets_apc_kernel_routine;
    
    // [AfdTPacketsApcRundownRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ecc0, 0x15e38 bytes
    // afd.sys PAGE:0x40ac0, 0x15fb8 bytes
    // afd.sys PAGE:0x6ec10, 0x187f8 bytes
    // afd.sys PAGE:0x40ac0, 0x15fb8 bytes
    //
    _u42(sdk::unknown_ptr) afd_t_packets_apc_rundown_routine;
    
    // [AfdTPacketsBufferRead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ecec, 0x15e38 bytes
    // afd.sys PAGE:0x40b04, 0x15fb8 bytes
    // afd.sys PAGE:0x6ec54, 0x187f8 bytes
    // afd.sys PAGE:0x40b04, 0x15fb8 bytes
    //
    _u43(sdk::unknown_ptr) afd_t_packets_buffer_read;
    
    // [AfdTPacketsContinueAfterRead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ecd8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75788, 0x15fb8 bytes
    // afd.sys .text:0x3e224, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75788, 0x15fb8 bytes
    //
    _u44(sdk::unknown_ptr) afd_t_packets_continue_after_read;
    
    // [AfdTPacketsCopyThreshold]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27260, 0x15e38 bytes
    // afd.sys .data:0x2729c, 0x15fb8 bytes
    // afd.sys .data:0x572e0, 0x187f8 bytes
    // afd.sys .data:0x2729c, 0x15fb8 bytes
    //
    _u45(sdk::unknown_ptr) afd_t_packets_copy_threshold;
    
    // [AfdTPacketsEnableSendAndDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ed38, 0x15e38 bytes
    // afd.sys PAGEAFD:0x757f0, 0x15fb8 bytes
    // afd.sys .text:0x3e28c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x757f0, 0x15fb8 bytes
    //
    _u46(sdk::unknown_ptr) afd_t_packets_enable_send_and_disconnect;
    
    // [AfdTPacketsFindSendIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6edc0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75898, 0x15fb8 bytes
    // afd.sys .text:0x3e334, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75898, 0x15fb8 bytes
    //
    _u47(sdk::unknown_ptr) afd_t_packets_find_send_irp;
    
    // [AfdTPacketsMdlRead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ee5c, 0x15e38 bytes
    // afd.sys PAGE:0x40cc8, 0x15fb8 bytes
    // afd.sys PAGE:0x6ee14, 0x187f8 bytes
    // afd.sys PAGE:0x40cc8, 0x15fb8 bytes
    //
    _u48(sdk::unknown_ptr) afd_t_packets_mdl_read;
    
    // [AfdTPacketsSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6ee50, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75930, 0x15fb8 bytes
    // afd.sys .text:0x3e3cc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75930, 0x15fb8 bytes
    //
    _u49(sdk::unknown_ptr) afd_t_packets_send;
    
    // [AfdTPacketsWorker]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3efb0, 0x15e38 bytes
    // afd.sys PAGE:0x40e70, 0x15fb8 bytes
    // afd.sys PAGE:0x6efb0, 0x187f8 bytes
    // afd.sys PAGE:0x40e70, 0x15fb8 bytes
    //
    _u50(sdk::unknown_ptr) afd_t_packets_worker;
    
    // [AfdTcp6RoutingQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3de74, 0x15e38 bytes
    // afd.sys PAGE:0x3f304, 0x15fb8 bytes
    // afd.sys PAGE:0x6d5d0, 0x187f8 bytes
    // afd.sys PAGE:0x3f304, 0x15fb8 bytes
    //
    _u51(sdk::unknown_ptr) afd_tcp6_routing_query;
    
    // [AfdTcpRoutingQuery]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3deec, 0x15e38 bytes
    // afd.sys PAGE:0x3f3dc, 0x15fb8 bytes
    // afd.sys PAGE:0x6d6a4, 0x187f8 bytes
    // afd.sys PAGE:0x3f3dc, 0x15fb8 bytes
    //
    _u52(sdk::unknown_ptr) afd_tcp_routing_query;
    
    // [AfdTdiClearVcEventHandlers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3b950, 0x15e38 bytes
    // afd.sys PAGE:0x3c714, 0x15fb8 bytes
    // afd.sys PAGE:0x6a4a0, 0x187f8 bytes
    // afd.sys PAGE:0x3c714, 0x15fb8 bytes
    //
    _u53(sdk::unknown_ptr) afd_tdi_clear_vc_event_handlers;
    
    // [AfdTdiCreateAO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x39fa8, 0x15e38 bytes
    // afd.sys PAGE:0x3a744, 0x15fb8 bytes
    // afd.sys PAGE:0x68594, 0x187f8 bytes
    // afd.sys PAGE:0x3a744, 0x15fb8 bytes
    //
    _u54(sdk::unknown_ptr) afd_tdi_create_ao;
    
    // [AfdTdiDeInit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x441ec, 0x15e38 bytes
    // afd.sys PAGE:0x46c6c, 0x15fb8 bytes
    // afd.sys PAGE:0x74bf0, 0x187f8 bytes
    // afd.sys PAGE:0x46c6c, 0x15fb8 bytes
    //
    _u55(sdk::unknown_ptr) afd_tdi_de_init;
    
    // [AfdTdiFilterLogged]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b30, 0x15e38 bytes
    // afd.sys .data:0x27c78, 0x15fb8 bytes
    // afd.sys .data:0x57cf0, 0x187f8 bytes
    // afd.sys .data:0x27c78, 0x15fb8 bytes
    //
    _u56(sdk::unknown_ptr) afd_tdi_filter_logged;
    
    // [AfdTdiGetBaseDeviceObject]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x353e8, 0x15e38 bytes
    // afd.sys PAGE:0x36824, 0x15fb8 bytes
    // afd.sys PAGE:0x64224, 0x187f8 bytes
    // afd.sys PAGE:0x36824, 0x15fb8 bytes
    //
    _u57(sdk::unknown_ptr) afd_tdi_get_base_device_object;
    
    // [AfdTdiGetBaseDeviceObjects]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb688, 0x15e38 bytes
    // afd.sys .text:0x7a48, 0x15fb8 bytes
    // afd.sys .text:0x1a5f8, 0x187f8 bytes
    // afd.sys .text:0x7a48, 0x15fb8 bytes
    //
    _u58(sdk::unknown_ptr) afd_tdi_get_base_device_objects;
    
    // [AfdTdiGetTpInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3f0f4, 0x15e38 bytes
    // afd.sys PAGE:0x4102c, 0x15fb8 bytes
    // afd.sys PAGE:0x6f168, 0x187f8 bytes
    // afd.sys PAGE:0x4102c, 0x15fb8 bytes
    //
    _u59(sdk::unknown_ptr) afd_tdi_get_tp_info;
    
    // [AfdTdi_IsTA6V4Mapped]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16304, 0x15e38 bytes
    // afd.sys .text:0x107a4, 0x15fb8 bytes
    // afd.sys .text:0x35a74, 0x187f8 bytes
    // afd.sys .text:0x107a4, 0x15fb8 bytes
    //
    _u60(sdk::unknown_ptr) afd_tdi_is_ta6v4_mapped;
    
    // [AfdTdiMapping]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27000, 0x15e38 bytes
    // afd.sys .data:0x27000, 0x15fb8 bytes
    // afd.sys .data:0x57000, 0x187f8 bytes
    // afd.sys .data:0x27000, 0x15fb8 bytes
    //
    _u61(sdk::unknown_ptr) afd_tdi_mapping;
    
    // [AfdTDISendMessage]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3e17c, 0x15e38 bytes
    // afd.sys PAGE:0x3f904, 0x15fb8 bytes
    // afd.sys PAGE:0x6da78, 0x187f8 bytes
    // afd.sys PAGE:0x3f904, 0x15fb8 bytes
    //
    _u62(sdk::unknown_ptr) afd_tdi_send_message;
    
    // [AfdTDISendMsgComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c370, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72180, 0x15fb8 bytes
    // afd.sys .text:0x3a8d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72180, 0x15fb8 bytes
    //
    _u63(sdk::unknown_ptr) afd_tdi_send_msg_complete;
    
    // [AfdTdiSetDualInet]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1515c, 0x15e38 bytes
    // afd.sys .text:0xf2b4, 0x15fb8 bytes
    // afd.sys .text:0x3015c, 0x187f8 bytes
    // afd.sys .text:0xf2b4, 0x15fb8 bytes
    //
    _u64(sdk::unknown_ptr) afd_tdi_set_dual_inet;
    
    // [AfdTdiSetEventHandlers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3a93c, 0x15e38 bytes
    // afd.sys PAGE:0x3b24c, 0x15fb8 bytes
    // afd.sys PAGE:0x69080, 0x187f8 bytes
    // afd.sys PAGE:0x3b24c, 0x15fb8 bytes
    //
    _u65(sdk::unknown_ptr) afd_tdi_set_event_handlers;
    
    // [AfdTdiSetInet4Mapped]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x151a4, 0x15e38 bytes
    // afd.sys .text:0xf31c, 0x15fb8 bytes
    // afd.sys .text:0x301c4, 0x187f8 bytes
    // afd.sys .text:0xf31c, 0x15fb8 bytes
    //
    _u66(sdk::unknown_ptr) afd_tdi_set_inet4_mapped;
    
    // [AfdTdiSocketTransferComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15a70, 0x15e38 bytes
    // afd.sys .text:0xfcb0, 0x15fb8 bytes
    // afd.sys .text:0x31660, 0x187f8 bytes
    // afd.sys .text:0xfcb0, 0x15fb8 bytes
    //
    _u67(sdk::unknown_ptr) afd_tdi_socket_transfer_complete;
    
    // [AfdTdiSpinlock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27350, 0x15e38 bytes
    // afd.sys .data:0x273d8, 0x15fb8 bytes
    // afd.sys .data:0x57438, 0x187f8 bytes
    // afd.sys .data:0x273d8, 0x15fb8 bytes
    //
    _u68(sdk::unknown_ptr) afd_tdi_spinlock;
    
    // [AfdTdiStackSize]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27232, 0x15e38 bytes
    // afd.sys .data:0x27252, 0x15fb8 bytes
    // afd.sys .data:0x57292, 0x187f8 bytes
    // afd.sys .data:0x27252, 0x15fb8 bytes
    //
    _u69(sdk::unknown_ptr) afd_tdi_stack_size;
    
    // [AfdTdiSyncIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43860, 0x15e38 bytes
    // afd.sys PAGE:0x461f8, 0x15fb8 bytes
    // afd.sys PAGE:0x7419c, 0x187f8 bytes
    // afd.sys PAGE:0x461f8, 0x15fb8 bytes
    //
    _u70(sdk::unknown_ptr) afd_tdi_sync_io_control;
    
    // [AfdTdi_TA4toTA6_InPlace]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16338, 0x15e38 bytes
    // afd.sys .text:0x107e0, 0x15fb8 bytes
    // afd.sys .text:0x35ab0, 0x187f8 bytes
    // afd.sys .text:0x107e0, 0x15fb8 bytes
    //
    _u71(sdk::unknown_ptr) afd_tdi_ta4to_ta6_in_place;
    
    // [AfdTdi_TA6toTA4_InPlace]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x163a4, 0x15e38 bytes
    // afd.sys .text:0x10874, 0x15fb8 bytes
    // afd.sys .text:0x35b40, 0x187f8 bytes
    // afd.sys .text:0x10874, 0x15fb8 bytes
    //
    _u72(sdk::unknown_ptr) afd_tdi_ta6to_ta4_in_place;
    
    // [AfdTdiTlRestartSyncIrp]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x19b40, 0x15e38 bytes
    // afd.sys .text:0x14620, 0x15fb8 bytes
    // afd.sys .text:0x1d460, 0x187f8 bytes
    // afd.sys .text:0x14620, 0x15fb8 bytes
    //
    _u73(sdk::unknown_ptr) afd_tdi_tl_restart_sync_irp;
    
    // [AfdTdiTlSyncIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43950, 0x15e38 bytes
    // afd.sys PAGE:0x4631c, 0x15fb8 bytes
    // afd.sys PAGE:0x742c0, 0x187f8 bytes
    // afd.sys PAGE:0x4631c, 0x15fb8 bytes
    //
    _u74(sdk::unknown_ptr) afd_tdi_tl_sync_io_control;
    
    // [AfdTditlRestartControlRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f7f0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x763c0, 0x15fb8 bytes
    // afd.sys .text:0x1d490, 0x187f8 bytes
    // afd.sys PAGEAFD:0x763c0, 0x15fb8 bytes
    //
    _u75(sdk::unknown_ptr) afd_tditl_restart_control_request;
    
    // [AfdTdxCallbackObject]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b10, 0x15e38 bytes
    // afd.sys .data:0x27c60, 0x15fb8 bytes
    // afd.sys .data:0x57cd0, 0x187f8 bytes
    // afd.sys .data:0x27c60, 0x15fb8 bytes
    //
    _u76(sdk::unknown_ptr) afd_tdx_callback_object;
    
    // [AfdTdxCallbackRegistration]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b08, 0x15e38 bytes
    // afd.sys .data:0x27c58, 0x15fb8 bytes
    // afd.sys .data:0x57cc8, 0x187f8 bytes
    // afd.sys .data:0x27c58, 0x15fb8 bytes
    //
    _u77(sdk::unknown_ptr) afd_tdx_callback_registration;
    
    // [AfdTdxCallbackRoutine]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ab60, 0x15e38 bytes
    // afd.sys PAGE:0x3b640, 0x15fb8 bytes
    // afd.sys PAGE:0x69460, 0x187f8 bytes
    // afd.sys PAGE:0x3b640, 0x15fb8 bytes
    //
    _u78(sdk::unknown_ptr) afd_tdx_callback_routine;
    
    // [AfdTdxInitCallback]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ac70, 0x15e38 bytes
    // afd.sys PAGE:0x3b768, 0x15fb8 bytes
    // afd.sys PAGE:0x69588, 0x187f8 bytes
    // afd.sys PAGE:0x3b768, 0x15fb8 bytes
    //
    _u79(sdk::unknown_ptr) afd_tdx_init_callback;
    
    // [AfdTerminateGroup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c1ec, 0x15e38 bytes
    // afd.sys PAGE:0x3cfe8, 0x15fb8 bytes
    // afd.sys PAGE:0x6ad78, 0x187f8 bytes
    // afd.sys PAGE:0x3cfe8, 0x15fb8 bytes
    //
    _u80(sdk::unknown_ptr) afd_terminate_group;
    
    // [AfdTimeoutPoll]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x525d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58820, 0x15fb8 bytes
    // afd.sys .text:0x17640, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58820, 0x15fb8 bytes
    //
    _u81(sdk::unknown_ptr) afd_timeout_poll;
    
    // [AfdTimerWheel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x277c0, 0x15e38 bytes
    // afd.sys .data:0x279a0, 0x15fb8 bytes
    // afd.sys .data:0x57a20, 0x187f8 bytes
    // afd.sys .data:0x279a0, 0x15fb8 bytes
    //
    _u82(sdk::unknown_ptr) afd_timer_wheel;
    
    // [AfdTimerWheelConnectionsAdded]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27908, 0x15e38 bytes
    // afd.sys .data:0x27a40, 0x15fb8 bytes
    // afd.sys .data:0x57ac0, 0x187f8 bytes
    // afd.sys .data:0x27a40, 0x15fb8 bytes
    //
    _u83(sdk::unknown_ptr) afd_timer_wheel_connections_added;
    
    // [AfdTimerWheelConvertedBufferCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27900, 0x15e38 bytes
    // afd.sys .data:0x27a38, 0x15fb8 bytes
    // afd.sys .data:0x57ab8, 0x187f8 bytes
    // afd.sys .data:0x27a38, 0x15fb8 bytes
    //
    _u84(sdk::unknown_ptr) afd_timer_wheel_converted_buffer_count;
    
    // [AfdTimerWheelCurrentConnectionCount]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27904, 0x15e38 bytes
    // afd.sys .data:0x27a3c, 0x15fb8 bytes
    // afd.sys .data:0x57abc, 0x187f8 bytes
    // afd.sys .data:0x27a3c, 0x15fb8 bytes
    //
    _u85(sdk::unknown_ptr) afd_timer_wheel_current_connection_count;
    
    // [AfdTimerWheelHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa5e0, 0x15e38 bytes
    // afd.sys .text:0x6b90, 0x15fb8 bytes
    // afd.sys .text:0x19300, 0x187f8 bytes
    // afd.sys .text:0x6b90, 0x15fb8 bytes
    //
    _u86(sdk::unknown_ptr) afd_timer_wheel_handler;
    
    // [AfdTimerWheelInitializeEntry]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2948, 0x15e38 bytes
    // afd.sys .text:0x3628, 0x15fb8 bytes
    // afd.sys .text:0x6dcc, 0x187f8 bytes
    // afd.sys .text:0x3628, 0x15fb8 bytes
    //
    _u87(sdk::unknown_ptr) afd_timer_wheel_initialize_entry;
    
    // [AfdTimerWheelMaxDpcUsec]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x277b8, 0x15e38 bytes
    // afd.sys .data:0x27890, 0x15fb8 bytes
    // afd.sys .data:0x57920, 0x187f8 bytes
    // afd.sys .data:0x27890, 0x15fb8 bytes
    //
    _u88(sdk::unknown_ptr) afd_timer_wheel_max_dpc_usec;
    
    // [AfdTLAbortComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48180, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49cd0, 0x15fb8 bytes
    // afd.sys .text:0x12f30, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49cd0, 0x15fb8 bytes
    //
    _u89(sdk::unknown_ptr) afd_tl_abort_complete;
    
    // [AfdTLAbortEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x671a0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6b7e0, 0x15fb8 bytes
    // afd.sys .text:0x33730, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6b7e0, 0x15fb8 bytes
    //
    _u90(sdk::unknown_ptr) afd_tl_abort_event_handler;
    
    // [AfdTLBind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50fc0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4b864, 0x15fb8 bytes
    // afd.sys .text:0x56fc, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4b864, 0x15fb8 bytes
    //
    _u91(sdk::unknown_ptr) afd_tl_bind;
    
    // [AfdTLBindComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46820, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53bb0, 0x15fb8 bytes
    // afd.sys .text:0x6300, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53bb0, 0x15fb8 bytes
    //
    _u92(sdk::unknown_ptr) afd_tl_bind_complete;
    
    // [AfdTLBindComplete2]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46978, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53c9c, 0x15fb8 bytes
    // afd.sys .text:0x63d4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53c9c, 0x15fb8 bytes
    //
    _u93(sdk::unknown_ptr) afd_tl_bind_complete2;
    
    // [AfdTLBindGetAddrComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50dd0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4ba40, 0x15fb8 bytes
    // afd.sys .text:0x5430, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4ba40, 0x15fb8 bytes
    //
    _u94(sdk::unknown_ptr) afd_tl_bind_get_addr_complete;
    
    // [AfdTLBindSecurity]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50ea4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4bb34, 0x15fb8 bytes
    // afd.sys .text:0x55b4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4bb34, 0x15fb8 bytes
    //
    _u95(sdk::unknown_ptr) afd_tl_bind_security;
    
    // [AfdTLBindSecurityComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51050, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4b7c0, 0x15fb8 bytes
    // afd.sys .text:0x44e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4b7c0, 0x15fb8 bytes
    //
    _u96(sdk::unknown_ptr) afd_tl_bind_security_complete;
    
    // [AfdTLBufferedSendComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4b210, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c110, 0x15fb8 bytes
    // afd.sys .text:0x3a980, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c110, 0x15fb8 bytes
    //
    _u97(sdk::unknown_ptr) afd_tl_buffered_send_complete;
    
    // [AfdTLCancelReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b620, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49010, 0x15fb8 bytes
    // afd.sys .text:0x12c0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49010, 0x15fb8 bytes
    //
    _u98(sdk::unknown_ptr) afd_tl_cancel_receive;
    
    // [AfdTLCancelRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f730, 0x15e38 bytes
    // afd.sys PAGEAFD:0x762e0, 0x15fb8 bytes
    // afd.sys .text:0x1d440, 0x187f8 bytes
    // afd.sys PAGEAFD:0x762e0, 0x15fb8 bytes
    //
    _u99(sdk::unknown_ptr) afd_tl_cancel_request;
    
    // [AfdTLCancelRequest2]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f73c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x762fc, 0x15fb8 bytes
    // afd.sys .text:0x4372c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x762fc, 0x15fb8 bytes
    //
    _v00(sdk::unknown_ptr) afd_tl_cancel_request2;
    
    // [AfdTLCancelResumeDelayAccept]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x672b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6b930, 0x15fb8 bytes
    // afd.sys .text:0x33880, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6b930, 0x15fb8 bytes
    //
    _v01(sdk::unknown_ptr) afd_tl_cancel_resume_delay_accept;
    
    // [AfdTLCancelSendRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56680, 0x15e38 bytes
    // afd.sys PAGEAFD:0x59830, 0x15fb8 bytes
    // afd.sys .text:0x19ae0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x59830, 0x15fb8 bytes
    //
    _v02(sdk::unknown_ptr) afd_tl_cancel_send_request;
    
    // [AfdTlClientConnectDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d100, 0x15e38 bytes
    // afd.sys .rdata:0x1d108, 0x15fb8 bytes
    // afd.sys .rdata:0x4d020, 0x187f8 bytes
    // afd.sys .rdata:0x1d108, 0x15fb8 bytes
    //
    _v03(sdk::unknown_ptr) afd_tl_client_connect_dispatch;
    
    // [AfdTlClientDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d160, 0x15e38 bytes
    // afd.sys .rdata:0x1d308, 0x15fb8 bytes
    // afd.sys .rdata:0x4d288, 0x187f8 bytes
    // afd.sys .rdata:0x1d308, 0x15fb8 bytes
    //
    _v04(sdk::unknown_ptr) afd_tl_client_dispatch;
    
    // [AfdTlClientEventNotify]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc8d0, 0x15e38 bytes
    // afd.sys .text:0x6280, 0x15fb8 bytes
    // afd.sys .text:0x17630, 0x187f8 bytes
    // afd.sys .text:0x6280, 0x15fb8 bytes
    //
    _v05(sdk::unknown_ptr) afd_tl_client_event_notify;
    
    // [AfdTlClientHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27488, 0x15e38 bytes
    // afd.sys .data:0x27508, 0x15fb8 bytes
    // afd.sys .data:0x57568, 0x187f8 bytes
    // afd.sys .data:0x27508, 0x15fb8 bytes
    //
    _v06(sdk::unknown_ptr) afd_tl_client_handle;
    
    // [AfdTlClientListenDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d1a0, 0x15e38 bytes
    // afd.sys .rdata:0x1d178, 0x15fb8 bytes
    // afd.sys .rdata:0x4d168, 0x187f8 bytes
    // afd.sys .rdata:0x1d178, 0x15fb8 bytes
    //
    _v07(sdk::unknown_ptr) afd_tl_client_listen_dispatch;
    
    // [AfdTlClientMessageDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d0e0, 0x15e38 bytes
    // afd.sys .rdata:0x1d320, 0x15fb8 bytes
    // afd.sys .rdata:0x4d040, 0x187f8 bytes
    // afd.sys .rdata:0x1d320, 0x15fb8 bytes
    //
    _v08(sdk::unknown_ptr) afd_tl_client_message_dispatch;
    
    // [AfdTlClientNotify]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d1c0, 0x15e38 bytes
    // afd.sys .rdata:0x1d270, 0x15fb8 bytes
    // afd.sys .rdata:0x4d1f0, 0x187f8 bytes
    // afd.sys .rdata:0x1d270, 0x15fb8 bytes
    //
    _v09(sdk::unknown_ptr) afd_tl_client_notify;
    
    // [AfdTlClientRioMessageDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d0f0, 0x15e38 bytes
    // afd.sys .rdata:0x1d310, 0x15fb8 bytes
    // afd.sys .rdata:0x4de60, 0x187f8 bytes
    // afd.sys .rdata:0x1d310, 0x15fb8 bytes
    //
    _v10(sdk::unknown_ptr) afd_tl_client_rio_message_dispatch;
    
    // [AfdTLCloseConnectionHandleComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2880, 0x15e38 bytes
    // afd.sys .text:0x3560, 0x15fb8 bytes
    // afd.sys .text:0x65d0, 0x187f8 bytes
    // afd.sys .text:0x3560, 0x15fb8 bytes
    //
    _v11(sdk::unknown_ptr) afd_tl_close_connection_handle_complete;
    
    // [AfdTLCloseEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48e08, 0x15e38 bytes
    // afd.sys PAGEAFD:0x5265c, 0x15fb8 bytes
    // afd.sys .text:0x7288, 0x187f8 bytes
    // afd.sys PAGEAFD:0x5265c, 0x15fb8 bytes
    //
    _v12(sdk::unknown_ptr) afd_tl_close_endpoint;
    
    // [AfdTLCloseEndpointComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48e80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x52620, 0x15fb8 bytes
    // afd.sys .text:0x7440, 0x187f8 bytes
    // afd.sys PAGEAFD:0x52620, 0x15fb8 bytes
    //
    _v13(sdk::unknown_ptr) afd_tl_close_endpoint_complete;
    
    // [AfdTLCompleteBufferReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53310, 0x15e38 bytes
    // afd.sys PAGEAFD:0x49cf0, 0x15fb8 bytes
    // afd.sys .text:0x19850, 0x187f8 bytes
    // afd.sys PAGEAFD:0x49cf0, 0x15fb8 bytes
    //
    _v14(sdk::unknown_ptr) afd_tl_complete_buffer_receive;
    
    // [AfdTLCompleteBufferUserReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52680, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4f1a0, 0x15fb8 bytes
    // afd.sys .text:0xedb0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4f1a0, 0x15fb8 bytes
    //
    _v15(sdk::unknown_ptr) afd_tl_complete_buffer_user_receive;
    
    // [AfdTLCompleteRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51444, 0x15e38 bytes
    // afd.sys PAGEAFD:0x522a0, 0x15fb8 bytes
    // afd.sys .text:0x8560, 0x187f8 bytes
    // afd.sys PAGEAFD:0x522a0, 0x15fb8 bytes
    //
    _v16(sdk::unknown_ptr) afd_tl_complete_request;
    
    // [AfdTLConnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51280, 0x15e38 bytes
    // afd.sys PAGEAFD:0x551f0, 0x15fb8 bytes
    // afd.sys .text:0x4080, 0x187f8 bytes
    // afd.sys PAGEAFD:0x551f0, 0x15fb8 bytes
    //
    _v17(sdk::unknown_ptr) afd_tl_connect_complete;
    
    // [AfdTLConnectComplete2]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51484, 0x15e38 bytes
    // afd.sys PAGEAFD:0x553a8, 0x15fb8 bytes
    // afd.sys .text:0x4238, 0x187f8 bytes
    // afd.sys PAGEAFD:0x553a8, 0x15fb8 bytes
    //
    _v18(sdk::unknown_ptr) afd_tl_connect_complete2;
    
    // [AfdTLConnectEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x537e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x498d0, 0x15fb8 bytes
    // afd.sys .text:0x2ef0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x498d0, 0x15fb8 bytes
    //
    _v19(sdk::unknown_ptr) afd_tl_connect_event_handler;
    
    // [AfdTLConnectedReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4bc00, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c970, 0x15fb8 bytes
    // afd.sys .text:0xe440, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c970, 0x15fb8 bytes
    //
    _v20(sdk::unknown_ptr) afd_tl_connected_receive_event_handler;
    
    // [AfdTLConnectionIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x5154c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x539d0, 0x15fb8 bytes
    // afd.sys .text:0x526c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x539d0, 0x15fb8 bytes
    //
    _v21(sdk::unknown_ptr) afd_tl_connection_io_control;
    
    // [AfdTLCopyRemoteAndLocalAddresses]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x53f40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4964c, 0x15fb8 bytes
    // afd.sys .text:0x18a4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4964c, 0x15fb8 bytes
    //
    _v22(sdk::unknown_ptr) afd_tl_copy_remote_and_local_addresses;
    
    // [AfdTLCreateEndpoint]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48090, 0x15e38 bytes
    // afd.sys PAGEAFD:0x52558, 0x15fb8 bytes
    // afd.sys .text:0x88e4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x52558, 0x15fb8 bytes
    //
    _v23(sdk::unknown_ptr) afd_tl_create_endpoint;
    
    // [AfdTLCreateEndpointComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52930, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4fc80, 0x15fb8 bytes
    // afd.sys .text:0x8420, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4fc80, 0x15fb8 bytes
    //
    _v24(sdk::unknown_ptr) afd_tl_create_endpoint_complete;
    
    // [AfdTLDelayAcceptListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67300, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6b9b0, 0x15fb8 bytes
    // afd.sys .text:0x18ae0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6b9b0, 0x15fb8 bytes
    //
    _v25(sdk::unknown_ptr) afd_tl_delay_accept_listen;
    
    // [AfdTLDelayAcceptListenComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x673b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6ba70, 0x15fb8 bytes
    // afd.sys .text:0x18ba0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6ba70, 0x15fb8 bytes
    //
    _v26(sdk::unknown_ptr) afd_tl_delay_accept_listen_complete;
    
    // [AfdTLDelayedAcceptCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x673e4, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6bab8, 0x15fb8 bytes
    // afd.sys .text:0x17b08, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6bab8, 0x15fb8 bytes
    //
    _v27(sdk::unknown_ptr) afd_tl_delayed_accept_completion;
    
    // [AfdTlDereferenceTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3390, 0x15e38 bytes
    // afd.sys .text:0x3460, 0x15fb8 bytes
    // afd.sys .text:0x7310, 0x187f8 bytes
    // afd.sys .text:0x3460, 0x15fb8 bytes
    //
    _v28(sdk::unknown_ptr) afd_tl_dereference_transport;
    
    // [AfdTLDgramBindComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x46910, 0x15e38 bytes
    // afd.sys PAGEAFD:0x53b60, 0x15fb8 bytes
    // afd.sys .text:0x6290, 0x187f8 bytes
    // afd.sys PAGEAFD:0x53b60, 0x15fb8 bytes
    //
    _v29(sdk::unknown_ptr) afd_tl_dgram_bind_complete;
    
    // [AfdTLDgramConnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55d30, 0x15e38 bytes
    // afd.sys PAGEAFD:0x59500, 0x15fb8 bytes
    // afd.sys .text:0x2db0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x59500, 0x15fb8 bytes
    //
    _v30(sdk::unknown_ptr) afd_tl_dgram_connect_complete;
    
    // [AfdTLDgramReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4ba60, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4d080, 0x15fb8 bytes
    // afd.sys .text:0xc530, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4d080, 0x15fb8 bytes
    //
    _v31(sdk::unknown_ptr) afd_tl_dgram_receive_event_handler;
    
    // [AfdTLDgramSendToComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c410, 0x15e38 bytes
    // afd.sys PAGEAFD:0x72230, 0x15fb8 bytes
    // afd.sys .text:0x3a9b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x72230, 0x15fb8 bytes
    //
    _v32(sdk::unknown_ptr) afd_tl_dgram_send_to_complete;
    
    // [AfdTLDisconnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52610, 0x15e38 bytes
    // afd.sys PAGEAFD:0x55490, 0x15fb8 bytes
    // afd.sys .text:0x3fd0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x55490, 0x15fb8 bytes
    //
    _v33(sdk::unknown_ptr) afd_tl_disconnect_complete;
    
    // [AfdTLDisconnectEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4fec0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4ae60, 0x15fb8 bytes
    // afd.sys .text:0x12240, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4ae60, 0x15fb8 bytes
    //
    _v34(sdk::unknown_ptr) afd_tl_disconnect_event_handler;
    
    // [AfdTLDontCareIOCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56e40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    //
    _v35(sdk::unknown_ptr) afd_tl_dont_care_io_completion;
    
    // [AfdTLDontCareIOReceiveCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56e40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    //
    _v36(sdk::unknown_ptr) afd_tl_dont_care_io_receive_completion;
    
    // [AfdTLDontCareRequestCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56e40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    //
    _v37(sdk::unknown_ptr) afd_tl_dont_care_request_completion;
    
    // [AfdTLEndpointIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x51188, 0x15e38 bytes
    // afd.sys PAGEAFD:0x539a4, 0x15fb8 bytes
    // afd.sys .text:0x5298, 0x187f8 bytes
    // afd.sys PAGEAFD:0x539a4, 0x15fb8 bytes
    //
    _v38(sdk::unknown_ptr) afd_tl_endpoint_io_control;
    
    // [AfdTLErrorHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xafc0, 0x15e38 bytes
    // afd.sys .text:0x7770, 0x15fb8 bytes
    // afd.sys .text:0x19b40, 0x187f8 bytes
    // afd.sys .text:0x7770, 0x15fb8 bytes
    //
    _v39(sdk::unknown_ptr) afd_tl_error_handler;
    
    // [AfdTLErrorHandlerConnection]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16210, 0x15e38 bytes
    // afd.sys .text:0x10670, 0x15fb8 bytes
    // afd.sys .text:0x35940, 0x187f8 bytes
    // afd.sys .text:0x10670, 0x15fb8 bytes
    //
    _v40(sdk::unknown_ptr) afd_tl_error_handler_connection;
    
    // [AfdTLFastDgramSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x65e1c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6a02c, 0x15fb8 bytes
    // afd.sys .text:0x31fa0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6a02c, 0x15fb8 bytes
    //
    _v41(sdk::unknown_ptr) afd_tl_fast_dgram_send;
    
    // [AfdTLFastDgramSendComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4afc0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4dbe0, 0x15fb8 bytes
    // afd.sys .text:0xcbb0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4dbe0, 0x15fb8 bytes
    //
    _v42(sdk::unknown_ptr) afd_tl_fast_dgram_send_complete;
    
    // [AfdTlFindAndReferenceNDKTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1666c, 0x15e38 bytes
    // afd.sys .text:0x10e6c, 0x15fb8 bytes
    // afd.sys .text:0x3e88c, 0x187f8 bytes
    // afd.sys .text:0x10e6c, 0x15fb8 bytes
    //
    _v43(sdk::unknown_ptr) afd_tl_find_and_reference_ndk_transport;
    
    // [AfdTlFindAndReferenceTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3110, 0x15e38 bytes
    // afd.sys .text:0x2bb8, 0x15fb8 bytes
    // afd.sys .text:0x8260, 0x187f8 bytes
    // afd.sys .text:0x2bb8, 0x15fb8 bytes
    //
    _v44(sdk::unknown_ptr) afd_tl_find_and_reference_transport;
    
    // [AfdTLGetAddressComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x511b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x52720, 0x15fb8 bytes
    // afd.sys .text:0x66b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x52720, 0x15fb8 bytes
    //
    _v45(sdk::unknown_ptr) afd_tl_get_address_complete;
    
    // [AfdTLHandleListenBacklog]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x5497c, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6bccc, 0x15fb8 bytes
    // afd.sys .text:0x33914, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6bccc, 0x15fb8 bytes
    //
    _v46(sdk::unknown_ptr) afd_tl_handle_listen_backlog;
    
    // [AfdTLInspectEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x675b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6bd80, 0x15fb8 bytes
    // afd.sys .text:0x186b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6bd80, 0x15fb8 bytes
    //
    _v47(sdk::unknown_ptr) afd_tl_inspect_event_handler;
    
    // [AfdTLIoComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6f7d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x76390, 0x15fb8 bytes
    // afd.sys .text:0x437c0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x76390, 0x15fb8 bytes
    //
    _v48(sdk::unknown_ptr) afd_tl_io_complete;
    
    // [AfdTLIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x50c80, 0x15e38 bytes
    // afd.sys PAGEAFD:0x539fc, 0x15fb8 bytes
    // afd.sys .text:0x52c4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x539fc, 0x15fb8 bytes
    //
    _v49(sdk::unknown_ptr) afd_tl_io_control;
    
    // [AfdTLListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56174, 0x15e38 bytes
    // afd.sys PAGEAFD:0x57fdc, 0x15fb8 bytes
    // afd.sys .text:0x1900c, 0x187f8 bytes
    // afd.sys PAGEAFD:0x57fdc, 0x15fb8 bytes
    //
    _v50(sdk::unknown_ptr) afd_tl_listen;
    
    // [AfdTLListenComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x55e10, 0x15e38 bytes
    // afd.sys PAGEAFD:0x580a0, 0x15fb8 bytes
    // afd.sys .text:0x18ec0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x580a0, 0x15fb8 bytes
    //
    _v51(sdk::unknown_ptr) afd_tl_listen_complete;
    
    // [AfdTlNDKTransport]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc8c4, 0x15e38 bytes
    // afd.sys .text:0x10ee0, 0x15fb8 bytes
    // afd.sys .text:0x3e900, 0x187f8 bytes
    // afd.sys .text:0x10ee0, 0x15fb8 bytes
    //
    _v52(sdk::unknown_ptr) afd_tl_ndk_transport;
    
    // [AfdTlNotifyAttachProvider]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb330, 0x15e38 bytes
    // afd.sys .text:0x81d0, 0x15fb8 bytes
    // afd.sys .text:0x1a270, 0x187f8 bytes
    // afd.sys .text:0x81d0, 0x15fb8 bytes
    //
    _v53(sdk::unknown_ptr) afd_tl_notify_attach_provider;
    
    // [AfdTlNotifyCleanupProviderContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x166d0, 0x15e38 bytes
    // afd.sys .text:0x10f00, 0x15fb8 bytes
    // afd.sys .text:0x3e920, 0x187f8 bytes
    // afd.sys .text:0x10f00, 0x15fb8 bytes
    //
    _v54(sdk::unknown_ptr) afd_tl_notify_cleanup_provider_context;
    
    // [AfdTlNotifyDetachProvider]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16700, 0x15e38 bytes
    // afd.sys .text:0x10f40, 0x15fb8 bytes
    // afd.sys .text:0x3e960, 0x187f8 bytes
    // afd.sys .text:0x10f40, 0x15fb8 bytes
    //
    _v55(sdk::unknown_ptr) afd_tl_notify_detach_provider;
    
    // [AfdTLPauseUnPause]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x551b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c3a0, 0x15fb8 bytes
    // afd.sys .text:0x339e0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c3a0, 0x15fb8 bytes
    //
    _v56(sdk::unknown_ptr) afd_tl_pause_un_pause;
    
    // [AfdTLPauseUnPauseCompletion]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x56e40, 0x15e38 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys PAGEAFD:0x586f0, 0x15fb8 bytes
    //
    _v57(sdk::unknown_ptr) afd_tl_pause_un_pause_completion;
    
    // [AfdTLPendRequest]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x48010, 0x15e38 bytes
    // afd.sys PAGEAFD:0x52200, 0x15fb8 bytes
    // afd.sys .text:0x84b4, 0x187f8 bytes
    // afd.sys PAGEAFD:0x52200, 0x15fb8 bytes
    //
    _v58(sdk::unknown_ptr) afd_tl_pend_request;
    
    // [AfdTLPostPendedReceives]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6b6bc, 0x15e38 bytes
    // afd.sys PAGEAFD:0x71250, 0x15fb8 bytes
    // afd.sys .text:0x397b0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x71250, 0x15fb8 bytes
    //
    _v59(sdk::unknown_ptr) afd_tl_post_pended_receives;
    
    // [AfdTLPostUserReceive]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4e3d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x52050, 0x15fb8 bytes
    // afd.sys .text:0x111f8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x52050, 0x15fb8 bytes
    //
    _v60(sdk::unknown_ptr) afd_tl_post_user_receive;
    
    // [AfdTLReleaseIndicationsComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc250, 0x15e38 bytes
    // afd.sys .text:0x6270, 0x15fb8 bytes
    // afd.sys .text:0x17620, 0x187f8 bytes
    // afd.sys .text:0x6270, 0x15fb8 bytes
    //
    _v61(sdk::unknown_ptr) afd_tl_release_indications_complete;
    
    // [AfdTLRestartFastTransmitSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e740, 0x15e38 bytes
    // afd.sys PAGEAFD:0x750e0, 0x15fb8 bytes
    // afd.sys .text:0x3db90, 0x187f8 bytes
    // afd.sys PAGEAFD:0x750e0, 0x15fb8 bytes
    //
    _v62(sdk::unknown_ptr) afd_tl_restart_fast_transmit_send;
    
    // [AfdTLRestartTPacketsSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e7e0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75210, 0x15fb8 bytes
    // afd.sys .text:0x3dcb0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75210, 0x15fb8 bytes
    //
    _v63(sdk::unknown_ptr) afd_tl_restart_t_packets_send;
    
    // [AfdTLRestartTPDetachedSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e7d0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x751c0, 0x15fb8 bytes
    // afd.sys .text:0x3dc70, 0x187f8 bytes
    // afd.sys PAGEAFD:0x751c0, 0x15fb8 bytes
    //
    _v64(sdk::unknown_ptr) afd_tl_restart_tp_detached_send;
    
    // [AfdTLResumeConnectionSetup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67ae0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c4f4, 0x15fb8 bytes
    // afd.sys .text:0x18a38, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c4f4, 0x15fb8 bytes
    //
    _v65(sdk::unknown_ptr) afd_tl_resume_connection_setup;
    
    // [AfdTLRioDgramReceiveEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x6fd0, 0x15e38 bytes
    // afd.sys .text:0x1c8a0, 0x15fb8 bytes
    // afd.sys .text:0x4bd60, 0x187f8 bytes
    // afd.sys .text:0x1c8a0, 0x15fb8 bytes
    //
    _v66(sdk::unknown_ptr) afd_tl_rio_dgram_receive_event_handler;
    
    // [AfdTLRioErrorHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xc8d0, 0x15e38 bytes
    // afd.sys .text:0x6280, 0x15fb8 bytes
    // afd.sys .text:0x17630, 0x187f8 bytes
    // afd.sys .text:0x6280, 0x15fb8 bytes
    //
    _v67(sdk::unknown_ptr) afd_tl_rio_error_handler;
    
    // [AfdTlSendBacklogEventHandler]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4d20, 0x15e38 bytes
    // afd.sys .text:0x1390, 0x15fb8 bytes
    // afd.sys .text:0x1130, 0x187f8 bytes
    // afd.sys .text:0x1390, 0x15fb8 bytes
    //
    _v68(sdk::unknown_ptr) afd_tl_send_backlog_event_handler;
    
    // [AfdTLSendComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x497b0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c140, 0x15fb8 bytes
    // afd.sys .text:0x8c90, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c140, 0x15fb8 bytes
    //
    _v69(sdk::unknown_ptr) afd_tl_send_complete;
    
    // [AfdTLSendMessage]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x34b68, 0x15e38 bytes
    // afd.sys PAGE:0x34eb8, 0x15fb8 bytes
    // afd.sys PAGE:0x648f4, 0x187f8 bytes
    // afd.sys PAGE:0x34eb8, 0x15fb8 bytes
    //
    _v70(sdk::unknown_ptr) afd_tl_send_message;
    
    // [AfdTLSendMessages]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb0a0, 0x15e38 bytes
    // afd.sys .text:0x6290, 0x15fb8 bytes
    // afd.sys .text:0x1a8d8, 0x187f8 bytes
    // afd.sys .text:0x6290, 0x15fb8 bytes
    //
    _v71(sdk::unknown_ptr) afd_tl_send_messages;
    
    // [AfdTLSendMsgComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54dc0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x58860, 0x15fb8 bytes
    // afd.sys .text:0x1a7c0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x58860, 0x15fb8 bytes
    //
    _v72(sdk::unknown_ptr) afd_tl_send_msg_complete;
    
    // [AfdTLSockOptDisable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27a80, 0x15e38 bytes
    // afd.sys .data:0x27bd0, 0x15fb8 bytes
    // afd.sys .data:0x57c48, 0x187f8 bytes
    // afd.sys .data:0x27bd0, 0x15fb8 bytes
    //
    _v73(sdk::unknown_ptr) afd_tl_sock_opt_disable;
    
    // [AfdTLSockOptEnable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27240, 0x15e38 bytes
    // afd.sys .data:0x27260, 0x15fb8 bytes
    // afd.sys .data:0x572a0, 0x187f8 bytes
    // afd.sys .data:0x27260, 0x15fb8 bytes
    //
    _v74(sdk::unknown_ptr) afd_tl_sock_opt_enable;
    
    // [AfdTLStartBufferedVcSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x510b8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4c030, 0x15fb8 bytes
    // afd.sys .text:0xdb58, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4c030, 0x15fb8 bytes
    //
    _v75(sdk::unknown_ptr) afd_tl_start_buffered_vc_send;
    
    // [AfdTlStartClientModule]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7a754, 0x15e38 bytes
    // afd.sys INIT:0x8497c, 0x15fb8 bytes
    // afd.sys INIT:0x83968, 0x187f8 bytes
    // afd.sys INIT:0x8497c, 0x15fb8 bytes
    //
    _v76(sdk::unknown_ptr) afd_tl_start_client_module;
    
    // [AfdTLStartVcSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c538, 0x15e38 bytes
    // afd.sys PAGEAFD:0x723a0, 0x15fb8 bytes
    // afd.sys .text:0x3ab10, 0x187f8 bytes
    // afd.sys PAGEAFD:0x723a0, 0x15fb8 bytes
    //
    _v77(sdk::unknown_ptr) afd_tl_start_vc_send;
    
    // [AfdTlStopClientModule]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42120, 0x15e38 bytes
    // afd.sys PAGE:0x447f0, 0x15fb8 bytes
    // afd.sys PAGE:0x727f8, 0x187f8 bytes
    // afd.sys PAGE:0x447f0, 0x15fb8 bytes
    //
    _v78(sdk::unknown_ptr) afd_tl_stop_client_module;
    
    // [AfdTLSuperConnectComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x515c0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x543f0, 0x15fb8 bytes
    // afd.sys .text:0x4bd0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x543f0, 0x15fb8 bytes
    //
    _v79(sdk::unknown_ptr) afd_tl_super_connect_complete;
    
    // [AfdTlTransportListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27530, 0x15e38 bytes
    // afd.sys .data:0x275a0, 0x15fb8 bytes
    // afd.sys .data:0x57600, 0x187f8 bytes
    // afd.sys .data:0x275a0, 0x15fb8 bytes
    //
    _v80(sdk::unknown_ptr) afd_tl_transport_list_head;
    
    // [AfdTlTransportSpinLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278c0, 0x15e38 bytes
    // afd.sys .data:0x27970, 0x15fb8 bytes
    // afd.sys .data:0x579e8, 0x187f8 bytes
    // afd.sys .data:0x27970, 0x15fb8 bytes
    //
    _v81(sdk::unknown_ptr) afd_tl_transport_spin_lock;
    
    // [AfdTLVcSendDgram]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c640, 0x15e38 bytes
    // afd.sys PAGEAFD:0x59610, 0x15fb8 bytes
    // afd.sys .text:0x3ac18, 0x187f8 bytes
    // afd.sys PAGEAFD:0x59610, 0x15fb8 bytes
    //
    _v82(sdk::unknown_ptr) afd_tl_vc_send_dgram;
    
    // [AfdTLVcSendDgramCancel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c800, 0x15e38 bytes
    // afd.sys PAGEAFD:0x724b0, 0x15fb8 bytes
    // afd.sys .text:0x3ae00, 0x187f8 bytes
    // afd.sys PAGEAFD:0x724b0, 0x15fb8 bytes
    //
    _v83(sdk::unknown_ptr) afd_tl_vc_send_dgram_cancel;
    
    // [AfdTLVcSendDgramComplete]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6c890, 0x15e38 bytes
    // afd.sys PAGEAFD:0x59700, 0x15fb8 bytes
    // afd.sys .text:0x3aeb0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x59700, 0x15fb8 bytes
    //
    _v84(sdk::unknown_ptr) afd_tl_vc_send_dgram_complete;
    
    // [AfdTliGetTpInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3f1a4, 0x15e38 bytes
    // afd.sys PAGE:0x410e8, 0x15fb8 bytes
    // afd.sys PAGE:0x6f23c, 0x187f8 bytes
    // afd.sys PAGE:0x410e8, 0x15fb8 bytes
    //
    _v85(sdk::unknown_ptr) afd_tli_get_tp_info;
    
    // [AfdTliIoControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x4f140, 0x15e38 bytes
    // afd.sys PAGEAFD:0x4fd20, 0x15fb8 bytes
    // afd.sys .text:0x7480, 0x187f8 bytes
    // afd.sys PAGEAFD:0x4fd20, 0x15fb8 bytes
    //
    _v86(sdk::unknown_ptr) afd_tli_io_control;
    
    // [AfdTliIoControlHandleAssociateQoS]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43a10, 0x15e38 bytes
    // afd.sys PAGE:0x463e4, 0x15fb8 bytes
    // afd.sys PAGE:0x74388, 0x187f8 bytes
    // afd.sys PAGE:0x463e4, 0x15fb8 bytes
    //
    _v87(sdk::unknown_ptr) afd_tli_io_control_handle_associate_qo_s;
    
    // [AfdTliIoControlHandleSetQoS]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x43bfc, 0x15e38 bytes
    // afd.sys PAGE:0x465f8, 0x15fb8 bytes
    // afd.sys PAGE:0x74598, 0x187f8 bytes
    // afd.sys PAGE:0x465f8, 0x15fb8 bytes
    //
    _v88(sdk::unknown_ptr) afd_tli_io_control_handle_set_qo_s;
    
    // [AfdTLTPacketsSend]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x6e7f8, 0x15e38 bytes
    // afd.sys PAGEAFD:0x75238, 0x15fb8 bytes
    // afd.sys .text:0x3dcd8, 0x187f8 bytes
    // afd.sys PAGEAFD:0x75238, 0x15fb8 bytes
    //
    _v89(sdk::unknown_ptr) afd_tlt_packets_send;
    
    // [AfdTraceLogTdiFilter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x4422c, 0x15e38 bytes
    // afd.sys PAGE:0x46cb8, 0x15fb8 bytes
    // afd.sys PAGE:0x74c3c, 0x187f8 bytes
    // afd.sys PAGE:0x46cb8, 0x15fb8 bytes
    //
    _v90(sdk::unknown_ptr) afd_trace_log_tdi_filter;
    
    // [AfdTransmitFile]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3f250, 0x15e38 bytes
    // afd.sys PAGE:0x411a0, 0x15fb8 bytes
    // afd.sys PAGE:0x6f2f0, 0x187f8 bytes
    // afd.sys PAGE:0x411a0, 0x15fb8 bytes
    //
    _v91(sdk::unknown_ptr) afd_transmit_file;
    
    // [AfdTransmitIoLength]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x275b8, 0x15e38 bytes
    // afd.sys .data:0x27638, 0x15fb8 bytes
    // afd.sys .data:0x576e8, 0x187f8 bytes
    // afd.sys .data:0x27638, 0x15fb8 bytes
    //
    _v92(sdk::unknown_ptr) afd_transmit_io_length;
    
    // [AfdTransmitPackets]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3fa80, 0x15e38 bytes
    // afd.sys PAGE:0x41ac0, 0x15fb8 bytes
    // afd.sys PAGE:0x6fc10, 0x187f8 bytes
    // afd.sys PAGE:0x41ac0, 0x15fb8 bytes
    //
    _v93(sdk::unknown_ptr) afd_transmit_packets;
    
    // [AfdTransmitPackets32]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x404ec, 0x15e38 bytes
    // afd.sys PAGE:0x425e8, 0x15fb8 bytes
    // afd.sys PAGE:0x70738, 0x187f8 bytes
    // afd.sys PAGE:0x425e8, 0x15fb8 bytes
    //
    _v94(sdk::unknown_ptr) afd_transmit_packets32;
    
    // [AfdTransportInfoListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27520, 0x15e38 bytes
    // afd.sys .data:0x27590, 0x15fb8 bytes
    // afd.sys .data:0x575f0, 0x187f8 bytes
    // afd.sys .data:0x27590, 0x15fb8 bytes
    //
    _v95(sdk::unknown_ptr) afd_transport_info_list_head;
    
    // [AfdUnBindSocket]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3ad60, 0x15e38 bytes
    // afd.sys PAGE:0x3b8b0, 0x15fb8 bytes
    // afd.sys PAGE:0x696d0, 0x187f8 bytes
    // afd.sys PAGE:0x3b8b0, 0x15fb8 bytes
    //
    _v96(sdk::unknown_ptr) afd_un_bind_socket;
    
    // [AfdUnbind]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d2a8, 0x15e38 bytes
    // afd.sys PAGE:0x3e5b4, 0x15fb8 bytes
    // afd.sys PAGE:0x6c280, 0x187f8 bytes
    // afd.sys PAGE:0x3e5b4, 0x15fb8 bytes
    //
    _v97(sdk::unknown_ptr) afd_unbind;
    
    // [AfdUnload]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3c380, 0x15e38 bytes
    // afd.sys PAGE:0x3d270, 0x15fb8 bytes
    // afd.sys PAGE:0x6b000, 0x187f8 bytes
    // afd.sys PAGE:0x3d270, 0x15fb8 bytes
    //
    _v98(sdk::unknown_ptr) afd_unload;
    
    // [AfdUnlockEndpointContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x306e4, 0x15e38 bytes
    // afd.sys PAGE:0x332e8, 0x15fb8 bytes
    // afd.sys PAGE:0x605b8, 0x187f8 bytes
    // afd.sys PAGE:0x332e8, 0x15fb8 bytes
    //
    _v99(sdk::unknown_ptr) afd_unlock_endpoint_context;
    
    // [AfdUpdateConnectionForTimerWheel]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa850, 0x15e38 bytes
    // afd.sys .text:0x6e64, 0x15fb8 bytes
    // afd.sys .text:0x195c4, 0x187f8 bytes
    // afd.sys .text:0x6e64, 0x15fb8 bytes
    //
    _w00(sdk::unknown_ptr) afd_update_connection_for_timer_wheel;
    
    // [AfdUpdatePollInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x52ee0, 0x15e38 bytes
    // afd.sys PAGEAFD:0x584f0, 0x15fb8 bytes
    // afd.sys .text:0x165d0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x584f0, 0x15fb8 bytes
    //
    _w01(sdk::unknown_ptr) afd_update_poll_info;
    
    // [AfdUseTdiSendAndDisconnect]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27231, 0x15e38 bytes
    // afd.sys .data:0x27251, 0x15fb8 bytes
    // afd.sys .data:0x57291, 0x187f8 bytes
    // afd.sys .data:0x27251, 0x15fb8 bytes
    //
    _w02(sdk::unknown_ptr) afd_use_tdi_send_and_disconnect;
    
    // [AfdValidateGroup]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x69000, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6df40, 0x15fb8 bytes
    // afd.sys .text:0x35bc0, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6df40, 0x15fb8 bytes
    //
    _w03(sdk::unknown_ptr) afd_validate_group;
    
    // [AfdValidateStatus]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3d428, 0x15e38 bytes
    // afd.sys PAGE:0x3e760, 0x15fb8 bytes
    // afd.sys PAGE:0x6c428, 0x187f8 bytes
    // afd.sys PAGE:0x3e760, 0x15fb8 bytes
    //
    _w04(sdk::unknown_ptr) afd_validate_status;
    
    // [AfdVolatileConfig]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27858, 0x15e38 bytes
    // afd.sys .data:0x278e8, 0x15fb8 bytes
    // afd.sys .data:0x57968, 0x187f8 bytes
    // afd.sys .data:0x278e8, 0x15fb8 bytes
    //
    _w05(sdk::unknown_ptr) afd_volatile_config;
    
    // [AfdVolatileConfigInfo]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEDATA:0x79030, 0x15e38 bytes
    // afd.sys PAGEDATA:0x83030, 0x15fb8 bytes
    // afd.sys PAGEDATA:0x82000, 0x187f8 bytes
    // afd.sys PAGEDATA:0x83030, 0x15fb8 bytes
    //
    _w06(sdk::unknown_ptr) afd_volatile_config_info;
    
    // [AfdWaitForListen]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x54820, 0x15e38 bytes
    // afd.sys PAGEAFD:0x565b0, 0x15fb8 bytes
    // afd.sys .text:0x1490, 0x187f8 bytes
    // afd.sys PAGEAFD:0x565b0, 0x15fb8 bytes
    //
    _w07(sdk::unknown_ptr) afd_wait_for_listen;
    
    // [AFD_WINSOCK]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1dec0, 0x15e38 bytes
    // afd.sys .rdata:0x1e110, 0x15fb8 bytes
    // afd.sys .rdata:0x4e3e0, 0x187f8 bytes
    // afd.sys .rdata:0x1e110, 0x15fb8 bytes
    //
    _w08(sdk::unknown_ptr) afd_winsock;
    
    // [AfdWorkQueueItem]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27570, 0x15e38 bytes
    // afd.sys .data:0x275f0, 0x15fb8 bytes
    // afd.sys .data:0x57650, 0x187f8 bytes
    // afd.sys .data:0x275f0, 0x15fb8 bytes
    //
    _w09(sdk::unknown_ptr) afd_work_queue_item;
    
    // [AfdWorkQueueListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27560, 0x15e38 bytes
    // afd.sys .data:0x275e0, 0x15fb8 bytes
    // afd.sys .data:0x57640, 0x187f8 bytes
    // afd.sys .data:0x275e0, 0x15fb8 bytes
    //
    _w10(sdk::unknown_ptr) afd_work_queue_list_head;
    
    // [AfdWorkThreadRunning]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27770, 0x15e38 bytes
    // afd.sys .data:0x27870, 0x15fb8 bytes
    // afd.sys .data:0x57908, 0x187f8 bytes
    // afd.sys .data:0x27870, 0x15fb8 bytes
    //
    _w11(sdk::unknown_ptr) afd_work_thread_running;
    
    // [AfdWskCancelTransportChangeReq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16830, 0x15e38 bytes
    // afd.sys .text:0x110d0, 0x15fb8 bytes
    // afd.sys .text:0x3ec90, 0x187f8 bytes
    // afd.sys .text:0x110d0, 0x15fb8 bytes
    //
    _w12(sdk::unknown_ptr) afd_wsk_cancel_transport_change_req;
    
    // [AfdWskCleanupTransportChangeReq]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16930, 0x15e38 bytes
    // afd.sys .text:0x11220, 0x15fb8 bytes
    // afd.sys .text:0x3ede0, 0x187f8 bytes
    // afd.sys .text:0x11220, 0x15fb8 bytes
    //
    _w13(sdk::unknown_ptr) afd_wsk_cleanup_transport_change_req;
    
    // [AfdWskClientListHead]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27430, 0x15e38 bytes
    // afd.sys .data:0x274b0, 0x15fb8 bytes
    // afd.sys .data:0x57510, 0x187f8 bytes
    // afd.sys .data:0x274b0, 0x15fb8 bytes
    //
    _w14(sdk::unknown_ptr) afd_wsk_client_list_head;
    
    // [AfdWskClientSpinLock]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27420, 0x15e38 bytes
    // afd.sys .data:0x274a0, 0x15fb8 bytes
    // afd.sys .data:0x57500, 0x187f8 bytes
    // afd.sys .data:0x274a0, 0x15fb8 bytes
    //
    _w15(sdk::unknown_ptr) afd_wsk_client_spin_lock;
    
    // [AfdWskControlClient]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xbe50, 0x15e38 bytes
    // afd.sys .text:0x7bc0, 0x15fb8 bytes
    // afd.sys .text:0x1ab20, 0x187f8 bytes
    // afd.sys .text:0x7bc0, 0x15fb8 bytes
    //
    _w16(sdk::unknown_ptr) afd_wsk_control_client;
    
    // [AfdWskDeinit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16780, 0x15e38 bytes
    // afd.sys .text:0x10fe0, 0x15fb8 bytes
    // afd.sys .text:0x3ead0, 0x187f8 bytes
    // afd.sys .text:0x10fe0, 0x15fb8 bytes
    //
    _w17(sdk::unknown_ptr) afd_wsk_deinit;
    
    // [AfdWskDeinitWorkItem]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27460, 0x15e38 bytes
    // afd.sys .data:0x274e0, 0x15fb8 bytes
    // afd.sys .data:0x57540, 0x187f8 bytes
    // afd.sys .data:0x274e0, 0x15fb8 bytes
    //
    _w18(sdk::unknown_ptr) afd_wsk_deinit_work_item;
    
    // [AfdWskDereferenceClient]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1808, 0x15e38 bytes
    // afd.sys .text:0x3aa8, 0x15fb8 bytes
    // afd.sys .text:0x14228, 0x187f8 bytes
    // afd.sys .text:0x3aa8, 0x15fb8 bytes
    //
    _w19(sdk::unknown_ptr) afd_wsk_dereference_client;
    
    // [AfdWskDispatchInternalDeviceControl]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1c50, 0x15e38 bytes
    // afd.sys .text:0x4b90, 0x15fb8 bytes
    // afd.sys .text:0x13270, 0x187f8 bytes
    // afd.sys .text:0x4b90, 0x15fb8 bytes
    //
    _w20(sdk::unknown_ptr) afd_wsk_dispatch_internal_device_control;
    
    // [AfdWskInit]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb714, 0x15e38 bytes
    // afd.sys .text:0x7ae4, 0x15fb8 bytes
    // afd.sys .text:0x1a694, 0x187f8 bytes
    // afd.sys .text:0x7ae4, 0x15fb8 bytes
    //
    _w21(sdk::unknown_ptr) afd_wsk_init;
    
    // [AfdWskInitialized]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27480, 0x15e38 bytes
    // afd.sys .data:0x27500, 0x15fb8 bytes
    // afd.sys .data:0x57560, 0x187f8 bytes
    // afd.sys .data:0x27500, 0x15fb8 bytes
    //
    _w22(sdk::unknown_ptr) afd_wsk_initialized;
    
    // [AfdWskIntIrpDispatch]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d830, 0x15e38 bytes
    // afd.sys .rdata:0x1d8f0, 0x15fb8 bytes
    // afd.sys .rdata:0x4d8b0, 0x187f8 bytes
    // afd.sys .rdata:0x1d8f0, 0x15fb8 bytes
    //
    _w23(sdk::unknown_ptr) afd_wsk_int_irp_dispatch;
    
    // [AfdWskIoctlTransportListChange]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16a10, 0x15e38 bytes
    // afd.sys .text:0x11340, 0x15fb8 bytes
    // afd.sys .text:0x3ef00, 0x187f8 bytes
    // afd.sys .text:0x11340, 0x15fb8 bytes
    //
    _w24(sdk::unknown_ptr) afd_wsk_ioctl_transport_list_change;
    
    // [AfdWskNdkCloseAdapter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x421b0, 0x15e38 bytes
    // afd.sys PAGE:0x448b0, 0x15fb8 bytes
    // afd.sys PAGE:0x728b0, 0x187f8 bytes
    // afd.sys PAGE:0x448b0, 0x15fb8 bytes
    //
    _w25(sdk::unknown_ptr) afd_wsk_ndk_close_adapter;
    
    // [AfdWskNdkOpenAdapter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42200, 0x15e38 bytes
    // afd.sys PAGE:0x44900, 0x15fb8 bytes
    // afd.sys PAGE:0x72900, 0x187f8 bytes
    // afd.sys PAGE:0x44900, 0x15fb8 bytes
    //
    _w26(sdk::unknown_ptr) afd_wsk_ndk_open_adapter;
    
    // [AfdWskNotifyAttachClient]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb520, 0x15e38 bytes
    // afd.sys .text:0x78c0, 0x15fb8 bytes
    // afd.sys .text:0x1a480, 0x187f8 bytes
    // afd.sys .text:0x78c0, 0x15fb8 bytes
    //
    _w27(sdk::unknown_ptr) afd_wsk_notify_attach_client;
    
    // [AfdWskNotifyCleanupClientContext]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5270, 0x15e38 bytes
    // afd.sys .text:0x7480, 0x15fb8 bytes
    // afd.sys .text:0x3eb80, 0x187f8 bytes
    // afd.sys .text:0x7480, 0x15fb8 bytes
    //
    _w28(sdk::unknown_ptr) afd_wsk_notify_cleanup_client_context;
    
    // [AfdWskNotifyDetachClient]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5110, 0x15e38 bytes
    // afd.sys .text:0x72f0, 0x15fb8 bytes
    // afd.sys .text:0x3ebb0, 0x187f8 bytes
    // afd.sys .text:0x72f0, 0x15fb8 bytes
    //
    _w29(sdk::unknown_ptr) afd_wsk_notify_detach_client;
    
    // [AfdWskProcessTransportChangeList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb2a0, 0x15e38 bytes
    // afd.sys .text:0x8124, 0x15fb8 bytes
    // afd.sys .text:0x1a1c0, 0x187f8 bytes
    // afd.sys .text:0x8124, 0x15fb8 bytes
    //
    _w30(sdk::unknown_ptr) afd_wsk_process_transport_change_list;
    
    // [AfdWskProviderCharacter]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e518, 0x15e38 bytes
    // afd.sys .rdata:0x1e9e0, 0x15fb8 bytes
    // afd.sys .rdata:0x4f220, 0x187f8 bytes
    // afd.sys .rdata:0x1e9e0, 0x15fb8 bytes
    //
    _w31(sdk::unknown_ptr) afd_wsk_provider_character;
    
    // [AfdWskProviderHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27440, 0x15e38 bytes
    // afd.sys .data:0x274c0, 0x15fb8 bytes
    // afd.sys .data:0x57520, 0x187f8 bytes
    // afd.sys .data:0x274c0, 0x15fb8 bytes
    //
    _w32(sdk::unknown_ptr) afd_wsk_provider_handle;
    
    // [AfdWskProviderNotify]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1d210, 0x15e38 bytes
    // afd.sys .rdata:0x1d2c0, 0x15fb8 bytes
    // afd.sys .rdata:0x4d240, 0x187f8 bytes
    // afd.sys .rdata:0x1d2c0, 0x15fb8 bytes
    //
    _w33(sdk::unknown_ptr) afd_wsk_provider_notify;
    
    // [AfdWskReferenceClient]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x17c0, 0x15e38 bytes
    // afd.sys .text:0x4300, 0x15fb8 bytes
    // afd.sys .text:0x146fc, 0x187f8 bytes
    // afd.sys .text:0x4300, 0x15fb8 bytes
    //
    _w34(sdk::unknown_ptr) afd_wsk_reference_client;
    
    // [AfdWskSearchClientTdiMap]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16bd0, 0x15e38 bytes
    // afd.sys .text:0x11568, 0x15fb8 bytes
    // afd.sys .text:0x3f128, 0x187f8 bytes
    // afd.sys .text:0x11568, 0x15fb8 bytes
    //
    _w35(sdk::unknown_ptr) afd_wsk_search_client_tdi_map;
    
    // [AfdWskStartProviderModule]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys INIT:0x7a66c, 0x15e38 bytes
    // afd.sys INIT:0x84858, 0x15fb8 bytes
    // afd.sys INIT:0x83844, 0x187f8 bytes
    // afd.sys INIT:0x84858, 0x15fb8 bytes
    //
    _w36(sdk::unknown_ptr) afd_wsk_start_provider_module;
    
    // [AfdWskStopProviderModule]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x42174, 0x15e38 bytes
    // afd.sys PAGE:0x4485c, 0x15fb8 bytes
    // afd.sys PAGE:0x72864, 0x187f8 bytes
    // afd.sys PAGE:0x4485c, 0x15fb8 bytes
    //
    _w37(sdk::unknown_ptr) afd_wsk_stop_provider_module;
    
    // [AfdWskTdiCodeHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b20, 0x15e38 bytes
    // afd.sys .data:0x27c68, 0x15fb8 bytes
    // afd.sys .data:0x57ce0, 0x187f8 bytes
    // afd.sys .data:0x27c68, 0x15fb8 bytes
    //
    _w38(sdk::unknown_ptr) afd_wsk_tdi_code_handle;
    
    // [AfdWskTLTransportList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16c10, 0x15e38 bytes
    // afd.sys .text:0x115b0, 0x15fb8 bytes
    // afd.sys .text:0x3f170, 0x187f8 bytes
    // afd.sys .text:0x115b0, 0x15fb8 bytes
    //
    _w39(sdk::unknown_ptr) afd_wsk_tl_transport_list;
    
    // [AfdWskTransportListChangeReqList]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27410, 0x15e38 bytes
    // afd.sys .data:0x27490, 0x15fb8 bytes
    // afd.sys .data:0x574f0, 0x187f8 bytes
    // afd.sys .data:0x27490, 0x15fb8 bytes
    //
    _w40(sdk::unknown_ptr) afd_wsk_transport_list_change_req_list;
    
    // [AFDETW_NRT_TRACE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15bac, 0x15e38 bytes
    // afd.sys .text:0xfce4, 0x15fb8 bytes
    // afd.sys .text:0x318d8, 0x187f8 bytes
    // afd.sys .text:0xfce4, 0x15fb8 bytes
    //
    _w41(sdk::unknown_ptr) afdetw_nrt_trace;
    
    // [AFDETW_RIO_TRACE_INVALID_BUFFER_RANGE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a9d4, 0x15e38 bytes
    // afd.sys .text:0x15d88, 0x15fb8 bytes
    // afd.sys .text:0x45118, 0x187f8 bytes
    // afd.sys .text:0x15d88, 0x15fb8 bytes
    //
    _w42(sdk::unknown_ptr) afdetw_rio_trace_invalid_buffer_range;
    
    // [AFDETW_RIO_TRACE_INVALID_BUFFER_SIZE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1aaa4, 0x15e38 bytes
    // afd.sys .text:0x15e64, 0x15fb8 bytes
    // afd.sys .text:0x451f4, 0x187f8 bytes
    // afd.sys .text:0x15e64, 0x15fb8 bytes
    //
    _w43(sdk::unknown_ptr) afdetw_rio_trace_invalid_buffer_size;
    
    // [AFDETW_RIO_TRACE_INVALID_BUFFERID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1a92c, 0x15e38 bytes
    // afd.sys .text:0x15cd4, 0x15fb8 bytes
    // afd.sys .text:0x45064, 0x187f8 bytes
    // afd.sys .text:0x15cd4, 0x15fb8 bytes
    //
    _w44(sdk::unknown_ptr) afdetw_rio_trace_invalid_bufferid;
    
    // [AFDETW_RIO_TRACE_RQ_RESIZE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1ab54, 0x15e38 bytes
    // afd.sys .text:0x163e8, 0x15fb8 bytes
    // afd.sys .text:0x45780, 0x187f8 bytes
    // afd.sys .text:0x163e8, 0x15fb8 bytes
    //
    _w45(sdk::unknown_ptr) afdetw_rio_trace_rq_resize;
    
    // [AFDETW_STARTACTIVITY]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16ce0, 0x15e38 bytes
    // afd.sys .text:0x1169c, 0x15fb8 bytes
    // afd.sys .text:0x3f25c, 0x187f8 bytes
    // afd.sys .text:0x1169c, 0x15fb8 bytes
    //
    _w46(sdk::unknown_ptr) afdetw_startactivity;
    
    // [AFDETW_STOP_ACTIVITY_FASTIO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15d4c, 0x15e38 bytes
    // afd.sys .text:0xfed8, 0x15fb8 bytes
    // afd.sys .text:0x31ac4, 0x187f8 bytes
    // afd.sys .text:0xfed8, 0x15fb8 bytes
    //
    _w47(sdk::unknown_ptr) afdetw_stop_activity_fastio;
    
    // [AFDETW_STOPACTIVITY]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16d40, 0x15e38 bytes
    // afd.sys .text:0x116fc, 0x15fb8 bytes
    // afd.sys .text:0x3f2bc, 0x187f8 bytes
    // afd.sys .text:0x116fc, 0x15fb8 bytes
    //
    _w48(sdk::unknown_ptr) afdetw_stopactivity;
    
    // [AFDETW_TRACEABORT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3dcc, 0x15e38 bytes
    // afd.sys .text:0x1d50, 0x15fb8 bytes
    // afd.sys .text:0x12800, 0x187f8 bytes
    // afd.sys .text:0x1d50, 0x15fb8 bytes
    //
    _w49(sdk::unknown_ptr) afdetw_traceabort;
    
    // [AFDETW_TRACEACCEPT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5860, 0x15e38 bytes
    // afd.sys .text:0x1180, 0x15fb8 bytes
    // afd.sys .text:0x1e6c, 0x187f8 bytes
    // afd.sys .text:0x1180, 0x15fb8 bytes
    //
    _w50(sdk::unknown_ptr) afdetw_traceaccept;
    
    // [AFDETW_TRACEACCEPT_CORE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x14dd0, 0x15e38 bytes
    // afd.sys .text:0xf008, 0x15fb8 bytes
    // afd.sys .text:0x2ee94, 0x187f8 bytes
    // afd.sys .text:0xf008, 0x15fb8 bytes
    //
    _w51(sdk::unknown_ptr) afdetw_traceaccept_core;
    
    // [AFDETW_TRACEACCEPT_ERROR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1504c, 0x15e38 bytes
    // afd.sys .text:0x600c, 0x15fb8 bytes
    // afd.sys .text:0x17888, 0x187f8 bytes
    // afd.sys .text:0x600c, 0x15fb8 bytes
    //
    _w52(sdk::unknown_ptr) afdetw_traceaccept_error;
    
    // [AFDETW_TRACEACCEPTEX]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x14c5c, 0x15e38 bytes
    // afd.sys .text:0x3ad4, 0x15fb8 bytes
    // afd.sys .text:0x2b98, 0x187f8 bytes
    // afd.sys .text:0x3ad4, 0x15fb8 bytes
    //
    _w53(sdk::unknown_ptr) afdetw_traceacceptex;
    
    // [AFDETW_TRACEBIND]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3c74, 0x15e38 bytes
    // afd.sys .text:0x1efc, 0x15fb8 bytes
    // afd.sys .text:0x5524, 0x187f8 bytes
    // afd.sys .text:0x1efc, 0x15fb8 bytes
    //
    _w54(sdk::unknown_ptr) afdetw_tracebind;
    
    // [AFDETW_TRACEBSEND]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x35b0, 0x15e38 bytes
    // afd.sys .text:0x2030, 0x15fb8 bytes
    // afd.sys .text:0x3998c, 0x187f8 bytes
    // afd.sys .text:0x2030, 0x15fb8 bytes
    //
    _w55(sdk::unknown_ptr) afdetw_tracebsend;
    
    // [AFDETW_TRACEBUFFER]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2d70, 0x15e38 bytes
    // afd.sys .text:0x2aa0, 0x15fb8 bytes
    // afd.sys .text:0xeef0, 0x187f8 bytes
    // afd.sys .text:0x2aa0, 0x15fb8 bytes
    //
    _w56(sdk::unknown_ptr) afdetw_tracebuffer;
    
    // [AFDETW_TRACECONNECT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x27d4, 0x15e38 bytes
    // afd.sys .text:0x3804, 0x15fb8 bytes
    // afd.sys .text:0x520c, 0x187f8 bytes
    // afd.sys .text:0x3804, 0x15fb8 bytes
    //
    _w57(sdk::unknown_ptr) afdetw_traceconnect;
    
    // [AFDETW_TRACECONNECT_CORE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15838, 0x15e38 bytes
    // afd.sys .text:0xfa48, 0x15fb8 bytes
    // afd.sys .text:0x30abc, 0x187f8 bytes
    // afd.sys .text:0xfa48, 0x15fb8 bytes
    //
    _w58(sdk::unknown_ptr) afdetw_traceconnect_core;
    
    // [AFDETW_TRACECONNECT_INDICATION]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x5638, 0x15e38 bytes
    // afd.sys .text:0x18f0, 0x15fb8 bytes
    // afd.sys .text:0x24a0, 0x187f8 bytes
    // afd.sys .text:0x18f0, 0x15fb8 bytes
    //
    _w59(sdk::unknown_ptr) afdetw_traceconnect_indication;
    
    // [AFDETW_TRACECONNECTEX]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x2644, 0x15e38 bytes
    // afd.sys .text:0x35d0, 0x15fb8 bytes
    // afd.sys .text:0x50d8, 0x187f8 bytes
    // afd.sys .text:0x35d0, 0x15fb8 bytes
    //
    _w60(sdk::unknown_ptr) afdetw_traceconnectex;
    
    // [AFDETW_TRACECREATE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3090, 0x15e38 bytes
    // afd.sys .text:0x2b34, 0x15fb8 bytes
    // afd.sys .text:0x81a4, 0x187f8 bytes
    // afd.sys .text:0x2b34, 0x15fb8 bytes
    //
    _w61(sdk::unknown_ptr) afdetw_tracecreate;
    
    // [AFDETW_TRACEDATA_CORE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4e74, 0x15e38 bytes
    // afd.sys .text:0x101a0, 0x15fb8 bytes
    // afd.sys .text:0x1d2b0, 0x187f8 bytes
    // afd.sys .text:0x101a0, 0x15fb8 bytes
    //
    _w62(sdk::unknown_ptr) afdetw_tracedata_core;
    
    // [AFDETW_TRACEDATA_INDICATION]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3a50, 0x15e38 bytes
    // afd.sys .text:0x249c, 0x15fb8 bytes
    // afd.sys .text:0xcb20, 0x187f8 bytes
    // afd.sys .text:0x249c, 0x15fb8 bytes
    //
    _w63(sdk::unknown_ptr) afdetw_tracedata_indication;
    
    // [AFDETW_TRACEDATAADDR_CORE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15db4, 0x15e38 bytes
    // afd.sys .text:0xff48, 0x15fb8 bytes
    // afd.sys .text:0x31b34, 0x187f8 bytes
    // afd.sys .text:0xff48, 0x15fb8 bytes
    //
    _w64(sdk::unknown_ptr) afdetw_tracedataaddr_core;
    
    // [AFDETW_TRACEDATAGRAM_DROP]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb014, 0x15e38 bytes
    // afd.sys .text:0x10aa8, 0x15fb8 bytes
    // afd.sys .text:0x38270, 0x187f8 bytes
    // afd.sys .text:0x10aa8, 0x15fb8 bytes
    //
    _w65(sdk::unknown_ptr) afdetw_tracedatagram_drop;
    
    // [AFDETW_TRACEDISCONNECT]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15a94, 0x15e38 bytes
    // afd.sys .text:0x1e98, 0x15fb8 bytes
    // afd.sys .text:0x122ac, 0x187f8 bytes
    // afd.sys .text:0x1e98, 0x15fb8 bytes
    //
    _w66(sdk::unknown_ptr) afdetw_tracedisconnect;
    
    // [AFDETW_TRACELISTEN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb800, 0x15e38 bytes
    // afd.sys .text:0x57e0, 0x15fb8 bytes
    // afd.sys .text:0x18fb8, 0x187f8 bytes
    // afd.sys .text:0x57e0, 0x15fb8 bytes
    //
    _w67(sdk::unknown_ptr) afdetw_tracelisten;
    
    // [AFDETW_TRACEOPTION]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3f70, 0x15e38 bytes
    // afd.sys .text:0x379c, 0x15fb8 bytes
    // afd.sys .text:0x3e6c, 0x187f8 bytes
    // afd.sys .text:0x379c, 0x15fb8 bytes
    //
    _w68(sdk::unknown_ptr) afdetw_traceoption;
    
    // [AFDETW_TRACERECV]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x43ac, 0x15e38 bytes
    // afd.sys .text:0x14c4, 0x15fb8 bytes
    // afd.sys .text:0x104e0, 0x187f8 bytes
    // afd.sys .text:0x14c4, 0x15fb8 bytes
    //
    _w69(sdk::unknown_ptr) afdetw_tracerecv;
    
    // [AFDETW_TRACERECVDATAGRAM]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3af0, 0x15e38 bytes
    // afd.sys .text:0x27d0, 0x15fb8 bytes
    // afd.sys .text:0xc440, 0x187f8 bytes
    // afd.sys .text:0x27d0, 0x15fb8 bytes
    //
    _w70(sdk::unknown_ptr) afdetw_tracerecvdatagram;
    
    // [AFDETW_TRACESEND]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3bcc, 0x15e38 bytes
    // afd.sys .text:0x1f8c, 0x15fb8 bytes
    // afd.sys .text:0x70a0, 0x187f8 bytes
    // afd.sys .text:0x1f8c, 0x15fb8 bytes
    //
    _w71(sdk::unknown_ptr) afdetw_tracesend;
    
    // [AFDETW_TRACESENDDATAGRAM]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3500, 0x15e38 bytes
    // afd.sys .text:0x2530, 0x15fb8 bytes
    // afd.sys .text:0xba90, 0x187f8 bytes
    // afd.sys .text:0x2530, 0x15fb8 bytes
    //
    _w72(sdk::unknown_ptr) afdetw_tracesenddatagram;
    
    // [AFDETW_TRACESENDMSG]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x45d0, 0x15e38 bytes
    // afd.sys .text:0x54d8, 0x15fb8 bytes
    // afd.sys .text:0x160c8, 0x187f8 bytes
    // afd.sys .text:0x54d8, 0x15fb8 bytes
    //
    _w73(sdk::unknown_ptr) afdetw_tracesendmsg;
    
    // [AFDETW_TRACESENDTO]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x4474, 0x15e38 bytes
    // afd.sys .text:0x62f0, 0x15fb8 bytes
    // afd.sys .text:0x164ac, 0x187f8 bytes
    // afd.sys .text:0x62f0, 0x15fb8 bytes
    //
    _w74(sdk::unknown_ptr) afdetw_tracesendto;
    
    // [AFDETW_TRACESTATUS]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x15394, 0x15e38 bytes
    // afd.sys .text:0xf560, 0x15fb8 bytes
    // afd.sys .text:0x1d1c4, 0x187f8 bytes
    // afd.sys .text:0xf560, 0x15fb8 bytes
    //
    _w75(sdk::unknown_ptr) afdetw_tracestatus;
    
    // [AFDETW_TRACETRANSFER]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16da0, 0x15e38 bytes
    // afd.sys .text:0x1175c, 0x15fb8 bytes
    // afd.sys .text:0x3f31c, 0x187f8 bytes
    // afd.sys .text:0x1175c, 0x15fb8 bytes
    //
    _w76(sdk::unknown_ptr) afdetw_tracetransfer;
    
    // [AFDETW_TRACEWAITLISTEN]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x58c4, 0x15e38 bytes
    // afd.sys .text:0x4328, 0x15fb8 bytes
    // afd.sys .text:0x1614, 0x187f8 bytes
    // afd.sys .text:0x4328, 0x15fb8 bytes
    //
    _w77(sdk::unknown_ptr) afdetw_tracewaitlisten;
    
    // [CopyConnectDataBuffers]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67b78, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c5a0, 0x15fb8 bytes
    // afd.sys .text:0x33b58, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c5a0, 0x15fb8 bytes
    //
    _w78(sdk::unknown_ptr) copy_connect_data_buffers;
    
    // [CopySingleConnectDataBuffer]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGEAFD:0x67c60, 0x15e38 bytes
    // afd.sys PAGEAFD:0x6c690, 0x15fb8 bytes
    // afd.sys .text:0x33c50, 0x187f8 bytes
    // afd.sys PAGEAFD:0x6c690, 0x15fb8 bytes
    //
    _w79(sdk::unknown_ptr) copy_single_connect_data_buffer;
    
    // [g_AfdCorrelationProviderRegistered]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278d0, 0x15e38 bytes
    // afd.sys .data:0x27980, 0x15fb8 bytes
    // afd.sys .data:0x579f8, 0x187f8 bytes
    // afd.sys .data:0x27980, 0x15fb8 bytes
    //
    _w80(sdk::unknown_ptr) g_afd_correlation_provider_registered;
    
    // [g_AfdEtwHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27a88, 0x15e38 bytes
    // afd.sys .data:0x27bc0, 0x15fb8 bytes
    // afd.sys .data:0x57c40, 0x187f8 bytes
    // afd.sys .data:0x27bc0, 0x15fb8 bytes
    //
    _w81(sdk::unknown_ptr) g_afd_etw_handle;
    
    // [g_AfdEtwLoggerHandle]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27b28, 0x15e38 bytes
    // afd.sys .data:0x27c70, 0x15fb8 bytes
    // afd.sys .data:0x57ce8, 0x187f8 bytes
    // afd.sys .data:0x27c70, 0x15fb8 bytes
    //
    _w82(sdk::unknown_ptr) g_afd_etw_logger_handle;
    
    // [g_AfdEtwTraceEnable]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27aa4, 0x15e38 bytes
    // afd.sys .data:0x27be4, 0x15fb8 bytes
    // afd.sys .data:0x57c64, 0x187f8 bytes
    // afd.sys .data:0x27be4, 0x15fb8 bytes
    //
    _w83(sdk::unknown_ptr) g_afd_etw_trace_enable;
    
    // [__IMPORT_DESCRIPTOR_TDI]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .idata:0x2d95c, 0x15e38 bytes
    // afd.sys .idata:0x2d994, 0x15fb8 bytes
    // afd.sys .idata:0x5d994, 0x187f8 bytes
    // afd.sys .idata:0x2d994, 0x15fb8 bytes
    //
    _w84(sdk::unknown_ptr) import_descriptor_tdi;
    
    // [IN6_IS_ADDR_LOOPBACK]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xbc88, 0x15e38 bytes
    // afd.sys .text:0x8684, 0x15fb8 bytes
    // afd.sys .text:0x1ac8c, 0x187f8 bytes
    // afd.sys .text:0x8684, 0x15fb8 bytes
    //
    _w85(sdk::function<uint8_t(const struct nt::in6_addr_t*)>*) in6_is_addr_loopback;
    
    // [IN6_IS_ADDR_UNSPECIFIED]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x151f8, 0x15e38 bytes
    // afd.sys .text:0xf394, 0x15fb8 bytes
    // afd.sys .text:0x3023c, 0x187f8 bytes
    // afd.sys .text:0xf394, 0x15fb8 bytes
    //
    _w86(sdk::function<uint8_t(const struct nt::in6_addr_t*)>*) in6_is_addr_unspecified;
    
    // [IN6_IS_ADDR_V4MAPPED]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x1522c, 0x15e38 bytes
    // afd.sys .text:0xf3d0, 0x15fb8 bytes
    // afd.sys .text:0x30278, 0x187f8 bytes
    // afd.sys .text:0xf3d0, 0x15fb8 bytes
    //
    _w87(sdk::function<uint8_t(const struct nt::in6_addr_t*)>*) in6_is_addr_v4mapped;
    
    // [IN6ADDR_ISUNSPECIFIED]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x151d4, 0x15e38 bytes
    // afd.sys .text:0xf36c, 0x15fb8 bytes
    // afd.sys .text:0x30214, 0x187f8 bytes
    // afd.sys .text:0xf36c, 0x15fb8 bytes
    //
    _w88(sdk::function<uint8_t(const struct ndis::sockaddr_in6_t*)>*) in6addr_isunspecified;
    
    // [IN6ADDR_SETSOCKADDR]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x16520, 0x15e38 bytes
    // afd.sys .text:0x10a24, 0x15fb8 bytes
    // afd.sys .text:0x37978, 0x187f8 bytes
    // afd.sys .text:0x10a24, 0x15fb8 bytes
    //
    _w89(sdk::function<void(struct ndis::sockaddr_in6_t*, const struct nt::in6_addr_t*, struct ndis::scope_id_t, uint16_t)>*) in6addr_setsockaddr;
    
    // [IN6ADDR_SETV4MAPPED]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3eb0, 0x15e38 bytes
    // afd.sys .text:0x3864, 0x15fb8 bytes
    // afd.sys .text:0x58a0, 0x187f8 bytes
    // afd.sys .text:0x3864, 0x15fb8 bytes
    //
    _w90(sdk::unknown_ptr) in6addr_setv4mapped;
    
    // [in6addr_v4mappedprefix]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e058, 0x15e38 bytes
    // afd.sys .rdata:0x1e588, 0x15fb8 bytes
    // afd.sys .rdata:0x4e648, 0x187f8 bytes
    // afd.sys .rdata:0x1e588, 0x15fb8 bytes
    //
    _w91(sdk::unknown_ptr) in6addr_v4mappedprefix;
    
    // [Ipv4UnicastAddressScope]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x3f4c, 0x15e38 bytes
    // afd.sys .text:0x3904, 0x15fb8 bytes
    // afd.sys .text:0x5940, 0x187f8 bytes
    // afd.sys .text:0x3904, 0x15fb8 bytes
    //
    _w92(sdk::function<enum ndis::scope_level_t(const uint8_t*)>*) ipv4_unicast_address_scope;
    
    // [Ipv6UnicastAddressScope]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xbc38, 0x15e38 bytes
    // afd.sys .text:0x8624, 0x15fb8 bytes
    // afd.sys .text:0x1ac2c, 0x187f8 bytes
    // afd.sys .text:0x8624, 0x15fb8 bytes
    //
    _w93(sdk::function<enum ndis::scope_level_t(const uint8_t*)>*) ipv6_unicast_address_scope;
    
    // [KnrNrpCompleteRpcAsync]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x302cc, 0x15e38 bytes
    // afd.sys PAGE:0x33f58, 0x15fb8 bytes
    // afd.sys PAGE:0x628b4, 0x187f8 bytes
    // afd.sys PAGE:0x33f58, 0x15fb8 bytes
    //
    _w94(sdk::unknown_ptr) knr_nrp_complete_rpc_async;
    
    // [KnrNrpCreateBinding]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x365a8, 0x15e38 bytes
    // afd.sys PAGE:0x3609c, 0x15fb8 bytes
    // afd.sys PAGE:0x63de4, 0x187f8 bytes
    // afd.sys PAGE:0x3609c, 0x15fb8 bytes
    //
    _w95(sdk::unknown_ptr) knr_nrp_create_binding;
    
    // [KnrNrpGetAddressInfoW]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x3018c, 0x15e38 bytes
    // afd.sys PAGE:0x33f7c, 0x15fb8 bytes
    // afd.sys PAGE:0x628d8, 0x187f8 bytes
    // afd.sys PAGE:0x33f7c, 0x15fb8 bytes
    //
    _w96(sdk::unknown_ptr) knr_nrp_get_address_info_w;
    
    // [KnrNrpGetNameInfoW]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x4587c, 0x15e38 bytes
    // afd.sys PAGE:0x488f0, 0x15fb8 bytes
    // afd.sys PAGE:0x75940, 0x187f8 bytes
    // afd.sys PAGE:0x488f0, 0x15fb8 bytes
    //
    _w97(sdk::unknown_ptr) knr_nrp_get_name_info_w;
    
    // [KnrNrpImpersonate]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x45a3c, 0x15e38 bytes
    // afd.sys PAGE:0x48ad0, 0x15fb8 bytes
    // afd.sys PAGE:0x75b20, 0x187f8 bytes
    // afd.sys PAGE:0x48ad0, 0x15fb8 bytes
    //
    _w98(sdk::unknown_ptr) knr_nrp_impersonate;
    
    // [KnrNrpStopImpersonating]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys PAGE:0x45ad8, 0x15e38 bytes
    // afd.sys PAGE:0x48b88, 0x15fb8 bytes
    // afd.sys PAGE:0x75bd8, 0x187f8 bytes
    // afd.sys PAGE:0x48b88, 0x15fb8 bytes
    //
    _w99(sdk::unknown_ptr) knr_nrp_stop_impersonating;
    
    // [NmrIsEqualNpiModuleId]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xb780, 0x15e38 bytes
    // afd.sys .text:0x7b6c, 0x15fb8 bytes
    // afd.sys .text:0x1a71c, 0x187f8 bytes
    // afd.sys .text:0x7b6c, 0x15fb8 bytes
    //
    _x00(sdk::unknown_ptr) nmr_is_equal_npi_module_id;
    
    // [NPI_MS_FLRDMA_MODULEID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de70, 0x15e38 bytes
    // afd.sys .rdata:0x1e3f0, 0x15fb8 bytes
    // afd.sys .rdata:0x4e658, 0x187f8 bytes
    // afd.sys .rdata:0x1e3f0, 0x15fb8 bytes
    //
    _x01(sdk::unknown_ptr) npi_ms_flrdma_moduleid;
    
    // [NPI_MS_IPV4_MODULEID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df08, 0x15e38 bytes
    // afd.sys .rdata:0x1e420, 0x15fb8 bytes
    // afd.sys .rdata:0x4e688, 0x187f8 bytes
    // afd.sys .rdata:0x1e420, 0x15fb8 bytes
    //
    _x02(sdk::unknown_ptr) npi_ms_ipv4_moduleid;
    
    // [NPI_MS_IPV6_MODULEID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1def0, 0x15e38 bytes
    // afd.sys .rdata:0x1e408, 0x15fb8 bytes
    // afd.sys .rdata:0x4e670, 0x187f8 bytes
    // afd.sys .rdata:0x1e408, 0x15fb8 bytes
    //
    _x03(sdk::unknown_ptr) npi_ms_ipv6_moduleid;
    
    // [NPI_MS_WSK_MODULEID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e4f0, 0x15e38 bytes
    // afd.sys .rdata:0x1e438, 0x15fb8 bytes
    // afd.sys .rdata:0x4e6a0, 0x187f8 bytes
    // afd.sys .rdata:0x1e438, 0x15fb8 bytes
    //
    _x04(sdk::unknown_ptr) npi_ms_wsk_moduleid;
    
    // [NPI_TRANSPORT_LAYER_ID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e508, 0x15e38 bytes
    // afd.sys .rdata:0x1e478, 0x15fb8 bytes
    // afd.sys .rdata:0x4e6e0, 0x187f8 bytes
    // afd.sys .rdata:0x1e478, 0x15fb8 bytes
    //
    _x05(sdk::unknown_ptr) npi_transport_layer_id;
    
    // [NPI_WSK_INTERFACE_ID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df88, 0x15e38 bytes
    // afd.sys .rdata:0x1e468, 0x15fb8 bytes
    // afd.sys .rdata:0x4e6d0, 0x187f8 bytes
    // afd.sys .rdata:0x1e468, 0x15fb8 bytes
    //
    _x06(sdk::unknown_ptr) npi_wsk_interface_id;
    
    // [NPI_WSK_RDMA_INTERFACE_ID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1ebe0, 0x15e38 bytes
    // afd.sys .rdata:0x1e488, 0x15fb8 bytes
    // afd.sys .rdata:0x4e6f0, 0x187f8 bytes
    // afd.sys .rdata:0x1e488, 0x15fb8 bytes
    //
    _x07(sdk::unknown_ptr) npi_wsk_rdma_interface_id;
    
    // [PplAddressPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x277a8, 0x15e38 bytes
    // afd.sys .data:0x278d8, 0x15fb8 bytes
    // afd.sys .data:0x57958, 0x187f8 bytes
    // afd.sys .data:0x278d8, 0x15fb8 bytes
    //
    _x08(sdk::unknown_ptr) ppl_address_pool;
    
    // [PplConnectionPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x278a8, 0x15e38 bytes
    // afd.sys .data:0x27960, 0x15fb8 bytes
    // afd.sys .data:0x579d8, 0x187f8 bytes
    // afd.sys .data:0x27960, 0x15fb8 bytes
    //
    _x09(sdk::unknown_ptr) ppl_connection_pool;
    
    // [PplEndpointPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x277a0, 0x15e38 bytes
    // afd.sys .data:0x278d0, 0x15fb8 bytes
    // afd.sys .data:0x579d0, 0x187f8 bytes
    // afd.sys .data:0x278d0, 0x15fb8 bytes
    //
    _x10(sdk::unknown_ptr) ppl_endpoint_pool;
    
    // [PplTditlEndpointPool]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .data:0x27798, 0x15e38 bytes
    // afd.sys .data:0x278c8, 0x15fb8 bytes
    // afd.sys .data:0x579c8, 0x187f8 bytes
    // afd.sys .data:0x278c8, 0x15fb8 bytes
    //
    _x11(sdk::unknown_ptr) ppl_tditl_endpoint_pool;
    
    // [rio_cq_enque]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa2e4, 0x15e38 bytes
    // afd.sys .text:0x1ca58, 0x15fb8 bytes
    // afd.sys .text:0x4bf18, 0x187f8 bytes
    // afd.sys .text:0x1ca58, 0x15fb8 bytes
    //
    _x12(sdk::unknown_ptr) rio_cq_enque;
    
    // [rio_rq_deque]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0xa340, 0x15e38 bytes
    // afd.sys .text:0x1cabc, 0x15fb8 bytes
    // afd.sys .text:0x4bf7c, 0x187f8 bytes
    // afd.sys .text:0x1cabc, 0x15fb8 bytes
    //
    _x13(sdk::unknown_ptr) rio_rq_deque;
    
    // [sockaddr_size]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1e030, 0x15e38 bytes
    // afd.sys .rdata:0x1e560, 0x15fb8 bytes
    // afd.sys .rdata:0x4e620, 0x187f8 bytes
    // afd.sys .rdata:0x1e560, 0x15fb8 bytes
    //
    _x14(sdk::unknown_ptr) sockaddr_size;
    
    // [SOCKADDR_SIZE]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .text:0x285c, 0x15e38 bytes
    // afd.sys .text:0x20d4, 0x15fb8 bytes
    // afd.sys .text:0x56d4, 0x187f8 bytes
    // afd.sys .text:0x20d4, 0x15fb8 bytes
    //
    _x15(sdk::unknown_ptr) sockaddr_size_;
    
    // [Symbol_FirstAddressArrivalEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df28, 0x15e38 bytes
    // afd.sys .rdata:0x1df80, 0x15fb8 bytes
    // afd.sys .rdata:0x4e2a0, 0x187f8 bytes
    // afd.sys .rdata:0x1df80, 0x15fb8 bytes
    //
    _x16(sdk::unknown_ptr) symbol_first_address_arrival_event;
    
    // [Symbol_LastAddressRemovalEvent]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df48, 0x15e38 bytes
    // afd.sys .rdata:0x1df90, 0x15fb8 bytes
    // afd.sys .rdata:0x4e2b0, 0x187f8 bytes
    // afd.sys .rdata:0x1df90, 0x15fb8 bytes
    //
    _x17(sdk::unknown_ptr) symbol_last_address_removal_event;
    
    // [Symbol_NetworkMgrTriggerProvider]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1df68, 0x15e38 bytes
    // afd.sys .rdata:0x1e368, 0x15fb8 bytes
    // afd.sys .rdata:0x4e5a0, 0x187f8 bytes
    // afd.sys .rdata:0x1e368, 0x15fb8 bytes
    //
    _x18(sdk::unknown_ptr) symbol_network_mgr_trigger_provider;
    
    // [WSKLIB_WSK_CLIENT_MODULEID]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1de88, 0x15e38 bytes
    // afd.sys .rdata:0x1e450, 0x15fb8 bytes
    // afd.sys .rdata:0x4e6b8, 0x187f8 bytes
    // afd.sys .rdata:0x1e450, 0x15fb8 bytes
    //
    _x19(sdk::unknown_ptr) wsklib_wsk_client_moduleid;
    
    // [ZeroIP6Address]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eb90, 0x15e38 bytes
    // afd.sys .rdata:0x1f7a8, 0x15fb8 bytes
    // afd.sys .rdata:0x4fa98, 0x187f8 bytes
    // afd.sys .rdata:0x1f7a8, 0x15fb8 bytes
    //
    _x20(sdk::unknown_ptr) zero_ip6_address;
    
    // [ZeroNodeAddress]
    // Ldr = [afd.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // afd.sys .rdata:0x1eba0, 0x15e38 bytes
    // afd.sys .rdata:0x1f7b8, 0x15fb8 bytes
    // afd.sys .rdata:0x4faa8, 0x187f8 bytes
    // afd.sys .rdata:0x1f7b8, 0x15fb8 bytes
    //
    _x21(sdk::unknown_ptr) zero_node_address;
};
#include "magic/api.end.hpp"
