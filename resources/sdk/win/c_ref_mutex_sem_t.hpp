#pragma once
#include <sdkgen/support_library.hpp>
#include "c_mutex_sem2_t.hpp"

#include "magic/c_ref_mutex_sem_t.start.hpp"
namespace win
{
    // [class CRefMutexSem]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_ref_mutex_sem_t                     
    {                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                                      
        _m00 int32_t                   m_l_refs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_lRefs
        _m01 class win::c_mutex_sem2_t m_mxs;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_mxs
                                                
        SDK_MAGIC_PROPERTIES( "CRefMutexSem.$", 0x38, true, 0xcce6404286ad189f );         
        SDK_FIXED_SIZE( c_ref_mutex_sem_t, 0x38 );         
    };                                          
};
#include "magic/c_ref_mutex_sem_t.end.hpp"
SDK_VERIFY( class win::c_ref_mutex_sem_t, 0x38 );
