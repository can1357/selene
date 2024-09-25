#pragma once
#include <sdkgen/support_library.hpp>
#include "s_hash_chain_t.hpp"

#include "magic/sdword_hash_node_t.start.hpp"
namespace win
{
    // [struct SDWORDHashNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdword_hash_node_t                 
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                    
        _m00 struct win::s_hash_chain_t chain;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .chain
        _m01 uint32_t                   key;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .key
                                              
        SDK_MAGIC_PROPERTIES( "SDWORDHashNode.$", 0x18, true, 0x4b3594db6d1ad4a1 );      
        SDK_FIXED_SIZE( sdword_hash_node_t, 0x18 );      
    };                                        
};
#include "magic/sdword_hash_node_t.end.hpp"
SDK_VERIFY( struct win::sdword_hash_node_t, 0x18 );
