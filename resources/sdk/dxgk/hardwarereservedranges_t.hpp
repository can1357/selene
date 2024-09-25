#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hardwarereservedranges_t.start.hpp"
namespace dxgk
{
    struct physical_memory_range_t;

    // [struct _DXGK_HARDWARERESERVEDRANGES]
    // => WDK 10 (NV)
    //
    struct hardwarereservedranges_t                                  
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                              num_ranges;         //{ +0x0000    } | .NumRanges
        _m01 struct dxgk::physical_memory_range_t* p_physical_ranges;  //{ +0x0008    } | .pPhysicalRanges
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_HARDWARERESERVEDRANGES.$", 0x0, false, 0x22af53a2724af6c5 );                  
        SDK_FIXED_SIZE( hardwarereservedranges_t, 0x10 );                  
    };                                                               
};
#include "magic/hardwarereservedranges_t.end.hpp"
SDK_VERIFY( struct dxgk::hardwarereservedranges_t, 0x10 );
