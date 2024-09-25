#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eval_input_buffer_simple_string_v2_ex_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX]
    // => WDK 10 (NV)
    //
    struct eval_input_buffer_simple_string_v2_ex_t
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t               signature;      //{ +0x0000    } | .Signature
        _m01 sdk::array<char, 256>  method_name;    //{ +0x0004    } | .MethodName
        _m02 uint32_t               string_length;  //{ +0x0104    } | .StringLength
        _m03 sdk::array<uint8_t, 1> string;         //{ +0x0108    } | .String
                                                  
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_INPUT_BUFFER_SIMPLE_STRING_V2_EX.$", 0x0, false, 0x35549ed483d38468 );              
        SDK_FIXED_SIZE( eval_input_buffer_simple_string_v2_ex_t, 0x10c );              
    };                                            
};
#include "magic/eval_input_buffer_simple_string_v2_ex_t.end.hpp"
SDK_VERIFY( struct acpi::eval_input_buffer_simple_string_v2_ex_t, 0x10c );
