#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mci_addr_t.start.hpp"
namespace ntdll
{
    // [union _MCI_ADDR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union mci_addr_t            
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t address;    //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Address
        _m01 uint64_t quad_part;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .QuadPart
                                
        SDK_NONVOL_PROPERTIES( "_MCI_ADDR.$", 0x8, true, 0x5f7b94ea75a356f6 );          
        SDK_FIXED_SIZE( mci_addr_t, 0x8 );          
    };                          
};
#include "magic/mci_addr_t.end.hpp"
SDK_VERIFY( union ntdll::mci_addr_t, 0x8 );
