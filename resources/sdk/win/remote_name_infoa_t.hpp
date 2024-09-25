#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/remote_name_infoa_t.start.hpp"
namespace win
{
    // [struct _REMOTE_NAME_INFOA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct remote_name_infoa_t        
    {                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                            
        _m00 char* lp_universal_name;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .lpUniversalName
        _m01 char* lp_connection_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .lpConnectionName
        _m02 char* lp_remaining_path;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .lpRemainingPath
                                      
        SDK_MAGIC_PROPERTIES( "_REMOTE_NAME_INFOA.$", 0x18, true, 0x13f81766c0e1ce26 );                   
        SDK_FIXED_SIZE( remote_name_infoa_t, 0x18 );                   
    };                                
};
#include "magic/remote_name_infoa_t.end.hpp"
SDK_VERIFY( struct win::remote_name_infoa_t, 0x18 );
