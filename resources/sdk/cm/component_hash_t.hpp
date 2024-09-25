#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/component_hash_t.start.hpp"
namespace cm
{
    // [struct _CM_COMPONENT_HASH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct component_hash_t
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t hash;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hash
                           
        SDK_MAGIC_PROPERTIES( "_CM_COMPONENT_HASH.$", 0x4, true, 0x6e936b505ee73697 );     
        SDK_FIXED_SIZE( component_hash_t, 0x4 );     
    };                     
};
#include "magic/component_hash_t.end.hpp"
SDK_VERIFY( struct cm::component_hash_t, 0x4 );
