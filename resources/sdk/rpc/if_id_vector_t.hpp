#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/if_id_vector_t.start.hpp"
namespace rpc
{
    struct if_id_t;

    // [struct RPC_IF_ID_VECTOR]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct if_id_vector_t                              
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                             
        _m00 uint32_t                            count;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Count
        _m01 sdk::array<struct rpc::if_id_t*, 1> if_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .IfId
                                                       
        SDK_MAGIC_PROPERTIES( "RPC_IF_ID_VECTOR.$", 0x10, true, 0xcd4d003509dd0f46 );      
        SDK_FIXED_SIZE( if_id_vector_t, 0x10 );        
    };                                                 
};
#include "magic/if_id_vector_t.end.hpp"
SDK_VERIFY( struct rpc::if_id_vector_t, 0x10 );
