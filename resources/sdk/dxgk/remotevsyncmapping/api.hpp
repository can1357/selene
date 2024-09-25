#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::remotevsyncmapping
{
    // [AddMapping@REMOTEVSYNCMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4c660, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4c8b0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) add_mapping;
    
    // [RemoveMapping@REMOTEVSYNCMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4c9e8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4cc38, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) remove_mapping;
    
    // [TriggerRemoteVsync@REMOTEVSYNCMAPPING]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x4ca08, 0x762b0 bytes
    // dxgkrnl.sys .text:0x4cc58, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) trigger_remote_vsync;
};
#include "magic/api.end.hpp"
