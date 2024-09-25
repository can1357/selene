#pragma once
#include <sdkgen/support_library.hpp>
#include "present_rgns_t.hpp"
#include "outputduplpresentflags_t.hpp"

#include "magic/outputduplpresent_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPLPRESENT]
    // => WDK 10 (NV)
    //
    struct outputduplpresent_t                                                 
    {                                                                          
        // WDK 10                                                              
        //                                                                     
        _m00 uint32_t                                  h_context;                //{ +0x0000    } | .hContext
        _m01 uint32_t                                  h_source;                 //{ +0x0004    } | .hSource
        _m02 uint32_t                                  vid_pn_source_id;         //{ +0x0008    } | .VidPnSourceId
        _m03 uint32_t                                  broadcast_context_count;  //{ +0x000c    } | .BroadcastContextCount
        _m04 sdk::array<uint32_t, 64>                  broadcast_context;        //{ +0x0010    } | .BroadcastContext
        _m05 struct d3dk::mt::present_rgns_t           present_regions;          //{ +0x0110    } | .PresentRegions
        _m06 struct d3dk::mt::outputduplpresentflags_t flags;                    //{ +0x0130    } | .Flags
        _m07 uint32_t                                  h_indirect_context;       //{ +0x0134    } | .hIndirectContext
                                                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPLPRESENT.$", 0x0, false, 0x4d446d5a70e4019e );                        
        SDK_FIXED_SIZE( outputduplpresent_t, 0x138 );                          
    };                                                                         
};
#include "magic/outputduplpresent_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputduplpresent_t, 0x138 );
