#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_global_options_t.start.hpp"
namespace win
{
    // [class CGlobalOptions]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_global_options_t 
    {                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint32_t l_refs;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._lRefs
                             
        SDK_MAGIC_PROPERTIES( "CGlobalOptions.$", 0x18, true, 0x6f2a29a4155af23f );       
        SDK_FIXED_SIZE( c_global_options_t, 0x18 );       
    };                       
};
#include "magic/c_global_options_t.end.hpp"
SDK_VERIFY( class win::c_global_options_t, 0x18 );
