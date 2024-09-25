#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_handle_flag_information_t.start.hpp"
namespace win
{
    // [struct _OBJECT_HANDLE_FLAG_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_handle_flag_information_t
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                              
        _m00 uint8_t inherit;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Inherit
        _m01 uint8_t protect_from_close;     //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .ProtectFromClose
                                           
        SDK_MAGIC_PROPERTIES( "_OBJECT_HANDLE_FLAG_INFORMATION.$", 0x2, true, 0xb788ec64c88ba52e );                   
        SDK_DYNAMIC_SIZE( object_handle_flag_information_t );                   
    };                                     
};
#include "magic/object_handle_flag_information_t.end.hpp"
