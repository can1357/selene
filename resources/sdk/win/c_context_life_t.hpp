#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_context_life_t.start.hpp"
namespace win
{
    // [class CContextLife]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_context_life_t     
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t dw_alive;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._dwAlive
        _m01 int32_t  c_refs;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._cRefs
                               
        SDK_MAGIC_PROPERTIES( "CContextLife.$", 0x8, true, 0xe83a59235a63eb08 );         
        SDK_FIXED_SIZE( c_context_life_t, 0x8 );         
    };                         
};
#include "magic/c_context_life_t.end.hpp"
SDK_VERIFY( class win::c_context_life_t, 0x8 );
