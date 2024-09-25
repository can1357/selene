#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/service_trigger_custom_state_id_t.start.hpp"
namespace win
{
    // [struct SERVICE_TRIGGER_CUSTOM_STATE_ID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_trigger_custom_state_id_t
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                
        _m00 sdk::array<uint32_t, 2> data;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Data
                                            
        SDK_MAGIC_PROPERTIES( "SERVICE_TRIGGER_CUSTOM_STATE_ID.$", 0x8, true, 0xf6cf1be4ff48cb52 );     
        SDK_FIXED_SIZE( service_trigger_custom_state_id_t, 0x8 );     
    };                                      
};
#include "magic/service_trigger_custom_state_id_t.end.hpp"
SDK_VERIFY( struct win::service_trigger_custom_state_id_t, 0x8 );
