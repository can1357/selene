#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/diag_display_scanout_buffer_histogram_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAG_DISPLAY_SCANOUT_BUFFER_HISTOGRAM]
    // => WDK 10 (NV)
    //
    struct diag_display_scanout_buffer_histogram_t
    {                                             
        // WDK 10                    
        //                           
        _m00 int32_t min_pixel_value;               //{ +0x0000    } | .MinPixelValue
        _m01 int32_t max_pixel_value;               //{ +0x0004    } | .MaxPixelValue
                                                  
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAG_DISPLAY_SCANOUT_BUFFER_HISTOGRAM.$", 0x0, false, 0x2d93d18781358ffc );                
        SDK_FIXED_SIZE( diag_display_scanout_buffer_histogram_t, 0x8 );                
    };                                            
};
#include "magic/diag_display_scanout_buffer_histogram_t.end.hpp"
SDK_VERIFY( struct dxgk::diag_display_scanout_buffer_histogram_t, 0x8 );
