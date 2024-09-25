#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "video_desc_t.hpp"

#include "magic/deinterlace_query_mode_caps_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_DeinterlaceQueryModeCaps]
    // => WDK 10 (NV)
    //
    struct deinterlace_query_mode_caps_t          
    {                                             
        // WDK 10                                 
        //                                        
        _m00 uint32_t                  size;        //{ +0x0000    } | .Size
        _m01 struct nt::guid_t         guid;        //{ +0x0004    } | .Guid
        _m02 struct dxva::video_desc_t video_desc;  //{ +0x0014    } | .VideoDesc
                                                  
        SDK_NONVOL_PROPERTIES( "_DXVA_DeinterlaceQueryModeCaps.$", 0x0, false, 0x40ea7f03cf5bf9ce );           
        SDK_FIXED_SIZE( deinterlace_query_mode_caps_t, 0x38 );           
    };                                            
};
#include "magic/deinterlace_query_mode_caps_t.end.hpp"
SDK_VERIFY( struct dxva::deinterlace_query_mode_caps_t, 0x38 );
