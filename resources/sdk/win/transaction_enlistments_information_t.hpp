#pragma once
#include <sdkgen/support_library.hpp>
#include "transaction_enlistment_pair_t.hpp"

#include "magic/transaction_enlistments_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_ENLISTMENTS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_enlistments_information_t      
    {                                                 
        using enlistment_pair_t = sdk::array<struct win::transaction_enlistment_pair_t, 1>;                      
                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                            
        _m00 uint32_t           number_of_enlistments;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NumberOfEnlistments
        _m01 enlistment_pair_t  enlistment_pair;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .EnlistmentPair
                                                      
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_ENLISTMENTS_INFORMATION.$", 0x24, true, 0x1fe64510c140b40a );                      
        SDK_FIXED_SIZE( transaction_enlistments_information_t, 0x24 );                      
    };                                                
};
#include "magic/transaction_enlistments_information_t.end.hpp"
SDK_VERIFY( struct win::transaction_enlistments_information_t, 0x24 );
