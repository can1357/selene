#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eval_input_buffer_simple_integer_v2_ex_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX]
    // => WDK 10 (NV)
    //
    struct eval_input_buffer_simple_integer_v2_ex_t 
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint32_t              signature;         //{ +0x0000    } | .Signature
        _m01 sdk::array<char, 256> method_name;       //{ +0x0004    } | .MethodName
        _m02 uint64_t              integer_argument;  //{ +0x0108    } | .IntegerArgument
                                                    
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_INTEGER_V2_EX.$", 0x0, false, 0x458be47d82521a22 );                 
        SDK_FIXED_SIZE( eval_input_buffer_simple_integer_v2_ex_t, 0x110 );                 
    };                                              
};
#include "magic/eval_input_buffer_simple_integer_v2_ex_t.end.hpp"
SDK_VERIFY( struct acpi::eval_input_buffer_simple_integer_v2_ex_t, 0x110 );
