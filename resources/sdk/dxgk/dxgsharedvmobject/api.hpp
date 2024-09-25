#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsharedvmobject
{
    // [AddReference@DXGSHAREDVMOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2329f0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x361f44, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x232b20, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_reference;
    
    // [??1DXGSHAREDVMOBJECT@@AEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x3df10, 0x762b0 bytes
    // dxgkrnl.sys .text:0x5cb54, 0x84380 bytes
    // dxgkrnl.sys .text:0x3e100, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [ReleaseReference@DXGSHAREDVMOBJECT]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x235acc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3661e8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x235bfc, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release_reference;
};
#include "magic/api.end.hpp"
