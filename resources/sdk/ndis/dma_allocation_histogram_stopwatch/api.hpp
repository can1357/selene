#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::dma_allocation_histogram_stopwatch
{
    // [??0NdisDmaAllocationHistogramStopwatch@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x121764, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1NdisDmaAllocationHistogramStopwatch@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1217a4, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
    
    // [SetMacAddress@NdisDmaAllocationHistogramStopwatch]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys PAGE:0x1218d4, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) set_mac_address;
};
#include "magic/api.end.hpp"
