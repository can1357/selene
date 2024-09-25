#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/designvector_t.start.hpp"
namespace tag
{
    // [struct tagDESIGNVECTOR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct designvector_t                        
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                       
        _m00 uint32_t                dv_reserved;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .dvReserved
        _m01 uint32_t                dv_num_axes;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .dvNumAxes
        _m02 sdk::array<int32_t, 16> dv_values;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .dvValues
                                                 
        SDK_NONVOL_PROPERTIES( "tagDESIGNVECTOR.$", 0x48, true, 0x79db922cdd070947 );            
        SDK_FIXED_SIZE( designvector_t, 0x48 );            
    };                                           
};
#include "magic/designvector_t.end.hpp"
SDK_VERIFY( struct tag::designvector_t, 0x48 );
