#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "device_bus_specific_reset_type_t.hpp"

#include "magic/device_bus_specific_reset_info_t.start.hpp"
namespace ndis
{
    // [struct _DEVICE_BUS_SPECIFIC_RESET_INFO]
    // => Windows 11
    //
    struct device_bus_specific_reset_info_t                                    
    {                                                                          
        // Windows 11                                                          
        //                                                                     
        _m00 struct nt::guid_t                            bus_type_guid;         //{ +0x0000    } | .BusTypeGuid
        _m01 union ndis::device_bus_specific_reset_type_t reset_type_supported;  //{ +0x0010    } | .ResetTypeSupported
                                                                               
        SDK_MAGIC_PROPERTIES( "_DEVICE_BUS_SPECIFIC_RESET_INFO.$", 0x0, false, 0xc326c4fbf2883158 );                     
        SDK_FIXED_SIZE( device_bus_specific_reset_info_t, 0x18 );                     
    };                                                                         
};
#include "magic/device_bus_specific_reset_info_t.end.hpp"
SDK_VERIFY( struct ndis::device_bus_specific_reset_info_t, 0x18 );
