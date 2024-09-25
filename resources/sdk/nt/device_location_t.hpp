#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/device_location_t.start.hpp"
namespace nt
{
    // [struct _DEVICE_LOCATION]
    // => WDK 10 (NV)
    //
    struct device_location_t  
    {                         
        // WDK 10             
        //                    
        _m00 uint32_t socket;   //{ +0x0000    } | .Socket
        _m01 uint32_t slot;     //{ +0x0004    } | .Slot
        _m02 uint32_t adapter;  //{ +0x0008    } | .Adapter
        _m03 uint32_t port;     //{ +0x000c    } | .Port
        _m04 uint32_t channel;  //{ +0x0010    } | .Channel
        _m05 uint32_t device;   //{ +0x0014    } | .Device
        _m06 uint32_t target;   //{ +0x0010    } | .Target
        _m07 uint32_t lun;      //{ +0x0014    } | .Lun
                              
        SDK_NONVOL_PROPERTIES( "_DEVICE_LOCATION.$", 0x0, false, 0xb33c18cb4cd9d928 );        
        SDK_FIXED_SIZE( device_location_t, 0x18 );        
    };                        
};
#include "magic/device_location_t.end.hpp"
SDK_VERIFY( struct nt::device_location_t, 0x18 );
