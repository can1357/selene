#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/comversion_t.start.hpp"
namespace tag
{
    // [struct tagCOMVERSION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct comversion_t             
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                          
        _m00 uint16_t major_version;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .MajorVersion
        _m01 uint16_t minor_version;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .MinorVersion
                                    
        SDK_MAGIC_PROPERTIES( "tagCOMVERSION.$", 0x4, true, 0x846072fbc299889b );              
        SDK_FIXED_SIZE( comversion_t, 0x4 );              
    };                              
};
#include "magic/comversion_t.end.hpp"
SDK_VERIFY( struct tag::comversion_t, 0x4 );
