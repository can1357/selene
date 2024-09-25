#pragma once
#include <sdkgen/support_library.hpp>
#include "service_trigger_custom_state_id_t.hpp"

#include "magic/service_custom_system_state_change_data_item_t.start.hpp"
namespace win
{
    // [struct _SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct service_custom_system_state_change_data_item_t                  
    {                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                                 
        _m00 struct win::service_trigger_custom_state_id_t custom_state_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CustomStateId
        _m01 uint32_t                                      data_offset;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .DataOffset
        _m02 sdk::array<uint8_t, 1>                        data;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Data
                                                                           
        SDK_MAGIC_PROPERTIES( "_SERVICE_CUSTOM_SYSTEM_STATE_CHANGE_DATA_ITEM.$", 0x8, true, 0x7871de0534ecc53c );                
        SDK_FIXED_SIZE( service_custom_system_state_change_data_item_t, 0x8 );                
    };                                                                     
};
#include "magic/service_custom_system_state_change_data_item_t.end.hpp"
SDK_VERIFY( struct win::service_custom_system_state_change_data_item_t, 0x8 );
