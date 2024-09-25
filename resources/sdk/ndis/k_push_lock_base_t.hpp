#pragma once
#include <sdkgen/support_library.hpp>
#include "../ex/push_lock_t.hpp"

#include "magic/k_push_lock_base_t.start.hpp"
namespace ndis
{
    // [class KPushLockBase]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_push_lock_base_t               
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                 
        _m00 struct ex::push_lock_t m_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Lock
                                           
        SDK_MAGIC_PROPERTIES( "KPushLockBase.$", 0x8, true, 0x38d9044c117ad6b );       
        SDK_FIXED_SIZE( k_push_lock_base_t, 0x8 );       
    };                                     
};
#include "magic/k_push_lock_base_t.end.hpp"
SDK_VERIFY( class ndis::k_push_lock_base_t, 0x8 );
