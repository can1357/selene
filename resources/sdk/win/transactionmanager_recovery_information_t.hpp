#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transactionmanager_recovery_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTIONMANAGER_RECOVERY_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transactionmanager_recovery_information_t
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint64_t last_recovered_lsn;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LastRecoveredLsn
                                                    
        SDK_NONVOL_PROPERTIES( "_TRANSACTIONMANAGER_RECOVERY_INFORMATION.$", 0x8, true, 0xd6d15e2bbe977c2e );                   
        SDK_FIXED_SIZE( transactionmanager_recovery_information_t, 0x8 );                   
    };                                              
};
#include "magic/transactionmanager_recovery_information_t.end.hpp"
SDK_VERIFY( struct win::transactionmanager_recovery_information_t, 0x8 );
