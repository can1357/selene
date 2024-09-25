#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/framebuffersavearea_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_FRAMEBUFFERSAVEAREA]
    // => WDK 10 (NV)
    //
    struct framebuffersavearea_t   
    {                              
        // WDK 10                  
        //                         
        _m00 uint64_t maximum_size;  //{ +0x0000    } | .MaximumSize
                                   
        SDK_NONVOL_PROPERTIES( "_DXGK_FRAMEBUFFERSAVEAREA.$", 0x0, false, 0xeefe02fbd0144f87 );             
        SDK_FIXED_SIZE( framebuffersavearea_t, 0x8 );             
    };                             
};
#include "magic/framebuffersavearea_t.end.hpp"
SDK_VERIFY( struct dxgk::framebuffersavearea_t, 0x8 );
