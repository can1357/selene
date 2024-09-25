#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/runtime_broker_cache_key_t.start.hpp"
namespace win
{
    // [struct RuntimeBrokerCacheKey]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct runtime_broker_cache_key_t
    {                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                         
        _m00 bool is_shared_broker;    //{ +0x0008    +0x0008    +0x0008    } | .isSharedBroker
                                     
        SDK_MAGIC_PROPERTIES( "RuntimeBrokerCacheKey.$", 0x10, true, 0x9044c18b9f749897 );                 
        SDK_FIXED_SIZE( runtime_broker_cache_key_t, 0x10 );                 
    };                               
};
#include "magic/runtime_broker_cache_key_t.end.hpp"
SDK_VERIFY( struct win::runtime_broker_cache_key_t, 0x10 );
