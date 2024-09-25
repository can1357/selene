#pragma once
#include <sdkgen/support_library.hpp>
#include "device_reset_type_t.hpp"

namespace nt { struct guid_t; }

#include "magic/device_reset_interface_standard_t.start.hpp"
namespace ndis
{
    union device_bus_specific_reset_type_t;
    struct device_bus_specific_reset_info_t;

    // [struct _DEVICE_RESET_INTERFACE_STANDARD]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct device_reset_interface_standard_t                                
    {                                                                       
        using pdevice_reset_handler_t =         sdk::function<int32_t(void*, enum ndis::device_reset_type_t, uint32_t, void*)>*;                              
        using query_bus_specific_reset_info_t = sdk::function<int32_t(void*, uint32_t*, struct ndis::device_bus_specific_reset_info_t*)>*;                              
        using device_bus_specific_reset_t =     sdk::function<int32_t(void*, const struct nt::guid_t*, union ndis::device_bus_specific_reset_type_t, uint64_t, void*)>*;                              
        using get_device_reset_status_t =       sdk::function<int32_t(void*, uint8_t*, union ndis::device_bus_specific_reset_type_t*, uint64_t*)>*;                              
                                                                            
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                  
        _m00 uint16_t                         size;                           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 uint16_t                         version;                        //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Version
        _m02 void*                            context;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Context
        _m03 sdk::function<void(void*)>*      interface_reference;            //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .InterfaceReference
        _m04 sdk::function<void(void*)>*      interface_dereference;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .InterfaceDereference
        _m05 pdevice_reset_handler_t          device_reset;                   //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .DeviceReset
        _m06 uint32_t                         supported_reset_types;          //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .SupportedResetTypes
                                                                            
        // Windows 11                                                       
        //                                                                  
        _m07 query_bus_specific_reset_info_t  query_bus_specific_reset_info;  //{ +0x0038    } | .QueryBusSpecificResetInfo
        _m08 device_bus_specific_reset_t      device_bus_specific_reset;      //{ +0x0040    } | .DeviceBusSpecificReset
        _m09 get_device_reset_status_t        get_device_reset_status;        //{ +0x0048    } | .GetDeviceResetStatus
                                                                            
        SDK_NONVOL_PROPERTIES( "_DEVICE_RESET_INTERFACE_STANDARD.$", 0x38, true, 0x4749f7cd62980827 );                              
        SDK_DYNAMIC_SIZE( device_reset_interface_standard_t );                              
    };                                                                      
};
#include "magic/device_reset_interface_standard_t.end.hpp"
