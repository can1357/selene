#pragma once
#include <sdkgen/support_library.hpp>
#include "method_argument_v2_t.hpp"

#include "magic/eval_input_buffer_complex_v2_ex_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX]
    // => WDK 10 (NV)
    //
    struct eval_input_buffer_complex_v2_ex_t                                 
    {                                                                        
        // WDK 10                                                            
        //                                                                   
        _m00 uint32_t                                         signature;       //{ +0x0000    } | .Signature
        _m01 sdk::array<char, 256>                            method_name;     //{ +0x0004    } | .MethodName
        _m02 uint32_t                                         size;            //{ +0x0104    } | .Size
        _m03 uint32_t                                         argument_count;  //{ +0x0108    } | .ArgumentCount
        _m04 sdk::array<struct acpi::method_argument_v2_t, 1> argument;        //{ +0x010c    } | .Argument
                                                                             
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V2_EX.$", 0x0, false, 0x8c7074b18470b7af );               
        SDK_FIXED_SIZE( eval_input_buffer_complex_v2_ex_t, 0x118 );               
    };                                                                       
};
#include "magic/eval_input_buffer_complex_v2_ex_t.end.hpp"
SDK_VERIFY( struct acpi::eval_input_buffer_complex_v2_ex_t, 0x118 );
