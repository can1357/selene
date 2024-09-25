#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/storage_hotplug_info_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_HOTPLUG_INFO]
    // => WDK 10 (NV)
    //
    struct storage_hotplug_info_t                 
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t size;                         //{ +0x0000    } | .Size
        _m01 uint8_t  media_removable;              //{ +0x0004    } | .MediaRemovable
        _m02 uint8_t  media_hotplug;                //{ +0x0005    } | .MediaHotplug
        _m03 uint8_t  device_hotplug;               //{ +0x0006    } | .DeviceHotplug
        _m04 uint8_t  write_cache_enable_override;  //{ +0x0007    } | .WriteCacheEnableOverride
                                                  
        SDK_NONVOL_PROPERTIES( "_STORAGE_HOTPLUG_INFO.$", 0x0, false, 0x1fbe773a6f8a2d0a );                            
        SDK_FIXED_SIZE( storage_hotplug_info_t, 0x8 );                            
    };                                            
};
#include "magic/storage_hotplug_info_t.end.hpp"
SDK_VERIFY( struct nt::storage_hotplug_info_t, 0x8 );
