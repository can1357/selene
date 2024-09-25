#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/physical_address_list_t.start.hpp"
namespace mm
{
    // [struct _MM_PHYSICAL_ADDRESS_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct physical_address_list_t     
    {                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 int64_t  physical_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
        _m01 uint64_t number_of_bytes;   //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumberOfBytes
                                       
        SDK_NONVOL_PROPERTIES( "_MM_PHYSICAL_ADDRESS_LIST.$", 0x10, true, 0x2bfb540dfc41abe8 );                 
        SDK_FIXED_SIZE( physical_address_list_t, 0x10 );                 
    };                                 
};
#include "magic/physical_address_list_t.end.hpp"
SDK_VERIFY( struct mm::physical_address_list_t, 0x10 );
