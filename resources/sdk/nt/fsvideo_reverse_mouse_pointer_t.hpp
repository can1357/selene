#pragma once
#include <sdkgen/support_library.hpp>
#include "fscntl_screen_info_t.hpp"

#include "magic/fsvideo_reverse_mouse_pointer_t.start.hpp"
namespace nt
{
    // [struct _FSVIDEO_REVERSE_MOUSE_POINTER]
    // => WDK 10 (NV)
    //
    struct fsvideo_reverse_mouse_pointer_t           
    {                                                
        // WDK 10                                    
        //                                           
        _m00 struct nt::fscntl_screen_info_t screen;   //{ +0x0000    } | .Screen
        _m01 uint32_t                        dw_type;  //{ +0x000c    } | .dwType
                                                     
        SDK_NONVOL_PROPERTIES( "_FSVIDEO_REVERSE_MOUSE_POINTER.$", 0x0, false, 0x69aa2088236af361 );        
        SDK_FIXED_SIZE( fsvideo_reverse_mouse_pointer_t, 0x10 );        
    };                                               
};
#include "magic/fsvideo_reverse_mouse_pointer_t.end.hpp"
SDK_VERIFY( struct nt::fsvideo_reverse_mouse_pointer_t, 0x10 );
