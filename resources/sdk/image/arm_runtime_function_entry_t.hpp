#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm_runtime_function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ARM_RUNTIME_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm_runtime_function_entry_t
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t begin_address;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BeginAddress
        _m01 uint32_t unwind_data;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UnwindData
        _m02 uint2_t  flag;              //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Flag
        _m03 uint11_t function_length;   //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .FunctionLength
        _m04 uint2_t  ret;               //{ +0x0004@13 +0x0004@13 +0x0004@13 +0x0004@13 } | .Ret
        _m05 uint1_t  h;                 //{ +0x0004@15 +0x0004@15 +0x0004@15 +0x0004@15 } | .H
        _m06 uint3_t  reg;               //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .Reg
        _m07 uint1_t  r;                 //{ +0x0004@19 +0x0004@19 +0x0004@19 +0x0004@19 } | .R
        _m08 uint1_t  l;                 //{ +0x0004@20 +0x0004@20 +0x0004@20 +0x0004@20 } | .L
        _m09 uint1_t  c;                 //{ +0x0004@21 +0x0004@21 +0x0004@21 +0x0004@21 } | .C
        _m10 uint10_t stack_adjust;      //{ +0x0004@22 +0x0004@22 +0x0004@22 +0x0004@22 } | .StackAdjust
                                       
        SDK_MAGIC_PROPERTIES( "_IMAGE_ARM_RUNTIME_FUNCTION_ENTRY.$", 0x8, true, 0xe03d6a70d013f642 );                
        SDK_FIXED_SIZE( arm_runtime_function_entry_t, 0x8 );                
    };                                 
};
#include "magic/arm_runtime_function_entry_t.end.hpp"
SDK_VERIFY( struct image::arm_runtime_function_entry_t, 0x8 );
