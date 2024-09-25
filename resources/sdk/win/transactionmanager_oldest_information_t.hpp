#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transactionmanager_oldest_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTIONMANAGER_OLDEST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct transactionmanager_oldest_information_t     
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                             
        _m00 struct nt::guid_t oldest_transaction_guid;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OldestTransactionGuid
                                                       
        SDK_MAGIC_PROPERTIES( "_TRANSACTIONMANAGER_OLDEST_INFORMATION.$", 0x10, true, 0xee6ad5debb22cb9d );                        
        SDK_FIXED_SIZE( transactionmanager_oldest_information_t, 0x10 );                        
    };                                                 
};
#include "magic/transactionmanager_oldest_information_t.end.hpp"
SDK_VERIFY( struct win::transactionmanager_oldest_information_t, 0x10 );
