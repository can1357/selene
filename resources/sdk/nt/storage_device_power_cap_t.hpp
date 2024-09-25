#pragma once
#include <sdkgen/support_library.hpp>
#include "storage_device_power_cap_units_t.hpp"

#include "magic/storage_device_power_cap_t.start.hpp"
namespace nt
{
    // [struct _STORAGE_DEVICE_POWER_CAP]
    // => WDK 10 (NV)
    //
    struct storage_device_power_cap_t                            
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                                  version;    //{ +0x0000    } | .Version
        _m01 uint32_t                                  size;       //{ +0x0004    } | .Size
        _m02 enum nt::storage_device_power_cap_units_t units;      //{ +0x0008    } | .Units
        _m03 uint64_t                                  max_power;  //{ +0x0010    } | .MaxPower
                                                                 
        SDK_NONVOL_PROPERTIES( "_STORAGE_DEVICE_POWER_CAP.$", 0x0, false, 0x95859d7519ff4d22 );          
        SDK_FIXED_SIZE( storage_device_power_cap_t, 0x18 );          
    };                                                           
};
#include "magic/storage_device_power_cap_t.end.hpp"
SDK_VERIFY( struct nt::storage_device_power_cap_t, 0x18 );
