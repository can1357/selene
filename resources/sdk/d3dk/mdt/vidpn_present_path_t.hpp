#pragma once
#include <sdkgen/support_library.hpp>
#include "_2dregion_t.hpp"
#include "gamma_ramp_t.hpp"
#include "color_basis_t.hpp"
#include "color_coeff_dynamic_ranges_t.hpp"
#include "vidpn_present_path_content_t.hpp"
#include "vidpn_present_path_importance_t.hpp"
#include "vidpn_present_path_copyprotection_t.hpp"
#include "vidpn_present_path_transformation_t.hpp"

#include "magic/vidpn_present_path_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIDPN_PRESENT_PATH]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct vidpn_present_path_t                                                                       
    {                                                                                                 
        using content_transformation_t = struct d3dk::mdt::vidpn_present_path_transformation_t;                                         
        using copy_protection_t =        struct d3dk::mdt::vidpn_present_path_copyprotection_t;                                         
                                                                                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                         
        //                                                                                            
        _m00 uint32_t                                        vid_pn_source_id;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VidPnSourceId
        _m01 uint32_t                                        vid_pn_target_id;                          //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VidPnTargetId
        _m02 enum d3dk::mdt::vidpn_present_path_importance_t importance_ordinal;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ImportanceOrdinal
        _m03 content_transformation_t                        content_transformation;                    //{ +0x000c    +0x000c    +0x000c    +0x000c    +0x000c    } | .ContentTransformation
        _m04 struct d3dk::mdt::_2dregion_t                   visible_from_active_tl_offset;             //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .VisibleFromActiveTLOffset
        _m05 struct d3dk::mdt::_2dregion_t                   visible_from_active_br_offset;             //{ +0x0024    +0x0024    +0x0024    +0x0024    +0x0024    } | .VisibleFromActiveBROffset
        _m06 enum d3dk::mdt::color_basis_t                   vid_pn_target_color_basis;                 //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .VidPnTargetColorBasis
        _m07 struct d3dk::mdt::color_coeff_dynamic_ranges_t  vid_pn_target_color_coeff_dynamic_ranges;  //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .VidPnTargetColorCoeffDynamicRanges
        _m08 enum d3dk::mdt::vidpn_present_path_content_t    content;                                   //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .Content
        _m09 copy_protection_t                               copy_protection;                           //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .CopyProtection
        _m10 struct d3dk::mdt::gamma_ramp_t                  gamma_ramp;                                //{ +0x0150    +0x0150    +0x0150    +0x0150    +0x0150    } | .GammaRamp
                                                                                                      
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIDPN_PRESENT_PATH.$", 0x168, true, 0x6ee703b1b50b1b63 );                                         
        SDK_FIXED_SIZE( vidpn_present_path_t, 0x168 );                                                
    };                                                                                                
};
#include "magic/vidpn_present_path_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::vidpn_present_path_t, 0x168 );
