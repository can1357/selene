#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/userobjectflags_t.start.hpp"
namespace tag
{
    // [struct tagUSEROBJECTFLAGS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct userobjectflags_t     
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                       
        _m00 int32_t  f_inherit;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fInherit
        _m01 int32_t  f_reserved;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .fReserved
        _m02 uint32_t dw_flags;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwFlags
                                 
        SDK_MAGIC_PROPERTIES( "tagUSEROBJECTFLAGS.$", 0xc, true, 0x22ee5e7ad76d5052 );           
        SDK_FIXED_SIZE( userobjectflags_t, 0xc );           
    };                           
};
#include "magic/userobjectflags_t.end.hpp"
SDK_VERIFY( struct tag::userobjectflags_t, 0xc );
