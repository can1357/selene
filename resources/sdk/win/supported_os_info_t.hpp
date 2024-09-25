#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/supported_os_info_t.start.hpp"
namespace win
{
    // [struct _SUPPORTED_OS_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct supported_os_info_t      
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint16_t minor_version;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorVersion
                                    
        SDK_MAGIC_PROPERTIES( "_SUPPORTED_OS_INFO.$", 0x4, true, 0x7ab25635c8a59cdd );              
        SDK_FIXED_SIZE( supported_os_info_t, 0x4 );              
    };                              
};
#include "magic/supported_os_info_t.end.hpp"
SDK_VERIFY( struct win::supported_os_info_t, 0x4 );
