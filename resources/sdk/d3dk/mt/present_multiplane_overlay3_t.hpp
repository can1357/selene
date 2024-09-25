#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/hdr_metadata_type_t.hpp"
#include "present_multiplane_overlay_flags_t.hpp"

#include "magic/present_multiplane_overlay3_t.start.hpp"
namespace d3dk::mt
{
    struct multiplane_overlay3_t;
    struct multiplane_overlay_post_composition_t;

    // [struct _D3DKMT_PRESENT_MULTIPLANE_OVERLAY3]
    // => WDK 10 (NV)
    //
    struct present_multiplane_overlay3_t                                  
    {                                                                     
        using flags_t =              struct d3dk::mt::present_multiplane_overlay_flags_t;                    
        using p_post_composition_t = struct d3dk::mt::multiplane_overlay_post_composition_t*;                    
                                                                          
        // WDK 10                                                         
        //                                                                
        _m00 uint32_t                                 h_adapter;            //{ +0x0000    } | .hAdapter
        _m01 uint32_t                                 context_count;        //{ +0x0004    } | .ContextCount
        _m02 uint32_t*                                p_context_list;       //{ +0x0008    } | .pContextList
        _m03 uint32_t                                 vid_pn_source_id;     //{ +0x0010    } | .VidPnSourceId
        _m04 uint32_t                                 present_count;        //{ +0x0014    } | .PresentCount
        _m05 flags_t                                  flags;                //{ +0x0018    } | .Flags
        _m06 uint32_t                                 present_plane_count;  //{ +0x001c    } | .PresentPlaneCount
        _m07 struct d3dk::mt::multiplane_overlay3_t** pp_present_planes;    //{ +0x0020    } | .ppPresentPlanes
        _m08 p_post_composition_t                     p_post_composition;   //{ +0x0028    } | .pPostComposition
        _m09 uint32_t                                 duration;             //{ +0x0030    } | .Duration
        _m10 enum d3d::ddi::hdr_metadata_type_t       hdr_meta_data_type;   //{ +0x0034    } | .HDRMetaDataType
        _m11 uint32_t                                 hdr_meta_data_size;   //{ +0x0038    } | .HDRMetaDataSize
        _m12 const void*                              p_hdr_meta_data;      //{ +0x0040    } | .pHDRMetaData
                                                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMT_PRESENT_MULTIPLANE_OVERLAY3.$", 0x0, false, 0x91cf5bca37f9a3f9 );                    
        SDK_FIXED_SIZE( present_multiplane_overlay3_t, 0x48 );                    
    };                                                                    
};
#include "magic/present_multiplane_overlay3_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::present_multiplane_overlay3_t, 0x48 );
