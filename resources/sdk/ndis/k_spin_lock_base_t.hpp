#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_spin_lock_base_t.start.hpp"
namespace ndis
{
    // [class KSpinLockBase]
    // => Windows 11
    //
    class k_spin_lock_base_t 
    {                        
        // Windows 11        
        //                   
        _m00 uint64_t m_lock;  //{ +0x0000    } | .m_lock
                             
        SDK_MAGIC_PROPERTIES( "KSpinLockBase.$", 0x0, false, 0x59ac483d2b1e6d0c );       
        SDK_FIXED_SIZE( k_spin_lock_base_t, 0x8 );       
    };                       
};
#include "magic/k_spin_lock_base_t.end.hpp"
SDK_VERIFY( class ndis::k_spin_lock_base_t, 0x8 );
