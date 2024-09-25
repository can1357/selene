#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/locked_callback_t.start.hpp"
namespace fx
{
    class callback_lock_t;

    // [class FxLockedCallback]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class locked_callback_t                             
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                              
        _m00 class fx::callback_lock_t* m_callback_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_CallbackLock
                                                        
        SDK_MAGIC_PROPERTIES( "FxLockedCallback.$", 0x8, true, 0x3b1d90571c9e1599 );                
        SDK_FIXED_SIZE( locked_callback_t, 0x8 );                
    };                                                  
};
#include "magic/locked_callback_t.end.hpp"
SDK_VERIFY( class fx::locked_callback_t, 0x8 );
