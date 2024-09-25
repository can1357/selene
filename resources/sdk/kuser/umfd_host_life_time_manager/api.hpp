#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace kuser::umfd_host_life_time_manager
{
    // [AddInitialFonts@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x117760, 0x1596d bytes
    // win32kfull.sys .text:0x668e8, 0x1659e bytes
    // win32kfull.sys .text:0x118690, 0x1596d bytes
    //
    _m0(sdk::unknown_ptr) add_initial_fonts;
    
    // [GetSessionTextStackStatus@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x672c4, 0x1596d bytes
    // win32kfull.sys .text:0x6d5b4, 0x1659e bytes
    // win32kfull.sys .text:0x67e34, 0x1596d bytes
    //
    _m1(sdk::unknown_ptr) get_session_text_stack_status;
    
    // [OnHostReady@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x128224, 0x1596d bytes
    // win32kfull.sys .text:0x117a94, 0x1659e bytes
    // win32kfull.sys .text:0x129164, 0x1596d bytes
    //
    _m2(sdk::unknown_ptr) on_host_ready;
    
    // [QueueTryResurrectPffApc@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c19ec, 0x1596d bytes
    // win32kfull.sys .text:0x2c3228, 0x1659e bytes
    // win32kfull.sys .text:0x2c195c, 0x1596d bytes
    //
    _m3(sdk::unknown_ptr) queue_try_resurrect_pff_apc;
    
    // [s_CsrssAddInitialFontsThread@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33c840, 0x1596d bytes
    // win32kfull.sys .data:0x33aba0, 0x1659e bytes
    // win32kfull.sys .data:0x33c800, 0x1596d bytes
    //
    _m4(sdk::unknown_ptr) s_csrss_add_initial_fonts_thread;
    
    // [s_InitialFontsAddedEvent@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33a9b8, 0x1596d bytes
    // win32kfull.sys .data:0x338c00, 0x1659e bytes
    // win32kfull.sys .data:0x33aa10, 0x1596d bytes
    //
    _m5(sdk::unknown_ptr) s_initial_fonts_added_event;
    
    // [s_SessionRasterizerInitialized@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33a9c0, 0x1596d bytes
    // win32kfull.sys .data:0x338c08, 0x1659e bytes
    // win32kfull.sys .data:0x33a9f8, 0x1596d bytes
    //
    _m6(sdk::unknown_ptr) s_session_rasterizer_initialized;
    
    // [s_SessionRasterizerInitializedEvent@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33a9e0, 0x1596d bytes
    // win32kfull.sys .data:0x338bf0, 0x1659e bytes
    // win32kfull.sys .data:0x33aa00, 0x1596d bytes
    //
    _m7(sdk::unknown_ptr) s_session_rasterizer_initialized_event;
    
    // [s_SessionRasterizerOnHostReadyEvent@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x33a9c8, 0x1596d bytes
    // win32kfull.sys .data:0x338be8, 0x1659e bytes
    // win32kfull.sys .data:0x33aa08, 0x1596d bytes
    //
    _m8(sdk::unknown_ptr) s_session_rasterizer_on_host_ready_event;
    
    // [s_UmfdHostResurrectionThread@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3417d0, 0x1596d bytes
    // win32kfull.sys .data:0x33eb50, 0x1659e bytes
    // win32kfull.sys .data:0x341790, 0x1596d bytes
    //
    _m9(sdk::unknown_ptr) s_umfd_host_resurrection_thread;
    
    // [SessionUninitialize@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x12433c, 0x1596d bytes
    // win32kfull.sys .text:0x113a2c, 0x1659e bytes
    // win32kfull.sys .text:0x12527c, 0x1596d bytes
    //
    _n0(sdk::unknown_ptr) session_uninitialize;
    
    // [TerminateUmfdHostRetainHandle@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x10ae20, 0x1596d bytes
    // win32kfull.sys .text:0x68748, 0x1659e bytes
    // win32kfull.sys .text:0x10bd50, 0x1596d bytes
    //
    _n1(sdk::unknown_ptr) terminate_umfd_host_retain_handle;
    
    // [TimeoutMS@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // win32kfull.sys .rdata:0x2f18ec, 0x13864 bytes
    // win32kfull.sys .rdata:0x2e559c, 0x1596d bytes
    // win32kfull.sys .rdata:0x2e5594, 0x1596d bytes
    //
    _n2(sdk::unknown_ptr) timeout_ms;
    
    // [TryResurrectHff@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c1a90, 0x1596d bytes
    // win32kfull.sys .text:0x2c32cc, 0x1659e bytes
    // win32kfull.sys .text:0x2c1a00, 0x1596d bytes
    //
    _n3(sdk::unknown_ptr) try_resurrect_hff;
    
    // [TryResurrectPffApcKernelRoutine@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8050, 0x1596d bytes
    // win32kfull.sys .text:0x10b590, 0x1659e bytes
    // win32kfull.sys .text:0x1e7eb0, 0x1596d bytes
    //
    _n4(sdk::unknown_ptr) try_resurrect_pff_apc_kernel_routine;
    
    // [TryResurrectPffApcRoutine@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c1c20, 0x1596d bytes
    // win32kfull.sys .text:0x2c3450, 0x1659e bytes
    // win32kfull.sys .text:0x2c1b90, 0x1596d bytes
    //
    _n5(sdk::unknown_ptr) try_resurrect_pff_apc_routine;
    
    // [TryResurrectPffApcRunDownRoutine@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x1e8050, 0x1596d bytes
    // win32kfull.sys .text:0x10b590, 0x1659e bytes
    // win32kfull.sys .text:0x1e7eb0, 0x1596d bytes
    //
    _n6(sdk::unknown_ptr) try_resurrect_pff_apc_run_down_routine;
    
    // [TryResurrectUmfdAllocations@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2c1d48, 0x1596d bytes
    // win32kfull.sys .text:0x2c3578, 0x1659e bytes
    // win32kfull.sys .text:0x2c1cb8, 0x1596d bytes
    //
    _n7(sdk::unknown_ptr) try_resurrect_umfd_allocations;
    
    // [WaitForSessionRasterizerInitialization@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x67260, 0x1596d bytes
    // win32kfull.sys .text:0x6d550, 0x1659e bytes
    // win32kfull.sys .text:0x67dd0, 0x1596d bytes
    //
    _n8(sdk::unknown_ptr) wait_for_session_rasterizer_initialization;
    
    // [EnsureUmfdHost@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bac6c, 0x13864 bytes
    // win32kfull.sys .text:0x3d454, 0x1596d bytes
    // win32kfull.sys .text:0x6d460, 0x1659e bytes
    // win32kfull.sys .text:0x3d864, 0x1596d bytes
    //
    _n9(sdk::unknown_ptr) ensure_umfd_host;
    
    // [InitializeUmfdAndRegisterHost@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2badd8, 0x13864 bytes
    // win32kfull.sys .text:0x10aa38, 0x1596d bytes
    // win32kfull.sys .text:0x68a00, 0x1659e bytes
    // win32kfull.sys .text:0x10b968, 0x1596d bytes
    //
    _o0(sdk::unknown_ptr) initialize_umfd_and_register_host;
    
    // [IsCurrentProcessUmfdHost@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bae98, 0x13864 bytes
    // win32kfull.sys .text:0x298ac, 0x1596d bytes
    // win32kfull.sys .text:0x6dac0, 0x1659e bytes
    // win32kfull.sys .text:0x29cbc, 0x1596d bytes
    //
    _o1(sdk::unknown_ptr) is_current_process_umfd_host;
    
    // [IsCurrentProcessUmfdHostNoLock@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x100b94, 0x13864 bytes
    // win32kfull.sys .text:0x3eed8, 0x1596d bytes
    // win32kfull.sys .text:0x6d638, 0x1659e bytes
    // win32kfull.sys .text:0x3f2e8, 0x1596d bytes
    //
    _o2(sdk::unknown_ptr) is_current_process_umfd_host_no_lock;
    
    // [MmMapViewOfSection@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2baed0, 0x13864 bytes
    // win32kfull.sys .text:0x3e328, 0x1596d bytes
    // win32kfull.sys .text:0x6c954, 0x1659e bytes
    // win32kfull.sys .text:0x3e738, 0x1596d bytes
    //
    _o3(sdk::unknown_ptr) mm_map_view_of_section;
    
    // [MmUnmapViewOfSection@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2baf8c, 0x13864 bytes
    // win32kfull.sys .text:0x3d500, 0x1596d bytes
    // win32kfull.sys .text:0x6ca30, 0x1659e bytes
    // win32kfull.sys .text:0x3d910, 0x1596d bytes
    //
    _o4(sdk::unknown_ptr) mm_unmap_view_of_section;
    
    // [ReleaseUmfdFileviewWithNoLock@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2baff4, 0x13864 bytes
    // win32kfull.sys .text:0x10abbc, 0x1596d bytes
    // win32kfull.sys .text:0x68b84, 0x1659e bytes
    // win32kfull.sys .text:0x10baec, 0x1596d bytes
    //
    _o5(sdk::unknown_ptr) release_umfd_fileview_with_no_lock;
    
    // [s_LaunchLock@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32ce28, 0x13864 bytes
    // win32kfull.sys .data:0x33c350, 0x1596d bytes
    // win32kfull.sys .data:0x33a6f0, 0x1659e bytes
    // win32kfull.sys .data:0x33c330, 0x1596d bytes
    //
    _o6(sdk::unknown_ptr) s_launch_lock;
    
    // [s_Launched@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3310d0, 0x13864 bytes
    // win32kfull.sys .data:0x33a9e8, 0x1596d bytes
    // win32kfull.sys .data:0x338bf8, 0x1659e bytes
    // win32kfull.sys .data:0x33aa20, 0x1596d bytes
    //
    _o7(sdk::unknown_ptr) s_launched;
    
    // [s_Ready@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x329258, 0x13864 bytes
    // win32kfull.sys .data:0x33a9d0, 0x1596d bytes
    // win32kfull.sys .data:0x338c09, 0x1659e bytes
    // win32kfull.sys .data:0x33aa21, 0x1596d bytes
    //
    _o8(sdk::unknown_ptr) s_ready;
    
    // [s_ReadyLock@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x32cf70, 0x13864 bytes
    // win32kfull.sys .data:0x33c348, 0x1596d bytes
    // win32kfull.sys .data:0x33a6e8, 0x1659e bytes
    // win32kfull.sys .data:0x33c328, 0x1596d bytes
    //
    _o9(sdk::unknown_ptr) s_ready_lock;
    
    // [s_UmfdHostGenerationId@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3347b0, 0x13864 bytes
    // win32kfull.sys .data:0x33a9a8, 0x1596d bytes
    // win32kfull.sys .data:0x338bd8, 0x1659e bytes
    // win32kfull.sys .data:0x33a9e8, 0x1596d bytes
    //
    _p0(sdk::unknown_ptr) s_umfd_host_generation_id;
    
    // [s_UmfdHostProcess@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x3310c8, 0x13864 bytes
    // win32kfull.sys .data:0x33a9a0, 0x1596d bytes
    // win32kfull.sys .data:0x338bd0, 0x1659e bytes
    // win32kfull.sys .data:0x33a9e0, 0x1596d bytes
    //
    _p1(sdk::unknown_ptr) s_umfd_host_process;
    
    // [s_WinlogonCallbackEvent@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .data:0x328ac0, 0x13864 bytes
    // win32kfull.sys .data:0x33a9d8, 0x1596d bytes
    // win32kfull.sys .data:0x338c10, 0x1659e bytes
    // win32kfull.sys .data:0x33aa18, 0x1596d bytes
    //
    _p2(sdk::unknown_ptr) s_winlogon_callback_event;
    
    // [SessionInitialize@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x11a4f4, 0x13864 bytes
    // win32kfull.sys .text:0x10aef8, 0x1596d bytes
    // win32kfull.sys .text:0x67fc4, 0x1659e bytes
    // win32kfull.sys .text:0x10be28, 0x1596d bytes
    //
    _p3(sdk::unknown_ptr) session_initialize;
    
    // [TerminateUmfdHost@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb02c, 0x13864 bytes
    // win32kfull.sys .text:0x10a8a0, 0x1596d bytes
    // win32kfull.sys .text:0x68820, 0x1659e bytes
    // win32kfull.sys .text:0x10b7d0, 0x1596d bytes
    //
    _p4(sdk::unknown_ptr) terminate_umfd_host;
    
    // [UninitializeProcess@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb0bc, 0x13864 bytes
    // win32kfull.sys .text:0x10a168, 0x1596d bytes
    // win32kfull.sys .text:0x684ac, 0x1659e bytes
    // win32kfull.sys .text:0x10b098, 0x1596d bytes
    //
    _p5(sdk::unknown_ptr) uninitialize_process;
    
    // [UninitializeThread@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb1c0, 0x13864 bytes
    // win32kfull.sys .text:0x10ac28, 0x1596d bytes
    // win32kfull.sys .text:0x69458, 0x1659e bytes
    // win32kfull.sys .text:0x10bb58, 0x1596d bytes
    //
    _p6(sdk::unknown_ptr) uninitialize_thread;
    
    // [UnreferenceUmfdHostWithNoLock@UmfdHostLifeTimeManager]
    // Ldr = [win32kfull.sys, win32kbase.sys, win32k.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // win32kfull.sys .text:0x2bb27c, 0x13864 bytes
    // win32kfull.sys .text:0x10adec, 0x1596d bytes
    // win32kfull.sys .text:0x68bd0, 0x1659e bytes
    // win32kfull.sys .text:0x10bd1c, 0x1596d bytes
    //
    _p7(sdk::unknown_ptr) unreference_umfd_host_with_no_lock;
};
#include "magic/api.end.hpp"
