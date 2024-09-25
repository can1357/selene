#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_adapter_collection
{
    // [InternalDiscard@CAdapterCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xcb00, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14c58, 0x84380 bytes
    // dxgkrnl.sys .text:0xcf90, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) internal_discard;
    
    // [PopulateFromInfo@CAdapterCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xc838, 0x762b0 bytes
    // dxgkrnl.sys .text:0x14ddc, 0x84380 bytes
    // dxgkrnl.sys .text:0xccc8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) populate_from_info;
    
    // [UpdateCollection@CAdapterCollection]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0xd21c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x13bc0, 0x84380 bytes
    // dxgkrnl.sys .text:0xd6ac, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) update_collection;
};
#include "magic/api.end.hpp"
