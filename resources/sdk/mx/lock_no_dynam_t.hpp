#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/lock_no_dynam_t.start.hpp"
namespace mx
{
    // [class MxLockNoDynam]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class lock_no_dynam_t                       
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                      
        _m00 uint8_t  m_dbg_flag_is_initialized;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_DbgFlagIsInitialized
        _m01 uint64_t m_lock;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Lock
                                                
        SDK_MAGIC_PROPERTIES( "MxLockNoDynam.$", 0x10, true, 0x439bb1662309b071 );                          
        SDK_FIXED_SIZE( lock_no_dynam_t, 0x10 );                          
    };                                          
};
#include "magic/lock_no_dynam_t.end.hpp"
SDK_VERIFY( class mx::lock_no_dynam_t, 0x10 );
