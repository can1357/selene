#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxghwqueue
{
    // [EnsureKmSubmissionProgressSyncObject@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x21f516, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) ensure_km_submission_progress_sync_object;
    
    // [ReportState@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x310a98, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) report_state;
    
    // [DestroyCoreState@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2677cc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30ea90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x26792c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_core_state;
    
    // [??1DXGHWQUEUE@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x267010, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30e1d0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x267170, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x268254, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30f690, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2683b4, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [InitializeOnHost@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2687d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x30fe10, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x268930, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) initialize_on_host;
    
    // [ReleaseReference@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23e18, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2bb58, 0x84380 bytes
    // dxgkrnl.sys .text:0x24ab4, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release_reference;
    
    // [SubmitCommand@DXGHWQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x26934c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x21f6ca, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2694ac, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) submit_command;
};
#include "magic/api.end.hpp"
