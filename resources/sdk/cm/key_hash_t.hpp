#pragma once
#include <sdkgen/support_library.hpp>
#include "path_hash_t.hpp"

namespace nt { struct hhive_t; }

#include "magic/key_hash_t.start.hpp"
namespace cm
{
    struct key_hash_t;

    // [struct _CM_KEY_HASH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct key_hash_t                         
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                    
        _m00 struct cm::path_hash_t conv_key;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ConvKey
        _m01 struct cm::key_hash_t* next_hash;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextHash
        _m02 struct nt::hhive_t*    key_hive;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KeyHive
        _m03 uint32_t               key_cell;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .KeyCell
                                              
        SDK_MAGIC_PROPERTIES( "_CM_KEY_HASH.$", 0x20, true, 0x7b3fe7fdce566be4 );          
        SDK_FIXED_SIZE( key_hash_t, 0x20 );          
    };                                        
};
#include "magic/key_hash_t.end.hpp"
SDK_VERIFY( struct cm::key_hash_t, 0x20 );
