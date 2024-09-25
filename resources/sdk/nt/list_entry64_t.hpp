#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/list_entry64_t.start.hpp"
namespace nt
{
    // [struct LIST_ENTRY64]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct list_entry64_t   
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t flink;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Flink
        _m01 uint64_t blink;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Blink
                            
        SDK_NONVOL_PROPERTIES( "LIST_ENTRY64.$", 0x10, true, 0x8a35fb4a203581f3 );      
        SDK_FIXED_SIZE( list_entry64_t, 0x10 );      
    };                      
};
#include "magic/list_entry64_t.end.hpp"
SDK_VERIFY( struct nt::list_entry64_t, 0x10 );
