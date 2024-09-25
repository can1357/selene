#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/osinfo_t.start.hpp"
namespace win
{
    // [struct OSINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct osinfo_t                       
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                
        _m00 uint32_t dw_os_platform_id;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .dwOSPlatformId
        _m01 uint32_t dw_os_major_version;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .dwOSMajorVersion
        _m02 uint32_t dw_os_minor_version;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .dwOSMinorVersion
                                          
        SDK_MAGIC_PROPERTIES( "OSINFO.$", 0xc, true, 0xd85196e21d82a6cb );                    
        SDK_FIXED_SIZE( osinfo_t, 0xc );                    
    };                                    
};
#include "magic/osinfo_t.end.hpp"
SDK_VERIFY( struct win::osinfo_t, 0xc );
