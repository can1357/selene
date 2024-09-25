#pragma once
#include <sdkgen/support_library.hpp>
#include "com_lock_order_t.hpp"
#include "../rtl/critical_section_t.hpp"

#include "magic/c_ole_static_mutex_sem_t.start.hpp"
namespace win
{
    // [class COleStaticMutexSem]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ole_static_mutex_sem_t                            
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                    
        _m00 uint8_t                          f_initialized;    //{ +0x0000    +0x0001    +0x0001    +0x0001    } | ._fInitialized
        _m01 uint8_t                          f_use_spincount;  //{ +0x0001    +0x0002    +0x0002    +0x0002    } | ._fUseSpincount
        _m02 uint32_t                         c_locks;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | ._cLocks
        _m03 uint32_t                         dw_line;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._dwLine
        _m04 const char*                      psz_file;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._pszFile
        _m05 const char*                      psz_lock_name;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pszLockName
        _m06 struct rtl::critical_section_t   cs;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._cs
                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                    
        _m07 const enum win::com_lock_order_t lock_order;       //{ +0x0000    +0x0000    +0x0000    } | ._lockOrder
                                                              
        SDK_MAGIC_PROPERTIES( "COleStaticMutexSem.$", 0x48, true, 0xa34a1f945d5cbb2c );                
        SDK_FIXED_SIZE( c_ole_static_mutex_sem_t, 0x48 );                
    };                                                        
};
#include "magic/c_ole_static_mutex_sem_t.end.hpp"
SDK_VERIFY( class win::c_ole_static_mutex_sem_t, 0x48 );
