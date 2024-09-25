#pragma once
#include <sdkgen/support_library.hpp>
#include "transaction_enlistment_pair_t.hpp"

#include "magic/transaction_superior_enlistment_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_superior_enlistment_information_t                        
    {                                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                      
        _m00 struct win::transaction_enlistment_pair_t superior_enlistment_pair;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .SuperiorEnlistmentPair
                                                                                
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_SUPERIOR_ENLISTMENT_INFORMATION.$", 0x20, true, 0x56d401cdac1fd8b9 );                         
        SDK_FIXED_SIZE( transaction_superior_enlistment_information_t, 0x20 );                         
    };                                                                          
};
#include "magic/transaction_superior_enlistment_information_t.end.hpp"
SDK_VERIFY( struct win::transaction_superior_enlistment_information_t, 0x20 );
