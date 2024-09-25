#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "../wwan/set_register_state_t.hpp"

#include "magic/wwan_set_register_state_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_WWAN_SET_REGISTER_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wwan_set_register_state_t                              
    {                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                        
        _m00 struct ndis::object_header_t      header;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 struct wwan::set_register_state_t set_register_state;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .SetRegisterState
                                                                  
        SDK_MAGIC_PROPERTIES( "_NDIS_WWAN_SET_REGISTER_STATE.$", 0x1c, true, 0xaeabb008884f1204 );                   
        SDK_FIXED_SIZE( wwan_set_register_state_t, 0x1c );                   
    };                                                            
};
#include "magic/wwan_set_register_state_t.end.hpp"
SDK_VERIFY( struct ndis::wwan_set_register_state_t, 0x1c );
