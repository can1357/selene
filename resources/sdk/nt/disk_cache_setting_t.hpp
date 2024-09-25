#pragma once
#include <sdkgen/support_library.hpp>
#include "disk_cache_state_t.hpp"

#include "magic/disk_cache_setting_t.start.hpp"
namespace nt
{
    // [struct _DISK_CACHE_SETTING]
    // => WDK 10 (NV)
    //
    struct disk_cache_setting_t                             
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                    version;             //{ +0x0000    } | .Version
        _m01 enum nt::disk_cache_state_t state;               //{ +0x0004    } | .State
        _m02 uint8_t                     is_power_protected;  //{ +0x0008    } | .IsPowerProtected
                                                            
        SDK_NONVOL_PROPERTIES( "_DISK_CACHE_SETTING.$", 0x0, false, 0xf54654639031682f );                   
        SDK_FIXED_SIZE( disk_cache_setting_t, 0xc );                   
    };                                                      
};
#include "magic/disk_cache_setting_t.end.hpp"
SDK_VERIFY( struct nt::disk_cache_setting_t, 0xc );
