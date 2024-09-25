#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/causality_control_callback_t.start.hpp"
namespace win
{
    class causality_control_callback_t;

    // [class CausalityControlCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class causality_control_callback_t                     
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                 
        _m00 class win::causality_control_callback_t* next;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._next
                                                           
        SDK_MAGIC_PROPERTIES( "CausalityControlCallback.$", 0x10, true, 0xa4ce00df0416edcd );     
        SDK_FIXED_SIZE( causality_control_callback_t, 0x10 );     
    };                                                     
};
#include "magic/causality_control_callback_t.end.hpp"
SDK_VERIFY( class win::causality_control_callback_t, 0x10 );
