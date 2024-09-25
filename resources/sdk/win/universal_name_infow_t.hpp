#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/universal_name_infow_t.start.hpp"
namespace win
{
    // [struct _UNIVERSAL_NAME_INFOW]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct universal_name_infow_t       
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 wchar_t* lp_universal_name;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpUniversalName
                                        
        SDK_MAGIC_PROPERTIES( "_UNIVERSAL_NAME_INFOW.$", 0x8, true, 0xd0033bdcb9d32096 );                  
        SDK_FIXED_SIZE( universal_name_infow_t, 0x8 );                  
    };                                  
};
#include "magic/universal_name_infow_t.end.hpp"
SDK_VERIFY( struct win::universal_name_infow_t, 0x8 );
