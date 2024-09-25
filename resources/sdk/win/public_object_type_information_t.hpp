#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/public_object_type_information_t.start.hpp"
namespace win
{
    // [struct __PUBLIC_OBJECT_TYPE_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct public_object_type_information_t
    {                                      
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                              
        _m00 nt::unicode_view type_name;     //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TypeName
                                           
        SDK_NONVOL_PROPERTIES( "__PUBLIC_OBJECT_TYPE_INFORMATION.$", 0x68, true, 0x5dd1b2ca8f344e8c );          
        SDK_FIXED_SIZE( public_object_type_information_t, 0x68 );          
    };                                     
};
#include "magic/public_object_type_information_t.end.hpp"
SDK_VERIFY( struct win::public_object_type_information_t, 0x68 );
