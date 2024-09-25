#pragma once
#include <sdkgen/support_library.hpp>
#include "general_lookaside_pool_t.hpp"

#include "magic/lookaside_list_ex_t.start.hpp"
namespace nt
{
    // [struct _LOOKASIDE_LIST_EX]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct lookaside_list_ex_t                     
    {                                              
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2  
        //                                         
        _m00 struct nt::general_lookaside_pool_t l;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .L
                                                   
        SDK_NONVOL_PROPERTIES( "_LOOKASIDE_LIST_EX.$", 0x60, true, 0xffacc2ab84beec8d );  
        SDK_FIXED_SIZE( lookaside_list_ex_t, 0x60 );  
    };                                             
};
#include "magic/lookaside_list_ex_t.end.hpp"
SDK_VERIFY( struct nt::lookaside_list_ex_t, 0x60 );
