#pragma once
#include <sdkgen/support_library.hpp>
#include "method_argument_v1_t.hpp"

#include "magic/eval_input_buffer_complex_v1_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1]
    // => WDK 10 (NV)
    //
    struct eval_input_buffer_complex_v1_t                                          
    {                                                                              
        // WDK 10                                                                  
        //                                                                         
        _m00 uint32_t                                         signature;             //{ +0x0000    } | .Signature
        _m01 sdk::array<uint8_t, 4>                           method_name;           //{ +0x0004    } | .MethodName
        _m02 uint32_t                                         method_name_as_ulong;  //{ +0x0004    } | .MethodNameAsUlong
        _m03 uint32_t                                         size;                  //{ +0x0008    } | .Size
        _m04 uint32_t                                         argument_count;        //{ +0x000c    } | .ArgumentCount
        _m05 sdk::array<struct acpi::method_argument_v1_t, 1> argument;              //{ +0x0010    } | .Argument
                                                                                   
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_INPUT_BUFFER_COMPLEX_V1.$", 0x0, false, 0x46cf5b9ca7194062 );                     
        SDK_FIXED_SIZE( eval_input_buffer_complex_v1_t, 0x18 );                     
    };                                                                             
};
#include "magic/eval_input_buffer_complex_v1_t.end.hpp"
SDK_VERIFY( struct acpi::eval_input_buffer_complex_v1_t, 0x18 );
