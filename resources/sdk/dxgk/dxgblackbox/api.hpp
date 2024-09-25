#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgblackbox
{
    // [??0DXGBLACKBOX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17b29c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2082a4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17c14c, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1DXGBLACKBOX@@QEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6cf4, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff750, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b6d94, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Initialize@DXGBLACKBOX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x17a68c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x20b8f4, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x17b53c, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) initialize;
    
    // [Reserve@DXGBLACKBOX]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b6d1c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2ff778, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b6dbc, 0x762b0 bytes
    //
    _m3(sdk::unknown_ptr) reserve;
};
#include "magic/api.end.hpp"
