#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/outputdupl_release_frame_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPL_RELEASE_FRAME]
    // => WDK 10 (NV)
    //
    struct outputdupl_release_frame_t    
    {                                    
        // WDK 10                        
        //                               
        _m00 uint32_t h_adapter;           //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;    //{ +0x0004    } | .VidPnSourceId
        _m02 uint32_t next_key_mutex_idx;  //{ +0x0008    } | .NextKeyMutexIdx
                                         
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPL_RELEASE_FRAME.$", 0x0, false, 0x612ef129118f5974 );                   
        SDK_FIXED_SIZE( outputdupl_release_frame_t, 0xc );                   
    };                                   
};
#include "magic/outputdupl_release_frame_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputdupl_release_frame_t, 0xc );
