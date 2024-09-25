#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/copy_address_t.start.hpp"
namespace mm
{
    // [struct _MM_COPY_ADDRESS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct copy_address_t             
    {                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                            
        _m00 void*   virtual_address;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VirtualAddress
        _m01 int64_t physical_address;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PhysicalAddress
                                      
        SDK_NONVOL_PROPERTIES( "_MM_COPY_ADDRESS.$", 0x8, true, 0x107ea896ee47de );                 
        SDK_FIXED_SIZE( copy_address_t, 0x8 );                 
    };                                
};
#include "magic/copy_address_t.end.hpp"
SDK_VERIFY( struct mm::copy_address_t, 0x8 );
