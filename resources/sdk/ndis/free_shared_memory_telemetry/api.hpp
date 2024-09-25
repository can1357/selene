#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/api.start.hpp"
namespace ndis::free_shared_memory_telemetry
{
    // [AggregateEvent@NdisFreeSharedMemoryTelemetry]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xca26c, 0x1e858 bytes
    //
    _m0(sdk::unknown_ptr) aggregate_event;
    
    // [??0NdisFreeSharedMemoryTelemetry@@QEAA@PEBU_NDIS_SHARED_MEMORY_BLOCK@@@Z]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xc9f30, 0x1e858 bytes
    //
    _m1(sdk::unknown_ptr) construct_instance;
    
    // [??1NdisFreeSharedMemoryTelemetry@@QEAA@XZ]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xca1a0, 0x1e858 bytes
    //
    _m2(sdk::unknown_ptr) destroy_instance;
    
    // [WriteEvent@NdisFreeSharedMemoryTelemetry]
    // Ldr = [ndis.sys]
    // => Windows 11
    // ndis.sys .text:0xca43c, 0x1e858 bytes
    //
    _m3(sdk::unknown_ptr) write_event;
};
#include "magic/api.end.hpp"
