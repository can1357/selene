#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgsyncobjectca
{
    // [Destroy@DXGSYNCOBJECTCA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x177f20, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28ac88, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x33fcd0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28ad08, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) destroy;
    
    // [FindAdapterObject@DXGSYNCOBJECTCA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x258b4, 0x60098 bytes
    // dxgkrnl.sys .text:0x464b8, 0x762b0 bytes
    // dxgkrnl.sys .text:0x599a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x466a8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) find_adapter_object;
    
    // [GetDxgAdapterSyncObject@DXGSYNCOBJECTCA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x177fb4, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28b3c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x340500, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b440, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) get_dxg_adapter_sync_object;
    
    // [Initialize@DXGSYNCOBJECTCA]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x178080, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x28b690, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3407f8, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x28b710, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
