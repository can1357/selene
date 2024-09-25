#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_ole_static_lock_t.start.hpp"
namespace win
{
    class c_ole_static_mutex_sem_t;

    // [class COleStaticLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ole_static_lock_t                         
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                                            
        _m00 class win::c_ole_static_mutex_sem_t& mxs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._mxs
                                                      
        SDK_MAGIC_PROPERTIES( "COleStaticLock.$", 0x8, true, 0xfb7b218577584bea );    
        SDK_FIXED_SIZE( c_ole_static_lock_t, 0x8 );    
    };                                                
};
#include "magic/c_ole_static_lock_t.end.hpp"
SDK_VERIFY( class win::c_ole_static_lock_t, 0x8 );
