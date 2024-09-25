#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_negotiation_info_a_t.start.hpp"
namespace sec
{
    struct pkg_info_a_t;

    // [struct _SecPkgContext_NegotiationInfoA]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_negotiation_info_a_t              
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                               
        _m00 struct sec::pkg_info_a_t* package_info;       //{ +0x0000    +0x0000    +0x0000    } | .PackageInfo
        _m01 uint32_t                  negotiation_state;  //{ +0x0008    +0x0008    +0x0008    } | .NegotiationState
                                                         
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_NegotiationInfoA.$", 0x10, true, 0x65f513bbe9463496 );                  
        SDK_FIXED_SIZE( pkg_context_negotiation_info_a_t, 0x10 );                  
    };                                                   
};
#include "magic/pkg_context_negotiation_info_a_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_negotiation_info_a_t, 0x10 );
