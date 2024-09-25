#pragma once
#include <sdkgen/support_library.hpp>
#include "../stor/port/storage_powerup_reason_type_t.hpp"

#include "magic/storage_idle_powerup_reason_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_IDLE_POWERUP_REASON]
    // => WDK 10 (NV)
    //
    struct storage_idle_powerup_reason_t                                   
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 uint32_t                                       version;         //{ +0x0000    } | .Version
        _m01 uint32_t                                       size;            //{ +0x0004    } | .Size
        _m02 enum stor::port::storage_powerup_reason_type_t powerup_reason;  //{ +0x0008    } | .PowerupReason
                                                                           
        SDK_NONVOL_PROPERTIES( "_STORAGE_IDLE_POWERUP_REASON.$", 0x0, false, 0xe4b294253a3d5037 );               
        SDK_FIXED_SIZE( storage_idle_powerup_reason_t, 0xc );               
    };                                                                     
};
#include "magic/storage_idle_powerup_reason_t.end.hpp"
SDK_VERIFY( struct nt::storage_idle_powerup_reason_t, 0xc );
