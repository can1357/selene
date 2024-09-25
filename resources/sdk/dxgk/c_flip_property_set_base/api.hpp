#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::c_flip_property_set_base
{
    // [FindBlobProperty@CFlipPropertySetBase]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6bc40, 0x762b0 bytes
    // dxgkrnl.sys .text:0x6bdd0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) find_blob_property;
    
    // [??1CFlipPropertySetBase@@MEAA@XZ]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x6923c, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7ebfc, 0x84380 bytes
    // dxgkrnl.sys .text:0x693cc, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [Release@CFlipPropertySetBase]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x65e30, 0x762b0 bytes
    // dxgkrnl.sys .text:0x7a0f8, 0x84380 bytes
    // dxgkrnl.sys .text:0x65fc0, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
