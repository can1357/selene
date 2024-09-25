#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

#include "magic/free_display_t.start.hpp"
namespace nt
{
    // [struct _FREE_DISPLAY]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct free_display_t                          
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                         
        _m00 uint32_t             real_vector_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RealVectorSize
        _m01 uint32_t             hint;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Hint
        _m02 struct rtl::bitmap_t display;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Display
                                                   
        SDK_MAGIC_PROPERTIES( "_FREE_DISPLAY.$", 0x18, true, 0x957fcd7058fe0911 );                 
        SDK_FIXED_SIZE( free_display_t, 0x18 );                 
    };                                             
};
#include "magic/free_display_t.end.hpp"
SDK_VERIFY( struct nt::free_display_t, 0x18 );
