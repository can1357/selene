#pragma once
#include <sdkgen/support_library.hpp>
#include "../../d3d/ddi/rational_t.hpp"
#include "../../d3d/ddi/rotation_t.hpp"
#include "../../kuser/d3dddiformat_t.hpp"
#include "../mdt/displaymode_flags_t.hpp"
#include "../../d3d/ddi/video_signal_scanline_ordering_t.hpp"

#include "magic/displaymode_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_DISPLAYMODE]
    // => WDK 10 (NV)
    //
    struct displaymode_t                                                          
    {                                                                             
        // WDK 10                                                                 
        //                                                                        
        _m00 uint32_t                                        width;                 //{ +0x0000    } | .Width
        _m01 uint32_t                                        height;                //{ +0x0004    } | .Height
        _m02 enum kuser::d3dddiformat_t                      format;                //{ +0x0008    } | .Format
        _m03 uint32_t                                        integer_refresh_rate;  //{ +0x000c    } | .IntegerRefreshRate
        _m04 struct d3d::ddi::rational_t                     refresh_rate;          //{ +0x0010    } | .RefreshRate
        _m05 enum d3d::ddi::video_signal_scanline_ordering_t scan_line_ordering;    //{ +0x0018    } | .ScanLineOrdering
        _m06 enum d3d::ddi::rotation_t                       display_orientation;   //{ +0x001c    } | .DisplayOrientation
        _m07 uint32_t                                        display_fixed_output;  //{ +0x0020    } | .DisplayFixedOutput
        _m08 struct d3dk::mdt::displaymode_flags_t           flags;                 //{ +0x0024    } | .Flags
                                                                                  
        SDK_NONVOL_PROPERTIES( "_D3DKMT_DISPLAYMODE.$", 0x0, false, 0xe19a9a7d61e66d0f );                     
        SDK_FIXED_SIZE( displaymode_t, 0x2c );                                    
    };                                                                            
};
#include "magic/displaymode_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::displaymode_t, 0x2c );
