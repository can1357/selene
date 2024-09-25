#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/path_offload_state_delegated_t.start.hpp"
namespace ndis
{
    // [struct _PATH_OFFLOAD_STATE_DELEGATED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct path_offload_state_delegated_t               
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                              
        _m00 struct ndis::offload_state_header_t header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
                                                        
        SDK_MAGIC_PROPERTIES( "_PATH_OFFLOAD_STATE_DELEGATED.$", 0x8, true, 0xd378e97d6ab1f61a );       
        SDK_FIXED_SIZE( path_offload_state_delegated_t, 0x8 );       
    };                                                  
};
#include "magic/path_offload_state_delegated_t.end.hpp"
SDK_VERIFY( struct ndis::path_offload_state_delegated_t, 0x8 );
