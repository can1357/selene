#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_resource_state
{
    // [CancelPendingUpdates@CFlipResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x1abd0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x20660, 0x84380 bytes
    // dxgkrnl.sys .text:0x1b250, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) cancel_pending_updates;
    
    // [CommitPendingUpdates@CFlipResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x69980, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ef90, 0x84380 bytes
    // dxgkrnl.sys .text:0x69b10, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) commit_pending_updates;
    
    // [??1CFlipResourceState@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6934c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ed34, 0x84380 bytes
    // dxgkrnl.sys .text:0x694dc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Remarshal@CFlipResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a870, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f270, 0x84380 bytes
    // dxgkrnl.sys .text:0x6aa00, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) remarshal;
    
    // [Remove@CFlipResourceState]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6a8e0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7f2a0, 0x84380 bytes
    // dxgkrnl.sys .text:0x6aa70, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) remove;
};
#include "magic/api.end.hpp"
