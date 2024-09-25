#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_boot_prefetch_information_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_BOOT_PREFETCH_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_boot_prefetch_information_t
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                  
        _m00 int32_t action;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Action
        _m01 int32_t status;                     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Status
        _m02 int32_t pages;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Pages
                                               
        SDK_MAGIC_PROPERTIES( "_PERFINFO_BOOT_PREFETCH_INFORMATION.$", 0xc, true, 0xfc989fec0da6cf7c );       
        SDK_FIXED_SIZE( perfinfo_boot_prefetch_information_t, 0xc );       
    };                                         
};
#include "magic/perfinfo_boot_prefetch_information_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_boot_prefetch_information_t, 0xc );
