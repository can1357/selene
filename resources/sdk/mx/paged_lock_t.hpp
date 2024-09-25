#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/fast_mutex_t.hpp"

#include "magic/paged_lock_t.start.hpp"
namespace mx
{
    // [class MxPagedLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class paged_lock_t                                         
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                     
        _m00 uint8_t                 m_dbg_flag_is_initialized;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DbgFlagIsInitialized
        _m01 struct nt::fast_mutex_t m_lock;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Lock
                                                               
        SDK_MAGIC_PROPERTIES( "MxPagedLock.$", 0x40, true, 0xd5da6ed0eba13155 );                          
        SDK_FIXED_SIZE( paged_lock_t, 0x40 );                          
    };                                                         
};
#include "magic/paged_lock_t.end.hpp"
SDK_VERIFY( class mx::paged_lock_t, 0x40 );
