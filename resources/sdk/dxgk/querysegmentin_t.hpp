#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentflags_t.hpp"

#include "magic/querysegmentin_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYSEGMENTIN]
    // => WDK 10 (NV)
    //
    struct querysegmentin_t                                
    {                                                      
        // WDK 10                                          
        //                                                 
        _m00 int64_t                     agp_aperture_base;  //{ +0x0000    } | .AgpApertureBase
        _m01 int64_t                     agp_aperture_size;  //{ +0x0008    } | .AgpApertureSize
        _m02 struct dxgk::segmentflags_t agp_flags;          //{ +0x0010    } | .AgpFlags
                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYSEGMENTIN.$", 0x0, false, 0x7ea5a289f1074620 );                  
        SDK_FIXED_SIZE( querysegmentin_t, 0x18 );                  
    };                                                     
};
#include "magic/querysegmentin_t.end.hpp"
SDK_VERIFY( struct dxgk::querysegmentin_t, 0x18 );
