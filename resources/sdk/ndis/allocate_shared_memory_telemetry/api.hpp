#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::allocate_shared_memory_telemetry
{
    // [??0NdisAllocateSharedMemoryTelemetry@@QEAA@_NPEBU_NDIS_SHARED_MEMORY_PARAMETERS@@H@Z]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xc9e08, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) construct_instance;
    
    // [??1NdisAllocateSharedMemoryTelemetry@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xca090, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) destroy_instance;
};
#include "magic/api.end.hpp"
