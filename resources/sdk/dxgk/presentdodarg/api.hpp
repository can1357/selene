#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::presentdodarg
{
    // [SetPresentDodArg@PRESENTDODARG]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x185bf0, 0x60098 bytes
    // dxgkrnl.sys PAGE:0x2fa440, 0x762b0 bytes
    // dxgkrnl.sys PAGE:0x3bf178, 0x84380 bytes
    // dxgkrnl.sys PAGE:0x2fa1b0, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) set_present_dod_arg;
};
#include "magic/api.end.hpp"
