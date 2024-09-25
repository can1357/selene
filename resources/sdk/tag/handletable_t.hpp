#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/handletable_t.start.hpp"
namespace tag
{
    // [struct tagHANDLETABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct handletable_t                        
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                      
        _m00 sdk::array<void*, 1> object_handle;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .objectHandle
                                                
        SDK_NONVOL_PROPERTIES( "tagHANDLETABLE.$", 0x8, true, 0xe9129d813e2ae92a );              
        SDK_FIXED_SIZE( handletable_t, 0x8 );              
    };                                          
};
#include "magic/handletable_t.end.hpp"
SDK_VERIFY( struct tag::handletable_t, 0x8 );
