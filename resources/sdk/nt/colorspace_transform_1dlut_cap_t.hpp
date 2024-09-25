#pragma once
#include <sdkgen/support_library.hpp>
#include "colorspace_transform_data_cap_t.hpp"

#include "magic/colorspace_transform_1dlut_cap_t.start.hpp"
namespace nt
{
    // [struct _COLORSPACE_TRANSFORM_1DLUT_CAP]
    // => WDK 10 (NV)
    //
    struct colorspace_transform_1dlut_cap_t                                   
    {                                                                         
        // WDK 10                                                             
        //                                                                    
        _m00 uint32_t                                   number_of_lut_entries;  //{ +0x0000    } | .NumberOfLUTEntries
        _m01 struct nt::colorspace_transform_data_cap_t data_cap;               //{ +0x0004    } | .DataCap
                                                                              
        SDK_NONVOL_PROPERTIES( "_COLORSPACE_TRANSFORM_1DLUT_CAP.$", 0x0, false, 0x6732eb98d95204a9 );                      
        SDK_FIXED_SIZE( colorspace_transform_1dlut_cap_t, 0x14 );                      
    };                                                                        
};
#include "magic/colorspace_transform_1dlut_cap_t.end.hpp"
SDK_VERIFY( struct nt::colorspace_transform_1dlut_cap_t, 0x14 );
