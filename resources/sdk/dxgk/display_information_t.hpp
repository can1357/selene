#pragma once
#include <sdkgen/support_library.hpp>
#include "../kuser/d3dddiformat_t.hpp"

#include "magic/display_information_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_DISPLAY_INFORMATION]
    // => WDK 10 (NV)
    //
    struct display_information_t                       
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 uint32_t                   width;           //{ +0x0000    } | .Width
        _m01 uint32_t                   height;          //{ +0x0004    } | .Height
        _m02 uint32_t                   pitch;           //{ +0x0008    } | .Pitch
        _m03 enum kuser::d3dddiformat_t color_format;    //{ +0x000c    } | .ColorFormat
        _m04 int64_t                    physic_address;  //{ +0x0010    } | .PhysicAddress
        _m05 uint32_t                   target_id;       //{ +0x0018    } | .TargetId
        _m06 uint32_t                   acpi_id;         //{ +0x001c    } | .AcpiId
                                                       
        SDK_NONVOL_PROPERTIES( "_DXGK_DISPLAY_INFORMATION.$", 0x0, false, 0x2a3e098763a19336 );               
        SDK_FIXED_SIZE( display_information_t, 0x20 );               
    };                                                 
};
#include "magic/display_information_t.end.hpp"
SDK_VERIFY( struct dxgk::display_information_t, 0x20 );
