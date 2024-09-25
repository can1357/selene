#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prevent_media_removal_t.start.hpp"
namespace nt
{
    // [struct _PREVENT_MEDIA_REMOVAL]
    // => WDK 10 (NV)
    //
    struct prevent_media_removal_t         
    {                                      
        // WDK 10                          
        //                                 
        _m00 uint8_t prevent_media_removal;  //{ +0x0000    } | .PreventMediaRemoval
                                           
        SDK_NONVOL_PROPERTIES( "_PREVENT_MEDIA_REMOVAL.$", 0x0, false, 0xbbc1789bddc4252d );                      
        SDK_FIXED_SIZE( prevent_media_removal_t, 0x1 );                      
    };                                     
};
#include "magic/prevent_media_removal_t.end.hpp"
SDK_VERIFY( struct nt::prevent_media_removal_t, 0x1 );
