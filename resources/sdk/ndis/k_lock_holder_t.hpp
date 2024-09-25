#pragma once
#include <sdkgen/support_library.hpp>
#include "k_critical_region_t.hpp"

#include "magic/k_lock_holder_t.start.hpp"
namespace ndis
{
    class k_push_lock_base_t;

    // [class KLockHolder]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class k_lock_holder_t                             
    {                                                 
        enum class u0_m_state_t : int32_t             
        {                                             
            unlocked =  0x0,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            shared =    0x1,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
            exclusive = 0x2,                            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
        };                                            
                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                            
        _m00 u0_m_state_t                    m_state;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_State
        _m01 class ndis::k_push_lock_base_t& m_lock;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Lock
        _m02 class ndis::k_critical_region_t m_region;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Region
                                                      
        SDK_MAGIC_PROPERTIES( "KLockHolder.$", 0x18, true, 0xa1d05da6181d5797 );         
        SDK_FIXED_SIZE( k_lock_holder_t, 0x18 );         
    };                                                
};
#include "magic/k_lock_holder_t.end.hpp"
SDK_VERIFY( class ndis::k_lock_holder_t, 0x18 );
