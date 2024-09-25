#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/file_provider_external_info_v1_t.start.hpp"
namespace win
{
    // [struct _FILE_PROVIDER_EXTERNAL_INFO_V1]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct file_provider_external_info_v1_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint32_t version;               //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t algorithm;             //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Algorithm
        _m02 uint32_t flags;                 //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Flags
                                           
        SDK_NONVOL_PROPERTIES( "_FILE_PROVIDER_EXTERNAL_INFO_V1.$", 0xc, true, 0x657d0bcfd793d67d );          
        SDK_FIXED_SIZE( file_provider_external_info_v1_t, 0xc );          
    };                                     
};
#include "magic/file_provider_external_info_v1_t.end.hpp"
SDK_VERIFY( struct win::file_provider_external_info_v1_t, 0xc );
