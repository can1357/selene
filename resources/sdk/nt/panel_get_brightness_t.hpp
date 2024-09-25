#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_interface_version_t.hpp"

#include "magic/panel_get_brightness_t.start.hpp"
namespace nt
{
    // [struct _PANEL_GET_BRIGHTNESS]
    // => WDK 10 (NV)
    //
    struct panel_get_brightness_t                                         
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 enum nt::brightness_interface_version_t version;               //{ +0x0000    } | .Version
        _m01 uint8_t                                 level;                 //{ +0x0004    } | .Level
        _m02 uint32_t                                current_in_millinits;  //{ +0x0004    } | .CurrentInMillinits
        _m03 uint32_t                                target_in_millinits;   //{ +0x0008    } | .TargetInMillinits
                                                                          
        SDK_NONVOL_PROPERTIES( "_PANEL_GET_BRIGHTNESS.$", 0x0, false, 0x8eb24a4d4e18fff3 );                     
        SDK_FIXED_SIZE( panel_get_brightness_t, 0xc );                     
    };                                                                    
};
#include "magic/panel_get_brightness_t.end.hpp"
SDK_VERIFY( struct nt::panel_get_brightness_t, 0xc );
