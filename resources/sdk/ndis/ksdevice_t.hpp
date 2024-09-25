#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/device_power_state_t.hpp"
#include "../nt/system_power_state_t.hpp"

namespace nt { struct device_object_t; }

#include "magic/ksdevice_t.start.hpp"
namespace ndis
{
    struct ksdevice_descriptor_t;

    // [struct _KSDEVICE]
    // => Windows 10 v1607
    //
    struct ksdevice_t                                                           
    {                                                                           
        // Windows 10 v1607                                                     
        //                                                                      
        _m00 const struct ndis::ksdevice_descriptor_t* descriptor;                //{ +0x0000    } | .Descriptor
        _m01 void*                                     bag;                       //{ +0x0008    } | .Bag
        _m02 void*                                     context;                   //{ +0x0010    } | .Context
        _m03 struct nt::device_object_t*               functional_device_object;  //{ +0x0018    } | .FunctionalDeviceObject
        _m04 struct nt::device_object_t*               physical_device_object;    //{ +0x0020    } | .PhysicalDeviceObject
        _m05 struct nt::device_object_t*               next_device_object;        //{ +0x0028    } | .NextDeviceObject
        _m06 uint8_t                                   started;                   //{ +0x0030    } | .Started
        _m07 enum nt::system_power_state_t             system_power_state;        //{ +0x0034    } | .SystemPowerState
        _m08 enum nt::device_power_state_t             device_power_state;        //{ +0x0038    } | .DevicePowerState
                                                                                
        SDK_MAGIC_PROPERTIES( "_KSDEVICE.$", 0x0, false, 0x96b48a235f80fdef );                         
        SDK_FIXED_SIZE( ksdevice_t, 0x40 );                                     
    };                                                                          
};
#include "magic/ksdevice_t.end.hpp"
SDK_VERIFY( struct ndis::ksdevice_t, 0x40 );
