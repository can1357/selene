#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/secpkg_cred_class_t.hpp"

#include "magic/pkg_context_cred_info_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_CredInfo]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_cred_info_t                             
    {                                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                     
        _m00 enum win::secpkg_cred_class_t cred_class;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CredClass
        _m01 uint32_t                      is_prompting_needed;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IsPromptingNeeded
                                                               
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_CredInfo.$", 0x8, true, 0xf24cc8f38d9a0d3e );                    
        SDK_FIXED_SIZE( pkg_context_cred_info_t, 0x8 );                    
    };                                                         
};
#include "magic/pkg_context_cred_info_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_cred_info_t, 0x8 );
