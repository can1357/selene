#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/k_acquire_spin_lock_t.start.hpp"
namespace ndis
{
    class k_spin_lock_base_t;

    // [class KAcquireSpinLock]
    // => Windows 11
    //
    class k_acquire_spin_lock_t                         
    {                                                   
        // Windows 11                                   
        //                                              
        _m00 uint8_t                         m_old_irql;  //{ +0x0000    } | .m_oldIrql
        _m01 class ndis::k_spin_lock_base_t& m_lock;      //{ +0x0008    } | .m_lock
                                                        
        SDK_MAGIC_PROPERTIES( "KAcquireSpinLock.$", 0x0, false, 0xc56b3841c6d0d81f );           
        SDK_FIXED_SIZE( k_acquire_spin_lock_t, 0x10 );           
    };                                                  
};
#include "magic/k_acquire_spin_lock_t.end.hpp"
SDK_VERIFY( class ndis::k_acquire_spin_lock_t, 0x10 );
