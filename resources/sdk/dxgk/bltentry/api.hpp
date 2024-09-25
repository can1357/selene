#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::bltentry
{
    // [ReleaseRenderingDoneEvent@BLTENTRY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x3bed00, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) release_rendering_done_event;
    
    // [Cleanup@BLTENTRY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2f79f8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc210, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f7768, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) cleanup;
    
    // [Blt@BLTENTRY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1847d0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f7934, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bc11c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f76a4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) blt;
    
    // [??0BLTENTRY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc000, 0x60098 bytes
    // dxgkrnl.sys .text:0x19e80, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1ee90, 0x84380 bytes
    // dxgkrnl.sys .text:0x1a5c0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) construct_instance;
    
    // [??1BLTENTRY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x27560, 0x60098 bytes
    // dxgkrnl.sys .text:0x5c150, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6caf0, 0x84380 bytes
    // dxgkrnl.sys .text:0x5c2e0, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) destroy_instance;
    
    // [IndirectBlt@BLTENTRY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x184e38, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2f87b0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bd17c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f8520, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) indirect_blt;
    
    // [ReleasePresentDoneEvent@BLTENTRY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x185a58, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa0d0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3becb4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2f9e40, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) release_present_done_event;
    
    // [SetupPresentParameters@BLTENTRY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x1861a8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa9fc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bf870, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fa76c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) setup_present_parameters;
};
#include "magic/api.end.hpp"
