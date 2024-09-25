#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dispatch_table_t.start.hpp"
namespace pm
{
    // [struct _PM_DISPATCH_TABLE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dispatch_table_t                 
    {                                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                  
        _m00 uint32_t             signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint32_t             version;    //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Version
        _m02 sdk::array<void*, 1> function;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Function
                                            
        SDK_NONVOL_PROPERTIES( "_PM_DISPATCH_TABLE.$", 0x10, true, 0xb047a243f8e9f0c1 );          
        SDK_FIXED_SIZE( dispatch_table_t, 0x10 );          
    };                                      
};
#include "magic/dispatch_table_t.end.hpp"
SDK_VERIFY( struct pm::dispatch_table_t, 0x10 );
