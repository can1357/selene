#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/method_argument_v2_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_METHOD_ARGUMENT_V2]
    // => WDK 10 (NV)
    //
    struct method_argument_v2_t                 
    {                                           
        // WDK 10                               
        //                                      
        _m00 uint16_t               type;         //{ +0x0000    } | .Type
        _m01 uint32_t               data_length;  //{ +0x0004    } | .DataLength
        _m02 uint32_t               argument;     //{ +0x0008    } | .Argument
        _m03 sdk::array<uint8_t, 1> data;         //{ +0x0008    } | .Data
                                                
        SDK_NONVOL_PROPERTIES( "_ACPI_METHOD_ARGUMENT_V2.$", 0x0, false, 0x26b1398333606a65 );            
        SDK_FIXED_SIZE( method_argument_v2_t, 0xc );            
    };                                          
};
#include "magic/method_argument_v2_t.end.hpp"
SDK_VERIFY( struct acpi::method_argument_v2_t, 0xc );
