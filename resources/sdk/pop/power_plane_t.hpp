#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/power_plane_t.start.hpp"
namespace pop
{
    struct device_power_profile_t;

    // [struct _POP_POWER_PLANE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct power_plane_t                                                    
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                                                  
        _m00 nt::unicode_view                      power_plane_id;            //{ +0x0000    +0x0000    +0x0000    } | .PowerPlaneId
        _m01 uint64_t                              lock;                      //{ +0x0010    +0x0010    +0x0010    } | .Lock
        _m02 uint8_t                               old_irql;                  //{ +0x0018    +0x0018    +0x0018    } | .OldIrql
        _m03 volatile int32_t                      device_power_mw;           //{ +0x001c    +0x001c    +0x001c    } | .DevicePowerMw
        _m04 void*                                 pmax_handle;               //{ +0x0020    +0x0020    +0x0020    } | .PmaxHandle
        _m05 sdk::function<void(void*, uint32_t)>* notify_device_power_draw;  //{ +0x0028    +0x0028    +0x0028    } | .NotifyDevicePowerDraw
        _m06 uint64_t                              device_count;              //{ +0x0030    +0x0030    +0x0030    } | .DeviceCount
        _m07 struct pop::device_power_profile_t**  devices;                   //{ +0x0038    +0x0038    +0x0038    } | .Devices
                                                                            
        SDK_MAGIC_PROPERTIES( "_POP_POWER_PLANE.$", 0x40, true, 0xc9e5089a04dde1cc );                         
        SDK_FIXED_SIZE( power_plane_t, 0x40 );                              
    };                                                                      
};
#include "magic/power_plane_t.end.hpp"
SDK_VERIFY( struct pop::power_plane_t, 0x40 );
