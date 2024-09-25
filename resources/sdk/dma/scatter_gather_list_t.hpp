#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/scatter_gather_element_t.hpp"

#include "magic/scatter_gather_list_t.start.hpp"
namespace dma
{
    // [struct _DMA_SCATTER_GATHER_LIST]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scatter_gather_list_t                                                
    {                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 uint32_t                                        number_of_elements;  //{ +0x0000    +0x0000    +0x0000    } | .NumberOfElements
        _m01 sdk::array<struct nt::scatter_gather_element_t> elements;            //{ +0x0010    +0x0010    +0x0010    } | .Elements
                                                                                
        SDK_MAGIC_PROPERTIES( "_DMA_SCATTER_GATHER_LIST.$", 0x10, true, 0x8fc8cf0f9c9b35b8 );                   
        SDK_FIXED_SIZE( scatter_gather_list_t, 0x10 );                          
    };                                                                          
};
#include "magic/scatter_gather_list_t.end.hpp"
SDK_VERIFY( struct dma::scatter_gather_list_t, 0x10 );
