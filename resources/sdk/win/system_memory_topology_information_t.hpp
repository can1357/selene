#pragma once
#include <sdkgen/support_library.hpp>
#include "physical_channel_run_t.hpp"

#include "magic/system_memory_topology_information_t.start.hpp"
namespace win
{
    // [struct _SYSTEM_MEMORY_TOPOLOGY_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_memory_topology_information_t
    {                                          
        using run_t = sdk::array<struct win::physical_channel_run_t, 1>;                   
                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t number_of_runs;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfRuns
        _m01 uint32_t number_of_nodes;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfNodes
        _m02 uint32_t number_of_channels;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfChannels
        _m03 run_t    run;                       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Run
                                               
        SDK_MAGIC_PROPERTIES( "_SYSTEM_MEMORY_TOPOLOGY_INFORMATION.$", 0x30, true, 0x8db05b693ceffdc2 );                   
        SDK_FIXED_SIZE( system_memory_topology_information_t, 0x30 );                   
    };                                         
};
#include "magic/system_memory_topology_information_t.end.hpp"
SDK_VERIFY( struct win::system_memory_topology_information_t, 0x30 );
