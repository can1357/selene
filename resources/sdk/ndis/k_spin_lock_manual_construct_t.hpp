#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_spin_lock_manual_construct_t.start.hpp"
namespace ndis
{
    // [class KSpinLockManualConstruct]
    // => Windows 11
    //
    class k_spin_lock_manual_construct_t
    {                                   
        // Windows 11        
        //                   
        _m00 uint64_t m_lock;             //{ +0x0000    } | .m_lock
                                        
        SDK_MAGIC_PROPERTIES( "KSpinLockManualConstruct.$", 0x0, false, 0xa80dac580e46a934 );       
        SDK_FIXED_SIZE( k_spin_lock_manual_construct_t, 0x8 );       
    };                                  
};
#include "magic/k_spin_lock_manual_construct_t.end.hpp"
SDK_VERIFY( class ndis::k_spin_lock_manual_construct_t, 0x8 );
