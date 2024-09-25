#pragma once
#include <sdkgen/support_library.hpp>
#include "../win/coord_t.hpp"

#include "magic/fscntl_screen_info_t.start.hpp"
namespace nt
{
    // [struct _FSCNTL_SCREEN_INFO]
    // => WDK 10 (NV)
    //
    struct fscntl_screen_info_t                    
    {                                              
        // WDK 10                                  
        //                                         
        _m00 struct win::coord_t position;           //{ +0x0000    } | .Position
        _m01 struct win::coord_t screen_size;        //{ +0x0004    } | .ScreenSize
        _m02 uint32_t            n_number_of_chars;  //{ +0x0008    } | .nNumberOfChars
                                                   
        SDK_NONVOL_PROPERTIES( "_FSCNTL_SCREEN_INFO.$", 0x0, false, 0xe30e6574fc9e13fc );                  
        SDK_FIXED_SIZE( fscntl_screen_info_t, 0xc );                  
    };                                             
};
#include "magic/fscntl_screen_info_t.end.hpp"
SDK_VERIFY( struct nt::fscntl_screen_info_t, 0xc );
