#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_bus_reset_request_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_BUS_RESET_REQUEST]
    // => WDK 10 (NV)
    //
    struct storage_bus_reset_request_t
    {                                 
        // WDK 10            
        //                   
        _m00 uint8_t path_id;           //{ +0x0000    } | .PathId
                                      
        SDK_NONVOL_PROPERTIES( "_STORAGE_BUS_RESET_REQUEST.$", 0x0, false, 0xeb75f7a447d35d5 );        
        SDK_FIXED_SIZE( storage_bus_reset_request_t, 0x1 );        
    };                                
};
#include "magic/storage_bus_reset_request_t.end.hpp"
SDK_VERIFY( struct nt::storage_bus_reset_request_t, 0x1 );
