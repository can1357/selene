#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/flags_t.start.hpp"
namespace sec
{
    // [struct _SEC_FLAGS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct flags_t          
    {                       
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint64_t flags;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
                            
        SDK_NONVOL_PROPERTIES( "_SEC_FLAGS.$", 0x8, true, 0x87df1cfc6cbcb0f4 );      
        SDK_FIXED_SIZE( flags_t, 0x8 );      
    };                      
};
#include "magic/flags_t.end.hpp"
SDK_VERIFY( struct sec::flags_t, 0x8 );
