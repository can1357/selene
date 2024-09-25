#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroypagingqueue_t.start.hpp"
namespace d3d::ddi
{
    // [struct D3DDDI_DESTROYPAGINGQUEUE]
    // => WDK 10 (NV)
    //
    struct destroypagingqueue_t      
    {                                
        // WDK 10                    
        //                           
        _m00 uint32_t h_paging_queue;  //{ +0x0000    } | .hPagingQueue
                                     
        SDK_NONVOL_PROPERTIES( "D3DDDI_DESTROYPAGINGQUEUE.$", 0x0, false, 0x544d0ab09e628a89 );               
        SDK_FIXED_SIZE( destroypagingqueue_t, 0x4 );               
    };                               
};
#include "magic/destroypagingqueue_t.end.hpp"
SDK_VERIFY( struct d3d::ddi::destroypagingqueue_t, 0x4 );
