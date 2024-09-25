#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/s_permission_header_t.start.hpp"
namespace win
{
    // [struct SPermissionHeader]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_permission_header_t         
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 uint16_t          w_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .wVersion
        _m01 uint16_t          w_pad;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .wPad
        _m02 struct nt::guid_t g_class;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .gClass
                                         
        SDK_MAGIC_PROPERTIES( "SPermissionHeader.$", 0x14, true, 0xf37305e5683d1b52 );          
        SDK_FIXED_SIZE( s_permission_header_t, 0x14 );          
    };                                   
};
#include "magic/s_permission_header_t.end.hpp"
SDK_VERIFY( struct win::s_permission_header_t, 0x14 );
