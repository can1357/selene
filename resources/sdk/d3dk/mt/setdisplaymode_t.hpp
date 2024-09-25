#pragma once
#include <sdkgen/support_library.hpp>
#include "setdisplaymode_flags_t.hpp"
#include "../../d3d/ddi/rotation_t.hpp"
#include "../../d3d/ddi/video_signal_scanline_ordering_t.hpp"

#include "magic/setdisplaymode_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_SETDISPLAYMODE]
    // => WDK 10 (NV)
    //
    struct setdisplaymode_t                                                                  
    {                                                                                        
        // WDK 10                                                                            
        //                                                                                   
        _m00 uint32_t                                        h_device;                         //{ +0x0000    } | .hDevice
        _m01 uint32_t                                        h_primary_allocation;             //{ +0x0004    } | .hPrimaryAllocation
        _m02 enum d3d::ddi::video_signal_scanline_ordering_t scan_line_ordering;               //{ +0x0008    } | .ScanLineOrdering
        _m03 enum d3d::ddi::rotation_t                       display_orientation;              //{ +0x000c    } | .DisplayOrientation
        _m04 uint32_t                                        private_driver_format_attribute;  //{ +0x0010    } | .PrivateDriverFormatAttribute
        _m05 struct d3dk::mt::setdisplaymode_flags_t         flags;                            //{ +0x0014    } | .Flags
                                                                                             
        SDK_NONVOL_PROPERTIES( "_D3DKMT_SETDISPLAYMODE.$", 0x0, false, 0x81018285182b2ce4 );                                
        SDK_FIXED_SIZE( setdisplaymode_t, 0x1c );                                            
    };                                                                                       
};
#include "magic/setdisplaymode_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::setdisplaymode_t, 0x1c );
