#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wof_version_info_t.start.hpp"
namespace win
{
    // [struct _WOF_VERSION_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wof_version_info_t     
    {                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                        
        _m00 uint32_t wof_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .WofVersion
                                  
        SDK_NONVOL_PROPERTIES( "_WOF_VERSION_INFO.$", 0x4, true, 0xf8cdc069f848a91d );            
        SDK_FIXED_SIZE( wof_version_info_t, 0x4 );            
    };                            
};
#include "magic/wof_version_info_t.end.hpp"
SDK_VERIFY( struct win::wof_version_info_t, 0x4 );
