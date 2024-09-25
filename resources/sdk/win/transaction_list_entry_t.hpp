#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/transaction_list_entry_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_LIST_ENTRY]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_list_entry_t
    {                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                         
        _m00 struct nt::guid_t uow;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .UOW
                                   
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_LIST_ENTRY.$", 0x10, true, 0x81d411352c8fc353 );    
        SDK_FIXED_SIZE( transaction_list_entry_t, 0x10 );    
    };                             
};
#include "magic/transaction_list_entry_t.end.hpp"
SDK_VERIFY( struct win::transaction_list_entry_t, 0x10 );
