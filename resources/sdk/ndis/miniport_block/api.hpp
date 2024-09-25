#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::miniport_block
{
    // [??1_NDIS_MINIPORT_BLOCK@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x6c0c0, 0x1d2c0 bytes
    // ndis.sys .text:0x63e88, 0x1e858 bytes
    // ndis.sys .text:0x6c960, 0x1d2c0 bytes
    //
    _m0(sdk::unknown_ptr) destroy_instance;
    
    // [??0_NDIS_MINIPORT_BLOCK@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys .text:0x13640, 0x1c8a8 bytes
    // ndis.sys .text:0x2ff70, 0x1d2c0 bytes
    // ndis.sys .text:0x301d4, 0x1e858 bytes
    // ndis.sys .text:0x31874, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
};
#include "magic/api.end.hpp"
