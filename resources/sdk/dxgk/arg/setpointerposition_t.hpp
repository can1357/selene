#pragma once
#include <sdkgen/support_library.hpp>
#include "../setpointerpositionflags_t.hpp"

#include "magic/setpointerposition_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETPOINTERPOSITION]
    // => WDK 10 (NV)
    //
    struct setpointerposition_t                                      
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 uint32_t                               vid_pn_source_id;  //{ +0x0000    } | .VidPnSourceId
        _m01 int32_t                                x;                 //{ +0x0004    } | .X
        _m02 int32_t                                y;                 //{ +0x0008    } | .Y
        _m03 struct dxgk::setpointerpositionflags_t flags;             //{ +0x000c    } | .Flags
                                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETPOINTERPOSITION.$", 0x0, false, 0x2fa8eadacd81257c );                 
        SDK_FIXED_SIZE( setpointerposition_t, 0x10 );                 
    };                                                               
};
#include "magic/setpointerposition_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setpointerposition_t, 0x10 );
