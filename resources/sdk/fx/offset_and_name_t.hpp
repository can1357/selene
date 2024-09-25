#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/offset_and_name_t.start.hpp"
namespace fx
{
    // [struct FxOffsetAndName]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offset_and_name_t
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 char*   name;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 uint8_t offset;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Offset
                            
        SDK_MAGIC_PROPERTIES( "FxOffsetAndName.$", 0x10, true, 0xac87d20406b45cf );       
        SDK_FIXED_SIZE( offset_and_name_t, 0x10 );       
    };                      
};
#include "magic/offset_and_name_t.end.hpp"
SDK_VERIFY( struct fx::offset_and_name_t, 0x10 );
