#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/buildpagingbuffer_copypagetableentries_t.start.hpp"
namespace dxgk
{
    struct buildpagingbuffer_copy_range_t;

    // [struct _DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES]
    // => WDK 10 (NV)
    //
    struct buildpagingbuffer_copypagetableentries_t                  
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                                     num_ranges;  //{ +0x0000    } | .NumRanges
        _m01 struct dxgk::buildpagingbuffer_copy_range_t* p_ranges;    //{ +0x0008    } | .pRanges
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGK_BUILDPAGINGBUFFER_COPYPAGETABLEENTRIES.$", 0x0, false, 0x4c710d5b29f2a14 );           
        SDK_FIXED_SIZE( buildpagingbuffer_copypagetableentries_t, 0x10 );           
    };                                                               
};
#include "magic/buildpagingbuffer_copypagetableentries_t.end.hpp"
SDK_VERIFY( struct dxgk::buildpagingbuffer_copypagetableentries_t, 0x10 );
