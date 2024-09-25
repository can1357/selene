#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/setstablepowerstate_t.start.hpp"
namespace dxgk::arg
{
    // [struct DXGKARG_SETSTABLEPOWERSTATE]
    // => WDK 10 (NV)
    //
    struct setstablepowerstate_t
    {                           
        // WDK 10            
        //                   
        _m00 int32_t enabled;     //{ +0x0000    } | .Enabled
                                
        SDK_NONVOL_PROPERTIES( "DXGKARG_SETSTABLEPOWERSTATE.$", 0x0, false, 0x40f7f5525497cb55 );        
        SDK_FIXED_SIZE( setstablepowerstate_t, 0x4 );        
    };                          
};
#include "magic/setstablepowerstate_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setstablepowerstate_t, 0x4 );
