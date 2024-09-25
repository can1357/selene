#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/dtls_mtu_t.start.hpp"
namespace sec
{
    // [struct _SEC_DTLS_MTU]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct dtls_mtu_t          
    {                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint16_t path_mtu;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PathMTU
                               
        SDK_NONVOL_PROPERTIES( "_SEC_DTLS_MTU.$", 0x2, true, 0xd884b4375b87cbbc );         
        SDK_FIXED_SIZE( dtls_mtu_t, 0x2 );         
    };                         
};
#include "magic/dtls_mtu_t.end.hpp"
SDK_VERIFY( struct sec::dtls_mtu_t, 0x2 );
