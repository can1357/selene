#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_transaction_active_info_t.start.hpp"
namespace win
{
    // [struct _TXFS_TRANSACTION_ACTIVE_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_transaction_active_info_t            
    {                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                
        //                                           
        _m00 uint8_t transactions_active_at_snapshot;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TransactionsActiveAtSnapshot
                                                     
        SDK_NONVOL_PROPERTIES( "_TXFS_TRANSACTION_ACTIVE_INFO.$", 0x1, true, 0x2ed2c45b326bbdde );                                
        SDK_FIXED_SIZE( txfs_transaction_active_info_t, 0x1 );                                
    };                                               
};
#include "magic/txfs_transaction_active_info_t.end.hpp"
SDK_VERIFY( struct win::txfs_transaction_active_info_t, 0x1 );
