#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::auto_pnppower_lock
{
    // [Acquire@AUTO_PNPPOWER_LOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2e8d4, 0x60098 bytes
    // dxgkrnl.sys .text:0x1d9b4, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21bb8, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f318, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) acquire;
    
    // [??0AUTO_PNPPOWER_LOCK@@QEAA@PEAU_COMMON_PNP_CONTEXT@@_N11@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2e8ac, 0x60098 bytes
    // dxgkrnl.sys .text:0x1d984, 0x762b0 bytes
    // dxgkrnl.sys .text:0x21b88, 0x84380 bytes
    // dxgkrnl.sys .text:0x1f2e8, 0x762b0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [Release@AUTO_PNPPOWER_LOCK]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // dxgkrnl.sys .text:0x2ea64, 0x60098 bytes
    // dxgkrnl.sys .text:0x1d8f0, 0x762b0 bytes
    // dxgkrnl.sys .text:0x23418, 0x84380 bytes
    // dxgkrnl.sys .text:0x1df70, 0x762b0 bytes
    //
    _m2(sdk::unknown_ptr) release;
};
#include "magic/api.end.hpp"
