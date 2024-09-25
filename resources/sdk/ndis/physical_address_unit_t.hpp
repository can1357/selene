#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_address_unit_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_PHYSICAL_ADDRESS_UNIT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct physical_address_unit_t     
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int64_t  physical_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
        _m01 uint32_t length;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Length
                                       
        SDK_MAGIC_PROPERTIES( "_NDIS_PHYSICAL_ADDRESS_UNIT.$", 0x10, true, 0x9e88fe2b33892ca2 );                 
        SDK_FIXED_SIZE( physical_address_unit_t, 0x10 );                 
    };                                 
};
#include "magic/physical_address_unit_t.end.hpp"
SDK_VERIFY( struct ndis::physical_address_unit_t, 0x10 );
