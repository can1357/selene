#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/pmsihandle_t.start.hpp"
namespace win
{
    // [class PMSIHANDLE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class pmsihandle_t    
    {                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2    
        //                
        _m00 uint32_t m_h;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_h
                          
        SDK_MAGIC_PROPERTIES( "PMSIHANDLE.$", 0x4, true, 0x82573050c782607c );    
        SDK_FIXED_SIZE( pmsihandle_t, 0x4 );    
    };                    
};
#include "magic/pmsihandle_t.end.hpp"
SDK_VERIFY( class win::pmsihandle_t, 0x4 );
