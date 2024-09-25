#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/get_device_specific_data_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_GET_DEVICE_SPECIFIC_DATA]
    // => WDK 10 (NV)
    //
    struct get_device_specific_data_t                    
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t               signature;             //{ +0x0000    } | .Signature
        _m01 struct nt::guid_t      section;               //{ +0x0004    } | .Section
        _m02 uint32_t               property_name_length;  //{ +0x0014    } | .PropertyNameLength
        _m03 sdk::array<uint8_t, 1> property_name;         //{ +0x0018    } | .PropertyName
                                                         
        SDK_NONVOL_PROPERTIES( "_ACPI_GET_DEVICE_SPECIFIC_DATA.$", 0x0, false, 0x3d743045fea9b188 );                     
        SDK_FIXED_SIZE( get_device_specific_data_t, 0x1c );                     
    };                                                   
};
#include "magic/get_device_specific_data_t.end.hpp"
SDK_VERIFY( struct acpi::get_device_specific_data_t, 0x1c );
