#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/txfs_list_transactions_entry_t.start.hpp"
namespace win
{
    // [struct _TXFS_LIST_TRANSACTIONS_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_list_transactions_entry_t        
    {                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                       
        _m00 struct nt::guid_t transaction_id;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TransactionId
        _m01 uint32_t          transaction_state;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TransactionState
                                                 
        SDK_NONVOL_PROPERTIES( "_TXFS_LIST_TRANSACTIONS_ENTRY.$", 0x28, true, 0x861eda0d62654f7f );                  
        SDK_FIXED_SIZE( txfs_list_transactions_entry_t, 0x28 );                  
    };                                           
};
#include "magic/txfs_list_transactions_entry_t.end.hpp"
SDK_VERIFY( struct win::txfs_list_transactions_entry_t, 0x28 );
