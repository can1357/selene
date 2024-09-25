#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/eval_input_buffer_v2_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_INPUT_BUFFER_V2]
    // => WDK 10 (NV)
    //
    struct eval_input_buffer_v2_t                        
    {                                                    
        // WDK 10                                        
        //                                               
        _m00 uint32_t               signature;             //{ +0x0000    } | .Signature
        _m01 sdk::array<uint8_t, 4> method_name;           //{ +0x0004    } | .MethodName
        _m02 uint32_t               method_name_as_ulong;  //{ +0x0004    } | .MethodNameAsUlong
                                                         
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_INPUT_BUFFER_V2.$", 0x0, false, 0x303e2036f5d8f642 );                     
        SDK_FIXED_SIZE( eval_input_buffer_v2_t, 0x8 );                     
    };                                                   
};
#include "magic/eval_input_buffer_v2_t.end.hpp"
SDK_VERIFY( struct acpi::eval_input_buffer_v2_t, 0x8 );
