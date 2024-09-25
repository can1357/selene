#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_negotiation_info_w_t.start.hpp"
namespace sec
{
    struct pkg_info_w_t;

    // [struct _SecPkgContext_NegotiationInfoW]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_negotiation_info_w_t              
    {                                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 struct sec::pkg_info_w_t* package_info;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PackageInfo
        _m01 uint32_t                  negotiation_state;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NegotiationState
                                                         
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_NegotiationInfoW.$", 0x10, true, 0xf77c4405e5363928 );                  
        SDK_FIXED_SIZE( pkg_context_negotiation_info_w_t, 0x10 );                  
    };                                                   
};
#include "magic/pkg_context_negotiation_info_w_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_negotiation_info_w_t, 0x10 );
