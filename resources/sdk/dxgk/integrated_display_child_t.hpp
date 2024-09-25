#pragma once
#include <sdkgen/support_library.hpp>
#include "../d3dk/mdt/video_output_technology_t.hpp"

#include "magic/integrated_display_child_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_INTEGRATED_DISPLAY_CHILD]
    // => WDK 10 (NV)
    //
    struct integrated_display_child_t                                       
    {                                                                       
        // WDK 10                                                           
        //                                                                  
        _m00 enum d3dk::mdt::video_output_technology_t interface_technology;  //{ +0x0000    } | .InterfaceTechnology
        _m01 uint16_t                                  descriptor_length;     //{ +0x0004    } | .DescriptorLength
                                                                            
        SDK_NONVOL_PROPERTIES( "_DXGK_INTEGRATED_DISPLAY_CHILD.$", 0x0, false, 0xb2b9742b0367f661 );                     
        SDK_FIXED_SIZE( integrated_display_child_t, 0x8 );                     
    };                                                                      
};
#include "magic/integrated_display_child_t.end.hpp"
SDK_VERIFY( struct dxgk::integrated_display_child_t, 0x8 );
