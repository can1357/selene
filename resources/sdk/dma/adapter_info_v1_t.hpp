#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/adapter_info_v1_t.start.hpp"
namespace dma
{
    // [struct _DMA_ADAPTER_INFO_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct adapter_info_v1_t                     
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                       
        _m00 uint32_t read_dma_counter_available;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ReadDmaCounterAvailable
        _m01 uint32_t scatter_gather_limit;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ScatterGatherLimit
        _m02 uint32_t dma_address_width;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .DmaAddressWidth
        _m03 uint32_t flags;                       //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .Flags
        _m04 uint32_t minimum_transfer_unit;       //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .MinimumTransferUnit
                                                 
        SDK_NONVOL_PROPERTIES( "_DMA_ADAPTER_INFO_V1.$", 0x14, true, 0xd81b0d39a1c6d0e7 );                           
        SDK_FIXED_SIZE( adapter_info_v1_t, 0x14 );                           
    };                                           
};
#include "magic/adapter_info_v1_t.end.hpp"
SDK_VERIFY( struct dma::adapter_info_v1_t, 0x14 );
