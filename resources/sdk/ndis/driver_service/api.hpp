#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::driver_service
{
    // [Close@DriverService]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x134e54, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) close;
    
    // [Dereference@DriverService]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x134e84, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) dereference;
    
    // [??1DriverService@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1340a4, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [Open@DriverService]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x134f20, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) open;
    
    // [Reference@DriverService]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x135068, 0x1e858 bytes
    //
    _m4(sdk::unknown_ptr) reference;
};
#include "magic/api.end.hpp"
