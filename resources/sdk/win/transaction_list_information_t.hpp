#pragma once
#include <sdkgen/support_library.hpp>
#include "transaction_list_entry_t.hpp"

#include "magic/transaction_list_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_LIST_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_list_information_t                       
    {                                                           
        using transaction_information_t = sdk::array<struct win::transaction_list_entry_t, 1>;                        
                                                                
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                      
        _m00 uint32_t                   number_of_transactions;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfTransactions
        _m01 transaction_information_t  transaction_information;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .TransactionInformation
                                                                
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_LIST_INFORMATION.$", 0x14, true, 0x2ca8736ccbf87153 );                        
        SDK_FIXED_SIZE( transaction_list_information_t, 0x14 );                        
    };                                                          
};
#include "magic/transaction_list_information_t.end.hpp"
SDK_VERIFY( struct win::transaction_list_information_t, 0x14 );
