#pragma once
#include <sdkgen/support_library.hpp>
#include "color_basis_t.hpp"
#include "mode_preference_t.hpp"
#include "video_signal_info_t.hpp"
#include "color_coeff_dynamic_ranges_t.hpp"
#include "monitor_capabilities_origin_t.hpp"

#include "magic/monitor_source_mode_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_MONITOR_SOURCE_MODE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct monitor_source_mode_t                                                       
    {                                                                                  
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                             
        _m00 uint32_t                                       id;                          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Id
        _m01 struct d3dk::mdt::video_signal_info_t          video_signal_info;           //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .VideoSignalInfo
        _m02 enum d3dk::mdt::color_basis_t                  color_basis;                 //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .ColorBasis
        _m03 struct d3dk::mdt::color_coeff_dynamic_ranges_t color_coeff_dynamic_ranges;  //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .ColorCoeffDynamicRanges
        _m04 enum d3dk::mdt::monitor_capabilities_origin_t  origin;                      //{ +0x0054    +0x0054    +0x0054    +0x0054    +0x0054    } | .Origin
        _m05 enum d3dk::mdt::mode_preference_t              preference;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .Preference
                                                                                       
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_MONITOR_SOURCE_MODE.$", 0x60, true, 0x9fdc0412c984c886 );                           
        SDK_FIXED_SIZE( monitor_source_mode_t, 0x60 );                                 
    };                                                                                 
};
#include "magic/monitor_source_mode_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::monitor_source_mode_t, 0x60 );
