#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/path_offload_state_cached_t.start.hpp"
namespace ndis
{
    // [struct _PATH_OFFLOAD_STATE_CACHED]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct path_offload_state_cached_t                    
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                                
        _m00 struct ndis::offload_state_header_t header;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                            path_mtu;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PathMtu
                                                          
        SDK_MAGIC_PROPERTIES( "_PATH_OFFLOAD_STATE_CACHED.$", 0xc, true, 0xb837ddf6e4a64667 );         
        SDK_FIXED_SIZE( path_offload_state_cached_t, 0xc );         
    };                                                    
};
#include "magic/path_offload_state_cached_t.end.hpp"
SDK_VERIFY( struct ndis::path_offload_state_cached_t, 0xc );
