#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_state_header_t.hpp"

#include "magic/path_offload_state_const_t.start.hpp"
namespace ndis
{
    // [struct _PATH_OFFLOAD_STATE_CONST]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct path_offload_state_const_t                                
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                           
        _m00 struct ndis::offload_state_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 const uint8_t*                      source_address;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SourceAddress
        _m02 const uint8_t*                      destination_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .DestinationAddress
                                                                     
        SDK_MAGIC_PROPERTIES( "_PATH_OFFLOAD_STATE_CONST.$", 0x18, true, 0xc8b54746fde0e882 );                    
        SDK_FIXED_SIZE( path_offload_state_const_t, 0x18 );                    
    };                                                               
};
#include "magic/path_offload_state_const_t.end.hpp"
SDK_VERIFY( struct ndis::path_offload_state_const_t, 0x18 );
