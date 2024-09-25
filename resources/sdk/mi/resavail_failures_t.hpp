#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/resavail_failures_t.start.hpp"
namespace mi
{
    // [struct _MI_RESAVAIL_FAILURES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct resavail_failures_t  
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t wrap;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Wrap
        _m01 uint32_t no_charge;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NoCharge
                                
        SDK_MAGIC_PROPERTIES( "_MI_RESAVAIL_FAILURES.$", 0x8, true, 0x85bde0d04acf4cb3 );          
        SDK_FIXED_SIZE( resavail_failures_t, 0x8 );          
    };                          
};
#include "magic/resavail_failures_t.end.hpp"
SDK_VERIFY( struct mi::resavail_failures_t, 0x8 );
