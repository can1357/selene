#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgoverlay
{
    // [Reset@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x32a464, 0x84380 bytes
    //
    _m0(sdk::unknown_ptr) reset;
    
    // [Stop@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 11
    // dxgkrnl.sys PAGE:0x32a4e8, 0x84380 bytes
    //
    _m1(sdk::unknown_ptr) stop;
    
    // [Destroy@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16ef30, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2749f4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329960, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x274a2c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy;
    
    // [??1DXGOVERLAY@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16eefc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2749b8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329924, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2749f0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [FlipOverlay@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16f028, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x274b0c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329ad0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x274b44, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) flip_overlay;
    
    // [GetOverlayState@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16f2e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x274e4c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329e54, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x274e84, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) get_overlay_state;
    
    // [Initialize@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16f3a4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x274f2c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x329f90, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x274f64, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) initialize;
    
    // [UpdateOverlay@DXGOVERLAY]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16f6e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x275378, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x32a570, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2753b0, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) update_overlay;
};
#include "magic/api.end.hpp"
