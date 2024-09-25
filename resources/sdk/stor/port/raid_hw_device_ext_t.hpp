#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/raid_hw_device_ext_t.start.hpp"
namespace stor::port
{
    struct raid_miniport_t;

    // [struct _RAID_HW_DEVICE_EXT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct raid_hw_device_ext_t                                      
    {                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                           
        _m00 struct stor::port::raid_miniport_t* miniport;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Miniport
        _m01 sdk::array<uint8_t>                 hw_device_extension;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .HwDeviceExtension
                                                                     
        SDK_MAGIC_PROPERTIES( "_RAID_HW_DEVICE_EXT.$", 0x10, true, 0x200aa2e028f94a36 );                    
        SDK_FIXED_SIZE( raid_hw_device_ext_t, 0x10 );                    
    };                                                               
};
#include "magic/raid_hw_device_ext_t.end.hpp"
SDK_VERIFY( struct stor::port::raid_hw_device_ext_t, 0x10 );
