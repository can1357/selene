#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_spin_lock_t.start.hpp"
namespace ndis
{
    // [class KSpinLock]
    // => Windows 11
    //
    class k_spin_lock_t      
    {                        
        // Windows 11        
        //                   
        _m00 uint64_t m_lock;  //{ +0x0000    } | .m_lock
                             
        SDK_MAGIC_PROPERTIES( "KSpinLock.$", 0x0, false, 0xa40e0c5e5c72f179 );       
        SDK_FIXED_SIZE( k_spin_lock_t, 0x8 );       
    };                       
};
#include "magic/k_spin_lock_t.end.hpp"
SDK_VERIFY( class ndis::k_spin_lock_t, 0x8 );
