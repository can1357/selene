#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/method_argument_v1_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_METHOD_ARGUMENT_V1]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct method_argument_v1_t                 
    {                                           
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint16_t               type;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint16_t               data_length;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DataLength
        _m02 uint32_t               argument;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Argument
        _m03 sdk::array<uint8_t, 1> data;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Data
                                                
        SDK_NONVOL_PROPERTIES( "_ACPI_METHOD_ARGUMENT_V1.$", 0x8, true, 0x1343836e8875cc47 );            
        SDK_FIXED_SIZE( method_argument_v1_t, 0x8 );            
    };                                          
};
#include "magic/method_argument_v1_t.end.hpp"
SDK_VERIFY( struct acpi::method_argument_v1_t, 0x8 );
