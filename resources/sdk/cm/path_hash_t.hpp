#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/path_hash_t.start.hpp"
namespace cm
{
    // [struct _CM_PATH_HASH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct path_hash_t     
    {                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                 
        _m00 uint32_t hash;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Hash
                           
        SDK_MAGIC_PROPERTIES( "_CM_PATH_HASH.$", 0x4, true, 0x1d14ec54a156277a );     
        SDK_FIXED_SIZE( path_hash_t, 0x4 );     
    };                     
};
#include "magic/path_hash_t.end.hpp"
SDK_VERIFY( struct cm::path_hash_t, 0x4 );
