#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_free_marshaler_t.start.hpp"
namespace win
{
    struct i_unknown_t;

    // [class CFreeMarshaler]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_free_marshaler_t                    
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                      
        _m00 struct win::i_unknown_t* punk_ctrl;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._punkCtrl
                                                
        SDK_MAGIC_PROPERTIES( "CFreeMarshaler.$", 0x18, true, 0x1be14439b0b4cb70 );          
        SDK_FIXED_SIZE( c_free_marshaler_t, 0x18 );          
    };                                          
};
#include "magic/c_free_marshaler_t.end.hpp"
SDK_VERIFY( class win::c_free_marshaler_t, 0x18 );
