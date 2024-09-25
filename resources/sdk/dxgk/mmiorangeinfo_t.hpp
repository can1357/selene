#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mmiorangeinfo_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_MMIORANGEINFO]
    // => WDK 10 (NV)
    //
    struct mmiorangeinfo_t                          
    {                                               
        // WDK 10                                   
        //                                          
        _m00 uint64_t base_page_number;               //{ +0x0000    } | .BasePageNumber
        _m01 uint64_t base_physical_page_number;      //{ +0x0008    } | .BasePhysicalPageNumber
        _m02 uint8_t  base_physical_resource_number;  //{ +0x0010    } | .BasePhysicalResourceNumber
        _m03 uint8_t  intercept_reads;                //{ +0x0011    } | .InterceptReads
        _m04 uint8_t  intercept_writes;               //{ +0x0012    } | .InterceptWrites
        _m05 uint32_t page_count;                     //{ +0x0014    } | .PageCount
                                                    
        SDK_NONVOL_PROPERTIES( "_DXGK_MMIORANGEINFO.$", 0x0, false, 0xa3c809256f22eeae );                              
        SDK_FIXED_SIZE( mmiorangeinfo_t, 0x18 );                              
    };                                              
};
#include "magic/mmiorangeinfo_t.end.hpp"
SDK_VERIFY( struct dxgk::mmiorangeinfo_t, 0x18 );
