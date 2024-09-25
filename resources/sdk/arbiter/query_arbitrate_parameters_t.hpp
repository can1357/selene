#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_arbitrate_parameters_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_QUERY_ARBITRATE_PARAMETERS]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct query_arbitrate_parameters_t         
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                      
        _m00 nt::list_entry_t* arbitration_list;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .ArbitrationList
                                                
        SDK_NONVOL_PROPERTIES( "_ARBITER_QUERY_ARBITRATE_PARAMETERS.$", 0x8, true, 0x2faee4f4a1385b5e );                 
        SDK_FIXED_SIZE( query_arbitrate_parameters_t, 0x8 );                 
    };                                          
};
#include "magic/query_arbitrate_parameters_t.end.hpp"
SDK_VERIFY( struct arbiter::query_arbitrate_parameters_t, 0x8 );
