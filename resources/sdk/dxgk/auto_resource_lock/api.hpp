#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace dxgk::auto_resource_lock
{
    // [??0AutoResourceLock@@QEAA@PEAU_ERESOURCE@@@Z]
    // Ldr = [dxgkrnl.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    // dxgkrnl.sys .text:0x24c18, 0x60098 bytes
    // dxgkrnl.sys .text:0x446fc, 0x762b0 bytes
    // dxgkrnl.sys .text:0x448ec, 0x762b0 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
