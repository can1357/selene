#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kaddress_range_t.start.hpp"
namespace wdf
{
    // [struct _KADDRESS_RANGE]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kaddress_range_t   
    {                         
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 void*    address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t size;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Size
                              
        SDK_NONVOL_PROPERTIES( "_KADDRESS_RANGE.$", 0x10, true, 0x534ef641994da001 );        
        SDK_FIXED_SIZE( kaddress_range_t, 0x10 );        
    };                        
};
#include "magic/kaddress_range_t.end.hpp"
SDK_VERIFY( struct wdf::kaddress_range_t, 0x10 );
