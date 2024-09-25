#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sps_chain_t.start.hpp"
namespace tag
{
    struct sps_chain_t;

    // [struct tagSPSChain]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sps_chain_t                       
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                   
        _m00 struct tag::sps_chain_t* p_next;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 struct tag::sps_chain_t* p_prev;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pPrev
                                             
        SDK_MAGIC_PROPERTIES( "tagSPSChain.$", 0x10, true, 0x913e908154b89aa4 );       
        SDK_FIXED_SIZE( sps_chain_t, 0x10 );       
    };                                       
};
#include "magic/sps_chain_t.end.hpp"
SDK_VERIFY( struct tag::sps_chain_t, 0x10 );
