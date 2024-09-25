#pragma once
#include <sdkgen/support_library.hpp>

namespace win
{
    // [struct RuntimeBrokerCacheKeyCompareFunctor]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct runtime_broker_cache_key_compare_functor_t
    {                                                
                                                     
        SDK_MAGIC_PROPERTIES( "RuntimeBrokerCacheKeyCompareFunctor.$", 0x1, true, 0x858694a93e342d7b );
        SDK_FIXED_SIZE( runtime_broker_cache_key_compare_functor_t, 0x1 );
    };                                               
};
SDK_VERIFY( struct win::runtime_broker_cache_key_compare_functor_t, 0x1 );
