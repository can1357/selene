#pragma once
#include <sdkgen/support_library.hpp>
#include "colorimetry_t.hpp"
#include "integrateddisplayflags_t.hpp"
#include "monitorlinkinfo_capabilities_t.hpp"
#include "../d3dk/mdt/video_signal_info_t.hpp"

#include "magic/queryintegrateddisplayout_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_QUERYINTEGRATEDDISPLAYOUT]
    // => WDK 10 (NV)
    //
    struct queryintegrateddisplayout_t                                     
    {                                                                      
        // WDK 10                                                          
        //                                                                 
        _m00 union dxgk::integrateddisplayflags_t       flags;               //{ +0x0000    } | .Flags
        _m01 struct d3dk::mdt::video_signal_info_t      native_timing;       //{ +0x0008    } | .NativeTiming
        _m02 union dxgk::monitorlinkinfo_capabilities_t link_capabilities;   //{ +0x0040    } | .LinkCapabilities
        _m03 struct dxgk::colorimetry_t                 colorimetry;         //{ +0x0044    } | .Colorimetry
        _m04 uint8_t                                    display_technology;  //{ +0x0078    } | .DisplayTechnology
        _m05 uint8_t                                    intended_usage;      //{ +0x0079    } | .IntendedUsage
        _m06 uint8_t                                    instance;            //{ +0x007a    } | .Instance
        _m07 uint8_t                                    descriptor_type;     //{ +0x007b    } | .DescriptorType
        _m08 sdk::array<uint8_t, 1>                     descriptor;          //{ +0x007c    } | .Descriptor
                                                                           
        SDK_NONVOL_PROPERTIES( "_DXGK_QUERYINTEGRATEDDISPLAYOUT.$", 0x0, false, 0x3972f3e9be8496e9 );                   
        SDK_FIXED_SIZE( queryintegrateddisplayout_t, 0x80 );                   
    };                                                                     
};
#include "magic/queryintegrateddisplayout_t.end.hpp"
SDK_VERIFY( struct dxgk::queryintegrateddisplayout_t, 0x80 );
