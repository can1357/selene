#pragma once
#include <sdkgen/support_library.hpp>
#include "vidpnsourceowner_type_t.hpp"

#include "magic/setvidpnsourceowner_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETVIDPNSOURCEOWNER]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceowner_t                                               
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint32_t                                      h_device;             //{ +0x0000    } | .hDevice
        _m01 const enum d3dk::mt::vidpnsourceowner_type_t* p_type;               //{ +0x0008    } | .pType
        _m02 const uint32_t*                               p_vid_pn_source_id;   //{ +0x0010    } | .pVidPnSourceId
        _m03 uint32_t                                      vid_pn_source_count;  //{ +0x0018    } | .VidPnSourceCount
                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETVIDPNSOURCEOWNER.$", 0x0, false, 0xc82a8e33c9f312ab );                    
        SDK_FIXED_SIZE( setvidpnsourceowner_t, 0x20 );                         
    };                                                                         
};
#include "magic/setvidpnsourceowner_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setvidpnsourceowner_t, 0x20 );
