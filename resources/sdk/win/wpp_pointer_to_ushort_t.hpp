#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wpp_pointer_to_ushort_t.start.hpp"
namespace win
{
    // [struct WppPointerToUshort]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wpp_pointer_to_ushort_t
    {                             
        // Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint16_t m_val;        //{ +0x0000    +0x0000    +0x0000    } | .m_val
                                  
        SDK_MAGIC_PROPERTIES( "WppPointerToUshort.$", 0x2, true, 0xdfb00d696ad321ba );      
        SDK_FIXED_SIZE( wpp_pointer_to_ushort_t, 0x2 );      
    };                            
};
#include "magic/wpp_pointer_to_ushort_t.end.hpp"
SDK_VERIFY( struct win::wpp_pointer_to_ushort_t, 0x2 );
