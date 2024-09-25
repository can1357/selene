#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/set_context_state_t.hpp"

#include "magic/wwan_set_context_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SET_CONTEXT_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_set_context_state_t                             
    {                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                      
        _m00 struct ndis::object_header_t     header;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::set_context_state_t set_context_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SetContextState
                                                                
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SET_CONTEXT_STATE.$", 0x4ec, true, 0x4a9d7aff94fc4e42 );                  
        SDK_FIXED_SIZE( wwan_set_context_state_t, 0x4ec );                  
    };                                                          
};
#include "magic/wwan_set_context_state_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_set_context_state_t, 0x4ec );
