#pragma once
#include <sdkgen/support_library.hpp>
#include "rect_t.hpp"
#include "pointer_info_t.hpp"

#include "magic/pointer_touch_info_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_TOUCH_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_touch_info_t                        
    {                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                             
        _m00 struct tag::pointer_info_t pointer_info;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pointerInfo
        _m01 uint32_t                   touch_flags;     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .touchFlags
        _m02 uint32_t                   touch_mask;      //{ +0x0064    +0x0064    +0x0064    +0x0064    } | .touchMask
        _m03 struct tag::rect_t         rc_contact;      //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .rcContact
        _m04 struct tag::rect_t         rc_contact_raw;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .rcContactRaw
        _m05 uint32_t                   orientation;     //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .orientation
        _m06 uint32_t                   pressure;        //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .pressure
                                                       
        SDK_MAGIC_PROPERTIES( "tagPOINTER_TOUCH_INFO.$", 0x90, true, 0xabe10994d1719c7d );               
        SDK_FIXED_SIZE( pointer_touch_info_t, 0x90 );               
    };                                                 
};
#include "magic/pointer_touch_info_t.end.hpp"
SDK_VERIFY( struct tag::pointer_touch_info_t, 0x90 );
