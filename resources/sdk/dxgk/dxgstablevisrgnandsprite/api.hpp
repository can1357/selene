#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::dxgstablevisrgnandsprite
{
    // [vLock@DXGSTABLEVISRGNANDSPRITE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607
    // dxgkrnl.sys PAGE:0x1487a0, 0x60098 bytes
    //
    _m0(sdk::unknown_ptr) v_lock;
    
    // [vUnlock@DXGSTABLEVISRGNANDSPRITE]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys PAGE:0x14874c, 0x60098 bytes
    // dxgkrnl.sys .text:0x24458, 0x762b0 bytes
    // dxgkrnl.sys .text:0x2c334, 0x84380 bytes
    // dxgkrnl.sys .text:0x250e8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) v_unlock;
};
#include "magic/api.end.hpp"
