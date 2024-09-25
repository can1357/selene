#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_resource
{
    // [??0CFlipResource@@QEAA@_KPEAVCFlipPropertySet@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ade8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7eca8, 0x84380 bytes
    // dxgkrnl.sys .text:0x6af78, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1CFlipResource@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6ae20, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ece0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6afb0, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Release@CFlipResource]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x690a8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7bee8, 0x84380 bytes
    // dxgkrnl.sys .text:0x69238, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
