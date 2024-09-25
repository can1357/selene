#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ace_header_t.start.hpp"
namespace win
{
    // [struct _ACE_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct ace_header_t         
    {                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint8_t  ace_type;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AceType
        _m01 uint8_t  ace_flags;  //{ +0x0001    +0x0001    +0x0001    +0x0001    +0x0001    } | .AceFlags
        _m02 uint16_t ace_size;   //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .AceSize
                                
        SDK_NONVOL_PROPERTIES( "_ACE_HEADER.$", 0x4, true, 0xbd2cbf52d54c74ad );          
        SDK_FIXED_SIZE( ace_header_t, 0x4 );          
    };                          
};
#include "magic/ace_header_t.end.hpp"
SDK_VERIFY( struct win::ace_header_t, 0x4 );
