#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/fast_mutex_t.hpp"

#include "magic/paged_lock_no_dynam_t.start.hpp"
namespace mx
{
    // [class MxPagedLockNoDynam]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class paged_lock_no_dynam_t                                
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                     
        _m00 uint8_t                 m_dbg_flag_is_initialized;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DbgFlagIsInitialized
        _m01 struct nt::fast_mutex_t m_lock;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Lock
                                                               
        SDK_MAGIC_PROPERTIES( "MxPagedLockNoDynam.$", 0x40, true, 0xf67d35c70b6b831e );                          
        SDK_FIXED_SIZE( paged_lock_no_dynam_t, 0x40 );                          
    };                                                         
};
#include "magic/paged_lock_no_dynam_t.end.hpp"
SDK_VERIFY( class mx::paged_lock_no_dynam_t, 0x40 );
