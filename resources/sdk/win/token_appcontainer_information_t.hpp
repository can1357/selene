#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/token_appcontainer_information_t.start.hpp"
namespace win
{
    // [struct _TOKEN_APPCONTAINER_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct token_appcontainer_information_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                             
        _m00 void* token_app_container;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TokenAppContainer
                                           
        SDK_NONVOL_PROPERTIES( "_TOKEN_APPCONTAINER_INFORMATION.$", 0x8, true, 0x9c9051e9844f36e0 );                    
        SDK_FIXED_SIZE( token_appcontainer_information_t, 0x8 );                    
    };                                     
};
#include "magic/token_appcontainer_information_t.end.hpp"
SDK_VERIFY( struct win::token_appcontainer_information_t, 0x8 );
