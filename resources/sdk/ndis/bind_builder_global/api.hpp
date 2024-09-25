#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::bind_builder_global
{
    // [??0NdisBindBuilderGlobal@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x10d43c, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1NdisBindBuilderGlobal@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    // ndis.sys PAGE:0x1235ec, 0x1d2c0 bytes
    // ndis.sys PAGE:0x12e884, 0x1e858 bytes
    // ndis.sys PAGE:0x123aec, 0x1d2c0 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
