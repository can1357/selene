#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/fast_leaf_hint_t.start.hpp"
namespace cm
{
    // [struct _CM_FAST_LEAF_HINT]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct fast_leaf_hint_t                    
    {                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 sdk::array<uint8_t, 4> characters;  //{ +0x0000    +0x0000    +0x0000    } | .Characters
        _m01 uint32_t               full_hint;   //{ +0x0000    +0x0000    +0x0000    } | .FullHint
                                               
        SDK_MAGIC_PROPERTIES( "_CM_FAST_LEAF_HINT.$", 0x4, true, 0x36679d96f3671bc0 );           
        SDK_FIXED_SIZE( fast_leaf_hint_t, 0x4 );           
    };                                         
};
#include "magic/fast_leaf_hint_t.end.hpp"
SDK_VERIFY( struct cm::fast_leaf_hint_t, 0x4 );
