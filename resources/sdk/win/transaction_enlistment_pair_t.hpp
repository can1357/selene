#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_enlistment_pair_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_ENLISTMENT_PAIR]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_enlistment_pair_t           
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                         
        _m00 struct nt::guid_t enlistment_id;        //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnlistmentId
        _m01 struct nt::guid_t resource_manager_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceManagerId
                                                   
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_ENLISTMENT_PAIR.$", 0x20, true, 0x2de2180833154c6b );                    
        SDK_FIXED_SIZE( transaction_enlistment_pair_t, 0x20 );                    
    };                                             
};
#include "magic/transaction_enlistment_pair_t.end.hpp"
SDK_VERIFY( struct win::transaction_enlistment_pair_t, 0x20 );
