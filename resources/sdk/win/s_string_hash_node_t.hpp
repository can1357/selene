#pragma once
#include <sdkgen/support_library.hpp>
#include "s_hash_chain_t.hpp"

namespace tag { struct dualstringarray_t; }

#include "magic/s_string_hash_node_t.start.hpp"
namespace win
{
    // [struct SStringHashNode]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_string_hash_node_t                     
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                          
        _m00 struct win::s_hash_chain_t     chain;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .chain
        _m01 uint32_t                       dw_hash;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .dwHash
        _m02 struct tag::dualstringarray_t* psa_key;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .psaKey
                                                    
        SDK_MAGIC_PROPERTIES( "SStringHashNode.$", 0x20, true, 0x7cf1c76c955a0814 );        
        SDK_FIXED_SIZE( s_string_hash_node_t, 0x20 );        
    };                                              
};
#include "magic/s_string_hash_node_t.end.hpp"
SDK_VERIFY( struct win::s_string_hash_node_t, 0x20 );
