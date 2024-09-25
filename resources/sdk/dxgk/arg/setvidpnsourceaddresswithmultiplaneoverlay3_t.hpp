#pragma once
#include <sdkgen/support_library.hpp>
#include "../setvidpnsourceaddress_input_flags_t.hpp"
#include "../setvidpnsourceaddress_output_flags_t.hpp"

namespace dxgk { struct hdr_metadata_t;                        }
namespace dxgk { struct multiplane_overlay_plane3_t;           }
namespace dxgk { struct multiplane_overlay_post_composition_t; }

#include "magic/setvidpnsourceaddresswithmultiplaneoverlay3_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3]
    // => WDK 10 (NV)
    //
    struct setvidpnsourceaddresswithmultiplaneoverlay3_t                         
    {                                                                            
        using output_flags_t =       struct dxgk::setvidpnsourceaddress_output_flags_t;                   
        using p_post_composition_t = struct dxgk::multiplane_overlay_post_composition_t*;                   
                                                                                 
        // WDK 10                                                                
        //                                                                       
        _m00 uint32_t                                         vid_pn_source_id;    //{ +0x0000    } | .VidPnSourceId
        _m01 struct dxgk::setvidpnsourceaddress_input_flags_t input_flags;         //{ +0x0004    } | .InputFlags
        _m02 output_flags_t                                   output_flags;        //{ +0x0008    } | .OutputFlags
        _m03 uint32_t                                         plane_count;         //{ +0x000c    } | .PlaneCount
        _m04 struct dxgk::multiplane_overlay_plane3_t**       pp_planes;           //{ +0x0010    } | .ppPlanes
        _m05 p_post_composition_t                             p_post_composition;  //{ +0x0018    } | .pPostComposition
        _m06 uint32_t                                         duration;            //{ +0x0020    } | .Duration
        _m07 struct dxgk::hdr_metadata_t*                     p_hdr_meta_data;     //{ +0x0028    } | .pHDRMetaData
                                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_SETVIDPNSOURCEADDRESSWITHMULTIPLANEOVERLAY3.$", 0x0, false, 0x9e78e52b41c6f08c );                   
        SDK_FIXED_SIZE( setvidpnsourceaddresswithmultiplaneoverlay3_t, 0x30 );                   
    };                                                                           
};
#include "magic/setvidpnsourceaddresswithmultiplaneoverlay3_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::setvidpnsourceaddresswithmultiplaneoverlay3_t, 0x30 );
