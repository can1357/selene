#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/critical_section_t.hpp"

#include "magic/c_mutex_sem2_t.start.hpp"
namespace win
{
    // [class CMutexSem2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_mutex_sem2_t                                       
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                     
        _m00 struct rtl::critical_section_t m_cs;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_cs
        _m01 int32_t                        m_f_cs_initialized;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_fCsInitialized
                                                               
        SDK_MAGIC_PROPERTIES( "CMutexSem2.$", 0x30, true, 0xd4214ac2a2f1525a );                   
        SDK_FIXED_SIZE( c_mutex_sem2_t, 0x30 );                   
    };                                                         
};
#include "magic/c_mutex_sem2_t.end.hpp"
SDK_VERIFY( class win::c_mutex_sem2_t, 0x30 );
