#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/psinjectdata_t.start.hpp"
namespace win
{
    // [struct _PSINJECTDATA]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct psinjectdata_t             
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t data_bytes;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DataBytes
        _m01 uint16_t injection_point;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .InjectionPoint
        _m02 uint16_t page_number;      //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | .PageNumber
                                      
        SDK_NONVOL_PROPERTIES( "_PSINJECTDATA.$", 0x8, true, 0x20d15f2bc83739d2 );                
        SDK_FIXED_SIZE( psinjectdata_t, 0x8 );                
    };                                
};
#include "magic/psinjectdata_t.end.hpp"
SDK_VERIFY( struct win::psinjectdata_t, 0x8 );
