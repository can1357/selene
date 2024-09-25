#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/key_name_information_t.start.hpp"
namespace win
{
    // [struct _KEY_NAME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct key_name_information_t               
    {                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                      
        _m00 uint32_t               name_length;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .NameLength
        _m01 sdk::array<wchar_t, 1> name;         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Name
                                                
        SDK_NONVOL_PROPERTIES( "_KEY_NAME_INFORMATION.$", 0x8, true, 0x666a4f1e3ea7b41c );            
        SDK_FIXED_SIZE( key_name_information_t, 0x8 );            
    };                                          
};
#include "magic/key_name_information_t.end.hpp"
SDK_VERIFY( struct win::key_name_information_t, 0x8 );
