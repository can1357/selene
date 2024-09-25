#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/secpkg_attr_lct_status_t.hpp"

#include "magic/pkg_context_last_client_token_status_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_LastClientTokenStatus]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pkg_context_last_client_token_status_t                        
    {                                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                               
        _m00 enum win::secpkg_attr_lct_status_t last_client_token_status;  //{ +0x0000    +0x0000    +0x0000    } | .LastClientTokenStatus
                                                                         
        SDK_MAGIC_PROPERTIES( "_SecPkgContext_LastClientTokenStatus.$", 0x4, true, 0x518201b96677ba78 );                         
        SDK_FIXED_SIZE( pkg_context_last_client_token_status_t, 0x4 );                         
    };                                                                   
};
#include "magic/pkg_context_last_client_token_status_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_last_client_token_status_t, 0x4 );
