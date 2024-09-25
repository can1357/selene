#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/unwind_code_t.start.hpp"
namespace win
{
    // [union _UNWIND_CODE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union unwind_code_t                            
    {                                              
        struct u0_epilogue_code_t                  
        {                                          
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                     
            _m03 uint8_t offset_low;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .OffsetLow
            _m04 uint4_t unwind_op;                  //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .UnwindOp
            _m05 uint4_t offset_high;                //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .OffsetHigh
                                                   
            SDK_MAGIC_PROPERTIES( "_UNWIND_CODE.EpilogueCode.$", 0x2, true, 0x3c1a36b3407c5255 );                          
            SDK_FIXED_SIZE( u0_epilogue_code_t, 0x2 );                          
        };                                         
                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                         
        _m00 uint8_t                 code_offset;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CodeOffset
        _m01 uint4_t                 unwind_op;      //{ +0x0001@0  +0x0001@0  +0x0001@0  +0x0001@0  } | .UnwindOp
        _m02 uint4_t                 op_info;        //{ +0x0001@4  +0x0001@4  +0x0001@4  +0x0001@4  } | .OpInfo
        _m06 u0_epilogue_code_t      epilogue_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EpilogueCode
        _m07 uint16_t                frame_offset;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FrameOffset
                                                   
        SDK_MAGIC_PROPERTIES( "_UNWIND_CODE.$", 0x2, true, 0x7dc36050af7fa2d9 );              
        SDK_FIXED_SIZE( unwind_code_t, 0x2 );              
    };                                             
};
#include "magic/unwind_code_t.end.hpp"
SDK_VERIFY( struct win::unwind_code_t::u0_epilogue_code_t, 0x2 );
SDK_VERIFY( union win::unwind_code_t, 0x2 );
