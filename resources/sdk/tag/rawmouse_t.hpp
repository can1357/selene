#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rawmouse_t.start.hpp"
namespace tag
{
    // [struct tagRAWMOUSE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rawmouse_t                      
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                 
        _m00 uint16_t us_flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .usFlags
        _m01 uint32_t ul_buttons;            //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulButtons
        _m02 uint16_t us_button_flags;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .usButtonFlags
        _m03 uint16_t us_button_data;        //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .usButtonData
        _m04 uint32_t ul_raw_buttons;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulRawButtons
        _m05 int32_t  l_last_x;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .lLastX
        _m06 int32_t  l_last_y;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lLastY
        _m07 uint32_t ul_extra_information;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ulExtraInformation
                                           
        SDK_MAGIC_PROPERTIES( "tagRAWMOUSE.$", 0x18, true, 0x77eb91173d6da8c9 );                     
        SDK_FIXED_SIZE( rawmouse_t, 0x18 );                     
    };                                     
};
#include "magic/rawmouse_t.end.hpp"
SDK_VERIFY( struct tag::rawmouse_t, 0x18 );
