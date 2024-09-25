#pragma once
#include <sdkgen/support_library.hpp>
#include "setvidpnsourceowner1_t.hpp"

#include "magic/setvidpnsourceowner2_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETVIDPNSOURCEOWNER2]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceowner2_t                                               
    {                                                                           
        // WDK 10                                                               
        //                                                                      
        _m00 struct d3dk::mt::setvidpnsourceowner1_t version1;                    //{ +0x0000    } | .Version1
        _m01 const void**                            p_vid_pn_source_nt_handles;  //{ +0x0028    } | .pVidPnSourceNtHandles
                                                                                
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETVIDPNSOURCEOWNER2.$", 0x0, false, 0x3cc88c8d394306f8 );                           
        SDK_FIXED_SIZE( setvidpnsourceowner2_t, 0x30 );                           
    };                                                                          
};
#include "magic/setvidpnsourceowner2_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setvidpnsourceowner2_t, 0x30 );
