#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/arm64_runtime_function_entry_t.start.hpp"
namespace image
{
    // [struct _IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct arm64_runtime_function_entry_t
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                            
        _m00 uint32_t begin_address;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BeginAddress
        _m01 uint32_t unwind_data;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .UnwindData
        _m02 uint2_t  flag;                //{ +0x0004@0  +0x0004@0  +0x0004@0  +0x0004@0  } | .Flag
        _m03 uint11_t function_length;     //{ +0x0004@2  +0x0004@2  +0x0004@2  +0x0004@2  } | .FunctionLength
        _m04 uint3_t  reg_f;               //{ +0x0004@13 +0x0004@13 +0x0004@13 +0x0004@13 } | .RegF
        _m05 uint4_t  reg_i;               //{ +0x0004@16 +0x0004@16 +0x0004@16 +0x0004@16 } | .RegI
        _m06 uint1_t  h;                   //{ +0x0004@20 +0x0004@20 +0x0004@20 +0x0004@20 } | .H
        _m07 uint2_t  cr;                  //{ +0x0004@21 +0x0004@21 +0x0004@21 +0x0004@21 } | .CR
        _m08 uint9_t  frame_size;          //{ +0x0004@23 +0x0004@23 +0x0004@23 +0x0004@23 } | .FrameSize
                                         
        SDK_MAGIC_PROPERTIES( "_IMAGE_ARM64_RUNTIME_FUNCTION_ENTRY.$", 0x8, true, 0x3fd3c8640dca71e1 );                
        SDK_FIXED_SIZE( arm64_runtime_function_entry_t, 0x8 );                
    };                                   
};
#include "magic/arm64_runtime_function_entry_t.end.hpp"
SDK_VERIFY( struct image::arm64_runtime_function_entry_t, 0x8 );
