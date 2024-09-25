#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_ref_mutex_auto_lock_t.start.hpp"
namespace win
{
    class c_ref_mutex_sem_t;

    // [class CRefMutexAutoLock]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ref_mutex_auto_lock_t                 
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                        
        _m00 class win::c_ref_mutex_sem_t* m_pmxs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_pmxs
                                                  
        SDK_MAGIC_PROPERTIES( "CRefMutexAutoLock.$", 0x8, true, 0x608909db23631221 );       
        SDK_FIXED_SIZE( c_ref_mutex_auto_lock_t, 0x8 );       
    };                                            
};
#include "magic/c_ref_mutex_auto_lock_t.end.hpp"
SDK_VERIFY( class win::c_ref_mutex_auto_lock_t, 0x8 );
