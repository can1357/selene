#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_dump_control_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_DUMP_CONTROL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct object_dump_control_t
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 void*    stream;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Stream
        _m01 uint32_t detail;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Detail
                                
        SDK_MAGIC_PROPERTIES( "_OBJECT_DUMP_CONTROL.$", 0x10, true, 0x7b7b26ef7797464a );       
        SDK_FIXED_SIZE( object_dump_control_t, 0x10 );       
    };                          
};
#include "magic/object_dump_control_t.end.hpp"
SDK_VERIFY( struct nt::object_dump_control_t, 0x10 );
