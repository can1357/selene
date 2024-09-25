#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/universal_name_infoa_t.start.hpp"
namespace win
{
    // [struct _UNIVERSAL_NAME_INFOA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct universal_name_infoa_t    
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                           
        _m00 char* lp_universal_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpUniversalName
                                     
        SDK_MAGIC_PROPERTIES( "_UNIVERSAL_NAME_INFOA.$", 0x8, true, 0x70272fa877d6f2d7 );                  
        SDK_FIXED_SIZE( universal_name_infoa_t, 0x8 );                  
    };                               
};
#include "magic/universal_name_infoa_t.end.hpp"
SDK_VERIFY( struct win::universal_name_infoa_t, 0x8 );
