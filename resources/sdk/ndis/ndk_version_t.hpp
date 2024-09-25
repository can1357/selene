#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndk_version_t.start.hpp"
namespace ndis
{
    // [struct NDK_VERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndk_version_t    
    {                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                  
        _m00 uint16_t major;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Major
        _m01 uint16_t minor;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Minor
                            
        SDK_MAGIC_PROPERTIES( "NDK_VERSION.$", 0x4, true, 0x648dfbd823bd82ec );      
        SDK_FIXED_SIZE( ndk_version_t, 0x4 );      
    };                      
};
#include "magic/ndk_version_t.end.hpp"
SDK_VERIFY( struct ndis::ndk_version_t, 0x4 );
