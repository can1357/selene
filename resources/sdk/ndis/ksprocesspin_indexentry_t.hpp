#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ksprocesspin_indexentry_t.start.hpp"
namespace ndis
{
    struct ksprocesspin_t;

    // [struct _KSPROCESSPIN_INDEXENTRY]
    // => Windows 10 v1607
    //
    struct ksprocesspin_indexentry_t             
    {                                            
        // Windows 10 v1607                      
        //                                       
        _m00 struct ndis::ksprocesspin_t** pins;   //{ +0x0000    } | .Pins
        _m01 uint32_t                      count;  //{ +0x0008    } | .Count
                                                 
        SDK_MAGIC_PROPERTIES( "_KSPROCESSPIN_INDEXENTRY.$", 0x0, false, 0x5ebda0e81a80aaf6 );      
        SDK_FIXED_SIZE( ksprocesspin_indexentry_t, 0x10 );      
    };                                           
};
#include "magic/ksprocesspin_indexentry_t.end.hpp"
SDK_VERIFY( struct ndis::ksprocesspin_indexentry_t, 0x10 );
