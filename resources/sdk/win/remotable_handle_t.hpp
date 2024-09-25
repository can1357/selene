#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remotable_handle_t.start.hpp"
namespace win
{
    // [struct _RemotableHandle]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remotable_handle_t  
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                     
        _m00 int32_t f_context;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .fContext
                               
        SDK_MAGIC_PROPERTIES( "_RemotableHandle.$", 0x8, true, 0x83fddff7a373ccff );          
        SDK_FIXED_SIZE( remotable_handle_t, 0x8 );          
    };                         
};
#include "magic/remotable_handle_t.end.hpp"
SDK_VERIFY( struct win::remotable_handle_t, 0x8 );
