#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/coord_t.hpp"

#include "magic/fsvideo_screen_information_t.start.hpp"
namespace nt
{
    // [struct _FSVIDEO_SCREEN_INFORMATION]
    // => WDK 10 (NV)
    //
    struct fsvideo_screen_information_t      
    {                                        
        // WDK 10                            
        //                                   
        _m00 struct win::coord_t screen_size;  //{ +0x0000    } | .ScreenSize
        _m01 struct win::coord_t font_size;    //{ +0x0004    } | .FontSize
                                             
        SDK_NONVOL_PROPERTIES( "_FSVIDEO_SCREEN_INFORMATION.$", 0x0, false, 0x3c09d87fd6602a18 );            
        SDK_FIXED_SIZE( fsvideo_screen_information_t, 0x8 );            
    };                                       
};
#include "magic/fsvideo_screen_information_t.end.hpp"
SDK_VERIFY( struct nt::fsvideo_screen_information_t, 0x8 );
