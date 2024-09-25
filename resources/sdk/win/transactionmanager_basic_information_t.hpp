#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transactionmanager_basic_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTIONMANAGER_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transactionmanager_basic_information_t
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                   
        _m00 struct nt::guid_t tm_identity;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TmIdentity
        _m01 int64_t           virtual_clock;      //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .VirtualClock
                                                 
        SDK_NONVOL_PROPERTIES( "_TRANSACTIONMANAGER_BASIC_INFORMATION.$", 0x18, true, 0x84f393185c9a41ac );              
        SDK_FIXED_SIZE( transactionmanager_basic_information_t, 0x18 );              
    };                                           
};
#include "magic/transactionmanager_basic_information_t.end.hpp"
SDK_VERIFY( struct win::transactionmanager_basic_information_t, 0x18 );
