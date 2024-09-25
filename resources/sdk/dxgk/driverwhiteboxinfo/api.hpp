#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::driverwhiteboxinfo
{
    // [CollectIntrusiveDriverData@DRIVERWHITEBOXINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b50c0, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2eeae0, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b5160, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) collect_intrusive_driver_data;
    
    // [CollectNonIntrusiveDriverData@DRIVERWHITEBOXINFO]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x2b529c, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x2eed20, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2b533c, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) collect_non_intrusive_driver_data;
};
#include "magic/api.end.hpp"
