#pragma once
#include <sdkgen/support_library.hpp>
#include "pointer_info_t.hpp"

#include "magic/pointer_pen_info_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_PEN_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_pen_info_t                        
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                           
        _m00 struct tag::pointer_info_t pointer_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pointerInfo
        _m01 uint32_t                   pen_flags;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .penFlags
        _m02 uint32_t                   pen_mask;      //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .penMask
        _m03 uint32_t                   pressure;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .pressure
        _m04 uint32_t                   rotation;      //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .rotation
        _m05 int32_t                    tilt_x;        //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .tiltX
        _m06 int32_t                    tilt_y;        //{ +0x0074    +0x0074    +0x0074    +0x0074    } | .tiltY
                                                     
        SDK_MAGIC_PROPERTIES( "tagPOINTER_PEN_INFO.$", 0x78, true, 0x351204ab0f444484 );             
        SDK_FIXED_SIZE( pointer_pen_info_t, 0x78 );             
    };                                               
};
#include "magic/pointer_pen_info_t.end.hpp"
SDK_VERIFY( struct tag::pointer_pen_info_t, 0x78 );
