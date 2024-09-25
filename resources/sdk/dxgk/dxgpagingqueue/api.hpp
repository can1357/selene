#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgpagingqueue
{
    // [RemoveReference@DXGPAGINGQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys .text:0x8048, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) remove_reference;
    
    // [ReleaseReference@DXGPAGINGQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x23cb4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2b9a8, 0x84380 bytes
    // dxgkrnl.sys .text:0x24950, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) release_reference;
    
    // [DestroyCoreState@DXGPAGINGQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91004, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe39dc, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b289c, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda600, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) destroy_core_state;
    
    // [??1DXGPAGINGQUEUE@@IEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x91240, 0x60098 bytes
    // dxgkrnl.sys PAGE:0xe3978, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b2760, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xda59c, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@DXGPAGINGQUEUE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x910ac, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x11807c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x1b1410, 0x84380 bytes
    // dxgkrnl.sys PAGE:0xef450, 0x762b0 bytes
    //
    _m4(sdk::unknown_ptr) initialize;
};
#include "magic/api.end.hpp"
