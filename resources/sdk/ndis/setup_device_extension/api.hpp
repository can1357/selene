#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::setup_device_extension
{
    // [??0NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xe3334, 0x1c8a8 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1NDIS_SETUP_DEVICE_EXTENSION@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 10 v1607
    // ndis.sys PAGE:0xe33dc, 0x1c8a8 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
