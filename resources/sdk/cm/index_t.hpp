#pragma once
#include <sdkgen/support_library.hpp>
#include "component_hash_t.hpp"
#include "fast_leaf_hint_t.hpp"

#include "magic/index_t.start.hpp"
namespace cm
{
    // [struct _CM_INDEX]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct index_t                                 
    {                                              
        using name_hint_t = sdk::variant<sdk::array<uint8_t, 4>, struct cm::fast_leaf_hint_t>;          
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                         
        _m00 uint32_t                    cell;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Cell
        _m01 name_hint_t                 name_hint;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .NameHint
        _m02 struct cm::component_hash_t hash_key;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HashKey
                                                   
        SDK_MAGIC_PROPERTIES( "_CM_INDEX.$", 0x8, true, 0xfe4b901a3ddd947e );          
        SDK_FIXED_SIZE( index_t, 0x8 );            
    };                                             
};
#include "magic/index_t.end.hpp"
SDK_VERIFY( struct cm::index_t, 0x8 );
