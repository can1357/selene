#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/nbl_queue_t.start.hpp"
namespace ndis
{
    struct net_buffer_list_t;

    // [struct _NBL_QUEUE]
    // => Windows 10 v1607
    //
    struct nbl_queue_t                              
    {                                               
        // Windows 10 v1607                         
        //                                          
        _m00 struct ndis::net_buffer_list_t*  first;  //{ +0x0000    } | .First
        _m01 struct ndis::net_buffer_list_t** last;   //{ +0x0008    } | .Last
                                                    
        SDK_MAGIC_PROPERTIES( "_NBL_QUEUE.$", 0x0, false, 0x2734267e399398f4 );      
        SDK_FIXED_SIZE( nbl_queue_t, 0x10 );        
    };                                              
};
#include "magic/nbl_queue_t.end.hpp"
SDK_VERIFY( struct ndis::nbl_queue_t, 0x10 );
