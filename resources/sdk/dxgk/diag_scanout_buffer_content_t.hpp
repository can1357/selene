#pragma once
#include <sdkgen/support_library.hpp>
#include "diag_display_scanout_buffer_crc_t.hpp"
#include "diag_display_scanout_buffer_histogram_t.hpp"

#include "magic/diag_scanout_buffer_content_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DIAG_SCANOUT_BUFFER_CONTENT]
    // => WDK 10 (NV)
    //
    struct diag_scanout_buffer_content_t                                           
    {                                                                              
        using scanout_buffer_histogram_t = struct dxgk::diag_display_scanout_buffer_histogram_t;                         
                                                                                   
        // WDK 10                                                                  
        //                                                                         
        _m00 enum dxgk::diag_display_scanout_buffer_crc_t scanout_buffer_crc;        //{ +0x0000    } | .ScanoutBufferCrc
        _m01 scanout_buffer_histogram_t                   scanout_buffer_histogram;  //{ +0x0004    } | .ScanoutBufferHistogram
                                                                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_DIAG_SCANOUT_BUFFER_CONTENT.$", 0x0, false, 0x828ff81b63355e4e );                         
        SDK_FIXED_SIZE( diag_scanout_buffer_content_t, 0xc );                         
    };                                                                             
};
#include "magic/diag_scanout_buffer_content_t.end.hpp"
SDK_VERIFY( struct dxgk::diag_scanout_buffer_content_t, 0xc );
