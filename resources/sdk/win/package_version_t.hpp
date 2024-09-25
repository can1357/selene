#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/package_version_t.start.hpp"
namespace win
{
    // [struct PACKAGE_VERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct package_version_t   
    {                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint64_t version;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t revision;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Revision
        _m02 uint16_t build;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Build
        _m03 uint16_t minor;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Minor
        _m04 uint16_t major;     //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .Major
                               
        SDK_MAGIC_PROPERTIES( "PACKAGE_VERSION.$", 0x8, true, 0x1e423b0f47183189 );         
        SDK_FIXED_SIZE( package_version_t, 0x8 );         
    };                         
};
#include "magic/package_version_t.end.hpp"
SDK_VERIFY( struct win::package_version_t, 0x8 );
