#pragma once
#include <sdkgen/support_library.hpp>
#include "brightness_level_t.hpp"
#include "brightness_nit_ranges_t.hpp"
#include "brightness_interface_version_t.hpp"

#include "magic/panel_query_brightness_ranges_t.start.hpp"
namespace nt
{
    // [struct _PANEL_QUERY_BRIGHTNESS_RANGES]
    // => WDK 10 (NV)
    //
    struct panel_query_brightness_ranges_t                            
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 enum nt::brightness_interface_version_t version;           //{ +0x0000    } | .Version
        _m01 struct nt::brightness_level_t           brightness_level;  //{ +0x0004    } | .BrightnessLevel
        _m02 struct nt::brightness_nit_ranges_t      nit_ranges;        //{ +0x0004    } | .NitRanges
                                                                      
        SDK_NONVOL_PROPERTIES( "_PANEL_QUERY_BRIGHTNESS_RANGES.$", 0x0, false, 0x226cffb33e87943f );                 
        SDK_FIXED_SIZE( panel_query_brightness_ranges_t, 0xd0 );                 
    };                                                                
};
#include "magic/panel_query_brightness_ranges_t.end.hpp"
SDK_VERIFY( struct nt::panel_query_brightness_ranges_t, 0xd0 );
