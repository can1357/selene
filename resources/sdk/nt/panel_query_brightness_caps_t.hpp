#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_interface_version_t.hpp"

#include "magic/panel_query_brightness_caps_t.start.hpp"
namespace nt
{
    // [struct _PANEL_QUERY_BRIGHTNESS_CAPS]
    // => WDK 10 (NV)
    //
    struct panel_query_brightness_caps_t                             
    {                                                                
        // WDK 10                                                    
        //                                                           
        _m00 enum nt::brightness_interface_version_t version;          //{ +0x0000    } | .Version
        _m01 uint1_t                                 smooth;           //{ +0x0004@0  } | .Smooth
        _m02 uint1_t                                 adaptive;         //{ +0x0004@1  } | .Adaptive
        _m03 uint1_t                                 nits_calibrated;  //{ +0x0004@2  } | .NitsCalibrated
        _m04 uint32_t                                value;            //{ +0x0004    } | .Value
                                                                     
        SDK_NONVOL_PROPERTIES( "_PANEL_QUERY_BRIGHTNESS_CAPS.$", 0x0, false, 0xa391ec8d84347354 );                
        SDK_FIXED_SIZE( panel_query_brightness_caps_t, 0x8 );                
    };                                                               
};
#include "magic/panel_query_brightness_caps_t.end.hpp"
SDK_VERIFY( struct nt::panel_query_brightness_caps_t, 0x8 );
