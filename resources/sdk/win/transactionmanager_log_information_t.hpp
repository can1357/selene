#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transactionmanager_log_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTIONMANAGER_LOG_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transactionmanager_log_information_t
    {                                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                  
        _m00 struct nt::guid_t log_identity;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .LogIdentity
                                               
        SDK_NONVOL_PROPERTIES( "_TRANSACTIONMANAGER_LOG_INFORMATION.$", 0x10, true, 0x4f749c2b74cf51a3 );             
        SDK_FIXED_SIZE( transactionmanager_log_information_t, 0x10 );             
    };                                         
};
#include "magic/transactionmanager_log_information_t.end.hpp"
SDK_VERIFY( struct win::transactionmanager_log_information_t, 0x10 );
