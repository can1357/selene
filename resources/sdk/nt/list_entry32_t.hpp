#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/list_entry32_t.start.hpp"
namespace nt
{
    // [struct LIST_ENTRY32]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct list_entry32_t   
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t flink;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flink
        _m01 uint32_t blink;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Blink
                            
        SDK_NONVOL_PROPERTIES( "LIST_ENTRY32.$", 0x8, true, 0x1d17fa815b076931 );      
        SDK_FIXED_SIZE( list_entry32_t, 0x8 );      
    };                      
};
#include "magic/list_entry32_t.end.hpp"
SDK_VERIFY( struct nt::list_entry32_t, 0x8 );
