#pragma once
#include <sdkgen/support_library.hpp>
#include "outputdupl_frameinfo_t.hpp"

#include "magic/outputdupl_get_frameinfo_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_GET_FRAMEINFO]
    // => WDK 10 (NV)
    //
    struct outputdupl_get_frameinfo_t                                 
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 uint32_t                                h_adapter;         //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                vid_pn_source_id;  //{ +0x0004    } | .VidPnSourceId
        _m02 struct d3dk::mt::outputdupl_frameinfo_t frame_info;        //{ +0x0008    } | .FrameInfo
                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_GET_FRAMEINFO.$", 0x0, false, 0x154190d57f002e4c );                 
        SDK_FIXED_SIZE( outputdupl_get_frameinfo_t, 0x38 );                 
    };                                                                
};
#include "magic/outputdupl_get_frameinfo_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_get_frameinfo_t, 0x38 );
