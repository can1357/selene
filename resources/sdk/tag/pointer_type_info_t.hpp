#pragma once
#include <sdkgen/support_library.hpp>
#include "pointer_pen_info_t.hpp"
#include "pointer_touch_info_t.hpp"

#include "magic/pointer_type_info_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_TYPE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_type_info_t                           
    {                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                               
        _m00 uint32_t                         type;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .type
        _m01 struct tag::pointer_touch_info_t touch_info;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .touchInfo
        _m02 struct tag::pointer_pen_info_t   pen_info;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .penInfo
                                                         
        SDK_MAGIC_PROPERTIES( "tagPOINTER_TYPE_INFO.$", 0x98, true, 0xfacb184d6852e449 );           
        SDK_FIXED_SIZE( pointer_type_info_t, 0x98 );           
    };                                                   
};
#include "magic/pointer_type_info_t.end.hpp"
SDK_VERIFY( struct tag::pointer_type_info_t, 0x98 );
