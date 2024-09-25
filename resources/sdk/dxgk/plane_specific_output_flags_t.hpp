#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/plane_specific_output_flags_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS]
    // => WDK 10 (NV)
    //
    struct plane_specific_output_flags_t          
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint1_t  flip_converted_to_immediate;  //{ +0x0000@0  } | .FlipConvertedToImmediate
        _m01 uint1_t  post_present_needed;          //{ +0x0000@1  } | .PostPresentNeeded
        _m02 uint1_t  hsync_interrupt_completion;   //{ +0x0000@2  } | .HsyncInterruptCompletion
        _m03 uint32_t value;                        //{ +0x0000    } | .Value
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_PLANE_SPECIFIC_OUTPUT_FLAGS.$", 0x0, false, 0xf8576239e2729052 );                            
        SDK_FIXED_SIZE( plane_specific_output_flags_t, 0x4 );                            
    };                                            
};
#include "magic/plane_specific_output_flags_t.end.hpp"
SDK_VERIFY( struct dxgk::plane_specific_output_flags_t, 0x4 );
