#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_basic_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_BASIC_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_basic_information_t    
    {                                         
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                    
        _m00 struct nt::guid_t transaction_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TransactionId
        _m01 uint32_t          state;           //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .State
        _m02 uint32_t          outcome;         //{ +0x0014    +0x0014    +0x0014    +0x0014    +0x0014    } | .Outcome
                                              
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_BASIC_INFORMATION.$", 0x18, true, 0x9486d3142fa111db );               
        SDK_FIXED_SIZE( transaction_basic_information_t, 0x18 );               
    };                                        
};
#include "magic/transaction_basic_information_t.end.hpp"
SDK_VERIFY( struct win::transaction_basic_information_t, 0x18 );
