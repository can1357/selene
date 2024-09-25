#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transfer_info_v2_t.start.hpp"
namespace dma
{
    // [struct _DMA_TRANSFER_INFO_V2]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transfer_info_v2_t                      
    {                                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t map_register_count;            //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MapRegisterCount
        _m01 uint32_t scatter_gather_element_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ScatterGatherElementCount
        _m02 uint32_t scatter_gather_list_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ScatterGatherListSize
        _m03 uint32_t logical_page_count;            //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .LogicalPageCount
                                                   
        SDK_NONVOL_PROPERTIES( "_DMA_TRANSFER_INFO_V2.$", 0x10, true, 0xa341d8553212d4a0 );                             
        SDK_FIXED_SIZE( transfer_info_v2_t, 0x10 );                             
    };                                             
};
#include "magic/transfer_info_v2_t.end.hpp"
SDK_VERIFY( struct dma::transfer_info_v2_t, 0x10 );
