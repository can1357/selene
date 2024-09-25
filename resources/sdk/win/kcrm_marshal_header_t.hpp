#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/kcrm_marshal_header_t.start.hpp"
namespace win
{
    // [struct _KCRM_MARSHAL_HEADER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct kcrm_marshal_header_t    
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint32_t version_major;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .VersionMajor
        _m01 uint32_t version_minor;  //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .VersionMinor
        _m02 uint32_t num_protocols;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .NumProtocols
                                    
        SDK_NONVOL_PROPERTIES( "_KCRM_MARSHAL_HEADER.$", 0x10, true, 0x1cc90c17875ca140 );              
        SDK_FIXED_SIZE( kcrm_marshal_header_t, 0x10 );              
    };                              
};
#include "magic/kcrm_marshal_header_t.end.hpp"
SDK_VERIFY( struct win::kcrm_marshal_header_t, 0x10 );
