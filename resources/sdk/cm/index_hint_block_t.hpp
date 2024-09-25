#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/index_hint_block_t.start.hpp"
namespace cm
{
    // [struct _CM_INDEX_HINT_BLOCK]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct index_hint_block_t                 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                    
        _m00 uint32_t                count;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<uint32_t, 1> hash_key;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .HashKey
                                              
        SDK_MAGIC_PROPERTIES( "_CM_INDEX_HINT_BLOCK.$", 0x8, true, 0xc7b77fcf96650aae );         
        SDK_FIXED_SIZE( index_hint_block_t, 0x8 );         
    };                                        
};
#include "magic/index_hint_block_t.end.hpp"
SDK_VERIFY( struct cm::index_hint_block_t, 0x8 );
