#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_info_t.start.hpp"
namespace fx
{
    // [struct _FX_OBJECT_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_info_t             
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                           
        _m00 const char* name;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
        _m01 const char* handle_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HandleName
        _m02 uint16_t    size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Size
        _m03 uint16_t    object_type;  //{ +0x0012    +0x0012    +0x0012    +0x0012    } | .ObjectType
                                     
        SDK_MAGIC_PROPERTIES( "_FX_OBJECT_INFO.$", 0x18, true, 0x45f5b7d4f7e225ff );            
        SDK_FIXED_SIZE( object_info_t, 0x18 );            
    };                               
};
#include "magic/object_info_t.end.hpp"
SDK_VERIFY( struct fx::object_info_t, 0x18 );
