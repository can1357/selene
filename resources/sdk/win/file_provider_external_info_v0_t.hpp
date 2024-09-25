#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_provider_external_info_v0_t.start.hpp"
namespace win
{
    // [struct _FILE_PROVIDER_EXTERNAL_INFO_V0]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_provider_external_info_v0_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t algorithm;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Algorithm
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_PROVIDER_EXTERNAL_INFO_V0.$", 0x8, true, 0xe760770f2695940a );          
        SDK_FIXED_SIZE( file_provider_external_info_v0_t, 0x8 );          
    };                                     
};
#include "magic/file_provider_external_info_v0_t.end.hpp"
SDK_VERIFY( struct win::file_provider_external_info_v0_t, 0x8 );
