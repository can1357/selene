#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/bus_data_type_t.hpp"
#include "../nt/interface_type_t.hpp"

#include "magic/bus_information_t.start.hpp"
namespace hal
{
    // [struct _HAL_BUS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct bus_information_t                              
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                
        _m00 enum nt::interface_type_t bus_type;            //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BusType
        _m01 enum nt::bus_data_type_t  configuration_type;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .ConfigurationType
        _m02 uint32_t                  bus_number;          //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .BusNumber
                                                          
        SDK_NONVOL_PROPERTIES( "_HAL_BUS_INFORMATION.$", 0x10, true, 0x2c84ef5ce10bb376 );                   
        SDK_FIXED_SIZE( bus_information_t, 0x10 );                   
    };                                                    
};
#include "magic/bus_information_t.end.hpp"
SDK_VERIFY( struct hal::bus_information_t, 0x10 );
