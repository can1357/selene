#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3d/ddi/pool_t.hpp"
#include "../d3d/ddi/rational_t.hpp"
#include "../d3d/ddi/rotation_t.hpp"
#include "../kuser/d3dddiformat_t.hpp"
#include "d3dddimultisample_type_t.hpp"
#include "../d3d/ddi/resourceflags_t.hpp"

namespace d3d::ddi { struct surfaceinfo_t; }

#include "magic/d3dddiarg_createresource_t.start.hpp"
namespace nt
{
    // [struct _D3DDDIARG_CREATERESOURCE]
    // => WDK 10 (NV)
    //
    struct d3dddiarg_createresource_t                                  
    {                                                                  
        // WDK 10                                                      
        //                                                             
        _m00 enum kuser::d3dddiformat_t            format;               //{ +0x0000    } | .Format
        _m01 enum d3d::ddi::pool_t                 pool;                 //{ +0x0004    } | .Pool
        _m02 enum nt::d3dddimultisample_type_t     multisample_type;     //{ +0x0008    } | .MultisampleType
        _m03 uint32_t                              multisample_quality;  //{ +0x000c    } | .MultisampleQuality
        _m04 const struct d3d::ddi::surfaceinfo_t* p_surf_list;          //{ +0x0010    } | .pSurfList
        _m05 uint32_t                              surf_count;           //{ +0x0018    } | .SurfCount
        _m06 uint32_t                              mip_levels;           //{ +0x001c    } | .MipLevels
        _m07 uint32_t                              fvf;                  //{ +0x0020    } | .Fvf
        _m08 uint32_t                              vid_pn_source_id;     //{ +0x0024    } | .VidPnSourceId
        _m09 struct d3d::ddi::rational_t           refresh_rate;         //{ +0x0028    } | .RefreshRate
        _m10 void*                                 h_resource;           //{ +0x0030    } | .hResource
        _m11 struct d3d::ddi::resourceflags_t      flags;                //{ +0x0038    } | .Flags
        _m12 enum d3d::ddi::rotation_t             rotation;             //{ +0x003c    } | .Rotation
                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DDDIARG_CREATERESOURCE.$", 0x0, false, 0xf61f122b54ced594 );                    
        SDK_FIXED_SIZE( d3dddiarg_createresource_t, 0x40 );                    
    };                                                                 
};
#include "magic/d3dddiarg_createresource_t.end.hpp"
SDK_VERIFY( struct nt::d3dddiarg_createresource_t, 0x40 );
