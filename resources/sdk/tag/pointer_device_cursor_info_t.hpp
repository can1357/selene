#pragma once
#include <sdkgen/support_library.hpp>
#include "pointer_device_cursor_type_t.hpp"

#include "magic/pointer_device_cursor_info_t.start.hpp"
namespace tag
{
    // [struct tagPOINTER_DEVICE_CURSOR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct pointer_device_cursor_info_t                       
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                                    
        _m00 uint32_t                               cursor_id;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cursorId
        _m01 enum tag::pointer_device_cursor_type_t cursor;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cursor
                                                              
        SDK_MAGIC_PROPERTIES( "tagPOINTER_DEVICE_CURSOR_INFO.$", 0x8, true, 0xe12ac13db4f92c0a );          
        SDK_FIXED_SIZE( pointer_device_cursor_info_t, 0x8 );          
    };                                                        
};
#include "magic/pointer_device_cursor_info_t.end.hpp"
SDK_VERIFY( struct tag::pointer_device_cursor_info_t, 0x8 );
