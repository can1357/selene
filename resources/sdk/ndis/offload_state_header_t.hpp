#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offload_state_header_t.start.hpp"
namespace ndis
{
    // [struct _OFFLOAD_STATE_HEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offload_state_header_t        
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                               
        _m00 uint32_t length;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Length
        _m01 uint32_t recognized_options;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .RecognizedOptions
                                         
        SDK_MAGIC_PROPERTIES( "_OFFLOAD_STATE_HEADER.$", 0x8, true, 0x14c12ebe627dd343 );                   
        SDK_FIXED_SIZE( offload_state_header_t, 0x8 );                   
    };                                   
};
#include "magic/offload_state_header_t.end.hpp"
SDK_VERIFY( struct ndis::offload_state_header_t, 0x8 );
