#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mbstatet_t.start.hpp"
namespace win
{
    // [struct _Mbstatet]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct mbstatet_t       
    {                       
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint32_t wchar;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | ._Wchar
        _m01 uint16_t byte;   //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | ._Byte
        _m02 uint16_t state;  //{ +0x0006    +0x0006    +0x0006    +0x0006    +0x0006    } | ._State
                            
        SDK_NONVOL_PROPERTIES( "_Mbstatet.$", 0x8, true, 0x566769e1205fb7f2 );      
        SDK_FIXED_SIZE( mbstatet_t, 0x8 );      
    };                      
};
#include "magic/mbstatet_t.end.hpp"
SDK_VERIFY( struct win::mbstatet_t, 0x8 );
