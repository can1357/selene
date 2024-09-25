#pragma once
#include <sdkgen/support_library.hpp>
#include "component_hash_t.hpp"

#include "magic/name_hash_t.start.hpp"
namespace cm
{
    struct name_hash_t;

    // [struct _CM_NAME_HASH]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct name_hash_t                               
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                           
        _m00 struct cm::component_hash_t conv_key;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ConvKey
        _m01 struct cm::name_hash_t*     next_hash;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .NextHash
        _m02 uint16_t                    name_length;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NameLength
        _m03 sdk::array<wchar_t, 1>      name;         //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .Name
                                                     
        SDK_MAGIC_PROPERTIES( "_CM_NAME_HASH.$", 0x18, true, 0x5fc60a24ab0cc49f );            
        SDK_FIXED_SIZE( name_hash_t, 0x18 );            
    };                                               
};
#include "magic/name_hash_t.end.hpp"
SDK_VERIFY( struct cm::name_hash_t, 0x18 );
