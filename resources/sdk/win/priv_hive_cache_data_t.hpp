#pragma once
#include <sdkgen/support_library.hpp>
#include "registry_key_t.hpp"

#include "magic/priv_hive_cache_data_t.start.hpp"
namespace win
{
    // [struct PrivHiveCacheData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct priv_hive_cache_data_t                     
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                            
        _m00 class win::registry_key_t priv_hive_root;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .privHiveRoot
        _m01 uint32_t                  sam_desired;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .samDesired
                                                      
        SDK_MAGIC_PROPERTIES( "PrivHiveCacheData.$", 0x20, true, 0xea4e66b74306993a );               
        SDK_FIXED_SIZE( priv_hive_cache_data_t, 0x20 );               
    };                                                
};
#include "magic/priv_hive_cache_data_t.end.hpp"
SDK_VERIFY( struct win::priv_hive_cache_data_t, 0x20 );
