#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_hash_chain_t.start.hpp"
namespace win
{
    struct s_hash_chain_t;

    // [struct SHashChain]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_hash_chain_t                       
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                      
        _m00 struct win::s_hash_chain_t* p_next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 struct win::s_hash_chain_t* p_prev;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPrev
                                                
        SDK_MAGIC_PROPERTIES( "SHashChain.$", 0x10, true, 0x48249cf42408a717 );       
        SDK_FIXED_SIZE( s_hash_chain_t, 0x10 );       
    };                                          
};
#include "magic/s_hash_chain_t.end.hpp"
SDK_VERIFY( struct win::s_hash_chain_t, 0x10 );
