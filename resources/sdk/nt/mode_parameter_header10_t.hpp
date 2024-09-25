#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_parameter_header10_t.start.hpp"
namespace nt
{
    // [struct _MODE_PARAMETER_HEADER10]
    // => WDK 10 (NV)
    //
    struct mode_parameter_header10_t                          
    {                                                         
        // WDK 10                                             
        //                                                    
        _m00 sdk::array<uint8_t, 2> mode_data_length;           //{ +0x0000    } | .ModeDataLength
        _m01 uint8_t                medium_type;                //{ +0x0002    } | .MediumType
        _m02 uint8_t                device_specific_parameter;  //{ +0x0003    } | .DeviceSpecificParameter
        _m03 sdk::array<uint8_t, 2> block_descriptor_length;    //{ +0x0006    } | .BlockDescriptorLength
                                                              
        SDK_NONVOL_PROPERTIES( "_MODE_PARAMETER_HEADER10.$", 0x0, false, 0x2b94a2b9ebd020a7 );                          
        SDK_FIXED_SIZE( mode_parameter_header10_t, 0x8 );                          
    };                                                        
};
#include "magic/mode_parameter_header10_t.end.hpp"
SDK_VERIFY( struct nt::mode_parameter_header10_t, 0x8 );
