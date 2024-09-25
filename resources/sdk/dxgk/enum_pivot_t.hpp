#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enum_pivot_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_ENUM_PIVOT]
    // => WDK 10 (NV)
    //
    struct enum_pivot_t                
    {                                  
        // WDK 10                      
        //                             
        _m00 uint32_t vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t vid_pn_target_id;  //{ +0x0004    } | .VidPnTargetId
                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_ENUM_PIVOT.$", 0x0, false, 0x82290f2eb8a3a21d );                 
        SDK_FIXED_SIZE( enum_pivot_t, 0x8 );                 
    };                                 
};
#include "magic/enum_pivot_t.end.hpp"
SDK_VERIFY( struct dxgk::enum_pivot_t, 0x8 );
