#pragma once
#include <sdkgen/support_library.hpp>
#include "../connection_change_t.hpp"

#include "magic/queryconnectionchange_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_QUERYCONNECTIONCHANGE]
    // => WDK 10 (NV)
    //
    struct queryconnectionchange_t                              
    {                                                           
        // WDK 10                                               
        //                                                      
        _m00 struct dxgk::connection_change_t connection_change;  //{ +0x0000    } | .ConnectionChange
                                                                
        SDK_NONVOL_PROPERTIES( "_DXGKARG_QUERYCONNECTIONCHANGE.$", 0x0, false, 0xc95d7b993833b044 );                  
        SDK_FIXED_SIZE( queryconnectionchange_t, 0x18 );                  
    };                                                          
};
#include "magic/queryconnectionchange_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::queryconnectionchange_t, 0x18 );
