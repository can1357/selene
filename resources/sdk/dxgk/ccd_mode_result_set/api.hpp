#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::ccd_mode_result_set
{
    // [AddMode@CCD_MODE_RESULT_SET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e5430, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9c24, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e51a0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_mode;
    
    // [??0CCD_MODE_RESULT_SET@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e53dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3a9bd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e514c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1CCD_MODE_RESULT_SET@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x245c8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c138, 0x84380 bytes
    // dxgkrnl.sys .text:0x2526c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [PopLastMode@CCD_MODE_RESULT_SET]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2e5fd4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3aa718, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2e5d44, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) pop_last_mode;
};
#include "magic/api.end.hpp"
