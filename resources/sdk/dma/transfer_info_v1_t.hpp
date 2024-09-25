#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transfer_info_v1_t.start.hpp"
namespace dma
{
    // [struct _DMA_TRANSFER_INFO_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transfer_info_v1_t                      
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                         
        _m00 uint32_t map_register_count;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .MapRegisterCount
        _m01 uint32_t scatter_gather_element_count;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ScatterGatherElementCount
        _m02 uint32_t scatter_gather_list_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ScatterGatherListSize
                                                   
        SDK_NONVOL_PROPERTIES( "_DMA_TRANSFER_INFO_V1.$", 0xc, true, 0x688fdf34ae0d02 );                             
        SDK_FIXED_SIZE( transfer_info_v1_t, 0xc );                             
    };                                             
};
#include "magic/transfer_info_v1_t.end.hpp"
SDK_VERIFY( struct dma::transfer_info_v1_t, 0xc );
