#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/txfs_list_transactions_t.start.hpp"
namespace win
{
    // [struct _TXFS_LIST_TRANSACTIONS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_list_transactions_t          
    {                                        
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                   
        _m00 uint64_t number_of_transactions;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfTransactions
        _m01 uint64_t buffer_size_required;    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BufferSizeRequired
                                             
        SDK_NONVOL_PROPERTIES( "_TXFS_LIST_TRANSACTIONS.$", 0x10, true, 0x1567b94e12edeeee );                       
        SDK_FIXED_SIZE( txfs_list_transactions_t, 0x10 );                       
    };                                       
};
#include "magic/txfs_list_transactions_t.end.hpp"
SDK_VERIFY( struct win::txfs_list_transactions_t, 0x10 );
