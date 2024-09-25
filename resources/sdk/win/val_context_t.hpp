#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/val_context_t.start.hpp"
namespace win
{
    // [struct val_context]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct val_context_t           
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                         
        _m00 int32_t valuelen;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .valuelen
        _m01 void*   value_context;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .value_context
        _m02 void*   val_buff_ptr;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .val_buff_ptr
                                   
        SDK_MAGIC_PROPERTIES( "val_context.$", 0x18, true, 0x95400b4a17e4e80e );              
        SDK_FIXED_SIZE( val_context_t, 0x18 );              
    };                             
};
#include "magic/val_context_t.end.hpp"
SDK_VERIFY( struct win::val_context_t, 0x18 );
