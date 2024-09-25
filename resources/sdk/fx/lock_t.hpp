#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"

#include "magic/lock_t.start.hpp"
namespace fx
{
    class verifier_lock_t;

    // [class FxLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class lock_t                                   
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                         
        _m00 class mx::lock_t           m_lock;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_lock
        _m01 class fx::verifier_lock_t* m_verifier;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Verifier
                                                   
        SDK_MAGIC_PROPERTIES( "FxLock.$", 0x18, true, 0x2fd8454b14c42b07 );           
        SDK_FIXED_SIZE( lock_t, 0x18 );            
    };                                             
};
#include "magic/lock_t.end.hpp"
SDK_VERIFY( class fx::lock_t, 0x18 );
