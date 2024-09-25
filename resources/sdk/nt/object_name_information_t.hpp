#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/object_name_information_t.start.hpp"
namespace nt
{
    // [struct _OBJECT_NAME_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct object_name_information_t
    {                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                         
        _m00 nt::unicode_view name;   //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Name
                                    
        SDK_NONVOL_PROPERTIES( "_OBJECT_NAME_INFORMATION.$", 0x10, true, 0x88b13bb00453d259 );     
        SDK_FIXED_SIZE( object_name_information_t, 0x10 );     
    };                              
};
#include "magic/object_name_information_t.end.hpp"
SDK_VERIFY( struct nt::object_name_information_t, 0x10 );
