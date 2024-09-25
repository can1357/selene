#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mitigatedrangeinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MITIGATEDRANGEINFO]
    // => WDK 10 (NV)
    //
    struct mitigatedrangeinfo_t        
    {                                  
        // WDK 10                      
        //                             
        _m00 uint64_t base_page_number;  //{ +0x0000    } | .BasePageNumber
        _m01 uint32_t page_count;        //{ +0x0008    } | .PageCount
        _m02 uint8_t  intercept_reads;   //{ +0x000c    } | .InterceptReads
        _m03 uint8_t  intercept_writes;  //{ +0x000d    } | .InterceptWrites
                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_MITIGATEDRANGEINFO.$", 0x0, false, 0x38cafb8ed6d21aba );                 
        SDK_FIXED_SIZE( mitigatedrangeinfo_t, 0x10 );                 
    };                                 
};
#include "magic/mitigatedrangeinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::mitigatedrangeinfo_t, 0x10 );
