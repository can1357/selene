#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_present_update
{
    // [GetTargetQpcTime@CFlipPresentUpdate]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1a9a0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x1b020, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) get_target_qpc_time;
    
    // [Complete@CFlipPresentUpdate]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bdf0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81760, 0x84380 bytes
    // dxgkrnl.sys .text:0x6bf80, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) complete;
    
    // [??1CFlipPresentUpdate@@UEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bd5c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x816d8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6beec, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Discard@CFlipPresentUpdate]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6be60, 0x762b0 bytes
    // dxgkrnl.sys .text:0x817d0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6bff0, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) discard;
    
    // [Pending@CFlipPresentUpdate]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bea0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81840, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c030, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) pending;
    
    // [SetFlipPropertySet@CFlipPresentUpdate]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bf7c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x81890, 0x84380 bytes
    // dxgkrnl.sys .text:0x6c10c, 0x762b0 bytes
    //
    _m5(sdk::unknown_ptr) set_flip_property_set;
};
#include "magic/api.end.hpp"
