#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/transaction_bind_information_t.start.hpp"
namespace win
{
    // [struct _TRANSACTION_BIND_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct transaction_bind_information_t
    {                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                   
        _m00 void* tm_handle;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TmHandle
                                         
        SDK_NONVOL_PROPERTIES( "_TRANSACTION_BIND_INFORMATION.$", 0x8, true, 0x264ee5a4db7e2888 );          
        SDK_FIXED_SIZE( transaction_bind_information_t, 0x8 );          
    };                                   
};
#include "magic/transaction_bind_information_t.end.hpp"
SDK_VERIFY( struct win::transaction_bind_information_t, 0x8 );
