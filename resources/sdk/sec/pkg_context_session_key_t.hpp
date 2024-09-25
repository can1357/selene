#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pkg_context_session_key_t.start.hpp"
namespace sec
{
    // [struct _SecPkgContext_SessionKey]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pkg_context_session_key_t     
    {                                    
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t session_key_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SessionKeyLength
        _m01 uint8_t* session_key;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SessionKey
                                         
        SDK_NONVOL_PROPERTIES( "_SecPkgContext_SessionKey.$", 0x10, true, 0x7664096b0cfc51e9 );                   
        SDK_FIXED_SIZE( pkg_context_session_key_t, 0x10 );                   
    };                                   
};
#include "magic/pkg_context_session_key_t.end.hpp"
SDK_VERIFY( struct sec::pkg_context_session_key_t, 0x10 );
