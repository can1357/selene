#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/destroy_outputdupl_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DESTROY_OUTPUTDUPL]
    // => WDK 10 (NV)
    //
    struct destroy_outputdupl_t              
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t h_adapter;               //{ +0x0000    } | .hAdapter
        _m01 uint32_t vid_pn_source_id;        //{ +0x0004    } | .VidPnSourceId
        _m02 int32_t  b_destroy_all_contexts;  //{ +0x0008    } | .bDestroyAllContexts
                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DESTROY_OUTPUTDUPL.$", 0x0, false, 0x7a6a61a6170793a4 );                       
        SDK_FIXED_SIZE( destroy_outputdupl_t, 0xc );                       
    };                                       
};
#include "magic/destroy_outputdupl_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::destroy_outputdupl_t, 0xc );
