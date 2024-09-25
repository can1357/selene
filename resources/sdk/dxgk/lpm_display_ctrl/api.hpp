#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::lpm_display_ctrl
{
    // [CallDriver@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d0ec, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x26ff98, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2700f8, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) call_driver;
    
    // [EnableHighPrecisionBrightness@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d1dc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270330, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270490, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) enable_high_precision_brightness;
    
    // [GetCaps@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d2e4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270494, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2705f4, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_caps;
    
    // [HasRegisteredInternalDisplay@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24c48, 0x60098 bytes
    // dxgkrnl.sys .text:0x4473c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4492c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) has_registered_internal_display;
    
    // [Initialize@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d368, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270518, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270678, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
    
    // [LPMStart@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d570, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2709c8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270b28, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) lpm_start;
    
    // [LPMStop@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d5f8, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270a5c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270bbc, 0x762b0 bytes
    //
    _m6(sdk::unknown_ptr) lpm_stop;
    
    // [SetCurrentBrightnessLevel@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d688, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270afc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270c5c, 0x762b0 bytes
    //
    _m7(sdk::unknown_ptr) set_current_brightness_level;
    
    // [SetIlluminance@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d7fc, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270c9c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270dfc, 0x762b0 bytes
    //
    _m8(sdk::unknown_ptr) set_illuminance;
    
    // [Update@LPMDisplayCtrl]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x16d850, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x270cf8, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x270e58, 0x762b0 bytes
    //
    _m9(sdk::unknown_ptr) update;
};
#include "magic/api.end.hpp"
