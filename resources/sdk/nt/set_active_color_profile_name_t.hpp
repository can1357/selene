#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_active_color_profile_name_t.start.hpp"
namespace nt
{
    // [struct _SET_ACTIVE_COLOR_PROFILE_NAME]
    // => WDK 10 (NV)
    //
    struct set_active_color_profile_name_t             
    {                                                  
        // WDK 10                                      
        //                                             
        _m00 sdk::array<wchar_t, 1> color_profile_name;  //{ +0x0000    } | .ColorProfileName
                                                       
        SDK_NONVOL_PROPERTIES( "_SET_ACTIVE_COLOR_PROFILE_NAME.$", 0x0, false, 0x6a76de0e6777f2d );                   
        SDK_FIXED_SIZE( set_active_color_profile_name_t, 0x2 );                   
    };                                                 
};
#include "magic/set_active_color_profile_name_t.end.hpp"
SDK_VERIFY( struct nt::set_active_color_profile_name_t, 0x2 );
