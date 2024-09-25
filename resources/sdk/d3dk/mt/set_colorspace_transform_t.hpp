#pragma once
#include <sdkgen/support_library.hpp>
#include "../../nt/luid_t.hpp"
#include "../../d3d/ddi/gammaramp_type_t.hpp"

namespace d3dk::mdt { struct _3x4_colorspace_transform_t; }

#include "magic/set_colorspace_transform_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SET_COLORSPACE_TRANSFORM]
    // => WDK 10 (NV)
    //
    struct set_colorspace_transform_t                                               
    {                                                                               
        // WDK 10                                                                   
        //                                                                          
        _m00 struct nt::luid_t                              adapter_luid;             //{ +0x0000    } | .AdapterLuid
        _m01 uint32_t                                       vid_pn_target_id;         //{ +0x0008    } | .VidPnTargetId
        _m02 enum d3d::ddi::gammaramp_type_t                type;                     //{ +0x000c    } | .Type
        _m03 uint32_t                                       size;                     //{ +0x0010    } | .Size
        _m04 struct d3dk::mdt::_3x4_colorspace_transform_t* p_color_space_transform;  //{ +0x0018    } | .pColorSpaceTransform
                                                                                    
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SET_COLORSPACE_TRANSFORM.$", 0x0, false, 0xa258043a174000ed );                        
        SDK_FIXED_SIZE( set_colorspace_transform_t, 0x20 );                         
    };                                                                              
};
#include "magic/set_colorspace_transform_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::set_colorspace_transform_t, 0x20 );
