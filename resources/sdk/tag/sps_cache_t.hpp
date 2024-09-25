#pragma once
#include <sdkgen/support_library.hpp>
#include "sps_chain_t.hpp"

#include "magic/sps_cache_t.start.hpp"
namespace tag
{
    // [struct tagSPSCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sps_cache_t                               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                           
        _m00 struct tag::sps_chain_t client_ps_chain;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clientPSChain
        _m01 struct tag::sps_chain_t server_ps_chain;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .serverPSChain
                                                     
        SDK_MAGIC_PROPERTIES( "tagSPSCache.$", 0x20, true, 0x847d4bf994210dfe );                
        SDK_FIXED_SIZE( sps_cache_t, 0x20 );                
    };                                               
};
#include "magic/sps_cache_t.end.hpp"
SDK_VERIFY( struct tag::sps_cache_t, 0x20 );
