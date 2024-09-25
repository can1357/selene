#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/bcrypt_interface_version_t.start.hpp"
namespace win
{
    // [struct _BCRYPT_INTERFACE_VERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct bcrypt_interface_version_t
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t major_version;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint16_t minor_version;   //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorVersion
                                     
        SDK_MAGIC_PROPERTIES( "_BCRYPT_INTERFACE_VERSION.$", 0x4, true, 0xd8aa69a413149244 );              
        SDK_FIXED_SIZE( bcrypt_interface_version_t, 0x4 );              
    };                               
};
#include "magic/bcrypt_interface_version_t.end.hpp"
SDK_VERIFY( struct win::bcrypt_interface_version_t, 0x4 );
