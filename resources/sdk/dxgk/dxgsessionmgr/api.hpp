#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsessionmgr
{
    // [FinishPnPTransition@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xf1310, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) finish_pn_p_transition;
    
    // [GetSessionData@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0xc0e74, 0x60098 bytes
    //
    _m1(sdk::unknown_ptr) get_session_data;
    
    // [AcquireConsoleSessionModeChangeLock@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x157ee0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd840, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15ad30, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) acquire_console_session_mode_change_lock;
    
    // [CheckPnPTransitionForSession@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17ffc4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2118f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1830d4, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) check_pn_p_transition_for_session;
    
    // [CleanCachedIddDisplayConfigRequest@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x298ec4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348178, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x298f64, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) clean_cached_idd_display_config_request;
    
    // [CompletePnPTransition@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1800a4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2119d4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1831b4, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) complete_pn_p_transition;
    
    // [IncreaseMonitorUniquenessAllSessions@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x176888, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x203ea4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16a86c, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) increase_monitor_uniqueness_all_sessions;
    
    // [ReferenceSessionCSRSSProcess@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x299644, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3489dc, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2996e4, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) reference_session_csrss_process;
    
    // [ReleaseConsoleSessionModeChangeLock@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x157eac, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1dd80c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x15acfc, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) release_console_session_mode_change_lock;
    
    // [??0DXGSESSIONMGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf107c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x17b2c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x208164, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17c178, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) construct_instance;
    
    // [CreateSession@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc118c, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x155208, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1c6744, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x158428, 0x762b0 bytes
    //
    _n0(sdk::unknown_ptr) create_session;
    
    // [CreateTtmDevice@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf11a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x176a38, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2041ac, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16aa84, 0x762b0 bytes
    //
    _n1(sdk::unknown_ptr) create_ttm_device;
    
    // [CreateTtmDeviceWorker@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf2370, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x182940, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2156f0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x185d50, 0x762b0 bytes
    //
    _n2(sdk::unknown_ptr) create_ttm_device_worker;
    
    // [??1DXGSESSIONMGR@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x181158, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x298c54, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x347dc4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x298cf4, 0x762b0 bytes
    //
    _n3(sdk::unknown_ptr) destroy_instance;
    
    // [DestroySession@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc10a0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x149938, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1e133c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x14cb28, 0x762b0 bytes
    //
    _n4(sdk::unknown_ptr) destroy_session;
    
    // [DestroyTtmDevice@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1812e0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x299088, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x348390, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299128, 0x762b0 bytes
    //
    _n5(sdk::unknown_ptr) destroy_ttm_device;
    
    // [DestroyTtmDeviceWorker@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1813b0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x299180, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3484c0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299220, 0x762b0 bytes
    //
    _n6(sdk::unknown_ptr) destroy_ttm_device_worker;
    
    // [FinishPnPTransitionOnSession@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1288, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x180140, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x211a70, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x183250, 0x762b0 bytes
    //
    _n7(sdk::unknown_ptr) finish_pn_p_transition_on_session;
    
    // [GetSessionDataForSpecifiedSession@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc0f50, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x107634, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1ac864, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x113664, 0x762b0 bytes
    //
    _n8(sdk::unknown_ptr) get_session_data_for_specified_session;
    
    // [IncreaseNumSessions@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1814bc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x299478, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3487b8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x299518, 0x762b0 bytes
    //
    _n9(sdk::unknown_ptr) increase_num_sessions;
    
    // [SetConsoleSession@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc0e94, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x1463b4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1d3530, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x1492c4, 0x762b0 bytes
    //
    _o0(sdk::unknown_ptr) set_console_session;
    
    // [StartPnPTransition@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xf1368, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x163388, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1f5228, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x16d978, 0x762b0 bytes
    //
    _o1(sdk::unknown_ptr) start_pn_p_transition;
    
    // [WaitForPnPTransitionDone@DXGSESSIONMGR]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0xc0dd8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xddea4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x166f0c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x12ef64, 0x762b0 bytes
    //
    _o2(sdk::unknown_ptr) wait_for_pn_p_transition_done;
};
#include "magic/api.end.hpp"
