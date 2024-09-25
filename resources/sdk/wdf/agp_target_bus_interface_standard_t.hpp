#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/agp_target_bus_interface_standard_t.start.hpp"
namespace wdf
{
    // [struct _AGP_TARGET_BUS_INTERFACE_STANDARD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct agp_target_bus_interface_standard_t                 
    {                                                          
        using pget_set_device_data_t = sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                      
        using pget_set_device_data_t = sdk::function<uint32_t(void*, uint32_t, void*, uint32_t, uint32_t)>*;                      
                                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                     
        _m00 uint16_t                    size;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                    version;                //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                       context;                //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>* interface_reference;    //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>* interface_dereference;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 pget_set_device_data_t      set_bus_data;           //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .SetBusData
        _m06 pget_set_device_data_t      get_bus_data;           //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .GetBusData
        _m07 uint8_t                     capability_id;          //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .CapabilityID
                                                               
        SDK_NONVOL_PROPERTIES( "_AGP_TARGET_BUS_INTERFACE_STANDARD.$", 0x38, true, 0xa7686d30c80e973d );                      
        SDK_FIXED_SIZE( agp_target_bus_interface_standard_t, 0x38 );                      
    };                                                         
};
#include "magic/agp_target_bus_interface_standard_t.end.hpp"
SDK_VERIFY( struct wdf::agp_target_bus_interface_standard_t, 0x38 );
