#pragma once
#include <sdkgen/support_library.hpp>

namespace halp
{
    // [enum _HALP_DMA_ADAPTER_ALLOCATION_STATE]
    //  Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    enum class dma_adapter_allocation_state_t : int32_t
    {                                                  
        allocation_state_none =            0x0,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocate_channel =                 0x1,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocate_map_registers =           0x2,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocate_channel_remap_resources = 0x3,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocation_state_complete =        0x4,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
        allocation_state_max =             0x5,          // Windows 10 v2004, Windows 11, Windows 10 v20H2
    };                                                 
};
