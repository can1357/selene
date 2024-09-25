#pragma once
#include <sdkgen/support_library.hpp>
#include "method_argument_v2_t.hpp"

#include "magic/eval_output_buffer_v2_t.start.hpp"
namespace acpi
{
    // [struct _ACPI_EVAL_OUTPUT_BUFFER_V2]
    // => WDK 10 (NV)
    //
    struct eval_output_buffer_v2_t                                      
    {                                                                   
        // WDK 10                                                       
        //                                                              
        _m00 uint32_t                                         signature;  //{ +0x0000    } | .Signature
        _m01 uint32_t                                         length;     //{ +0x0004    } | .Length
        _m02 uint32_t                                         count;      //{ +0x0008    } | .Count
        _m03 sdk::array<struct acpi::method_argument_v2_t, 1> argument;   //{ +0x000c    } | .Argument
                                                                        
        SDK_NONVOL_PROPERTIES( "_ACPI_EVAL_OUTPUT_BUFFER_V2.$", 0x0, false, 0xe7295cf7e7b4da75 );          
        SDK_FIXED_SIZE( eval_output_buffer_v2_t, 0x18 );                
    };                                                                  
};
#include "magic/eval_output_buffer_v2_t.end.hpp"
SDK_VERIFY( struct acpi::eval_output_buffer_v2_t, 0x18 );
