#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mode_parameter_header_t.start.hpp"
namespace nt
{
    // [struct _MODE_PARAMETER_HEADER]
    // => WDK 10 (NV)
    //
    struct mode_parameter_header_t             
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint8_t mode_data_length;           //{ +0x0000    } | .ModeDataLength
        _m01 uint8_t medium_type;                //{ +0x0001    } | .MediumType
        _m02 uint8_t device_specific_parameter;  //{ +0x0002    } | .DeviceSpecificParameter
        _m03 uint8_t block_descriptor_length;    //{ +0x0003    } | .BlockDescriptorLength
                                               
        SDK_NONVOL_PROPERTIES( "_MODE_PARAMETER_HEADER.$", 0x0, false, 0xb983ac1bfbe64ffe );                          
        SDK_FIXED_SIZE( mode_parameter_header_t, 0x4 );                          
    };                                         
};
#include "magic/mode_parameter_header_t.end.hpp"
SDK_VERIFY( struct nt::mode_parameter_header_t, 0x4 );
