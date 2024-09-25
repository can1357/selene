#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/query_scanout_caps_out_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERY_SCANOUT_CAPS_OUT]
    // => WDK 10 (NV)
    //
    struct query_scanout_caps_out_t
    {                              
        // WDK 10          
        //                 
        _m00 uint32_t caps;          //{ +0x0000    } | .Caps
                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERY_SCANOUT_CAPS_OUT.$", 0x0, false, 0xbcb045925d7dc8ed );     
        SDK_FIXED_SIZE( query_scanout_caps_out_t, 0x4 );     
    };                             
};
#include "magic/query_scanout_caps_out_t.end.hpp"
SDK_VERIFY( struct dxgk::query_scanout_caps_out_t, 0x4 );
