#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eval_input_buffer_v2_ex_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_INPUT_BUFFER_V2_EX]
    // => WDK 10 (NV)
    //
    struct eval_input_buffer_v2_ex_t           
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t              signature;    //{ +0x0000    } | .Signature
        _m01 sdk::array<char, 256> method_name;  //{ +0x0004    } | .MethodName
                                               
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_INPUT_BUFFER_V2_EX.$", 0x0, false, 0xfb68f36f932d164c );            
        SDK_FIXED_SIZE( eval_input_buffer_v2_ex_t, 0x104 );            
    };                                         
};
#include "magic/eval_input_buffer_v2_ex_t.end.hpp"
SDK_VERIFY( struct acpi::eval_input_buffer_v2_ex_t, 0x104 );
