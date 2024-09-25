#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_lock2_t.start.hpp"
namespace win
{
    class c_mutex_sem2_t;

    // [class CLock2]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_lock2_t                           
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                    
        _m00 class win::c_mutex_sem2_t& m_mxs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_mxs
                                              
        SDK_MAGIC_PROPERTIES( "CLock2.$", 0x8, true, 0xc831bc80c4e50dcd );      
        SDK_FIXED_SIZE( c_lock2_t, 0x8 );      
    };                                        
};
#include "magic/c_lock2_t.end.hpp"
SDK_VERIFY( class win::c_lock2_t, 0x8 );
