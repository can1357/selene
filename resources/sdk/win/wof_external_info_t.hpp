#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wof_external_info_t.start.hpp"
namespace win
{
    // [struct _WOF_EXTERNAL_INFO]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct wof_external_info_t 
    {                          
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2         
        //                     
        _m00 uint32_t version;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t provider;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Provider
                               
        SDK_NONVOL_PROPERTIES( "_WOF_EXTERNAL_INFO.$", 0x8, true, 0x9daf175358d129cd );         
        SDK_FIXED_SIZE( wof_external_info_t, 0x8 );         
    };                         
};
#include "magic/wof_external_info_t.end.hpp"
SDK_VERIFY( struct win::wof_external_info_t, 0x8 );
